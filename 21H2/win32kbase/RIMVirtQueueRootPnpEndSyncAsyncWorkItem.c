/*
 * XREFs of RIMVirtQueueRootPnpEndSyncAsyncWorkItem @ 0x1C01AB718
 * Callers:
 *     ?ivHandlePnpSyncPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE9D0 (-ivHandlePnpSyncPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?RIMAllocateAsyncPnpWorkItem@@YAPEAU_RIMAsyncPnpWorkItem@@PEAURawInputManagerObject@@PEAURawInputManagerDeviceObject@@PEAXPEAU_IVRIMDEV@@KPEAU_GUID@@4PEAU_UNICODE_STRING@@KW4tagASYNCPNP_TYPE@@@Z @ 0x1C01A9C34 (-RIMAllocateAsyncPnpWorkItem@@YAPEAU_RIMAsyncPnpWorkItem@@PEAURawInputManagerObject@@PEAURawInpu.c)
 *     ?RIMQueueAndSignalAsyncPnpWorkItem@@YAXPEAURawInputManagerObject@@PEAU_RIMAsyncPnpWorkItem@@@Z @ 0x1C01A9FF4 (-RIMQueueAndSignalAsyncPnpWorkItem@@YAXPEAURawInputManagerObject@@PEAU_RIMAsyncPnpWorkItem@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1C01AB894 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

void __fastcall RIMVirtQueueRootPnpEndSyncAsyncWorkItem(struct RawInputManagerObject *a1, __int64 a2)
{
  char v2; // di
  struct _RIMAsyncPnpWorkItem *v5; // rax
  int v6; // edx
  int v7; // r8d
  int v8; // [rsp+28h] [rbp-50h]
  int v9; // [rsp+38h] [rbp-40h]

  v2 = 0;
  v5 = (struct _RIMAsyncPnpWorkItem *)RIMAllocateAsyncPnpWorkItem(
                                        a1,
                                        0LL,
                                        0LL,
                                        0LL,
                                        0,
                                        0LL,
                                        0LL,
                                        (PCUNICODE_STRING)a2,
                                        0,
                                        4);
  if ( v5 )
  {
    RIMQueueAndSignalAsyncPnpWorkItem(a1, v5);
  }
  else
  {
    v2 = 23;
    LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        49,
        4,
        v8,
        49,
        v9,
        *((_QWORD *)a1 + 9),
        *((_QWORD *)a1 + 4),
        *((_QWORD *)a1 + 5),
        *((_DWORD *)a1 + 21),
        *(_QWORD *)(a2 + 8),
        23);
    }
  }
  LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      (_DWORD)gRimLog,
      4,
      1,
      50,
      (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
      v2);
  }
}
