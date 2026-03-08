/*
 * XREFs of KeZeroSinglePage @ 0x14041BBB0
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402DD950 (MiZeroCfgSystemWideBitmapWorker.c)
 *     ViGrowPoolAllocation @ 0x1405CD7B0 (ViGrowPoolAllocation.c)
 *     MiValidateSectionCreate @ 0x14069F890 (MiValidateSectionCreate.c)
 *     MxMarkActiveDriverBits @ 0x140B5F6B8 (MxMarkActiveDriverBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeZeroSinglePage(_OWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 128LL;
  v2 = 32LL;
  do
  {
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
    a1[3] = 0LL;
    a1 += 8;
    *(a1 - 4) = 0LL;
    *(a1 - 3) = 0LL;
    --v2;
    *(a1 - 2) = 0LL;
    *(a1 - 1) = 0LL;
  }
  while ( v2 );
  return result;
}
