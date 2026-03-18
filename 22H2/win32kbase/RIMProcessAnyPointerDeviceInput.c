/*
 * XREFs of RIMProcessAnyPointerDeviceInput @ 0x1C01A7080
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0004A38 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     IsPTPInputEnabled @ 0x1C00DEECA (IsPTPInputEnabled.c)
 *     ApiSetProcessHidRawInput @ 0x1C00E77E2 (ApiSetProcessHidRawInput.c)
 *     RIMAbConfigureDeviceArbitration @ 0x1C017D5A0 (RIMAbConfigureDeviceArbitration.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0192EA4 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01A8348 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimQueueApiSetHidRawInputAsyncWorkItem @ 0x1C01AC27C (rimQueueApiSetHidRawInputAsyncWorkItem.c)
 */

__int64 __fastcall RIMProcessAnyPointerDeviceInput(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax

  v2 = a2;
  v3 = *(_QWORD *)(a2 + 472);
  if ( !qword_1C02961E8 || (int)qword_1C02961E8() < 0 || !qword_1C02961F0 || !(unsigned int)qword_1C02961F0(v3) )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (_DWORD)gRimLog,
        4,
        1,
        10,
        (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
    goto LABEL_48;
  }
  if ( *(_DWORD *)(v3 + 24) == 7 && !(unsigned int)IsPTPInputEnabled(v5, a2, v6, v7) )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (_DWORD)gRimLog,
        4,
        1,
        11,
        (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
LABEL_48:
    InputTraceLogging::RIM::DropInput(v2);
    goto LABEL_49;
  }
  if ( (unsigned int)(*(_DWORD *)(v3 + 24) - 1) <= 3 && !*(_BYTE *)(SGDGetUserSessionState(v5, a2, v6, v7) + 368) )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (_DWORD)gRimLog,
        4,
        1,
        12,
        (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
    goto LABEL_48;
  }
  if ( !*(_DWORD *)(v3 + 156) )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (_DWORD)gRimLog,
        4,
        1,
        13,
        (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
    goto LABEL_48;
  }
  if ( !*(_DWORD *)(a1 + 464) )
    RIMAbConfigureDeviceArbitration(v5, a2, v6, v7);
  rimDoProcessAnyPointerDeviceInput(a1, v2);
LABEL_49:
  result = *(unsigned int *)(v2 + 184);
  if ( (result & 0x20000) != 0 )
  {
    if ( (result & 0x2000) != 0 )
      return (__int64)ApiSetProcessHidRawInput(v2, *(_QWORD *)(*(_QWORD *)(v2 + 456) + 24LL), *(_DWORD *)(v2 + 264));
    else
      return rimQueueApiSetHidRawInputAsyncWorkItem(a1, v2);
  }
  return result;
}
