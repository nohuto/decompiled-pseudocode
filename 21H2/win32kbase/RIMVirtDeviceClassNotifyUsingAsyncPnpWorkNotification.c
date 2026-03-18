/*
 * XREFs of RIMVirtDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C01AACF0
 * Callers:
 *     ?ivHandlePnpCreatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE670 (-ivHandlePnpCreatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C0046ABC (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     RIMVirtQueueDeviceClassNotifyAsyncWorkItem @ 0x1C01AB3DC (RIMVirtQueueDeviceClassNotifyAsyncWorkItem.c)
 */

__int64 __fastcall RIMVirtDeviceClassNotifyUsingAsyncPnpWorkNotification(
        struct RawInputManagerObject *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  bool v5; // dl
  bool v6; // dl
  bool v7; // dl
  char v8; // al
  int v9; // edx
  int v10; // r8d

  v3 = a3;
  v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      33,
      (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids);
  }
  v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_S(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      34,
      (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
      *(_QWORD *)(v3 + 8));
  }
  v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      35,
      (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids);
  }
  v8 = RIMVirtQueueDeviceClassNotifyAsyncWorkItem(a1);
  LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v10,
      (_DWORD)gRimLog,
      4,
      1,
      36,
      (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
      v8);
  }
  return 0LL;
}
