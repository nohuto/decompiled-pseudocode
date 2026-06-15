/*
 * XREFs of sub_1801230A8 @ 0x1801230A8
 * Callers:
 *     sub_180059A8C @ 0x180059A8C (sub_180059A8C.c)
 * Callees:
 *     sub_1800273F8 @ 0x1800273F8 (sub_1800273F8.c)
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180059EF8 @ 0x180059EF8 (sub_180059EF8.c)
 */

__int64 __fastcall sub_1801230A8(__int64 a1, _OWORD *a2, int a3, __int64 a4)
{
  unsigned int v7; // ebx
  int v8; // edx
  int v9; // r9d
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]
  int v14; // [rsp+2Ch] [rbp-Ch]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  if ( (unsigned int)sub_1800273F8((__int64)&v12, a2) )
  {
    v10 = sub_180059EF8(a1, (__int64)&v12, a3, a4);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v9 = v10;
    v8 = 148;
  }
  else
  {
    v7 = -2147024882;
    v8 = 147;
    v9 = -2147024882;
  }
  sub_18004BD84((int)retaddr, v8, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", v9);
LABEL_7:
  sub_1800384A4(&v12);
  return v7;
}
