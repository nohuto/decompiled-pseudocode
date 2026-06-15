/*
 * XREFs of sub_18006D208 @ 0x18006D208
 * Callers:
 *     sub_180002B50 @ 0x180002B50 (sub_180002B50.c)
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     sub_180016E30 @ 0x180016E30 (sub_180016E30.c)
 *     sub_180029FD0 @ 0x180029FD0 (sub_180029FD0.c)
 *     sub_18002AD80 @ 0x18002AD80 (sub_18002AD80.c)
 *     sub_18002B930 @ 0x18002B930 (sub_18002B930.c)
 *     sub_18002F090 @ 0x18002F090 (sub_18002F090.c)
 *     sub_18002FD00 @ 0x18002FD00 (sub_18002FD00.c)
 *     sub_180033AB0 @ 0x180033AB0 (sub_180033AB0.c)
 *     sub_180033D50 @ 0x180033D50 (sub_180033D50.c)
 *     sub_180034650 @ 0x180034650 (sub_180034650.c)
 *     sub_180035080 @ 0x180035080 (sub_180035080.c)
 *     sub_1800357F0 @ 0x1800357F0 (sub_1800357F0.c)
 *     sub_180035BA0 @ 0x180035BA0 (sub_180035BA0.c)
 *     sub_180036FA0 @ 0x180036FA0 (sub_180036FA0.c)
 *     sub_1800447C0 @ 0x1800447C0 (sub_1800447C0.c)
 *     sub_1800449D0 @ 0x1800449D0 (sub_1800449D0.c)
 *     sub_180044A30 @ 0x180044A30 (sub_180044A30.c)
 *     sub_180045430 @ 0x180045430 (sub_180045430.c)
 *     sub_180046360 @ 0x180046360 (sub_180046360.c)
 *     sub_180046620 @ 0x180046620 (sub_180046620.c)
 *     sub_18004E954 @ 0x18004E954 (sub_18004E954.c)
 *     sub_18004EF00 @ 0x18004EF00 (sub_18004EF00.c)
 *     sub_18004F420 @ 0x18004F420 (sub_18004F420.c)
 *     sub_18004FEF0 @ 0x18004FEF0 (sub_18004FEF0.c)
 *     sub_180053BA0 @ 0x180053BA0 (sub_180053BA0.c)
 *     sub_1800688B0 @ 0x1800688B0 (sub_1800688B0.c)
 *     sub_180068910 @ 0x180068910 (sub_180068910.c)
 *     sub_180068970 @ 0x180068970 (sub_180068970.c)
 *     sub_180068A40 @ 0x180068A40 (sub_180068A40.c)
 *     sub_180068AA0 @ 0x180068AA0 (sub_180068AA0.c)
 *     sub_180068B00 @ 0x180068B00 (sub_180068B00.c)
 *     sub_180068F50 @ 0x180068F50 (sub_180068F50.c)
 *     sub_180068FB0 @ 0x180068FB0 (sub_180068FB0.c)
 *     sub_18006EBD8 @ 0x18006EBD8 (sub_18006EBD8.c)
 *     sub_180071A60 @ 0x180071A60 (sub_180071A60.c)
 *     sub_180071F10 @ 0x180071F10 (sub_180071F10.c)
 *     sub_1800CA4EC @ 0x1800CA4EC (sub_1800CA4EC.c)
 *     sub_180108150 @ 0x180108150 (sub_180108150.c)
 *     sub_18010D920 @ 0x18010D920 (sub_18010D920.c)
 *     sub_180112B20 @ 0x180112B20 (sub_180112B20.c)
 *     sub_1801212C0 @ 0x1801212C0 (sub_1801212C0.c)
 *     sub_18012D260 @ 0x18012D260 (sub_18012D260.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006D208(volatile signed __int32 *a1)
{
  signed __int32 v1; // r8d

  do
    v1 = *a1;
  while ( *a1 != 0x7FFFFFFF && v1 != _InterlockedCompareExchange(a1, v1 - 1, v1) );
  return (unsigned int)(v1 - 1);
}
