/*
 * XREFs of rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1C0186EA0
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0187C10 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C0186CF0 (rimAbIsPointInGlobalPenDeadzone.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDdd @ 0x1C018918C (WPP_RECORDER_AND_TRACE_SF_dDdd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByGlobalPenDeadzone(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int IsPointInGlobalPenDeadzone; // edi
  char v7; // bl
  int v8; // edx
  int v9; // r8d

  IsPointInGlobalPenDeadzone = 0;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v7 = 1;
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) <= 3 )
  {
    IsPointInGlobalPenDeadzone = rimAbIsPointInGlobalPenDeadzone(a1, a2 + 156, a3);
    if ( IsPointInGlobalPenDeadzone )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v7 = 0;
      }
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = v7;
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dDdd(WPP_GLOBAL_Control->AttachedDevice, v8, v9, (_DWORD)WPP_GLOBAL_Control);
      }
    }
  }
  return IsPointInGlobalPenDeadzone;
}
