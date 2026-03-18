/*
 * XREFs of KeZeroSinglePage @ 0x140423F40
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140347C78 (MiZeroCfgSystemWideBitmapWorker.c)
 *     ViGrowPoolAllocation @ 0x1405CFC60 (ViGrowPoolAllocation.c)
 *     MiValidateSectionCreate @ 0x1406ABE8C (MiValidateSectionCreate.c)
 *     MxMarkActiveDriverBits @ 0x140B629A8 (MxMarkActiveDriverBits.c)
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
