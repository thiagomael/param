/*
 * This file is part of PARAM.
 *
 * PARAM is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * PARAM is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with PARAM. If not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright 2010-2011 Ernst Moritz Hahn (emh@cs.uni-saarland.de)
 */

#ifndef RATIONAL_PARSER_H
#define RATIONAL_PARSER_H

#include <vector>
#include <string>
#include "rationalFunction/RationalFunction.h"

namespace GiNaC {
  class ex;
  typedef std::map<std::string, ex> symtab;
  class parser;
}

namespace parametric {
  
  class SparseMC;
  
  class RationalParser {
  public:
    RationalParser();
    ~RationalParser();
    void parseSymbols(const std::string &);
    rational::RationalFunction parseRational(const std::string &);
  private:
    std::vector<std::string> symbols;
    GiNaC::symtab *ginacTab;
    GiNaC::parser *reader;
  };
}

#endif
