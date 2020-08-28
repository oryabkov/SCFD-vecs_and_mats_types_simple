// Copyright © 2016-2020 Ryabkov Oleg Igorevich, Evstigneev Nikolay Mikhaylovitch

// This file is part of SCFD.

// SCFD is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, version 2 only of the License.

// SCFD is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with SCFD.  If not, see <http://www.gnu.org/licenses/>.

#include <iostream>
#include <vector>
#include <list>
#include <scfd/static_vec/vec.h>

using namespace scfd::static_vec;

int main(int argc, char const *argv[])
{
    std::vector<int>    vector_int = {1,2,3};
    std::list<int>      list_int = {1,2,3};
    vec<float,3>        v1(0.f,1.f,2);
    vec<int,3>          v2(0.5f,1.f,1);
    vec<int,3>          v3(vector_int);     //calls tempalte 'Vec' constructor
    //vec<int,3>          v4(list_int);     //not working - no operator[]
    //vec<int,3>          v5(0.5f,1.f);     //not working - number of argument
    //std::cout << "copy contr." << std::endl;
    vec<int,3>          v6(v3);             //calls normal copy constructor

    std::cout << "sizeof(vec<float,3>) = " << sizeof(vec<float,3>) << std::endl;
    std::cout << "sizeof(vec<int,3>) = " << sizeof(vec<int,3>) << std::endl;

    std::cout << v1[0] << " " << v1[1] << " " << v1[2] << std::endl;
    std::cout << v2[0] << " " << v1[1] << " " << v2[2] << std::endl;
    std::cout << v3[0] << " " << v3[1] << " " << v3[2] << std::endl;
    
    return 0;
}