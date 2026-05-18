/*
 * XREFs of sub_1800206C4 @ 0x1800206C4
 * Callers:
 *     sub_180024B60 @ 0x180024B60 (sub_180024B60.c)
 *     sub_180026F44 @ 0x180026F44 (sub_180026F44.c)
 *     sub_180062BC4 @ 0x180062BC4 (sub_180062BC4.c)
 *     sub_180078BF4 @ 0x180078BF4 (sub_180078BF4.c)
 *     sub_1800BB10C @ 0x1800BB10C (sub_1800BB10C.c)
 *     sub_1800CA8A4 @ 0x1800CA8A4 (sub_1800CA8A4.c)
 *     sub_1800D8398 @ 0x1800D8398 (sub_1800D8398.c)
 *     sub_1800DC1B8 @ 0x1800DC1B8 (sub_1800DC1B8.c)
 *     sub_18010DF40 @ 0x18010DF40 (sub_18010DF40.c)
 * Callees:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 *__fastcall sub_1800206C4(__int64 *a1, int a2)
{
  unsigned int v2; // r8d
  _BYTE *v3; // r9
  unsigned int v5; // r8d
  _BYTE *v6; // rdi
  void *v7; // rsi
  _BYTE v9[3]; // [rsp+3Dh] [rbp-1Bh] BYREF

  v2 = a2;
  v3 = v9;
  if ( a2 >= 0 )
  {
    do
    {
      *--v3 = v2 % 0xA + 48;
      v2 /= 0xAu;
    }
    while ( v2 );
  }
  else
  {
    v5 = -a2;
    do
    {
      *--v3 = v5 % 0xA + 48;
      v5 /= 0xAu;
    }
    while ( v5 );
    *--v3 = 45;
  }
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  if ( v3 != v9 )
  {
    v6 = (_BYTE *)(v9 - v3);
    if ( (unsigned __int64)(v9 - v3) > 0xF )
    {
      sub_18000FB34(a1, v9 - v3, 0LL, v3);
    }
    else
    {
      v7 = a1;
      if ( (unsigned __int64)a1[3] >= 0x10 )
        v7 = (void *)*a1;
      a1[2] = (__int64)v6;
      memmove(v7, v3, v9 - v3);
      *((_BYTE *)v7 + (_QWORD)v6) = 0;
    }
  }
  return a1;
}
