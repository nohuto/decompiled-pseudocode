/*
 * XREFs of RtlpHpSegPageRangeSplit @ 0x1405951D4
 * Callers:
 *     RtlpHpSegLargeRangeAllocate @ 0x14037DD0C (RtlpHpSegLargeRangeAllocate.c)
 * Callees:
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x140315640 (RtlpHpSegPageRangeCountCommittedPages.c)
 */

unsigned __int64 __fastcall RtlpHpSegPageRangeSplit(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ecx
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  int v7; // ecx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  __int16 v10; // ax

  v3 = *(unsigned __int8 *)(a2 + 31);
  v5 = a3;
  if ( v3 == a3 )
    return 0LL;
  v7 = v3 - a3;
  v8 = (unsigned __int8)v7;
  v9 = 32LL * (unsigned int)(v7 - 1);
  v6 = a2 + 32 * v5;
  *(_BYTE *)(v6 + 24) |= 2u;
  *(_BYTE *)(v9 + v6 + 31) = v8 - 1;
  *(_BYTE *)(v6 + 31) = v8;
  v10 = RtlpHpSegPageRangeCountCommittedPages(v9, v6, v8);
  *(_DWORD *)v6 = -857879331;
  *(_WORD *)(v6 + 28) = ~v10;
  *(_BYTE *)(32LL * (unsigned int)(v5 - 1) + a2 + 31) = v5 - 1;
  *(_BYTE *)(a2 + 31) = v5;
  *(_WORD *)(a2 + 28) = ~(*(_WORD *)(v6 + 28) - *(_WORD *)(a2 + 28));
  return v6;
}
