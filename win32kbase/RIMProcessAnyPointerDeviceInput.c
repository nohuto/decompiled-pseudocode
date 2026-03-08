/*
 * XREFs of RIMProcessAnyPointerDeviceInput @ 0x1C01D517C
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003AE4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     Feature_RIMUserCritOpt__private_ReportDeviceUsage @ 0x1C00DF02C (Feature_RIMUserCritOpt__private_ReportDeviceUsage.c)
 *     IsPTPInputEnabled @ 0x1C00EDB2C (IsPTPInputEnabled.c)
 *     ApiSetProcessHidRawInput @ 0x1C00F626A (ApiSetProcessHidRawInput.c)
 *     RIMAbConfigureDeviceArbitration @ 0x1C01AA500 (RIMAbConfigureDeviceArbitration.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C01C0BD4 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01D6420 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimQueueApiSetHidRawInputAsyncWorkItem @ 0x1C01DA354 (rimQueueApiSetHidRawInputAsyncWorkItem.c)
 *     ApiSetEnsurePointerDeviceHasMonitor @ 0x1C0243A14 (ApiSetEnsurePointerDeviceHasMonitor.c)
 */

char __fastcall RIMProcessAnyPointerDeviceInput(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char result; // al

  v2 = *(_QWORD *)(a2 + 472);
  if ( !(unsigned int)ApiSetEnsurePointerDeviceHasMonitor(v2) )
  {
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v7,
        (_DWORD)gRimLog,
        4,
        1,
        10,
        (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
    }
LABEL_10:
    result = InputTraceLogging::RIM::DropInput(a2);
    goto LABEL_46;
  }
  if ( *(_DWORD *)(v2 + 24) == 7 && !(unsigned int)IsPTPInputEnabled(v6, v5, v7, v8) )
  {
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v7,
        (_DWORD)gRimLog,
        4,
        1,
        11,
        (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
    }
    goto LABEL_10;
  }
  if ( (unsigned int)(*(_DWORD *)(v2 + 24) - 1) <= 3 && !*(_BYTE *)(SGDGetUserSessionState(v6, v5, v7, v8) + 368) )
  {
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v7,
        (_DWORD)gRimLog,
        4,
        1,
        12,
        (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
    }
    goto LABEL_10;
  }
  if ( !*(_DWORD *)(v2 + 156) )
  {
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v7,
        (_DWORD)gRimLog,
        4,
        1,
        13,
        (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
    }
    goto LABEL_10;
  }
  if ( !*(_DWORD *)(a1 + 464) )
    RIMAbConfigureDeviceArbitration(v6, v5, v7, v8);
  result = rimDoProcessAnyPointerDeviceInput(a1, a2);
LABEL_46:
  if ( (*(_DWORD *)(a2 + 184) & 0x20000) != 0 )
  {
    Feature_RIMUserCritOpt__private_ReportDeviceUsage();
    if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
      return (unsigned __int8)ApiSetProcessHidRawInput(
                                a2,
                                *(_QWORD *)(*(_QWORD *)(a2 + 456) + 24LL),
                                *(_DWORD *)(a2 + 264));
    else
      return rimQueueApiSetHidRawInputAsyncWorkItem(a1, a2);
  }
  return result;
}
