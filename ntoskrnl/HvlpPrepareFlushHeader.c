/*
 * XREFs of HvlpPrepareFlushHeader @ 0x1403C6D38
 * Callers:
 *     HvlpFlushRangeListTb @ 0x1403C68E4 (HvlpFlushRangeListTb.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x1403C6AC8 (HvlpFastFlushAddressSpaceTb.c)
 *     KiFlushAddressSpaceTb @ 0x1403C6B40 (KiFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1405477B4 (HvlpSlowFlushAddressSpaceTb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpPrepareFlushHeader(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // r9d
  __int64 result; // rax
  unsigned __int64 v10; // rcx
  _BYTE *i; // r8
  unsigned __int64 v12; // rcx

  v6 = 0LL;
  v7 = a4 == 0 ? 4 : 0;
  v8 = v7 | 2;
  if ( a2 )
    v8 = v7;
  if ( a3 )
  {
    v10 = *(_QWORD *)(a3 + 8);
    if ( HvlpVirtualProcessorsIdentityMapped )
    {
      v6 = *(_QWORD *)(a3 + 8);
    }
    else
    {
      for ( i = &unk_140D24FA3; ; i += 4 )
      {
        if ( (v10 & 1) != 0 )
          v6 |= 1LL << *(i - 2);
        v12 = v10 >> 1;
        if ( !v12 )
          break;
        if ( (v12 & 1) != 0 )
          v6 |= 1LL << *i;
        v10 = v12 >> 1;
        if ( !v10 )
          break;
      }
    }
  }
  else
  {
    v8 |= 1u;
  }
  a1[2] = v6;
  result = v8;
  a1[1] = v8;
  *a1 = a2;
  return result;
}
