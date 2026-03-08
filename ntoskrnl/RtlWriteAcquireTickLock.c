/*
 * XREFs of RtlWriteAcquireTickLock @ 0x1403BB750
 * Callers:
 *     KiConfigureCpuSetSchedulingInformation @ 0x14037F6F0 (KiConfigureCpuSetSchedulingInformation.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x1403991C4 (KiModifySystemAllowedCpuSetsWithLock.c)
 *     KeCpuSetReportParkedProcessors @ 0x140399388 (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateSystemTime @ 0x1403BB568 (KiUpdateSystemTime.c)
 *     KiUpdateTimeAssist @ 0x1403C9BA8 (KiUpdateTimeAssist.c)
 *     KeSetTagCpuSets @ 0x140573EE8 (KeSetTagCpuSets.c)
 *     KiCreateCpuSetForProcessor @ 0x140A89FC8 (KiCreateCpuSetForProcessor.c)
 *     KiCalibrateTimeAdjustment @ 0x140A9BEC0 (KiCalibrateTimeAdjustment.c)
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
