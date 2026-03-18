/*
 * XREFs of RtlWriteAcquireTickLock @ 0x14020F26C
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x14020E0AC (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x14020E1DC (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateTimeAssist @ 0x14020F07C (KiUpdateTimeAssist.c)
 *     KiUpdateSystemTime @ 0x1403A493C (KiUpdateSystemTime.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403C1214 (KiConfigureCpuSetSchedulingInformation.c)
 *     KeSetTagCpuSets @ 0x140572EC0 (KeSetTagCpuSets.c)
 *     KiCalibrateTimeAdjustment @ 0x140A48E70 (KiCalibrateTimeAdjustment.c)
 *     KiCreateCpuSetForProcessor @ 0x140A58F00 (KiCreateCpuSetForProcessor.c)
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
