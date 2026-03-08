/*
 * XREFs of rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1C01A89E4
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C01A98C0 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C01A8710 (rimAbIsPointInGlobalPenDeadzone.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDdd @ 0x1C01AB10C (WPP_RECORDER_AND_TRACE_SF_dDdd.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByGlobalPenDeadzone(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int IsPointInGlobalPenDeadzone; // edi
  __int64 v8; // r9
  char v9; // bl
  int v10; // edx
  int v11; // r8d

  IsPointInGlobalPenDeadzone = 0;
  if ( !*(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 436) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 167);
  v9 = 1;
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) <= 3 )
  {
    IsPointInGlobalPenDeadzone = rimAbIsPointInGlobalPenDeadzone(a1, a2 + 156, a3, v8);
    if ( IsPointInGlobalPenDeadzone )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v9 = 0;
      }
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = v9;
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dDdd(WPP_GLOBAL_Control->AttachedDevice, v10, v11, (_DWORD)WPP_GLOBAL_Control);
      }
    }
  }
  return IsPointInGlobalPenDeadzone;
}
