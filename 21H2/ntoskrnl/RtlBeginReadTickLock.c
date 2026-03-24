/*
 * XREFs of RtlBeginReadTickLock @ 0x1402EBB60
 * Callers:
 *     KiComputeThreadAffinity @ 0x1402EBAA0 (KiComputeThreadAffinity.c)
 *     RtlGetMultiTimePrecise @ 0x1402ECFA0 (RtlGetMultiTimePrecise.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x14051C5B0 (KeCpuSetQueryUnparkRecommendation.c)
 *     KiComputeCpuSetAffinityMask @ 0x14051D128 (KiComputeCpuSetAffinityMask.c)
 *     KeQueryCpuSetInformation @ 0x1407C7088 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBeginReadTickLock(__int64 *a1)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = *a1;
    if ( (*a1 & 1) == 0 )
      break;
    _mm_pause();
  }
  return result;
}
