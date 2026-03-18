/*
 * XREFs of ?ivHandlePnpOtherPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE8C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     RIMVirtQueueRimDevChangeAsyncWorkItem @ 0x1C01AB59C (RIMVirtQueueRimDevChangeAsyncWorkItem.c)
 */

__int64 __fastcall CBaseInput::ivHandlePnpOtherPacket(__int64 a1, __int64 a2, struct RawInputManagerObject *a3)
{
  struct RawInputManagerObject *v3; // rdi
  __int64 v4; // rbx
  __int128 v5; // xmm6
  int v6; // ebx
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF

  v3 = a3;
  v4 = a2;
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
      34,
      (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids);
  }
  *(_QWORD *)(v4 + 16) = v4 + (*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFEuLL);
  v5 = *(_OWORD *)(v4 + 8);
  v6 = *(_DWORD *)v4;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_RIMVirtPnpQuickRelease__private_reporting,
    30688442LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_Vail_logged_traits,
    1,
    3);
  v8 = v5;
  RIMVirtQueueRimDevChangeAsyncWorkItem(v3, (__int64)&v8, v6);
  return 1LL;
}
