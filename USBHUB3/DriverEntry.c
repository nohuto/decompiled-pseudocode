NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS v4; // edi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v16; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h]
  __int64 v18; // [rsp+70h] [rbp-90h]
  __int128 v19; // [rsp+78h] [rbp-88h]
  void *v20; // [rsp+88h] [rbp-78h]
  __int64 v21; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v22[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-58h]
  int v24; // [rsp+B0h] [rbp-50h]
  int v25; // [rsp+B4h] [rbp-4Ch]
  __int128 v26; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v27; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v28; // [rsp+D8h] [rbp-28h]
  char pszDest[16]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v30; // [rsp+F8h] [rbp-8h]
  struct _OSVERSIONINFOW VersionInformation; // [rsp+100h] [rbp+0h] BYREF

  g_Usbhub3DriverObject = (__int64)DriverObject;
  HIDWORD(v22[0]) = 0;
  v23 = 0LL;
  v24 = 0;
  DWORD1(v16) = 0;
  v17 = 0LL;
  v19 = 0LL;
  v14 = 0LL;
  DestinationString = 0LL;
  v30 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  wil_InitializeFeatureStaging();
  memset(&VersionInformation.dwMajorVersion, 0, 0x110uLL);
  VersionInformation.dwOSVersionInfoSize = 276;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    ExDefaultNonPagedPoolType = 512;
    ExDefaultMdlProtection = 0x40000000;
  }
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_USBHUB3;
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  LODWORD(v26) = 16;
  *((_QWORD *)&v26 + 1) = 0x200000002LL;
  BYTE4(v26) = 0;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v26);
  v22[0] = 32LL;
  v22[1] = HUBFDO_EvtDeviceAdd;
  v20 = off_1C006A1E8;
  *((_QWORD *)&v16 + 1) = DriverCleanup;
  v23 = 0LL;
  v24 = 0;
  v25 = 1999849557;
  *(_QWORD *)&v16 = 56LL;
  v17 = 0LL;
  v19 = 0LL;
  v18 = 0x100000001LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, __int128 *, _QWORD *, unsigned __int64 *))(WdfFunctions_01015 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         &v16,
         v22,
         &v14);
  if ( v4 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           v14,
           off_1C006A1E8);
    *(_QWORD *)&v27 = 56LL;
    HIDWORD(v28) = 16;
    pszDest[0] = 0;
    v6 = v5;
    *(_QWORD *)&v28 = 0LL;
    BYTE8(v28) = 0;
    v30 = 0x200000002LL;
    *((_QWORD *)&v27 + 1) = 0x20000000400LL;
    RtlStringCchPrintfA(pszDest, 0x10uLL, "hub driver");
    v7 = (__int64 *)(v6 + 64);
    v4 = imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v27, v6 + 64);
    if ( v4 >= 0 )
    {
      v20 = 0LL;
      v17 = 0LL;
      v18 = 0x100000001LL;
      v19 = v14;
      v16 = 0LL;
      LODWORD(v16) = 56;
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64))(WdfFunctions_01015 + 2496))(
             WdfDriverGlobals,
             &v16,
             v6 + 32);
      if ( v4 >= 0 )
      {
        *(_QWORD *)(v6 + 24) = v6 + 16;
        *(_QWORD *)(v6 + 16) = v6 + 16;
        v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64))(WdfFunctions_01015 + 2496))(
               WdfDriverGlobals,
               &v16,
               v6 + 56);
        if ( v4 >= 0 )
        {
          *(_QWORD *)(v6 + 48) = v6 + 40;
          *(_QWORD *)(v6 + 40) = v6 + 40;
          McGenEventRegister_EtwRegister(v9, v8, &MS_USBHUB3_ETW_PROVIDER_Context, &MS_USBHUB3_ETW_PROVIDER_Context);
          v10 = SleepstudyHelper_Initialize((_QWORD *)(v6 + 96), (__int64)DriverObject);
          if ( v10 < 0 )
          {
            *(_BYTE *)(v6 + 92) = 0;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v13) = v10;
              WPP_RECORDER_SF_d(*v7, 4u, 2u, 0xAu, (__int64)&WPP_3335a2d3769433c01e7dfc941709dbce_Traceguids, v13);
            }
          }
          else
          {
            *(_BYTE *)(v6 + 92) = 1;
          }
          InitializeTelemetryAssertsKMByDriverObject((__int64)DriverObject);
          EtwSetInformation(
            MS_USBHUB3_ETW_PROVIDER_Context,
            EventProviderSetTraits,
            &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
            (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
          HUBREG_QueryGlobalHubValues(v6);
          HUBREG_QueryGlobalUsb20HardwareLpmSettings(v6);
          HUBREG_QueryGlobalUsbLtmSettings(v6);
          RtlInitUnicodeString(&DestinationString, L"KseQueryDeviceFlags");
          WPP_MAIN_CB.Queue.ListEntry.Flink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&DestinationString);
          RtlInitUnicodeString(&DestinationString, L"IoGetActivityIdIrp");
          *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = MmGetSystemRoutineAddress(&DestinationString);
          RtlInitUnicodeString(&DestinationString, L"IoSetActivityIdIrp");
          g_IoSetActivityIdIrp = (__int64 (__fastcall *)(_QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
          v21 = 0LL;
          if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
          {
            ((void (__fastcall *)(const wchar_t *, const wchar_t *, __int64 *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
              L"USBHUB:GLOBAL_FLAGS",
              L"USBHUB",
              &v21);
            if ( (v21 & 1) != 0 )
              _InterlockedOr((volatile signed __int32 *)(v6 + 4), 0x20000u);
          }
          imp_WppRecorderGetTriageInfo(WPP_GLOBAL_Control, &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
          qword_1C006D700 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 3448))(WdfDriverGlobals);
          dword_1C006D6D0 = WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
          qword_1C006D6D4 = (__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
          dword_1C006D6DC = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
          dword_1C006D6E0 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
          v11 = TlgRegisterAggregateProvider();
          v4 = v11;
          if ( v11 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v13) = v11;
              WPP_RECORDER_SF_d(*v7, 2u, 2u, 0xBu, (__int64)&WPP_3335a2d3769433c01e7dfc941709dbce_Traceguids, v13);
            }
            v4 = 0;
          }
          if ( v6 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v13) = *(_DWORD *)(v6 + 4);
            WPP_RECORDER_SF_d(
              *(_QWORD *)(v6 + 64),
              4u,
              2u,
              0xCu,
              (__int64)&WPP_3335a2d3769433c01e7dfc941709dbce_Traceguids,
              v13);
          }
        }
      }
    }
  }
  else
  {
    WppCleanupKm((__int64)DriverObject);
    if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink )
    {
      RtlUnregisterFeatureConfigurationChangeNotification();
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = 0LL;
    }
  }
  return v4;
}
