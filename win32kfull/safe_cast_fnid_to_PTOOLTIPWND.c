/*
 * XREFs of safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00F9CD8
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 *     xxxTrackMouseMove @ 0x1C00BD950 (xxxTrackMouseMove.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00EF010 (xxxCancelMouseMoveTracking.c)
 *     _SetDoubleClickTime @ 0x1C00F9C04 (_SetDoubleClickTime.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall safe_cast_fnid_to_PTOOLTIPWND(__int64 a1)
{
  __int64 v2; // rax
  __int16 v3; // cx

  if ( !a1 )
    return 0LL;
  if ( _bittest16((const signed __int16 *)(*(_QWORD *)(a1 + 40) + 42LL), 0xCu) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 878LL);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_WORD *)(v2 + 42);
  if ( (v3 & 0x1000) != 0 || (v3 & 0x2FFF) != 0x2B6 )
    return 0LL;
  if ( *(_DWORD *)(v2 + 248) )
    return *(_QWORD *)(a1 + 280);
  return *(_QWORD *)(v2 + 296);
}
