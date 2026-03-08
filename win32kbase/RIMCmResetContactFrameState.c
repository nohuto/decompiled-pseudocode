/*
 * XREFs of RIMCmResetContactFrameState @ 0x1C00F1AEA
 * Callers:
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01D5678 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimProcessPointerDeviceContact @ 0x1C01D9C8C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

void *__fastcall RIMCmResetContactFrameState(_DWORD *a1)
{
  if ( (a1[8] & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 532);
  a1[591] &= 0xFFFFFFF8;
  return memset(a1 + 592, 0, 0xF0uLL);
}
