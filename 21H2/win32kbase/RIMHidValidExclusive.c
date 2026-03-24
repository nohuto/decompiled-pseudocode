/*
 * XREFs of RIMHidValidExclusive @ 0x1C00B5BD0
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C0053E80 (RIMDirectStartStopDeviceRead.c)
 *     RIMHidTLCActive @ 0x1C00557C4 (RIMHidTLCActive.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMHidValidExclusive(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // edx

  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 52LL);
  v2 = *(_DWORD *)(a1 + 36);
  v3 = *(_DWORD *)(a1 + 40);
  if ( v2 < v3 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 53LL);
    v2 = *(_DWORD *)(a1 + 36);
    v3 = *(_DWORD *)(a1 + 40);
  }
  return v2 - v3;
}
