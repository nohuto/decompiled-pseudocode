char __fastcall ShouldEnableInputVirtualization(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  bool v9; // bl
  PDEVICE_OBJECT v10; // rcx
  __int16 v11; // ax
  void *v12; // rdx
  int v14; // eax
  __int64 v15; // rdx
  bool v16; // r10
  void *v17; // rdx
  char v18; // [rsp+20h] [rbp-78h]
  __int16 v19; // [rsp+30h] [rbp-68h]
  int v20; // [rsp+70h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-20h] BYREF

  if ( RIMIsRunningOnDesktop(a1, a2, a3, a4) )
  {
    v9 = 1;
    if ( *(_DWORD *)SGDGetUserSessionState(v5, v4, v6, v7) != 1 )
    {
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v9 = 0;
      }
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v11 = 14;
      goto LABEL_9;
    }
    DestinationString = 0LL;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
    v20 = 0;
    v14 = RIMRegQueryDWord(&DestinationString, L"IsVailContainer", 0LL, &v20);
    if ( (v20 & 0x1F) == 0 )
    {
      if ( v14 )
      {
        v10 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
        {
          v9 = 0;
        }
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0;
        v12 = &WPP_6faef5775b8438fac85e142323c35be9_Traceguids;
        v19 = 15;
        v18 = 3;
        goto LABEL_11;
      }
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v9 = 0;
      }
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v11 = 16;
      goto LABEL_9;
    }
    byte_1C02D8708 = v20 & 1;
    byte_1C02D86F1 = (v20 & 2) != 0;
    byte_1C02D86F0 = (v20 & 4) != 0;
    byte_1C02D86F3 = (v20 & 8) != 0;
    byte_1C02D86F2 = (v20 & 0x10) != 0;
    LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_ccccc(WPP_GLOBAL_Control->AttachedDevice, v15, v8);
    }
  }
  else
  {
    Feature_InputVirtualization__private_ReportDeviceUsage();
    DestinationString = 0LL;
    HviGetHypervisorFeatures(&DestinationString);
    if ( (*(_QWORD *)&DestinationString.Length & 0x100000000000LL) == 0 )
    {
      v10 = WPP_GLOBAL_Control;
      v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v11 = 11;
LABEL_9:
      v12 = &WPP_6faef5775b8438fac85e142323c35be9_Traceguids;
      v19 = v11;
LABEL_10:
      v18 = 4;
LABEL_11:
      LOBYTE(v12) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        v10->AttachedDevice,
        (_DWORD)v12,
        v8,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v18,
        12,
        v19,
        (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids);
      return 0;
    }
    if ( (int)RtlIsApiSetImplemented("SchemaExt-Composable-Vail") < 0 )
    {
      v10 = WPP_GLOBAL_Control;
      v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0;
      v12 = &WPP_6faef5775b8438fac85e142323c35be9_Traceguids;
      v19 = 12;
      goto LABEL_10;
    }
    v16 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = &WPP_6faef5775b8438fac85e142323c35be9_Traceguids;
      LOBYTE(v17) = v16;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v17,
        v8,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        13,
        (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids);
    }
  }
  return 1;
}
