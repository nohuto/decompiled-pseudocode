/*
 * XREFs of rimIsPointerInputAllowed @ 0x1C00EF698
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003AE4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimIsPointerInputAllowed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( !*(_QWORD *)(a1 + 472) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 336);
  if ( !*(_BYTE *)(SGDGetUserSessionState(a1, a2, a3, a4) + 353)
    || (*(_DWORD *)(a1 + 184) & 0x2000) != 0
    || (*(_DWORD *)(*(_QWORD *)(a1 + 472) + 360LL) & 0x4000) != 0 )
  {
    return 1;
  }
  return v4;
}
