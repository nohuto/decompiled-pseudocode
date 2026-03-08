/*
 * XREFs of RtlpHpSegSubAllocate @ 0x1402E28AC
 * Callers:
 *     RtlpHpSegLfhAllocate @ 0x1402E2850 (RtlpHpSegLfhAllocate.c)
 *     RtlpHpSegVsAllocate @ 0x1402E2880 (RtlpHpSegVsAllocate.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x1402491F0 (RtlpHpSegAlloc.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x14024E860 (RtlpHpSegPageRangeComputeLargePageCost.c)
 */

__int64 __fastcall RtlpHpSegSubAllocate(__int64 a1, unsigned int a2, unsigned int a3, _DWORD *a4, _DWORD *a5)
{
  unsigned int v6; // eax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx

  v6 = a3 | 4;
  if ( a2 < 0x10000 )
    v6 = a3;
  v9 = RtlpHpSegAlloc(a1, a2, a2, 0LL, v6);
  *a4 = 0;
  v10 = v9;
  *a5 = 0;
  if ( v9 )
  {
    if ( (v11 = *(_QWORD *)(a1 + 40) >> 8, (RtlpHpLfhPerfFlags & 0x80u) != 0)
      && (unsigned __int8)v11 >= 2u
      && (unsigned __int8)v11 < 5u
      || (RtlpHpLfhPerfFlags & 0x100) != 0
      && (*(_BYTE *)(a1 + 13) & 7) != 0
      && (int)RtlpHpSegPageRangeComputeLargePageCost((_QWORD *)a1, v9, a2) <= 1 )
    {
      *a4 |= 1u;
    }
  }
  return v10;
}
