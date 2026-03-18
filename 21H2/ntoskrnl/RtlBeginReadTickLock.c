/*
 * XREFs of RtlBeginReadTickLock @ 0x140292B8C
 * Callers:
 *     KiUpdateTimeAssist @ 0x14020F07C (KiUpdateTimeAssist.c)
 *     RtlGetMultiTimePrecise @ 0x1402622C0 (RtlGetMultiTimePrecise.c)
 *     KiComputeThreadAffinity @ 0x140292884 (KiComputeThreadAffinity.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x1405723EC (KeCpuSetQueryUnparkRecommendation.c)
 *     KiComputeCpuSetAffinityMask @ 0x14057303C (KiComputeCpuSetAffinityMask.c)
 *     KeQueryCpuSetInformation @ 0x14085634C (KeQueryCpuSetInformation.c)
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
