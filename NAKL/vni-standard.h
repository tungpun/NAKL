//
//  vni-standard.h
//  NAKL
//
//  Created by Dinh Quang Trung on 7/21/16.
//
//

#ifndef __VK_VNI_STANDARD
#define __VK_VNI_STANDARD

vietcode_t code_6[] =
{
    { utf_A,	utf_A6 },				//	A => A^
    { utf_A1,	utf_A61 },				//	A' => A^'
    { utf_A2,	utf_A62 },				//	A` => A^`
    { utf_A3,	utf_A63 },				//	A? => A^?
    { utf_A4,	utf_A64 },				//	A~ => A^~
    { utf_A5,	utf_A65 },				//	A. => A^.
    { utf_A6,	utf_A, '6' },			//	A^ => A6
    { utf_A61,	utf_A1, '6' },			//	A^' => A'6
    { utf_A62,	utf_A2, '6' },			//	A^` => A`6
    { utf_A63,	utf_A3, '6' },			//	A^? => A?6
    { utf_A64,	utf_A4, '6' },			//	A^~ => A~6
    { utf_A65,	utf_A5, '6' },			//	A^. => A.6
    { utf_A8,	utf_A6 },				//	A( => A^
    { utf_A81,	utf_A61 },				//	A(' => A^'
    { utf_A82,	utf_A62 },				//	A(` => A^`
    { utf_A83,	utf_A63 },				//	A(? => A^?
    { utf_A84,	utf_A64 },				//	A(~ => A^~
    { utf_A85,	utf_A65 },				//	A(. => A^.
    
    { utf_a,	utf_a6 },				//	a => a^
    { utf_a1,	utf_a61 },				//	a' => a^'
    { utf_a2,	utf_a62 },				//	a` => a^`
    { utf_a3,	utf_a63 },				//	a? => a^?
    { utf_a4,	utf_a64 },				//	a~ => a^~
    { utf_a5,	utf_a65 },				//	a. => a^.
    { utf_a6,	utf_a, '6' },			//	a^ => a6
    { utf_a61,	utf_a1, '6' },			//	a^' => a'6
    { utf_a62,	utf_a2, '6' },			//	a^` => a`6
    { utf_a63,	utf_a3, '6' },			//	a^? => a?6
    { utf_a64,	utf_a4, '6' },			//	a^~ => a~6
    { utf_a65,	utf_a5, '6' },			//	a^. => a.6
    { utf_a8,	utf_a6 },				//	a( => a^
    { utf_a81,	utf_a61 },				//	a(' => a^'
    { utf_a82,	utf_a62 },				//	a(` => a^`
    { utf_a83,	utf_a63 },				//	a(? => a^?
    { utf_a84,	utf_a64 },				//	a(~ => a^~
    { utf_a85,	utf_a65 },				//	a(. => a^.
    
    { utf_E,	utf_E6 },				//	E => E^
    { utf_E1,	utf_E61 },				//	E' => E^'
    { utf_E2,	utf_E62 },				//	E` => E^`
    { utf_E3,	utf_E63 },				//	E? => E^?
    { utf_E4,	utf_E64 },				//	E~ => E^~
    { utf_E5,	utf_E65 },				//	E. => E^.
    { utf_E6,	utf_E, '6' },			//	E^ => E6
    { utf_E61,	utf_E1, '6' },			//	E^' => E'6
    { utf_E62,	utf_E2, '6' },			//	E^` => E`6
    { utf_E63,	utf_E3, '6' },			//	E^? => E?6
    { utf_E64,	utf_E4, '6' },			//	E^~ => E~6
    { utf_E65,	utf_E5, '6' },			//	E^. => E.6
    
    { utf_e,	utf_e6 },				//	e => e^
    { utf_e1,	utf_e61 },				//	e' => e^'
    { utf_e2,	utf_e62 },				//	e` => e^`
    { utf_e3,	utf_e63 },				//	e? => e^?
    { utf_e4,	utf_e64 },				//	e~ => e^~
    { utf_e5,	utf_e65 },				//	e. => e^.
    { utf_e6,	utf_e, '6' },			//	e^ => e6
    { utf_e61,	utf_e1, '6' },			//	e^' => e'6
    { utf_e62,	utf_e2, '6' },			//	e^` => e`6
    { utf_e63,	utf_e3, '6' },			//	e^? => e?6
    { utf_e64,	utf_e4, '6' },			//	e^~ => e~6
    { utf_e65,	utf_e5, '6' },			//	e^. => e.6
    
    { utf_O,	utf_O6 },				//	O => O^
    { utf_O1,	utf_O61 },				//	O' => O^'
    { utf_O2,	utf_O62 },				//	O` => O^`
    { utf_O3,	utf_O63 },				//	O? => O^?
    { utf_O4,	utf_O64 },				//	O~ => O^~
    { utf_O5,	utf_O65 },				//	O. => O^.
    { utf_O6,	utf_O, '6' },			//	O^ => O6
    { utf_O61,	utf_O1, '6' },			//	O^' => O'6
    { utf_O62,	utf_O2, '6' },			//	O^` => O`6
    { utf_O63,	utf_O3, '6' },			//	O^? => O?6
    { utf_O64,	utf_O4, '6' },			//	O^~ => O~6
    { utf_O65,	utf_O5, '6' },			//	O^. => O.6
    { utf_O7,	utf_O6 },				//	O+ => O^
    { utf_O71,	utf_O61 },				//	O+' => O^'
    { utf_O72,	utf_O62 },				//	O+` => O^`
    { utf_O73,	utf_O63 },				//	O+? => O^?
    { utf_O74,	utf_O64 },				//	O+~ => O^~
    { utf_O75,	utf_O65 },				//	O+. => O^.
    
    { utf_o,	utf_o6 },				//	o => o^
    { utf_o1,	utf_o61 },				//	o' => o^'
    { utf_o2,	utf_o62 },				//	o` => o^`
    { utf_o3,	utf_o63 },				//	o? => o^?
    { utf_o4,	utf_o64 },				//	o~ => o^~
    { utf_o5,	utf_o65 },				//	o. => o^.
    { utf_o6,	utf_o, '6' },			//	o^ => o6
    { utf_o61,	utf_o1, '6' },			//	o^' => o'6
    { utf_o62,	utf_o2, '6' },			//	o^` => o`6
    { utf_o63,	utf_o3, '6' },			//	o^? => o?6
    { utf_o64,	utf_o4, '6' },			//	o^~ => o~6
    { utf_o65,	utf_o5, '6' },			//	o^. => o.6
    { utf_o7,	utf_o6 },				//	o+ => o^
    { utf_o71,	utf_o61 },				//	o+' => o^'
    { utf_o72,	utf_o62 },				//	o+` => o^`
    { utf_o73,	utf_o63 },				//	o+? => o^?
    { utf_o74,	utf_o64 },				//	o+~ => o^~
    { utf_o75,	utf_o65 },				//	o+. => o^.
    { 0 },
};
/*----------------------------------------------------------------------------*/
vietcode_t code_7[] =
{
    { utf_O,	utf_O7 },				//	O => O+
    { utf_O1,	utf_O71 },				//	O' => O+'
    { utf_O2,	utf_O72 },				//	O` => O+`
    { utf_O3,	utf_O73 },				//	O? => O+?
    { utf_O4,	utf_O74 },				//	O~ => O+~
    { utf_O5,	utf_O75 },				//	O. => O+.
    { utf_O6,	utf_O7 },				//	O^ => O+
    { utf_O61,	utf_O71 },				//	O^' => O+'
    { utf_O62,	utf_O72 },				//	O^` => O+`
    { utf_O63,	utf_O73 },				//	O^? => O+?
    { utf_O64,	utf_O74 },				//	O^~ => O+~
    { utf_O65,	utf_O75 },				//	O^. => O+.
    { utf_O7,	utf_O, '7' },			//	O+ => O7
    { utf_O71,	utf_O1, '7' },			//	O+' => O'7
    { utf_O72,	utf_O2, '7' },			//	O+` => O`7
    { utf_O73,	utf_O3, '7' },			//	O+? => O?7
    { utf_O74,	utf_O4, '7' },			//	O+~ => O~7
    { utf_O75,	utf_O5, '7' },			//	O+. => O.7
    
    { utf_o,	utf_o7 },				//	o => o+
    { utf_o1,	utf_o71 },				//	o' => o+'
    { utf_o2,	utf_o72 },				//	o` => o+`
    { utf_o3,	utf_o73 },				//	o? => o+?
    { utf_o4,	utf_o74 },				//	o~ => o+~
    { utf_o5,	utf_o75 },				//	o. => o+.
    { utf_o6,	utf_o7 },				//	o^ => o+
    { utf_o61,	utf_o71 },				//	o^' => o+'
    { utf_o62,	utf_o72 },				//	o^` => o+`
    { utf_o63,	utf_o73 },				//	o^? => o+?
    { utf_o64,	utf_o74 },				//	o^~ => o+~
    { utf_o65,	utf_o75 },				//	o^. => o+.
    { utf_o7,	utf_o, '7' },			//	o+ => o7
    { utf_o71,	utf_o1, '7' },			//	o+' => o'7
    { utf_o72,	utf_o2, '7' },			//	o+` => o`7
    { utf_o73,	utf_o3, '7' },			//	o+? => o?7
    { utf_o74,	utf_o4, '7' },			//	o+~ => o~7
    { utf_o75,	utf_o5, '7' },			//	o+. => o.7
    
    { utf_U,	utf_U7 },				//	U => U+
    { utf_U1,	utf_U71 },				//	U' => U+'
    { utf_U2,	utf_U72 },				//	U` => U+`
    { utf_U3,	utf_U73 },				//	U? => U+?
    { utf_U4,	utf_U74 },				//	U~ => U+~
    { utf_U5,	utf_U75 },				//	U. => U+.
    { utf_U7,	utf_U, '7' },			//	U+ => U7
    { utf_U71,	utf_U1, '7' },			//	U+' => U'7
    { utf_U72,	utf_U2, '7' },			//	U+` => U`7
    { utf_U73,	utf_U3, '7' },			//	U+? => U?7
    { utf_U74,	utf_U4, '7' },			//	U+~ => U~7
    { utf_U75,	utf_U5, '7' },			//	U+. => U.7
    
    { utf_u,	utf_u7 },				//	u => u+
    { utf_u1,	utf_u71 },				//	u' => u+'
    { utf_u2,	utf_u72 },				//	u` => u+`
    { utf_u3,	utf_u73 },				//	u? => u+?
    { utf_u4,	utf_u74 },				//	u~ => u+~
    { utf_u5,	utf_u75 },				//	u. => u+.
    { utf_u7,	utf_u, '7' },			//	u+ => u7
    { utf_u71,	utf_u1, '7' },			//	u+' => u'7
    { utf_u72,	utf_u2, '7' },			//	u+` => u`7
    { utf_u73,	utf_u3, '7' },			//	u+? => u?7
    { utf_u74,	utf_u4, '7' },			//	u+~ => u~7
    { utf_u75,	utf_u5, '7' },			//	u+. => u.7
    { 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_8[] =
{
    { utf_A,	utf_A8 },				//	A => A(
    { utf_A1,	utf_A81 },				//	A' => A('
    { utf_A2,	utf_A82 },				//	A` => A(`
    { utf_A3,	utf_A83 },				//	A? => A(?
    { utf_A4,	utf_A84 },				//	A~ => A(~
    { utf_A5,	utf_A85 },				//	A. => A(.
    { utf_A6,	utf_A8 },				//	A^ => A(
    { utf_A61,	utf_A81 },				//	A^' => A('
    { utf_A62,	utf_A82 },				//	A^` => A(`
    { utf_A63,	utf_A83 },				//	A^? => A(?
    { utf_A64,	utf_A84 },				//	A^~ => A(~
    { utf_A65,	utf_A85 },				//	A^. => A(.
    { utf_A8,	utf_A, '8' },			//	A( => A8
    { utf_A81,	utf_A1, '8' },			//	A(' => A'8
    { utf_A82,	utf_A2, '8' },			//	A(` => A`8
    { utf_A83,	utf_A3, '8' },			//	A(? => A?8
    { utf_A84,	utf_A4, '8' },			//	A(~ => A~8
    { utf_A85,	utf_A5, '8' },			//	A(. => A.8
    
    { utf_a,	utf_a8 },				//	a => a(
    { utf_a1,	utf_a81 },				//	a' => a('
    { utf_a2,	utf_a82 },				//	a` => a(`
    { utf_a3,	utf_a83 },				//	a? => a(?
    { utf_a4,	utf_a84 },				//	a~ => a(~
    { utf_a5,	utf_a85 },				//	a. => a(.
    { utf_a6,	utf_a8 },				//	a^ => a(
    { utf_a61,	utf_a81 },				//	a^' => a('
    { utf_a62,	utf_a82 },				//	a^` => a(`
    { utf_a63,	utf_a83 },				//	a^? => a(?
    { utf_a64,	utf_a84 },				//	a^~ => a(~
    { utf_a65,	utf_a85 },				//	a^. => a(.
    { utf_a8,	utf_a, '8' },			//	a( => a8
    { utf_a81,	utf_a1, '8' },			//	a(' => a'8
    { utf_a82,	utf_a2, '8' },			//	a(` => a`8
    { utf_a83,	utf_a3, '8' },			//	a(? => a?8
    { utf_a84,	utf_a4, '8' },			//	a(~ => a~8
    { utf_a85,	utf_a5, '8' },			//	a(. => a.8
    { 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_9[] =
{
    { utf_D,	utf_D9 },				//	D => -D
    { utf_D9,	utf_D, '9' },			//	-D => D9
    { utf_d,	utf_d9 },				//	d => -d
    { utf_d9,	utf_d, '9' },			//	-d => d9
    { 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_1[] =
{
    { utf_A,	utf_A1 },				//	A => A'
    { utf_A1,	utf_A, '1' },			//	A' => A1
    { utf_A2,	utf_A1 },				//	A` => A'
    { utf_A3,	utf_A1 },				//	A? => A'
    { utf_A4,	utf_A1 },				//	A~ => A'
    { utf_A5,	utf_A1 },				//	A. => A'
    
    { utf_A6,	utf_A61 },				//	A^ => A^'
    { utf_A61,	utf_A6, '1' },			//	A^' => A^1
    { utf_A62,	utf_A61 },				//	A^` => A^'
    { utf_A63,	utf_A61 },				//	A^? => A^'
    { utf_A64,	utf_A61 },				//	A^~ => A^'
    { utf_A65,	utf_A61 },				//	A^. => A^'
    
    { utf_A8,	utf_A81 },				//	A( => A('
    { utf_A81,	utf_A8, '1' },			//	A(' => A(1
    { utf_A82,	utf_A81 },				//	A(` => A('
    { utf_A83,	utf_A81 },				//	A(? => A('
    { utf_A84,	utf_A81 },				//	A(~ => A('
    { utf_A85,	utf_A81 },				//	A(. => A('
    
    { utf_E,	utf_E1 },				//	E => E'
    { utf_E1,	utf_E, '1' },			//	E' => E1
    { utf_E2,	utf_E1 },				//	E` => E'
    { utf_E3,	utf_E1 },				//	E? => E'
    { utf_E4,	utf_E1 },				//	E~ => E'
    { utf_E5,	utf_E1 },				//	E. => E'
    
    { utf_E6,	utf_E61 },				//	E^ => E^'
    { utf_E61,	utf_E6, '1' },			//	E^' => E^1
    { utf_E62,	utf_E61 },				//	E^` => E^'
    { utf_E63,	utf_E61 },				//	E^? => E^'
    { utf_E64,	utf_E61 },				//	E^~ => E^'
    { utf_E65,	utf_E61 },				//	E^. => E^'
    
    { utf_O,	utf_O1 },				//	O => O'
    { utf_O1,	utf_O, '1' },			//	O' => O1
    { utf_O2,	utf_O1 },				//	O` => O'
    { utf_O3,	utf_O1 },				//	O? => O'
    { utf_O4,	utf_O1 },				//	O~ => O'
    { utf_O5,	utf_O1 },				//	O. => O'
    
    { utf_O6,	utf_O61 },				//	O^ => O^'
    { utf_O61,	utf_O6, '1' },			//	O^' => O^1
    { utf_O62,	utf_O61 },				//	O^` => O^'
    { utf_O63,	utf_O61 },				//	O^? => O^'
    { utf_O64,	utf_O61 },				//	O^~ => O^'
    { utf_O65,	utf_O61 },				//	O^. => O^'
    
    { utf_O7,	utf_O71 },				//	O+ => O+'
    { utf_O71,	utf_O7, '1' },			//	O+' => O+1
    { utf_O72,	utf_O71 },				//	O+` => O+'
    { utf_O73,	utf_O71 },				//	O+? => O+'
    { utf_O74,	utf_O71 },				//	O+~ => O+'
    { utf_O75,	utf_O71 },				//	O+. => O+'
    
    { utf_U,	utf_U1 },				//	U => U'
    { utf_U1,	utf_U, '1' },			//	U' => U1
    { utf_U2,	utf_U1 },				//	U` => U'
    { utf_U3,	utf_U1 },				//	U? => U'
    { utf_U4,	utf_U1 },				//	U~ => U'
    { utf_U5,	utf_U1 },				//	U. => U'
    
    { utf_U7,	utf_U71 },				//	U+ => U+'
    { utf_U71,	utf_U7, '1' },			//	U+' => U+1
    { utf_U72,	utf_U71 },				//	U+` => U+'
    { utf_U73,	utf_U71 },				//	U+? => U+'
    { utf_U74,	utf_U71 },				//	U+~ => U+'
    { utf_U75,	utf_U71 },				//	U+. => U+'
    
    { utf_I,	utf_I1 },				//	I => I'
    { utf_I1,	utf_I, '1' },			//	I' => I1
    { utf_I2,	utf_I1 },				//	I` => I'
    { utf_I3,	utf_I1 },				//	I? => I'
    { utf_I4,	utf_I1 },				//	I~ => I'
    { utf_I5,	utf_I1 },				//	I. => I'
    
    { utf_Y,	utf_Y1 },				//	Y => Y'
    { utf_Y1,	utf_Y, '1' },			//	Y' => Y1
    { utf_Y2,	utf_Y1 },				//	Y` => Y'
    { utf_Y3,	utf_Y1 },				//	Y? => Y'
    { utf_Y4,	utf_Y1 },				//	Y~ => Y'
    { utf_Y5,	utf_Y1 },				//	Y. => Y'
    
    { utf_a,	utf_a1 },				//	a => a'
    { utf_a1,	utf_a, '1' },			//	a' => a1
    { utf_a2,	utf_a1 },				//	a` => a'
    { utf_a3,	utf_a1 },				//	a? => a'
    { utf_a4,	utf_a1 },				//	a~ => a'
    { utf_a5,	utf_a1 },				//	a. => a'
    
    { utf_a6,	utf_a61 },				//	a^ => a^'
    { utf_a61,	utf_a6, '1' },			//	a^' => a^1
    { utf_a62,	utf_a61 },				//	a^` => a^'
    { utf_a63,	utf_a61 },				//	a^? => a^'
    { utf_a64,	utf_a61 },				//	a^~ => a^'
    { utf_a65,	utf_a61 },				//	a^. => a^'
    
    { utf_a8,	utf_a81 },				//	a( => a('
    { utf_a81,	utf_a8, '1' },			//	a(' => a(1
    { utf_a82,	utf_a81 },				//	a(` => a('
    { utf_a83,	utf_a81 },				//	a(? => a('
    { utf_a84,	utf_a81 },				//	a(~ => a('
    { utf_a85,	utf_a81 },				//	a(. => a('
    
    { utf_e,	utf_e1 },				//	e => e'
    { utf_e1,	utf_e, '1' },			//	e' => e1
    { utf_e2,	utf_e1 },				//	e` => e'
    { utf_e3,	utf_e1 },				//	e? => e'
    { utf_e4,	utf_e1 },				//	e~ => e'
    { utf_e5,	utf_e1 },				//	e. => e'
    
    { utf_e6,	utf_e61 },				//	e^ => e^'
    { utf_e61,	utf_e6, '1' },			//	e^' => e^1
    { utf_e62,	utf_e61 },				//	e^` => e^'
    { utf_e63,	utf_e61 },				//	e^? => e^'
    { utf_e64,	utf_e61 },				//	e^~ => e^'
    { utf_e65,	utf_e61 },				//	e^. => e^'
    
    { utf_o,	utf_o1 },				//	o => o'
    { utf_o1,	utf_o, '1' },			//	o' => o1
    { utf_o2,	utf_o1 },				//	o` => o'
    { utf_o3,	utf_o1 },				//	o? => o'
    { utf_o4,	utf_o1 },				//	o~ => o'
    { utf_o5,	utf_o1 },				//	o. => o'
    
    { utf_o6,	utf_o61 },				//	o^ => o^'
    { utf_o61,	utf_o6, '1' },			//	o^' => o^1
    { utf_o62,	utf_o61 },				//	o^` => o^'
    { utf_o63,	utf_o61 },				//	o^? => o^'
    { utf_o64,	utf_o61 },				//	o^~ => o^'
    { utf_o65,	utf_o61 },				//	o^. => o^'
    
    { utf_o7,	utf_o71 },				//	o+ => o+'
    { utf_o71,	utf_o7, '1' },			//	o+' => o+1
    { utf_o72,	utf_o71 },				//	o+` => o+'
    { utf_o73,	utf_o71 },				//	o+? => o+'
    { utf_o74,	utf_o71 },				//	o+~ => o+'
    { utf_o75,	utf_o71 },				//	o+. => o+'
    
    { utf_u,	utf_u1 },				//	u => u'
    { utf_u1,	utf_u, '1' },			//	u' => u1
    { utf_u2,	utf_u1 },				//	u` => u'
    { utf_u3,	utf_u1 },				//	u? => u'
    { utf_u4,	utf_u1 },				//	u~ => u'
    { utf_u5,	utf_u1 },				//	u. => u'
    
    { utf_u7,	utf_u71 },				//	u+ => u+'
    { utf_u71,	utf_u7, '1' },			//	u+' => u+1
    { utf_u72,	utf_u71 },				//	u+` => u+'
    { utf_u73,	utf_u71 },				//	u+? => u+'
    { utf_u74,	utf_u71 },				//	u+~ => u+'
    { utf_u75,	utf_u71 },				//	u+. => u+'
    
    { utf_i,	utf_i1 },				//	i => i'
    { utf_i1,	utf_i, '1' },			//	i' => i1
    { utf_i2,	utf_i1 },				//	i` => i'
    { utf_i3,	utf_i1 },				//	i? => i'
    { utf_i4,	utf_i1 },				//	i~ => i'
    { utf_i5,	utf_i1 },				//	i. => i'
    
    { utf_y,	utf_y1 },				//	y => Y'
    { utf_y1,	utf_y, '1' },			//	y' => y1
    { utf_y2,	utf_y1 },				//	y` => y'
    { utf_y3,	utf_y1 },				//	y? => y'
    { utf_y4,	utf_y1 },				//	y~ => y'
    { utf_y5,	utf_y1 },				//	y. => y'
    { 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_2[] =
{
    { utf_A,	utf_A2 },				//	A => A`
    { utf_A1,	utf_A2 },				//	A' => A`
    { utf_A2,	utf_A, '2' },			//	A` => AF
    { utf_A3,	utf_A2 },				//	A? => A`
    { utf_A4,	utf_A2 },				//	A~ => A`
    { utf_A5,	utf_A2 },				//	A. => A`
    
    { utf_A6,	utf_A62 },				//	A^ => A^`
    { utf_A61,	utf_A62 },				//	A^' => A^`
    { utf_A62,	utf_A6, '2' },		//	A^` => A^F
    { utf_A63,	utf_A62 },				//	A^? => A^`
    { utf_A64,	utf_A62 },				//	A^~ => A^`
    { utf_A65,	utf_A62 },				//	A^. => A^`
    
    { utf_A8,	utf_A82 },				//	A( => A(`
    { utf_A81,	utf_A82 },				//	A(' => A(`
    { utf_A82,	utf_A8, '2' },		//	A(` => A(F
    { utf_A83,	utf_A82 },				//	A(? => A(`
    { utf_A84,	utf_A82 },				//	A(~ => A(`
    { utf_A85,	utf_A82 },				//	A(. => A(`
    
    { utf_E,	utf_E2 },				//	E => E`
    { utf_E1,	utf_E2 },				//	E' => E`
    { utf_E2,	utf_E, '2' },			//	E` => EF
    { utf_E3,	utf_E2 },				//	E? => E`
    { utf_E4,	utf_E2 },				//	E~ => E`
    { utf_E5,	utf_E2 },				//	E. => E`
    
    { utf_E6,	utf_E62 },				//	E^ => E^`
    { utf_E61,	utf_E62 },				//	E^' => E^`
    { utf_E62,	utf_E6, '2' },		//	E^` => E^F
    { utf_E63,	utf_E62 },				//	E^? => E^`
    { utf_E64,	utf_E62 },				//	E^~ => E^`
    { utf_E65,	utf_E62 },				//	E^. => E^`
    
    { utf_O,	utf_O2 },				//	O => O`
    { utf_O1,	utf_O2 },				//	O' => O`
    { utf_O2,	utf_O, '2' },			//	O` => OF
    { utf_O3,	utf_O2 },				//	O? => O`
    { utf_O4,	utf_O2 },				//	O~ => O`
    { utf_O5,	utf_O2 },				//	O. => O`
    
    { utf_O6,	utf_O62 },				//	O^ => O^`
    { utf_O61,	utf_O62 },				//	O^' => O^`
    { utf_O62,	utf_O6, '2' },		//	O^` => O^F
    { utf_O63,	utf_O62 },				//	O^? => O^`
    { utf_O64,	utf_O62 },				//	O^~ => O^`
    { utf_O65,	utf_O62 },				//	O^. => O^`
    
    { utf_O7,	utf_O72 },				//	O+ => O+`
    { utf_O71,	utf_O72 },				//	O+' => O+`
    { utf_O72,	utf_O7, '2' },		//	O+` => O+F
    { utf_O73,	utf_O72 },				//	O+? => O+`
    { utf_O74,	utf_O72 },				//	O+~ => O+`
    { utf_O75,	utf_O72 },				//	O+. => O+`
    
    { utf_U,	utf_U2 },				//	U => U`
    { utf_U1,	utf_U2 },				//	U' => U`
    { utf_U2,	utf_U, '2' },			//	U` => UF
    { utf_U3,	utf_U2 },				//	U? => U`
    { utf_U4,	utf_U2 },				//	U~ => U`
    { utf_U5,	utf_U2 },				//	U. => U`
    
    { utf_U7,	utf_U72 },				//	U+ => U+`
    { utf_U71,	utf_U72 },				//	U+' => U+`
    { utf_U72,	utf_U7, '2' },		//	U+` => U+F
    { utf_U73,	utf_U72 },				//	U+? => U+`
    { utf_U74,	utf_U72 },				//	U+~ => U+`
    { utf_U75,	utf_U72 },				//	U+. => U+`
    
    { utf_I,	utf_I2 },				//	I => I`
    { utf_I1,	utf_I2 },				//	I' => I`
    { utf_I2,	utf_I, '2' },			//	I` => IF
    { utf_I3,	utf_I2 },				//	I? => I`
    { utf_I4,	utf_I2 },				//	I~ => I`
    { utf_I5,	utf_I2 },				//	I. => I`
    
    { utf_Y,	utf_Y2 },				//	Y => Y`
    { utf_Y1,	utf_Y2 },				//	Y' => Y`
    { utf_Y2,	utf_Y, '2' },			//	Y` => YF
    { utf_Y3,	utf_Y2 },				//	Y? => Y`
    { utf_Y4,	utf_Y2 },				//	Y~ => Y`
    { utf_Y5,	utf_Y2 },				//	Y. => Y`
    
    { utf_a,	utf_a2 },				//	a => a`
    { utf_a1,	utf_a2 },				//	a' => a`
    { utf_a2,	utf_a, '2' },			//	a` => af
    { utf_a3,	utf_a2 },				//	a? => a`
    { utf_a4,	utf_a2 },				//	a~ => a`
    { utf_a5,	utf_a2 },				//	a. => a`
    
    { utf_a6,	utf_a62 },				//	a^ => a^`
    { utf_a61,	utf_a62 },				//	a^' => a^`
    { utf_a62,	utf_a6, '2' },		//	a^` => a^f
    { utf_a63,	utf_a62 },				//	a^? => a^`
    { utf_a64,	utf_a62 },				//	a^~ => a^`
    { utf_a65,	utf_a62 },				//	a^. => a^`
    
    { utf_a8,	utf_a82 },				//	a( => a(`
    { utf_a81,	utf_a82 },				//	a(' => a(`
    { utf_a82,	utf_a8, '2' },		//	a(` => a(f
    { utf_a83,	utf_a82 },				//	a(? => a(`
    { utf_a84,	utf_a82 },				//	a(~ => a(`
    { utf_a85,	utf_a82 },				//	a(. => a(`
    
    { utf_e,	utf_e2 },				//	e => e`
    { utf_e1,	utf_e2 },				//	e' => e`
    { utf_e2,	utf_e, '2' },			//	e` => ef
    { utf_e3,	utf_e2 },				//	e? => e`
    { utf_e4,	utf_e2 },				//	e~ => e`
    { utf_e5,	utf_e2 },				//	e. => e`
    
    { utf_e6,	utf_e62 },				//	e^ => e^`
    { utf_e61,	utf_e62 },				//	e^' => e^`
    { utf_e62,	utf_e6, '2' },		//	e^` => e^f
    { utf_e63,	utf_e62 },				//	e^? => e^`
    { utf_e64,	utf_e62 },				//	e^~ => e^`
    { utf_e65,	utf_e62 },				//	e^. => e^`
    
    { utf_o,	utf_o2 },				//	o => o`
    { utf_o1,	utf_o2 },				//	o' => o`
    { utf_o2,	utf_o, '2' },			//	o` => of
    { utf_o3,	utf_o2 },				//	o? => o`
    { utf_o4,	utf_o2 },				//	o~ => o`
    { utf_o5,	utf_o2 },				//	o. => o`
    
    { utf_o6,	utf_o62 },				//	o^ => o^`
    { utf_o61,	utf_o62 },				//	o^' => o^`
    { utf_o62,	utf_o6, '2' },		//	o^` => o^f
    { utf_o63,	utf_o62 },				//	o^? => o^`
    { utf_o64,	utf_o62 },				//	o^~ => o^`
    { utf_o65,	utf_o62 },				//	o^. => o^`
    
    { utf_o7,	utf_o72 },				//	o+ => o+`
    { utf_o71,	utf_o72 },				//	o+' => o+`
    { utf_o72,	utf_o7, '2' },		//	o+` => o+f
    { utf_o73,	utf_o72 },				//	o+? => o+`
    { utf_o74,	utf_o72 },				//	o+~ => o+`
    { utf_o75,	utf_o72 },				//	o+. => o+`
    
    { utf_u,	utf_u2 },				//	u => u`
    { utf_u1,	utf_u2 },				//	u' => u`
    { utf_u2,	utf_u, '2' },			//	u` => uf
    { utf_u3,	utf_u2 },				//	u? => u`
    { utf_u4,	utf_u2 },				//	u~ => u`
    { utf_u5,	utf_u2 },				//	u. => u`
    
    { utf_u7,	utf_u72 },				//	u+ => u+`
    { utf_u71,	utf_u72 },				//	u+' => u+`
    { utf_u72,	utf_u7, '2' },		//	u+` => u+f
    { utf_u73,	utf_u72 },				//	u+? => u+`
    { utf_u74,	utf_u72 },				//	u+~ => u+`
    { utf_u75,	utf_u72 },				//	u+. => u+`
    
    { utf_i,	utf_i2 },				//	i => i`
    { utf_i1,	utf_i2 },				//	i' => i`
    { utf_i2,	utf_i, '2' },			//	i` => if
    { utf_i3,	utf_i2 },				//	i? => i`
    { utf_i4,	utf_i2 },				//	i~ => i`
    { utf_i5,	utf_i2 },				//	i. => i`
    
    { utf_y,	utf_y2 },				//	y => Y`
    { utf_y1,	utf_y2 },				//	y' => y`
    { utf_y2,	utf_y, '2' },			//	y` => yf
    { utf_y3,	utf_y2 },				//	y? => y`
    { utf_y4,	utf_y2 },				//	y~ => y`
    { utf_y5,	utf_y2 },				//	y. => y`
    { 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_3[] =
{
    { utf_A,	utf_A3 },				//	A => A?
    { utf_A1,	utf_A3 },				//	A' => A?
    { utf_A2,	utf_A3 },				//	A` => A?
    { utf_A3,	utf_A, '3' },			//	A? => AR
    { utf_A4,	utf_A3 },				//	A~ => A?
    { utf_A5,	utf_A3 },				//	A. => A?
    
    { utf_A6,	utf_A63 },				//	A^ => A^?
    { utf_A61,	utf_A63 },				//	A^' => A^?
    { utf_A62,	utf_A63 },				//	A^` => A^?
    { utf_A63,	utf_A6, '3' },			//	A^? => A^R
    { utf_A64,	utf_A63 },				//	A^~ => A^?
    { utf_A65,	utf_A63 },				//	A^. => A^?
    
    { utf_A8,	utf_A83 },				//	A( => A(?
    { utf_A81,	utf_A83 },				//	A(' => A(?
    { utf_A82,	utf_A83 },				//	A(` => A(?
    { utf_A83,	utf_A8, '3' },			//	A(? => A(R
    { utf_A84,	utf_A83 },				//	A(~ => A(?
    { utf_A85,	utf_A83 },				//	A(. => A(?
    
    { utf_E,	utf_E3 },				//	E => E?
    { utf_E1,	utf_E3 },				//	E' => E?
    { utf_E2,	utf_E3 },				//	E` => E?
    { utf_E3,	utf_E, '3' },			//	E? => ER
    { utf_E4,	utf_E3 },				//	E~ => E?
    { utf_E5,	utf_E3 },				//	E. => E?
    
    { utf_E6,	utf_E63 },				//	E^ => E^?
    { utf_E61,	utf_E63 },				//	E^' => E^?
    { utf_E62,	utf_E63 },				//	E^` => E^?
    { utf_E63,	utf_E6, '3' },			//	E^? => E^R
    { utf_E64,	utf_E63 },				//	E^~ => E^?
    { utf_E65,	utf_E63 },				//	E^. => E^?
    
    { utf_O,	utf_O3 },				//	O => O?
    { utf_O1,	utf_O3 },				//	O' => O?
    { utf_O2,	utf_O3 },				//	O` => O?
    { utf_O3,	utf_O, '3' },			//	O? => OR
    { utf_O4,	utf_O3 },				//	O~ => O?
    { utf_O5,	utf_O3 },				//	O. => O?
    
    { utf_O6,	utf_O63 },				//	O^ => O^?
    { utf_O61,	utf_O63 },				//	O^' => O^?
    { utf_O62,	utf_O63 },				//	O^` => O^?
    { utf_O63,	utf_O6, '3' },			//	O^? => O^R
    { utf_O64,	utf_O63 },				//	O^~ => O^?
    { utf_O65,	utf_O63 },				//	O^. => O^?
    
    { utf_O7,	utf_O73 },				//	O+ => O+?
    { utf_O71,	utf_O73 },				//	O+' => O+?
    { utf_O72,	utf_O73 },				//	O+` => O+?
    { utf_O73,	utf_O7, '3' },			//	O+? => O+R
    { utf_O74,	utf_O73 },				//	O+~ => O+?
    { utf_O75,	utf_O73 },				//	O+. => O+?
    
    { utf_U,	utf_U3 },				//	U => U?
    { utf_U1,	utf_U3 },				//	U' => U?
    { utf_U2,	utf_U3 },				//	U` => U?
    { utf_U3,	utf_U, '3' },			//	U? => UR
    { utf_U4,	utf_U3 },				//	U~ => U?
    { utf_U5,	utf_U3 },				//	U. => U?
    
    { utf_U7,	utf_U73 },				//	U+ => U+?
    { utf_U71,	utf_U73 },				//	U+' => U+?
    { utf_U72,	utf_U73 },				//	U+` => U+?
    { utf_U73,	utf_U7, '3' },			//	U+? => U+R
    { utf_U74,	utf_U73 },				//	U+~ => U+?
    { utf_U75,	utf_U73 },				//	U+. => U+?
    
    { utf_I,	utf_I3 },				//	I => I?
    { utf_I1,	utf_I3 },				//	I' => I?
    { utf_I2,	utf_I3 },				//	I` => I?
    { utf_I3,	utf_I, '3' },			//	I? => IR
    { utf_I4,	utf_I3 },				//	I~ => I?
    { utf_I5,	utf_I3 },				//	I. => I?
    
    { utf_Y,	utf_Y3 },				//	Y => Y?
    { utf_Y1,	utf_Y3 },				//	Y' => Y?
    { utf_Y2,	utf_Y3 },				//	Y` => Y?
    { utf_Y3,	utf_Y, '3' },			//	Y? => YR
    { utf_Y4,	utf_Y3 },				//	Y~ => Y?
    { utf_Y5,	utf_Y3 },				//	Y. => Y?
    
    { utf_a,	utf_a3 },				//	a => a?
    { utf_a1,	utf_a3 },				//	a' => a?
    { utf_a2,	utf_a3 },				//	a` => a?
    { utf_a3,	utf_a, '3' },			//	a? => ar
    { utf_a4,	utf_a3 },				//	a~ => a?
    { utf_a5,	utf_a3 },				//	a. => a?
    
    { utf_a6,	utf_a63 },				//	a^ => a^?
    { utf_a61,	utf_a63 },				//	a^' => a^?
    { utf_a62,	utf_a63 },				//	a^` => a^?
    { utf_a63,	utf_a6, '3' },			//	a^? => a^r
    { utf_a64,	utf_a63 },				//	a^~ => a^?
    { utf_a65,	utf_a63 },				//	a^. => a^?
    
    { utf_a8,	utf_a83 },				//	a( => a(?
    { utf_a81,	utf_a83 },				//	a(' => a(?
    { utf_a82,	utf_a83 },				//	a(` => a(?
    { utf_a83,	utf_a8, '3' },			//	a(? => a(r
    { utf_a84,	utf_a83 },				//	a(~ => a(?
    { utf_a85,	utf_a83 },				//	a(. => a(?
    
    { utf_e,	utf_e3 },				//	e => e?
    { utf_e1,	utf_e3 },				//	e' => e?
    { utf_e2,	utf_e3 },				//	e` => e?
    { utf_e3,	utf_e, '3' },			//	e? => er
    { utf_e4,	utf_e3 },				//	e~ => e?
    { utf_e5,	utf_e3 },				//	e. => e?
    
    { utf_e6,	utf_e63 },				//	e^ => e^?
    { utf_e61,	utf_e63 },				//	e^' => e^?
    { utf_e62,	utf_e63 },				//	e^` => e^?
    { utf_e63,	utf_e6, '3' },			//	e^? => e^r
    { utf_e64,	utf_e63 },				//	e^~ => e^?
    { utf_e65,	utf_e63 },				//	e^. => e^?
    
    { utf_o,	utf_o3 },				//	o => o?
    { utf_o1,	utf_o3 },				//	o' => o?
    { utf_o2,	utf_o3 },				//	o` => o?
    { utf_o3,	utf_o, '3' },			//	o? => or
    { utf_o4,	utf_o3 },				//	o~ => o?
    { utf_o5,	utf_o3 },				//	o. => o?
    
    { utf_o6,	utf_o63 },				//	o^ => o^?
    { utf_o61,	utf_o63 },				//	o^' => o^?
    { utf_o62,	utf_o63 },				//	o^` => o^?
    { utf_o63,	utf_o6, '3' },			//	o^? => o^r
    { utf_o64,	utf_o63 },				//	o^~ => o^?
    { utf_o65,	utf_o63 },				//	o^. => o^?
    
    { utf_o7,	utf_o73 },				//	o+ => o+?
    { utf_o71,	utf_o73 },				//	o+' => o+?
    { utf_o72,	utf_o73 },				//	o+` => o+?
    { utf_o73,	utf_o7, '3' },			//	o+? => o+r
    { utf_o74,	utf_o73 },				//	o+~ => o+?
    { utf_o75,	utf_o73 },				//	o+. => o+?
    
    { utf_u,	utf_u3 },				//	u => u?
    { utf_u1,	utf_u3 },				//	u' => u?
    { utf_u2,	utf_u3 },				//	u` => u?
    { utf_u3,	utf_u, '3' },			//	u? => ur
    { utf_u4,	utf_u3 },				//	u~ => u?
    { utf_u5,	utf_u3 },				//	u. => u?
    
    { utf_u7,	utf_u73 },				//	u+ => u+?
    { utf_u71,	utf_u73 },				//	u+' => u+?
    { utf_u72,	utf_u73 },				//	u+` => u+?
    { utf_u73,	utf_u7, '3' },			//	u+? => u+r
    { utf_u74,	utf_u73 },				//	u+~ => u+?
    { utf_u75,	utf_u73 },				//	u+. => u+?
    
    { utf_i,	utf_i3 },				//	i => i?
    { utf_i1,	utf_i3 },				//	i' => i?
    { utf_i2,	utf_i3 },				//	i` => i?
    { utf_i3,	utf_i, '3' },			//	i? => ir
    { utf_i4,	utf_i3 },				//	i~ => i?
    { utf_i5,	utf_i3 },				//	i. => i?
    
    { utf_y,	utf_y3 },				//	y => y?
    { utf_y1,	utf_y3 },				//	y' => y?
    { utf_y2,	utf_y3 },				//	y` => y?
    { utf_y3,	utf_y, '3' },			//	y? => yr
    { utf_y4,	utf_y3 },				//	y~ => y?
    { utf_y5,	utf_y3 },				//	y. => y?
    { 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_4[] =
{
    { utf_A,	utf_A4 },				//	A => A~
    { utf_A1,	utf_A4 },				//	A' => A~
    { utf_A2,	utf_A4 },				//	A` => A~
    { utf_A3,	utf_A4 },				//	A? => A~
    { utf_A4,	utf_A, '4' },			//	A~ => AX
    { utf_A5,	utf_A4 },				//	A. => A~
    
    { utf_A6,	utf_A64 },				//	A^ => A^~
    { utf_A61,	utf_A64 },				//	A^' => A^~
    { utf_A62,	utf_A64 },				//	A^` => A^~
    { utf_A63,	utf_A64 },				//	A^? => A^~
    { utf_A64,	utf_A6, '4' },		//	A^~ => A^X
    { utf_A65,	utf_A64 },				//	A^. => A^~
    
    { utf_A8,	utf_A84 },				//	A( => A(~
    { utf_A81,	utf_A84 },				//	A(' => A(~
    { utf_A82,	utf_A84 },				//	A(` => A(~
    { utf_A83,	utf_A84 },				//	A(? => A(~
    { utf_A84,	utf_A8, '4' },		//	A(~ => A(X
    { utf_A85,	utf_A84 },				//	A(. => A(~
    
    { utf_E,	utf_E4 },				//	E => E~
    { utf_E1,	utf_E4 },				//	E' => E~
    { utf_E2,	utf_E4 },				//	E` => E~
    { utf_E3,	utf_E4 },				//	E? => E~
    { utf_E4,	utf_E, '4' },			//	E~ => EX
    { utf_E5,	utf_E4 },				//	E. => E~
    
    { utf_E6,	utf_E64 },				//	E^ => E^~
    { utf_E61,	utf_E64 },				//	E^' => E^~
    { utf_E62,	utf_E64 },				//	E^` => E^~
    { utf_E63,	utf_E64 },				//	E^? => E^~
    { utf_E64,	utf_E6, '4' },		//	E^~ => E^X
    { utf_E65,	utf_E64 },				//	E^. => E^~
    
    { utf_O,	utf_O4 },				//	O => O~
    { utf_O1,	utf_O4 },				//	O' => O~
    { utf_O2,	utf_O4 },				//	O` => O~
    { utf_O3,	utf_O4 },				//	O? => O~
    { utf_O4,	utf_O, '4' },			//	O~ => OX
    { utf_O5,	utf_O4 },				//	O. => O~
    
    { utf_O6,	utf_O64 },				//	O^ => O^~
    { utf_O61,	utf_O64 },				//	O^' => O^~
    { utf_O62,	utf_O64 },				//	O^` => O^~
    { utf_O63,	utf_O64 },				//	O^? => O^~
    { utf_O64,	utf_O6, '4' },		//	O^~ => O^X
    { utf_O65,	utf_O64 },				//	O^. => O^~
    
    { utf_O7,	utf_O74 },				//	O+ => O+~
    { utf_O71,	utf_O74 },				//	O+' => O+~
    { utf_O72,	utf_O74 },				//	O+` => O+~
    { utf_O73,	utf_O74 },				//	O+? => O+~
    { utf_O74,	utf_O7, '4' },		//	O+~ => O+X
    { utf_O75,	utf_O74 },				//	O+. => O+~
    
    { utf_U,	utf_U4 },				//	U => U~
    { utf_U1,	utf_U4 },				//	U' => U~
    { utf_U2,	utf_U4 },				//	U` => U~
    { utf_U3,	utf_U4 },				//	U? => U~
    { utf_U4,	utf_U, '4' },			//	U~ => UX
    { utf_U5,	utf_U4 },				//	U. => U~
    
    { utf_U7,	utf_U74 },				//	U+ => U+~
    { utf_U71,	utf_U74 },				//	U+' => U+~
    { utf_U72,	utf_U74 },				//	U+` => U+~
    { utf_U73,	utf_U74 },				//	U+? => U+~
    { utf_U74,	utf_U7, '4' },		//	U+~ => U+X
    { utf_U75,	utf_U74 },				//	U+. => U+~
    
    { utf_I,	utf_I4 },				//	I => I~
    { utf_I1,	utf_I4 },				//	I' => I~
    { utf_I2,	utf_I4 },				//	I` => I~
    { utf_I3,	utf_I4 },				//	I? => I~
    { utf_I4,	utf_I, '4' },			//	I~ => IX
    { utf_I5,	utf_I4 },				//	I. => I~
    
    { utf_Y,	utf_Y4 },				//	Y => Y~
    { utf_Y1,	utf_Y4 },				//	Y' => Y~
    { utf_Y2,	utf_Y4 },				//	Y` => Y~
    { utf_Y3,	utf_Y4 },				//	Y? => Y~
    { utf_Y4,	utf_Y, '4' },			//	Y~ => YX
    { utf_Y5,	utf_Y4 },				//	Y. => Y~
    
    { utf_a,	utf_a4 },				//	a => a~
    { utf_a1,	utf_a4 },				//	a' => a~
    { utf_a2,	utf_a4 },				//	a` => a~
    { utf_a3,	utf_a4 },				//	a? => a~
    { utf_a4,	utf_a, '4' },			//	a~ => ax
    { utf_a5,	utf_a4 },				//	a. => a~
    
    { utf_a6,	utf_a64 },				//	a^ => a^~
    { utf_a61,	utf_a64 },				//	a^' => a^~
    { utf_a62,	utf_a64 },				//	a^` => a^~
    { utf_a63,	utf_a64 },				//	a^? => a^~
    { utf_a64,	utf_a6, '4' },		//	a^~ => a^x
    { utf_a65,	utf_a64 },				//	a^. => a^~
    
    { utf_a8,	utf_a84 },				//	a( => a(~
    { utf_a81,	utf_a84 },				//	a(' => a(~
    { utf_a82,	utf_a84 },				//	a(` => a(~
    { utf_a83,	utf_a84 },				//	a(? => a(~
    { utf_a84,	utf_a8, '4' },		//	a(~ => a(x
    { utf_a85,	utf_a84 },				//	a(. => a(~
    
    { utf_e,	utf_e4 },				//	e => e~
    { utf_e1,	utf_e4 },				//	e' => e~
    { utf_e2,	utf_e4 },				//	e` => e~
    { utf_e3,	utf_e4 },				//	e? => e~
    { utf_e4,	utf_e, '4' },			//	e~ => ex
    { utf_e5,	utf_e4 },				//	e. => e~
    
    { utf_e6,	utf_e64 },				//	e^ => e^~
    { utf_e61,	utf_e64 },				//	e^' => e^~
    { utf_e62,	utf_e64 },				//	e^` => e^~
    { utf_e63,	utf_e64 },				//	e^? => e^~
    { utf_e64,	utf_e6, '4' },		//	e^~ => e^x
    { utf_e65,	utf_e64 },				//	e^. => e^~
    
    { utf_o,	utf_o4 },				//	o => o~
    { utf_o1,	utf_o4 },				//	o' => o~
    { utf_o2,	utf_o4 },				//	o` => o~
    { utf_o3,	utf_o4 },				//	o? => o~
    { utf_o4,	utf_o, '4' },			//	o~ => ox
    { utf_o5,	utf_o4 },				//	o. => o~
    
    { utf_o6,	utf_o64 },				//	o^ => o^~
    { utf_o61,	utf_o64 },				//	o^' => o^~
    { utf_o62,	utf_o64 },				//	o^` => o^~
    { utf_o63,	utf_o64 },				//	o^? => o^~
    { utf_o64,	utf_o6, '4' },		//	o^~ => o^x
    { utf_o65,	utf_o64 },				//	o^. => o^~
    
    { utf_o7,	utf_o74 },				//	o+ => o+~
    { utf_o71,	utf_o74 },				//	o+' => o+~
    { utf_o72,	utf_o74 },				//	o+` => o+~
    { utf_o73,	utf_o74 },				//	o+? => o+~
    { utf_o74,	utf_o7, '4' },		//	o+~ => o+x
    { utf_o75,	utf_o74 },				//	o+. => o+~
    
    { utf_u,	utf_u4 },				//	u => u~
    { utf_u1,	utf_u4 },				//	u' => u~
    { utf_u2,	utf_u4 },				//	u` => u~
    { utf_u3,	utf_u4 },				//	u? => u~
    { utf_u4,	utf_u, '4' },			//	u~ => ux
    { utf_u5,	utf_u4 },				//	u. => u~
    
    { utf_u7,	utf_u74 },				//	u+ => u+~
    { utf_u71,	utf_u74 },				//	u+' => u+~
    { utf_u72,	utf_u74 },				//	u+` => u+~
    { utf_u73,	utf_u74 },				//	u+? => u+~
    { utf_u74,	utf_u7, '4' },		//	u+~ => u+x
    { utf_u75,	utf_u74 },				//	u+. => u+~
    
    { utf_i,	utf_i4 },				//	i => i~
    { utf_i1,	utf_i4 },				//	i' => i~
    { utf_i2,	utf_i4 },				//	i` => i~
    { utf_i3,	utf_i4 },				//	i? => i~
    { utf_i4,	utf_i, '4' },			//	i~ => ix
    { utf_i5,	utf_i4 },				//	i. => i~
    
    { utf_y,	utf_y4 },				//	y => Y~
    { utf_y1,	utf_y4 },				//	y' => y~
    { utf_y2,	utf_y4 },				//	y` => y~
    { utf_y3,	utf_y4 },				//	y? => y~
    { utf_y4,	utf_y, '4' },			//	y~ => yx
    { utf_y5,	utf_y4 },				//	y. => y~
    { 0 }
};
/*----------------------------------------------------------------------------*/
vietcode_t code_5[] =
{
    { utf_A,	utf_A5 },				//	A => A.
    { utf_A1,	utf_A5 },				//	A' => A.
    { utf_A2,	utf_A5 },				//	A` => A.
    { utf_A3,	utf_A5 },				//	A? => A.
    { utf_A4,	utf_A5 },				//	A~ => A.
    { utf_A5,	utf_A, '5' },			//	A. => AJ
    
    { utf_A6,	utf_A65 },				//	A^ => A^.
    { utf_A61,	utf_A65 },				//	A^' => A^.
    { utf_A62,	utf_A65 },				//	A^` => A^.
    { utf_A63,	utf_A65 },				//	A^? => A^.
    { utf_A64,	utf_A65 },				//	A^~ => A^.
    { utf_A65,	utf_A6, '5' },		//	A^. => A^J
    
    { utf_A8,	utf_A85 },				//	A( => A(.
    { utf_A81,	utf_A85 },				//	A(' => A(.
    { utf_A82,	utf_A85 },				//	A(` => A(.
    { utf_A83,	utf_A85 },				//	A(? => A(.
    { utf_A84,	utf_A85 },				//	A(~ => A(.
    { utf_A85,	utf_A8, '5' },		//	A(. => A(J
    
    { utf_E,	utf_E5 },				//	E => E.
    { utf_E1,	utf_E5 },				//	E' => E.
    { utf_E2,	utf_E5 },				//	E` => E.
    { utf_E3,	utf_E5 },				//	E? => E.
    { utf_E4,	utf_E5 },				//	E~ => E.
    { utf_E5,	utf_E, '5' },			//	E. => EJ
    
    { utf_E6,	utf_E65 },				//	E^ => E^.
    { utf_E61,	utf_E65 },				//	E^' => E^.
    { utf_E62,	utf_E65 },				//	E^` => E^.
    { utf_E63,	utf_E65 },				//	E^? => E^.
    { utf_E64,	utf_E65 },				//	E^~ => E^.
    { utf_E65,	utf_E6, '5' },		//	E^. => E^J
    
    { utf_O,	utf_O5 },				//	O => O.
    { utf_O1,	utf_O5 },				//	O' => O.
    { utf_O2,	utf_O5 },				//	O` => O.
    { utf_O3,	utf_O5 },				//	O? => O.
    { utf_O4,	utf_O5 },				//	O~ => O.
    { utf_O5,	utf_O, '5' },			//	O. => OJ
    
    { utf_O6,	utf_O65 },				//	O^ => O^.
    { utf_O61,	utf_O65 },				//	O^' => O^.
    { utf_O62,	utf_O65 },				//	O^` => O^.
    { utf_O63,	utf_O65 },				//	O^? => O^.
    { utf_O64,	utf_O65 },				//	O^~ => O^.
    { utf_O65,	utf_O6, '5' },		//	O^. => O^J
    
    { utf_O7,	utf_O75 },				//	O+ => O+.
    { utf_O71,	utf_O75 },				//	O+' => O+.
    { utf_O72,	utf_O75 },				//	O+` => O+.
    { utf_O73,	utf_O75 },				//	O+? => O+.
    { utf_O74,	utf_O75 },				//	O+~ => O+.
    { utf_O75,	utf_O7, '5' },		//	O+. => O+J
    
    { utf_U,	utf_U5 },				//	U => U.
    { utf_U1,	utf_U5 },				//	U' => U.
    { utf_U2,	utf_U5 },				//	U` => U.
    { utf_U3,	utf_U5 },				//	U? => U.
    { utf_U4,	utf_U5 },				//	U~ => U.
    { utf_U5,	utf_U, '5' },			//	U. => UJ
    
    { utf_U7,	utf_U75 },				//	U+ => U+.
    { utf_U71,	utf_U75 },				//	U+' => U+.
    { utf_U72,	utf_U75 },				//	U+` => U+.
    { utf_U73,	utf_U75 },				//	U+? => U+.
    { utf_U74,	utf_U75 },				//	U+~ => U+.
    { utf_U75,	utf_U7, '5' },		//	U+. => U+J
    
    { utf_I,	utf_I5 },				//	I => I.
    { utf_I1,	utf_I5 },				//	I' => I.
    { utf_I2,	utf_I5 },				//	I` => I.
    { utf_I3,	utf_I5 },				//	I? => I.
    { utf_I4,	utf_I5 },				//	I~ => I.
    { utf_I5,	utf_I, '5' },			//	I. => IJ
    
    { utf_Y,	utf_Y5 },				//	Y => Y.
    { utf_Y1,	utf_Y5 },				//	Y' => Y.
    { utf_Y2,	utf_Y5 },				//	Y` => Y.
    { utf_Y3,	utf_Y5 },				//	Y? => Y.
    { utf_Y4,	utf_Y5 },				//	Y~ => Y.
    { utf_Y5,	utf_Y, '5' },			//	Y. => YJ
    
    { utf_a,	utf_a5 },				//	a => a.
    { utf_a1,	utf_a5 },				//	a' => a.
    { utf_a2,	utf_a5 },				//	a` => a.
    { utf_a3,	utf_a5 },				//	a? => a.
    { utf_a4,	utf_a5 },				//	a~ => a.
    { utf_a5,	utf_a, '5' },			//	a. => aj
    
    { utf_a6,	utf_a65 },				//	a^ => a^.
    { utf_a61,	utf_a65 },				//	a^' => a^.
    { utf_a62,	utf_a65 },				//	a^` => a^.
    { utf_a63,	utf_a65 },				//	a^? => a^.
    { utf_a64,	utf_a65 },				//	a^~ => a^.
    { utf_a65,	utf_a6, '5' },		//	a^. => a^j
    
    { utf_a8,	utf_a85 },				//	a( => a(.
    { utf_a81,	utf_a85 },				//	a(' => a(.
    { utf_a82,	utf_a85 },				//	a(` => a(.
    { utf_a83,	utf_a85 },				//	a(? => a(.
    { utf_a84,	utf_a85 },				//	a(~ => a(.
    { utf_a85,	utf_a8, '5' },		//	a(. => a(j
    
    { utf_e,	utf_e5 },				//	e => e.
    { utf_e1,	utf_e5 },				//	e' => e.
    { utf_e2,	utf_e5 },				//	e` => e.
    { utf_e3,	utf_e5 },				//	e? => e.
    { utf_e4,	utf_e5 },				//	e~ => e.
    { utf_e5,	utf_e, '5' },			//	e. => ej
    
    { utf_e6,	utf_e65 },				//	e^ => e^.
    { utf_e61,	utf_e65 },				//	e^' => e^.
    { utf_e62,	utf_e65 },				//	e^` => e^.
    { utf_e63,	utf_e65 },				//	e^? => e^.
    { utf_e64,	utf_e65 },				//	e^~ => e^.
    { utf_e65,	utf_e6, '5' },		//	e^. => e^j
    
    { utf_o,	utf_o5 },				//	o => o.
    { utf_o1,	utf_o5 },				//	o' => o.
    { utf_o2,	utf_o5 },				//	o` => o.
    { utf_o3,	utf_o5 },				//	o? => o.
    { utf_o4,	utf_o5 },				//	o~ => o.
    { utf_o5,	utf_o, '5' },			//	o. => oj
    
    { utf_o6,	utf_o65 },				//	o^ => o^.
    { utf_o61,	utf_o65 },				//	o^' => o^.
    { utf_o62,	utf_o65 },				//	o^` => o^.
    { utf_o63,	utf_o65 },				//	o^? => o^.
    { utf_o64,	utf_o65 },				//	o^~ => o^.
    { utf_o65,	utf_o6, '5' },		//	o^. => o^j
    
    { utf_o7,	utf_o75 },				//	o+ => o+.
    { utf_o71,	utf_o75 },				//	o+' => o+.
    { utf_o72,	utf_o75 },				//	o+` => o+.
    { utf_o73,	utf_o75 },				//	o+? => o+.
    { utf_o74,	utf_o75 },				//	o+~ => o+.
    { utf_o75,	utf_o7, '5' },		//	o+. => o+j
    
    { utf_u,	utf_u5 },				//	u => u.
    { utf_u1,	utf_u5 },				//	u' => u.
    { utf_u2,	utf_u5 },				//	u` => u.
    { utf_u3,	utf_u5 },				//	u? => u.
    { utf_u4,	utf_u5 },				//	u~ => u.
    { utf_u5,	utf_u, '5' },			//	u. => uj
    
    { utf_u7,	utf_u75 },				//	u+ => u+.
    { utf_u71,	utf_u75 },				//	u+' => u+.
    { utf_u72,	utf_u75 },				//	u+` => u+.
    { utf_u73,	utf_u75 },				//	u+? => u+.
    { utf_u74,	utf_u75 },				//	u+~ => u+.
    { utf_u75,	utf_u7, '5' },		//	u+. => u+j
    
    { utf_i,	utf_i5 },				//	i => i.
    { utf_i1,	utf_i5 },				//	i' => i.
    { utf_i2,	utf_i5 },				//	i` => i.
    { utf_i3,	utf_i5 },				//	i? => i.
    { utf_i4,	utf_i5 },				//	i~ => i.
    { utf_i5,	utf_i, '5' },			//	i. => ij
    
    { utf_y,	utf_y5 },				//	y => Y.
    { utf_y1,	utf_y5 },				//	y' => y.
    { utf_y2,	utf_y5 },				//	y` => y.
    { utf_y3,	utf_y5 },				//	y? => y.
    { utf_y4,	utf_y5 },				//	y~ => y.
    { utf_y5,	utf_y, '5' },			//	y. => yj
    { 0 }
};


#endif /* vni_standard_h */
