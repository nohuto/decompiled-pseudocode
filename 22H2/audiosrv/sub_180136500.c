/*
 * XREFs of sub_180136500 @ 0x180136500
 * Callers:
 *     sub_180073264 @ 0x180073264 (sub_180073264.c)
 *     sub_1801363FC @ 0x1801363FC (sub_1801363FC.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800601FC @ 0x1800601FC (sub_1800601FC.c)
 *     sub_18006022C @ 0x18006022C (sub_18006022C.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     sub_180072E48 @ 0x180072E48 (sub_180072E48.c)
 *     sub_180134908 @ 0x180134908 (sub_180134908.c)
 *     sub_1801367E0 @ 0x1801367E0 (sub_1801367E0.c)
 *     sub_1801374C0 @ 0x1801374C0 (sub_1801374C0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180136500(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v6; // eax
  char *v7; // rbx
  unsigned int v8; // edi
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  char v12; // [rsp+38h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  char *v14; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0;
  v6 = sub_180134908(a1);
  if ( v6 < 0 )
    sub_18006D26C((int)retaddr, 1482, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v6);
  v11 = a1;
  v12 = 1;
  sub_18006022C(&v14);
  v7 = v14;
  if ( v14 )
  {
    sub_1800601FC((__int64)v14);
    sub_1801367E0(a1, a2, 0, (_DWORD)v7, (__int64)a3);
    sub_1801367E0(a1, a2, 1, (_DWORD)v7, (__int64)a3);
    sub_1801367E0(a1, a2, 2, (_DWORD)v7, (__int64)a3);
    sub_1801367E0(a1, a2, 3, (_DWORD)v7, (__int64)a3);
    sub_1801367E0(a1, a2, 4, (_DWORD)v7, (__int64)a3);
    sub_1801367E0(a1, a2, 5, (_DWORD)v7, (__int64)a3);
    v9 = sub_1801374C0(a1, a2, &v14);
    v8 = v9;
    if ( v9 >= 0 )
      v8 = 0;
    else
      sub_18004BD84((int)retaddr, 1504, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v9);
    v7 = v14;
  }
  else
  {
    v8 = -2147024882;
    sub_18004BD84((int)retaddr, 1490, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", -2147024882);
  }
  if ( v7 )
    sub_180033A70(v7);
  sub_180072E48((__int64)&v11);
  return v8;
}
