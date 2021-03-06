/*
1;2802;0c  Copyright 2017 Carter Turnbaugh

  This file is part of Terca C++ Sockets.

  Terca C++ Sockets is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Terca C++ Sockets is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Terca C++ Sockets.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "ctclientsecure.h"
#include <iostream>

using namespace std;

int main(){

	ctclientsecure client("passwordpasswordpasswordpassword");

	client.create("127.0.0.1", 5553);

	client.c_write("Testing 1 2 3. Testing 4 5 6. using namespace std;    Copyright 2017 Carter Turnbaugh  This file is part of Terca C++ Sockets.  Terca C++ Sockets is free software: you can redistribute it and/or modify  it under the terms of the GNU General Public License");
	cout << client.c_read() << "\n";

	client.s_write("#include <iostream> int main(int argc, char* argv[]){}    Copyright 2017 Carter Turnbaugh  This file is part of Terca C++ Sockets.  Terca C++ Sockets is free software: you can redistribute it and/or modify  it under the terms of the GNU General Public License as published by  the Free Software Foundation, either version 3 of the License, or  (at your option) any later version.  Terca C++ Sockets is distributed in the hope that it will be useful,  but WITHOUT ANY WARRANTY; without even the implied warranty of  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the  GNU General Public License for more details.  You should have received a copy of the GNU General Public License  along with Terca C++ Sockets.  If not, see <http://www.gnu.org/licenses/>.");
	cout << client.s_read() << "\n";

	client.c_close();
	
	return 0;
}
