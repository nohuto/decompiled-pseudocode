/*
 * XREFs of RIMQueueDeviceClassNotifyAsyncWorkItem @ 0x1C01AA71C
 * Callers:
 *     RIMDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C00456F8 (RIMDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?RIMAllocateAsyncPnpWorkItem@@YAPEAU_RIMAsyncPnpWorkItem@@PEAURawInputManagerObject@@PEAURawInputManagerDeviceObject@@PEAXPEAU_IVRIMDEV@@KPEAU_GUID@@4PEAU_UNICODE_STRING@@KW4tagASYNCPNP_TYPE@@@Z @ 0x1C01A9C34 (-RIMAllocateAsyncPnpWorkItem@@YAPEAU_RIMAsyncPnpWorkItem@@PEAURawInputManagerObject@@PEAURawInpu.c)
 *     ?RIMQueueAndSignalAsyncPnpWorkItem@@YAXPEAURawInputManagerObject@@PEAU_RIMAsyncPnpWorkItem@@@Z @ 0x1C01A9FF4 (-RIMQueueAndSignalAsyncPnpWorkItem@@YAXPEAURawInputManagerObject@@PEAU_RIMAsyncPnpWorkItem@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1C01AB894 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

__int64 __fastcall RIMQueueDeviceClassNotifyAsyncWorkItem(struct RawInputManagerObject *a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  struct _RIMAsyncPnpWorkItem *v6; // rax
  int v7; // edx
  int v8; // r8d
  int v10; // [rsp+28h] [rbp-50h]
  int v11; // [rsp+38h] [rbp-40h]

  v3 = 0;
  v6 = (struct _RIMAsyncPnpWorkItem *)RIMAllocateAsyncPnpWorkItem(
                                        a1,
                                        0LL,
                                        0LL,
                                        0LL,
                                        a2,
                                        (_OWORD *)(a3 + 20),
                                        (_OWORD *)(a3 + 4),
                                        *(PCUNICODE_STRING *)(a3 + 40),
                                        0,
                                        0);
  if ( v6 )
  {
    RIMQueueAndSignalAsyncPnpWorkItem(a1, v6);
  }
  else
  {
    v3 = -1073741801;
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        13,
        2,
        v10,
        13,
        v11,
        *((_QWORD *)a1 + 9),
        *((_QWORD *)a1 + 4),
        *((_QWORD *)a1 + 5),
        *((_DWORD *)a1 + 21),
        *(_QWORD *)(*(_QWORD *)(a3 + 40) + 8LL),
        23);
    }
  }
  LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      v8,
      (_DWORD)gRimLog,
      4,
      1,
      14,
      (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
      v3);
  }
  return v3;
}
