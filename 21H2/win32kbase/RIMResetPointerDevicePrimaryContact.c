/*
 * XREFs of RIMResetPointerDevicePrimaryContact @ 0x1C0178774
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C015999C (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C017896C (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMResetPointerDevicePrimaryContact(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 32) & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1523);
      v1 = *(_QWORD *)(a1 + 960);
    }
    result = *(unsigned int *)(v1 + 32);
    if ( (result & 8) == 0 )
    {
      result = MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1524);
      v1 = *(_QWORD *)(a1 + 960);
    }
    *(_DWORD *)(v1 + 32) &= ~8u;
    *(_QWORD *)(a1 + 960) = 0LL;
  }
  return result;
}
