/*
 * XREFs of RtlpHpSegFreeRangeInsert @ 0x14024E6D0
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x1402493A0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextCompact @ 0x1402CC380 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegContextReserve @ 0x14037596C (RtlpHpSegContextReserve.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x1403BEB28 (RtlpHpSegLargeRangeAllocate.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14024D3A0 (RtlRbInsertNodeEx.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x14024E860 (RtlpHpSegPageRangeComputeLargePageCost.c)
 */

unsigned __int64 __fastcall RtlpHpSegFreeRangeInsert(__int64 a1, unsigned __int64 a2, int a3)
{
  char v5; // al
  unsigned __int64 v6; // rdx
  bool v7; // cl
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rcx

  if ( !a3 && (*(_BYTE *)(a1 + 13) & 0x10) != 0 && *(unsigned __int8 *)(a2 + 31) == 256 - *(unsigned __int8 *)(a1 + 10) )
  {
    result = a2 & *(_QWORD *)a1;
    *(_DWORD *)a2 = -857879297;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
      v5 = RtlpHpSegPageRangeComputeLargePageCost(
             a1,
             (a2 & *(_QWORD *)a1) + ((__int64)(a2 - (a2 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)),
             *(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 8));
    else
      v5 = 4;
    *(_BYTE *)(a2 + 30) = v5;
    v6 = *(_QWORD *)(a1 + 96);
    if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
    {
      if ( !v6 )
      {
LABEL_8:
        v7 = 0;
        goto LABEL_9;
      }
      v6 ^= a1 + 96;
    }
    v7 = 0;
    if ( v6 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a2 + 28) >= *(_DWORD *)(v6 + 28) )
        {
          v9 = *(_QWORD *)(v6 + 8);
          if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_22;
            v9 ^= v6;
          }
          if ( !v9 )
          {
LABEL_22:
            v7 = 1;
            break;
          }
        }
        else
        {
          v9 = *(_QWORD *)v6;
          if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_8;
            v9 ^= v6;
          }
          if ( !v9 )
            goto LABEL_8;
        }
        v6 = v9;
      }
    }
LABEL_9:
    RtlRbInsertNodeEx((unsigned __int64 *)(a1 + 96), v6, v7, a2);
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16),
      (unsigned __int16)~*(_WORD *)(a2 + 28));
    return 0LL;
  }
  return result;
}
