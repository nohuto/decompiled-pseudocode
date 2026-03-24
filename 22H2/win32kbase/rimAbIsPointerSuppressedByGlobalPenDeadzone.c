/*
 * XREFs of rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1C0158C30
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C01598CC (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C01589FC (rimAbIsPointInGlobalPenDeadzone.c)
 *     WPP_RECORDER_SF_dDdd @ 0x1C015A89C (WPP_RECORDER_SF_dDdd.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByGlobalPenDeadzone(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int IsPointInGlobalPenDeadzone; // edi
  __int64 v7; // r8
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  __int128 v12; // [rsp+50h] [rbp-28h] BYREF

  IsPointInGlobalPenDeadzone = 0;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 163);
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) <= 3 )
  {
    v7 = *(_QWORD *)(a3 + 40);
    v12 = *(_OWORD *)(a2 + 176);
    IsPointInGlobalPenDeadzone = rimAbIsPointInGlobalPenDeadzone(a1, &v12, v7);
    if ( IsPointInGlobalPenDeadzone )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dDdd(*(_DWORD *)(a3 + 12), v8, v9, v10);
    }
  }
  return IsPointInGlobalPenDeadzone;
}
