/*
 * XREFs of safe_cast_fnid_to_PTOOLTIPWND @ 0x1C001C188
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00188F0 (xxxTrackMouseMove.c)
 *     _SetDoubleClickTime @ 0x1C001C0AC (_SetDoubleClickTime.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00B6B88 (xxxCancelMouseMoveTracking.c)
 *     xxxProcessEventMessage @ 0x1C0125270 (xxxProcessEventMessage.c)
 *     ?xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z @ 0x1C013D59C (-xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall safe_cast_fnid_to_PTOOLTIPWND(__int64 a1)
{
  __int64 v2; // rax
  __int16 v3; // cx

  if ( !a1 )
    return 0LL;
  if ( _bittest16((const signed __int16 *)(*(_QWORD *)(a1 + 40) + 42LL), 0xCu) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 889LL);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_WORD *)(v2 + 42);
  if ( (v3 & 0x1000) != 0 || (v3 & 0x2FFF) != 0x2B6 )
    return 0LL;
  if ( *(_DWORD *)(v2 + 248) )
    return *(_QWORD *)(a1 + 280);
  return *(_QWORD *)(v2 + 296);
}
