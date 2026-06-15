/*
 * XREFs of sub_18010BDE8 @ 0x18010BDE8
 * Callers:
 *     sub_18010E7A8 @ 0x18010E7A8 (sub_18010E7A8.c)
 * Callees:
 *     memcmp @ 0x180074433 (memcmp.c)
 */

_QWORD *__fastcall sub_18010BDE8(__int64 *a1, _QWORD *a2, __int128 *a3)
{
  __int64 *v3; // r15
  __int64 *v6; // rsi
  __int64 *v7; // rbx
  __int64 *v8; // rdi
  __int128 v9; // xmm1
  _QWORD *result; // rax
  __int128 Buf2; // [rsp+20h] [rbp-30h] BYREF
  __int128 Buf1; // [rsp+30h] [rbp-20h] BYREF
  __int128 v13; // [rsp+40h] [rbp-10h] BYREF

  v3 = (__int64 *)*a1;
  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8);
  v8 = v7;
  if ( !*((_BYTE *)v7 + 25) )
  {
    Buf2 = *a3;
    do
    {
      Buf1 = *((_OWORD *)v8 + 2);
      if ( memcmp(&Buf1, &Buf2, 0x10uLL) >= 0 )
      {
        if ( *((_BYTE *)v6 + 25) )
        {
          v9 = *a3;
          Buf1 = *((_OWORD *)v8 + 2);
          v13 = v9;
          if ( memcmp(&v13, &Buf1, 0x10uLL) < 0 )
            v6 = v8;
        }
        v3 = v8;
        v8 = (__int64 *)*v8;
      }
      else
      {
        v8 = (__int64 *)v8[2];
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
  }
  if ( !*((_BYTE *)v6 + 25) )
    v7 = (__int64 *)*v6;
  if ( !*((_BYTE *)v7 + 25) )
  {
    Buf1 = *a3;
    do
    {
      v13 = *((_OWORD *)v7 + 2);
      if ( memcmp(&Buf1, &v13, 0x10uLL) >= 0 )
      {
        v7 = (__int64 *)v7[2];
      }
      else
      {
        v6 = v7;
        v7 = (__int64 *)*v7;
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  a2[1] = v6;
  result = a2;
  *a2 = v3;
  return result;
}
