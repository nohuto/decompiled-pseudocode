/*
 * XREFs of HalpTimerResetProfileAdjustment @ 0x1402C9D50
 * Callers:
 *     HalpTimerNotifyProcessorFreeze @ 0x1402C9D10 (HalpTimerNotifyProcessorFreeze.c)
 *     HalProcessorIdle @ 0x140411C30 (HalProcessorIdle.c)
 *     HalCalibratePerformanceCounter @ 0x1404FC150 (HalCalibratePerformanceCounter.c)
 * Callees:
 *     <none>
 */

__int64 HalpTimerResetProfileAdjustment()
{
  __int64 result; // rax
  __int16 v1; // [rsp+0h] [rbp-8h]

  _disable();
  result = v1 & 0x200;
  if ( HalpProfileData )
    *(_DWORD *)(32LL * KeGetPcr()->Prcb.Number + HalpProfileData + 20) = 0;
  if ( (v1 & 0x200) != 0 )
    _enable();
  return result;
}
