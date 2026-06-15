/*
 * XREFs of sub_1800649E8 @ 0x1800649E8
 * Callers:
 *     sub_180064944 @ 0x180064944 (sub_180064944.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180064A70 @ 0x180064A70 (sub_180064A70.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800649E8(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = sub_18006A18C(24LL, &unk_18019F848);
  v6 = v2;
  v3 = 0;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 16) = 1;
    *(_QWORD *)v2 = off_180148F88;
    *(_QWORD *)(v2 + 8) = off_180148F60;
  }
  else
  {
    v2 = 0LL;
  }
  v6 = v2;
  if ( v2 )
  {
    sub_180064A70(a1 + 920, v2);
  }
  else
  {
    v3 = -2147024882;
    sub_18004BD84(
      (int)retaddr,
      837,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      -2147024882);
  }
  sub_18000F708(&v6);
  return v3;
}
