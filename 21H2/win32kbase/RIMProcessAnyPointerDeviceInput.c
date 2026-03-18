/*
 * XREFs of RIMProcessAnyPointerDeviceInput @ 0x1C01ADB64
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003B78 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsPTPInputEnabled @ 0x1C0148A78 (IsPTPInputEnabled.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C019A7B0 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01AEB68 (rimDoProcessAnyPointerDeviceInput.c)
 *     ApiSetEnsurePointerDeviceHasMonitor @ 0x1C020C530 (ApiSetEnsurePointerDeviceHasMonitor.c)
 *     ApiSetGetPenArbitrationType @ 0x1C020D508 (ApiSetGetPenArbitrationType.c)
 *     ApiSetProcessHidRawInput @ 0x1C020EF90 (ApiSetProcessHidRawInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall RIMProcessAnyPointerDeviceInput(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int HasMonitor; // eax
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  char result; // al
  int v10; // eax
  unsigned int PenArbitrationType; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8

  v2 = *(_QWORD *)(a2 + 472);
  HasMonitor = ApiSetEnsurePointerDeviceHasMonitor(v2);
  v8 = 0;
  if ( !HasMonitor )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        (_DWORD)gRimLog,
        4,
        1,
        10,
        (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
    }
LABEL_9:
    result = InputTraceLogging::RIM::DropInput(a2);
    goto LABEL_45;
  }
  v10 = *(_DWORD *)(v2 + 24);
  if ( v10 == 7 )
  {
    if ( !(unsigned int)IsPTPInputEnabled() )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v6) = v8;
      }
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v6,
          v7,
          (_DWORD)gRimLog,
          4,
          1,
          11,
          (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
      }
      goto LABEL_9;
    }
  }
  else if ( (unsigned int)(v10 - 1) <= 3 && !RawInputManagerObject::bTouchInputAllowed )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        (_DWORD)gRimLog,
        4,
        1,
        12,
        (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
    }
    goto LABEL_9;
  }
  if ( *(_DWORD *)(v2 + 156) == v8 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v6) = v8;
    }
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        (_DWORD)gRimLog,
        4,
        1,
        13,
        (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
    }
    goto LABEL_9;
  }
  if ( *(_DWORD *)(a1 + 464) == v8 )
  {
    PenArbitrationType = ApiSetGetPenArbitrationType();
    if ( PenArbitrationType < 4 )
      gDeviceArbitrationType = PenArbitrationType;
    if ( gDeviceArbitrationType >= 4u )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
  }
  result = rimDoProcessAnyPointerDeviceInput(a1, a2);
LABEL_45:
  if ( (*(_DWORD *)(a2 + 184) & 0x20000) != 0 )
    return ApiSetProcessHidRawInput(a2);
  return result;
}
