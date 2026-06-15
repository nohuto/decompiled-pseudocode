/*
 * XREFs of sub_18006CDF4 @ 0x18006CDF4
 * Callers:
 *     sub_18006CF50 @ 0x18006CF50 (sub_18006CF50.c)
 *     sub_18006D2A4 @ 0x18006D2A4 (sub_18006D2A4.c)
 * Callees:
 *     sub_180034380 @ 0x180034380 (sub_180034380.c)
 *     sub_18006CEC4 @ 0x18006CEC4 (sub_18006CEC4.c)
 *     sub_1800B8BD4 @ 0x1800B8BD4 (sub_1800B8BD4.c)
 */

signed __int32 *__fastcall sub_18006CDF4(volatile signed __int32 *a1, signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  int v5; // esi
  __int64 v6; // rcx
  signed __int32 v7; // eax
  bool v8; // zf
  signed __int32 v9; // r9d
  signed __int32 v10; // edx
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    v5 = sub_1800B8BD4();
    sub_18006CEC4(v6, &v13, &v12);
    v7 = *a2;
    do
    {
      v8 = v12 == 0;
      v9 = v7;
      *a2 = v7;
      v10 = v7;
      if ( !v8 && (v7 & 2) == 0 )
      {
        v10 = v7 ^ ((unsigned __int16)v13 ^ (unsigned __int16)v7) & 0x9C1 | 2;
        *a2 = v10;
      }
      if ( (v7 & 4) == 0 )
      {
        v10 = ((unsigned __int16)v13 ^ (unsigned __int16)v10) & 0x400 ^ v10 | 4;
        *a2 = v10;
      }
      v7 = _InterlockedCompareExchange(a1, v10, v7);
    }
    while ( v9 != v7 );
    if ( (v9 & 4) == 0 )
      sub_180034380((__int64)&byte_18019E560, a1, 3, v5);
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v13 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
