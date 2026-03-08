/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeSet @ 0x14058DEFC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 */

_BOOL8 PopCheckPowerSourceAfterRtcWakeSet()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  KeResetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted);
  v1[0] = 0LL;
  v1[1] = -1LL;
  return KeSetTimer2(
           (__int64)&PopCheckPowerSourceAfterRtcWakeTimer,
           -10000000LL * (unsigned int)PopCheckPowerSourceAfterRtcWakeTime,
           0LL,
           (__int64)v1);
}
