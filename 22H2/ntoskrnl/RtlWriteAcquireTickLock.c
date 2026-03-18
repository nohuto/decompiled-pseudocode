/*
 * XREFs of RtlWriteAcquireTickLock @ 0x1403C1080
 * Callers:
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403831E0 (KiConfigureCpuSetSchedulingInformation.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x14039D200 (KiModifySystemAllowedCpuSetsWithLock.c)
 *     KeCpuSetReportParkedProcessors @ 0x14039D3C4 (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateSystemTime @ 0x1403C0E98 (KiUpdateSystemTime.c)
 *     KiUpdateTimeAssist @ 0x1403CF158 (KiUpdateTimeAssist.c)
 *     KeSetTagCpuSets @ 0x140576504 (KeSetTagCpuSets.c)
 *     KiCreateCpuSetForProcessor @ 0x140A8D5D8 (KiCreateCpuSetForProcessor.c)
 *     KiCalibrateTimeAdjustment @ 0x140A9F000 (KiCalibrateTimeAdjustment.c)
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
