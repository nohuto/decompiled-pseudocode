/*
 * XREFs of RIMHidValidExclusive @ 0x1C0191970
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C0176DF0 (RIMDirectStartStopDeviceRead.c)
 *     RIMHidTLCActive @ 0x1C0191934 (RIMHidTLCActive.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMHidValidExclusive(__int64 a1)
{
  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 81);
  if ( *(_DWORD *)(a1 + 36) < *(_DWORD *)(a1 + 40) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 82);
  return (unsigned int)(*(_DWORD *)(a1 + 36) - *(_DWORD *)(a1 + 40));
}
