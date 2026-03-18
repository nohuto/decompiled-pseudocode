/*
 * XREFs of RIMResetPointerDevicePrimaryContact @ 0x1C01ADE28
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0187C10 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01ADFB4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMResetPointerDevicePrimaryContact(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 1016);
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 32) & 2) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v3, a3);
      v3 = *(_QWORD *)(a1 + 1016);
    }
    if ( (*(_DWORD *)(v3 + 32) & 8) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v3, a3);
      v3 = *(_QWORD *)(a1 + 1016);
    }
    *(_DWORD *)(v3 + 2420) &= ~0x4000000u;
    result = *(_QWORD *)(a1 + 1016);
    *(_DWORD *)(result + 32) &= ~8u;
    *(_QWORD *)(a1 + 1016) = 0LL;
  }
  return result;
}
