/*
 * XREFs of safe_cast_fnid_to_PSBWND @ 0x1C01BC260
 * Callers:
 *     xxxEnableScrollBar @ 0x1C00D4CD0 (xxxEnableScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C022BCB4 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C022C2A0 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     xxxDoScrollMenu @ 0x1C022CC6C (xxxDoScrollMenu.c)
 *     xxxEndScroll @ 0x1C022CE90 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C022D18C (xxxSBTrackInit.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall safe_cast_fnid_to_PSBWND(__int64 a1)
{
  __int64 v2; // rax
  __int16 v3; // cx

  if ( !a1 )
    return 0LL;
  if ( _bittest16((const signed __int16 *)(*(_QWORD *)(a1 + 40) + 42LL), 0xCu) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 875);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_WORD *)(v2 + 42);
  if ( (v3 & 0x1000) != 0 || (v3 & 0x2FFF) != 0x29A )
    return 0LL;
  if ( *(_DWORD *)(v2 + 248) )
    return *(_QWORD *)(a1 + 280);
  return *(_QWORD *)(v2 + 296);
}
