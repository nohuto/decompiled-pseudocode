/*
 * XREFs of RIMVirtQueueDeviceClassNotifyAsyncWorkItem @ 0x1C01AB3DC
 * Callers:
 *     RIMVirtDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C01AACF0 (RIMVirtDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?RIMAllocateAsyncPnpWorkItem@@YAPEAU_RIMAsyncPnpWorkItem@@PEAURawInputManagerObject@@PEAURawInputManagerDeviceObject@@PEAXPEAU_IVRIMDEV@@KPEAU_GUID@@4PEAU_UNICODE_STRING@@KW4tagASYNCPNP_TYPE@@@Z @ 0x1C01A9C34 (-RIMAllocateAsyncPnpWorkItem@@YAPEAU_RIMAsyncPnpWorkItem@@PEAURawInputManagerObject@@PEAURawInpu.c)
 *     ?RIMQueueAndSignalAsyncPnpWorkItem@@YAXPEAURawInputManagerObject@@PEAU_RIMAsyncPnpWorkItem@@@Z @ 0x1C01A9FF4 (-RIMQueueAndSignalAsyncPnpWorkItem@@YAXPEAURawInputManagerObject@@PEAU_RIMAsyncPnpWorkItem@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1C01AB894 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

__int64 __fastcall RIMVirtQueueDeviceClassNotifyAsyncWorkItem(
        struct RawInputManagerObject *a1,
        int a2,
        char *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  struct _RIMAsyncPnpWorkItem *v8; // rax
  int v9; // edx
  int v10; // r8d
  int v12; // [rsp+28h] [rbp-60h]
  int v13; // [rsp+38h] [rbp-50h]

  v4 = 0;
  v8 = (struct _RIMAsyncPnpWorkItem *)RIMAllocateAsyncPnpWorkItem(
                                        a1,
                                        0LL,
                                        (__int64)a3,
                                        a4,
                                        a2,
                                        0LL,
                                        0LL,
                                        (PCUNICODE_STRING)a4,
                                        0,
                                        2);
  if ( v8 )
  {
    RIMQueueAndSignalAsyncPnpWorkItem(a1, v8);
  }
  else
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_RIMVirtPnpQuickRelease__private_reporting,
      30688442LL,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_Vail_logged_traits,
      1,
      3);
    if ( a3 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        a3);
    v4 = -1073741801;
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        31,
        4,
        v12,
        31,
        v13,
        *((_QWORD *)a1 + 9),
        *((_QWORD *)a1 + 4),
        *((_QWORD *)a1 + 5),
        *((_DWORD *)a1 + 21),
        *(_QWORD *)(a4 + 8),
        23);
    }
  }
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
      32,
      (__int64)&WPP_685106a7d44f37adc4a00fe938e7b591_Traceguids,
      v4);
  }
  return v4;
}
