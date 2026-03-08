/*
 * XREFs of RtlBeginReadTickLock @ 0x140236FBC
 * Callers:
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140236F18 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KiComputeThreadAffinity @ 0x140236FD4 (KiComputeThreadAffinity.c)
 *     RtlGetMultiTimePrecise @ 0x1402F9390 (RtlGetMultiTimePrecise.c)
 *     KiUpdateTimeAssist @ 0x1403C9BA8 (KiUpdateTimeAssist.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x140458CC2 (KeCpuSetQueryUnparkRecommendation.c)
 *     KiComputeCpuSetAffinityMask @ 0x140574068 (KiComputeCpuSetAffinityMask.c)
 *     KeQueryCpuSetInformation @ 0x14084EA1C (KeQueryCpuSetInformation.c)
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
