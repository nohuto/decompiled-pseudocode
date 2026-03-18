/*
 * XREFs of HalpTimerResetProfileAdjustment @ 0x140334110
 * Callers:
 *     HalpTimerNotifyProcessorFreeze @ 0x1403340D0 (HalpTimerNotifyProcessorFreeze.c)
 *     HalProcessorIdle @ 0x140419FC0 (HalProcessorIdle.c)
 *     HalCalibratePerformanceCounter @ 0x1404FE230 (HalCalibratePerformanceCounter.c)
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
