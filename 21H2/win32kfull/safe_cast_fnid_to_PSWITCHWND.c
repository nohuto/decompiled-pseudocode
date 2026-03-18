/*
 * XREFs of safe_cast_fnid_to_PSWITCHWND @ 0x1C01D0578
 * Callers:
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01ED460 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C01EE910 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01EF0A8 (xxxOldNextWindow.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall safe_cast_fnid_to_PSWITCHWND(__int64 a1)
{
  __int64 v2; // rdx
  __int16 v3; // ax

  if ( !a1 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( _bittest16((const signed __int16 *)(v2 + 42), 0xCu) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v2 = *(_QWORD *)(a1 + 40);
  }
  v3 = *(_WORD *)(v2 + 42);
  if ( (v3 & 0x1000) != 0 || (v3 & 0x2FFF) != 0x2A0 )
    return 0LL;
  if ( *(_DWORD *)(v2 + 248) )
    return *(_QWORD *)(a1 + 280);
  return *(_QWORD *)(v2 + 296);
}
