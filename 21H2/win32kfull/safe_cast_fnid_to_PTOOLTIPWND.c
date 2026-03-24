/*
 * XREFs of safe_cast_fnid_to_PTOOLTIPWND @ 0x1C0030A88
 * Callers:
 *     xxxTrackMouseMove @ 0x1C002D5C0 (xxxTrackMouseMove.c)
 *     xxxCancelMouseMoveTracking @ 0x1C002D9FC (xxxCancelMouseMoveTracking.c)
 *     xxxFreeWindow @ 0x1C007A7C0 (xxxFreeWindow.c)
 *     xxxProcessEventMessage @ 0x1C00C1918 (xxxProcessEventMessage.c)
 *     _SetDoubleClickTime @ 0x1C00DB5F0 (_SetDoubleClickTime.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall safe_cast_fnid_to_PTOOLTIPWND(__int64 a1)
{
  __int64 v2; // rdx
  __int16 v3; // ax

  if ( !a1 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( (*(_WORD *)(v2 + 42) & 0x1000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1111LL);
    v2 = *(_QWORD *)(a1 + 40);
  }
  v3 = *(_WORD *)(v2 + 42);
  if ( (v3 & 0x1000) != 0 || (v3 & 0x2FFF) != 0x2B6 )
    return 0LL;
  if ( *(_DWORD *)(v2 + 252) )
    return *(_QWORD *)(a1 + 280);
  return *(_QWORD *)(v2 + 296);
}
