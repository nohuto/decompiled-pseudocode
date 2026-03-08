/*
 * XREFs of RIMHidValidExclusive @ 0x1C01BF6A0
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C00C7510 (RIMDirectStartStopDeviceRead.c)
 *     RIMHidTLCActive @ 0x1C01BF664 (RIMHidTLCActive.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMHidValidExclusive(__int64 a1)
{
  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 81);
  if ( *(_DWORD *)(a1 + 36) < *(_DWORD *)(a1 + 40) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 82);
  return (unsigned int)(*(_DWORD *)(a1 + 36) - *(_DWORD *)(a1 + 40));
}
