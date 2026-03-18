/*
 * XREFs of ?ivHandlePnpCreatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE670
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RIMVirtDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C01AACF0 (RIMVirtDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 *     ?Deserialize@CIVDeserializer@@AEAAXAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z @ 0x1C01FCFFC (-Deserialize@CIVDeserializer@@AEAAXAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z.c)
 */

__int64 __fastcall CBaseInput::ivHandlePnpCreatePacket(__int64 a1, __int64 a2, struct RawInputManagerObject *a3)
{
  struct RawInputManagerObject *v3; // rbp
  __int64 v4; // rbx
  unsigned int v5; // edi
  void *v6; // r9
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ecx
  int v11; // eax
  int v12; // r8d
  void *v13; // rdx
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v6 = &WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      31,
      (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids);
    v6 = &WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids;
  }
  v7 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFEuLL;
  v15 = v4;
  *(_QWORD *)(v4 + 16) = v4 + v7;
  v8 = *(_QWORD *)(v4 + 72);
  if ( v8 )
    *(_QWORD *)(v4 + 72) = v4 + (v8 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( *(_DWORD *)(v4 + 24) == 2 )
  {
    v9 = *(_QWORD *)(v4 + 208);
    v10 = *(_DWORD *)(v4 + 64);
    if ( v9 )
      *(_QWORD *)(v4 + 208) = v4 + (v9 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v10 )
      CIVDeserializer::Deserialize((CIVDeserializer *)&v15, (struct _IV_HID_POINTER_DEVICE_INFO *)(v4 + 216));
  }
  *(_QWORD *)(v4 + 1360) = v4 + (*(_QWORD *)(v4 + 1360) & 0xFFFFFFFFFFFFFFFEuLL);
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      32,
      (__int64)v6);
  }
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_RIMVirtPnpQuickRelease__private_reporting,
    30688442LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_Vail_logged_traits,
    1,
    3);
  v11 = RIMVirtDeviceClassNotifyUsingAsyncPnpWorkNotification(v3, v4, v4 + 8);
  if ( v11 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      LOBYTE(v5) = 0;
    }
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = &WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids;
      LOBYTE(v13) = v5;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v13,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        33,
        (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids,
        v11);
    }
    return 0;
  }
  return v5;
}
