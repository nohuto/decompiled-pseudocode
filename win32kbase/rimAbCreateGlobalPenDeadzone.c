/*
 * XREFs of rimAbCreateGlobalPenDeadzone @ 0x1C01A84AC
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C01A9D04 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00052A0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_UNKNOWN **__fastcall rimAbCreateGlobalPenDeadzone(__int64 a1, _OWORD *a2, _OWORD *a3, __int64 a4)
{
  unsigned __int64 v7; // rdi
  int v8; // edx
  int v9; // r8d
  _UNKNOWN **result; // rax

  v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !*(_DWORD *)(SGDGetUserSessionState(0xFFFFF78000000004uLL, a2, a3, a4) + 436) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 114);
  *(_DWORD *)(a1 + 492) = 1;
  *(_DWORD *)(a1 + 704) = v7 + 250;
  *(_OWORD *)(a1 + 496) = *a2;
  *(_OWORD *)(a1 + 512) = a2[1];
  *(_OWORD *)(a1 + 528) = a2[2];
  *(_OWORD *)(a1 + 544) = a2[3];
  *(_OWORD *)(a1 + 560) = a2[4];
  *(_OWORD *)(a1 + 576) = a2[5];
  *(_OWORD *)(a1 + 592) = a2[6];
  *(_OWORD *)(a1 + 608) = *a3;
  *(_OWORD *)(a1 + 624) = a3[1];
  *(_OWORD *)(a1 + 640) = a3[2];
  *(_OWORD *)(a1 + 656) = a3[3];
  *(_OWORD *)(a1 + 672) = a3[4];
  *(_OWORD *)(a1 + 688) = a3[5];
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v8) = 0;
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_dd(
                          WPP_GLOBAL_Control->AttachedDevice,
                          v8,
                          v9,
                          (_DWORD)gRimLog,
                          4,
                          1,
                          10,
                          (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
                          *(_DWORD *)(a1 + 648),
                          *(_DWORD *)(a1 + 652));
  }
  return result;
}
