/*
 * XREFs of sub_1801363FC @ 0x1801363FC
 * Callers:
 *     sub_1800086D8 @ 0x1800086D8 (sub_1800086D8.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180133BDC @ 0x180133BDC (sub_180133BDC.c)
 *     sub_180135100 @ 0x180135100 (sub_180135100.c)
 *     sub_180136500 @ 0x180136500 (sub_180136500.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801363FC(__int64 a1, char *a2)
{
  char v4; // si
  int v5; // eax
  unsigned int v6; // edi
  int v7; // edx
  _QWORD *i; // rbx
  _QWORD *v9; // rdx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  char v14; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v5 = sub_180135100(a1, (__int64 *)&v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    for ( i = (_QWORD *)v11; i != *((_QWORD **)&v11 + 1); i += 4 )
    {
      v14 = 0;
      v9 = i;
      if ( i[3] >= 8uLL )
        v9 = (_QWORD *)*i;
      v5 = sub_180136500(a1, v9, &v14);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 2021;
        goto LABEL_13;
      }
      if ( v4 || v14 )
        v4 = 1;
    }
    if ( a2 )
      *a2 = v4;
    v6 = 0;
  }
  else
  {
    v7 = 2015;
LABEL_13:
    sub_18004BD84((int)retaddr, v7, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v5);
  }
  if ( (_QWORD)v11 )
  {
    sub_180133BDC((__int64 *)v11, *((__int64 **)&v11 + 1));
    sub_1800472E0(v11, (v12 - v11) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  return v6;
}
