/*
 * XREFs of ShouldEnableInputVirtualization @ 0x1C0053D88
 * Callers:
 *     InputInitialize @ 0x1C0052DC4 (InputInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     RIMRegQueryDWord @ 0x1C00D5034 (RIMRegQueryDWord.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     WPP_RECORDER_AND_TRACE_SF_ccccc @ 0x1C01F0E1C (WPP_RECORDER_AND_TRACE_SF_ccccc.c)
 *     HviGetHypervisorFeatures @ 0x1C0241904 (HviGetHypervisorFeatures.c)
 */

char ShouldEnableInputVirtualization()
{
  char v0; // bl
  PDEVICE_OBJECT v1; // rcx
  bool v2; // r8
  __int16 v3; // ax
  void *v4; // rdx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  bool v9; // r10
  void *v10; // rdx
  char v11; // [rsp+20h] [rbp-78h]
  __int16 v12; // [rsp+30h] [rbp-68h]
  int v13; // [rsp+70h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-20h] BYREF

  v0 = 1;
  if ( dword_1C028F6FC == 3 )
  {
    if ( gSessionId != 1 )
    {
      v1 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v0 = 0;
      }
      v2 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v0 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v3 = 14;
      goto LABEL_9;
    }
    DestinationString = 0LL;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
    v13 = 0;
    v6 = RIMRegQueryDWord(&DestinationString, L"IsVailContainer", 0LL, &v13);
    if ( (v13 & 0x1F) == 0 )
    {
      if ( v6 )
      {
        v1 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
        {
          v0 = 0;
        }
        v2 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v0 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0;
        v4 = &WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids;
        v12 = 15;
        v11 = 3;
        goto LABEL_11;
      }
      v1 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v0 = 0;
      }
      v2 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v0 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v3 = 16;
      goto LABEL_9;
    }
    byte_1C02A0544 = v13 & 1;
    byte_1C02A0542 = (v13 & 2) != 0;
    byte_1C02A0543 = (v13 & 4) != 0;
    byte_1C02A0540 = (v13 & 8) != 0;
    byte_1C02A0541 = (v13 & 0x10) != 0;
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_ccccc(WPP_GLOBAL_Control->AttachedDevice, v7, v8);
    }
  }
  else
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_InputVirtualization__private_reporting,
      16291462LL,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
      1,
      3);
    DestinationString = 0LL;
    HviGetHypervisorFeatures(&DestinationString);
    if ( (*(_QWORD *)&DestinationString.Length & 0x100000000000LL) == 0 )
    {
      v1 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v0 = 0;
      }
      v2 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v0 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v3 = 11;
LABEL_9:
      v4 = &WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids;
      v12 = v3;
LABEL_10:
      v11 = 4;
LABEL_11:
      LOBYTE(v4) = v0;
      WPP_RECORDER_AND_TRACE_SF_(
        v1->AttachedDevice,
        (_DWORD)v4,
        v2,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v11,
        12,
        v12,
        (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids);
      return 0;
    }
    if ( (int)RtlIsApiSetImplemented("SchemaExt-Composable-Vail") < 0 )
    {
      v1 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v0 = 0;
      }
      v2 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v0 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v4 = &WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids;
      v12 = 12;
      goto LABEL_10;
    }
    v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = &WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids;
      LOBYTE(v10) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v10,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        13,
        (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids);
    }
  }
  return 1;
}
