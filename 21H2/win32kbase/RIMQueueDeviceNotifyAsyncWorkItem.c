/*
 * XREFs of RIMQueueDeviceNotifyAsyncWorkItem @ 0x1C01AA8A8
 * Callers:
 *     RIMDeviceNotifyUsingAsyncPnpWorkNotification @ 0x1C01AA4F8 (RIMDeviceNotifyUsingAsyncPnpWorkNotification.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?RIMAllocateAsyncPnpWorkItem@@YAPEAU_RIMAsyncPnpWorkItem@@PEAURawInputManagerObject@@PEAURawInputManagerDeviceObject@@PEAXPEAU_IVRIMDEV@@KPEAU_GUID@@4PEAU_UNICODE_STRING@@KW4tagASYNCPNP_TYPE@@@Z @ 0x1C01A9C34 (-RIMAllocateAsyncPnpWorkItem@@YAPEAU_RIMAsyncPnpWorkItem@@PEAURawInputManagerObject@@PEAURawInpu.c)
 *     ?RIMQueueAndSignalAsyncPnpWorkItem@@YAXPEAURawInputManagerObject@@PEAU_RIMAsyncPnpWorkItem@@@Z @ 0x1C01A9FF4 (-RIMQueueAndSignalAsyncPnpWorkItem@@YAXPEAURawInputManagerObject@@PEAU_RIMAsyncPnpWorkItem@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1C01AB894 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

__int64 __fastcall RIMQueueDeviceNotifyAsyncWorkItem(struct RawInputManagerObject *a1, __int64 a2, _OWORD *a3)
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
                                        (void *)a2,
                                        0LL,
                                        0LL,
                                        *(unsigned __int8 *)(a2 + 136),
                                        0LL,
                                        a3,
                                        0LL,
                                        0,
                                        1);
  if ( v6 )
  {
    RIMQueueAndSignalAsyncPnpWorkItem(a1, v6);
  }
  else
  {
    v3 = -1073741801;
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        25,
        4,
        v10,
        25,
        v11,
        *((_QWORD *)a1 + 9),
        *((_QWORD *)a1 + 4),
        *((_QWORD *)a1 + 5),
        *((_DWORD *)a1 + 21),
        *(_QWORD *)(a2 + 304),
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
      26,
      (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
      v3);
  }
  return v3;
}
