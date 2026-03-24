/*
 * XREFs of RtlWriteAcquireTickLock @ 0x14035F214
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x14035EDA0 (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateTimeAssist @ 0x14035EFD8 (KiUpdateTimeAssist.c)
 *     KeSetSystemAllowedCpuSets @ 0x14035F238 (KeSetSystemAllowedCpuSets.c)
 *     KiUpdateSystemTime @ 0x1403977A8 (KiUpdateSystemTime.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403B605C (KiConfigureCpuSetSchedulingInformation.c)
 *     KeSetTagCpuSets @ 0x14051CEEC (KeSetTagCpuSets.c)
 *     KiCalibrateTimeAdjustment @ 0x140995370 (KiCalibrateTimeAdjustment.c)
 *     KiCreateCpuSetForProcessor @ 0x14099D7FC (KiCreateCpuSetForProcessor.c)
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
