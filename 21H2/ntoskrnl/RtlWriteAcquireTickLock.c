/*
 * XREFs of RtlWriteAcquireTickLock @ 0x1402AB51C
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x1402AAC7C (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x1402AAD9C (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateTimeAssist @ 0x1402AB2E0 (KiUpdateTimeAssist.c)
 *     KiUpdateSystemTime @ 0x140397EA8 (KiUpdateSystemTime.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403B66BC (KiConfigureCpuSetSchedulingInformation.c)
 *     KeSetTagCpuSets @ 0x14051CFAC (KeSetTagCpuSets.c)
 *     KiCalibrateTimeAdjustment @ 0x140994B90 (KiCalibrateTimeAdjustment.c)
 *     KiCreateCpuSetForProcessor @ 0x14099E2CC (KiCreateCpuSetForProcessor.c)
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
