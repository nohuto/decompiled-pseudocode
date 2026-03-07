NTSTATUS __fastcall DriverCleanup(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  KIRQL v4; // bl
  __int64 v5; // rax
  __int64 v6; // rcx
  REGHANDLE v7; // rcx
  REGHANDLE v8; // rcx
  REGHANDLE v9; // rcx
  NTSTATUS result; // eax

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A1E8);
  TlgUnregisterAggregateProvider();
  imp_WppRecorderLogDelete(WPP_GLOBAL_Control, *(_QWORD *)(v2 + 64));
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 944))(WdfDriverGlobals, a1);
  WppCleanupKm(v3);
  if ( *(_BYTE *)(v2 + 92) )
    SleepstudyHelper_Uninitialize(*(_QWORD *)(v2 + 96));
  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) )
  {
    _InterlockedDecrement(&g_AssertsOperational);
    v4 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
    while ( 1 )
    {
      v6 = g_MicrosoftTelemetryAssertsTriggeredList;
      if ( (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList == &g_MicrosoftTelemetryAssertsTriggeredList )
        break;
      if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList
        || (v5 = *(_QWORD *)g_MicrosoftTelemetryAssertsTriggeredList,
            *(_QWORD *)(*(_QWORD *)g_MicrosoftTelemetryAssertsTriggeredList + 8LL) != g_MicrosoftTelemetryAssertsTriggeredList) )
      {
        __fastfail(3u);
      }
      g_MicrosoftTelemetryAssertsTriggeredList = *(_QWORD *)g_MicrosoftTelemetryAssertsTriggeredList;
      *(_QWORD *)(v5 + 8) = &g_MicrosoftTelemetryAssertsTriggeredList;
      ExFreePoolWithTag((PVOID)(v6 - 32), 0x74727341u);
    }
    KeReleaseSpinLock(&g_AssertSpinLock, v4);
    if ( g_ModuleName )
    {
      ExFreePoolWithTag(g_ModuleName, 0x74727341u);
      g_ModuleName = 0LL;
    }
    v7 = RegHandle;
    RegHandle = 0LL;
    dword_1C0074078 = 0;
    EtwUnregister(v7);
    v8 = qword_1C0074028;
    qword_1C0074028 = 0LL;
    dword_1C0074008 = 0;
    EtwUnregister(v8);
    v9 = qword_1C0074060;
    qword_1C0074060 = 0LL;
    dword_1C0074040 = 0;
    EtwUnregister(v9);
  }
  result = McGenEventUnregister_EtwUnregister();
  if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = 0LL;
  }
  g_Usbhub3DriverObject = 0LL;
  return result;
}
