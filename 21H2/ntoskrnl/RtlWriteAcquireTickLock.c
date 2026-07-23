/*
 * XREFs of RtlWriteAcquireTickLock @ 0x14022965C
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x140228DBC (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x140228EDC (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateTimeAssist @ 0x140229420 (KiUpdateTimeAssist.c)
 *     KiUpdateSystemTime @ 0x140397FF8 (KiUpdateSystemTime.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403B682C (KiConfigureCpuSetSchedulingInformation.c)
 *     KeSetTagCpuSets @ 0x14051D1EC (KeSetTagCpuSets.c)
 *     KiCalibrateTimeAdjustment @ 0x140995B90 (KiCalibrateTimeAdjustment.c)
 *     KiCreateCpuSetForProcessor @ 0x14099F1FC (KiCreateCpuSetForProcessor.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlWriteAcquireTickLock(signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rtt

  _m_prefetchw(a1);
  result = *a1;
  while ( (result & 1) != 0 )
  {
    result = *a1;
LABEL_6:
    _mm_pause();
  }
  v2 = result;
  result = _InterlockedCompareExchange64(a1, result + 1, result);
  if ( v2 != result )
    goto LABEL_6;
  return result;
}
