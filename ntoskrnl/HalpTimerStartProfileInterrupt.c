/*
 * XREFs of HalpTimerStartProfileInterrupt @ 0x140508654
 * Callers:
 *     DefaultEnableMonitoring @ 0x14050A8D0 (DefaultEnableMonitoring.c)
 * Callees:
 *     HalpSetTimer @ 0x1402CBEE0 (HalpSetTimer.c)
 */

__int64 HalpTimerStartProfileInterrupt()
{
  int v0; // edx
  unsigned int Number; // r8d
  unsigned __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  if ( !HalpProfileTimer )
    return 3221225659LL;
  if ( (*(_DWORD *)(HalpProfileTimer + 184) & 0x80u) != 0 )
    return 3221225865LL;
  Number = KeGetPcr()->Prcb.Number;
  if ( (*(_DWORD *)(HalpProfileTimer + 224) & 1) == 0 && Number
    || (v0 = HalpSetTimer(HalpProfileTimer, 2, *(unsigned int *)(32LL * Number + HalpProfileData + 24) + 1LL, 1, &v3),
        v0 >= 0) )
  {
    HalpProfilingActive = 1;
  }
  return (unsigned int)v0;
}
