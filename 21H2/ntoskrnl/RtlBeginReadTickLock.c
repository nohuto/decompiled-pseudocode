/*
 * XREFs of RtlBeginReadTickLock @ 0x14029CEB0
 * Callers:
 *     KiComputeThreadAffinity @ 0x14029CDF0 (KiComputeThreadAffinity.c)
 *     RtlGetMultiTimePrecise @ 0x14029E2F0 (RtlGetMultiTimePrecise.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x14051C7F0 (KeCpuSetQueryUnparkRecommendation.c)
 *     KiComputeCpuSetAffinityMask @ 0x14051D368 (KiComputeCpuSetAffinityMask.c)
 *     KeQueryCpuSetInformation @ 0x1407C73A8 (KeQueryCpuSetInformation.c)
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
