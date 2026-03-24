/*
 * XREFs of safe_cast_fnid_to_PSWITCHWND @ 0x1C01D42A0
 * Callers:
 *     xxxFreeWindow @ 0x1C007A720 (xxxFreeWindow.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F2620 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C01F3B6C (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F43B0 (xxxOldNextWindow.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall safe_cast_fnid_to_PSWITCHWND(__int64 a1)
{
  __int64 v2; // rdx
  __int16 v3; // ax

  if ( !a1 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( (*(_WORD *)(v2 + 42) & 0x1000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 1110);
    v2 = *(_QWORD *)(a1 + 40);
  }
  v3 = *(_WORD *)(v2 + 42);
  if ( (v3 & 0x1000) != 0 || (v3 & 0x2FFF) != 0x2A0 )
    return 0LL;
  if ( *(_DWORD *)(v2 + 252) )
    return *(_QWORD *)(a1 + 280);
  return *(_QWORD *)(v2 + 296);
}
