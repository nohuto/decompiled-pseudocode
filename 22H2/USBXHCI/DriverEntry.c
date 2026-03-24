/*
 * XREFs of DriverEntry @ 0x1C007112C
 * Callers:
 *     FxDriverEntryWorker @ 0x1C00182B4 (FxDriverEntryWorker.c)
 * Callees:
 *     McGenEventRegister_EtwRegister @ 0x1C00183DC (McGenEventRegister_EtwRegister.c)
 *     InitializeTelemetryAssertsKM @ 0x1C0018410 (InitializeTelemetryAssertsKM.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001B2C0 (memset.c)
 *     wil_UninitializeFeatureStaging @ 0x1C006A008 (wil_UninitializeFeatureStaging.c)
 *     Counter_Register @ 0x1C0071514 (Counter_Register.c)
 *     WppInitKm @ 0x1C007165C (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C0071710 (WppLoadTracingSupport.c)
 *     WppCleanupKm @ 0x1C00761C4 (WppCleanupKm.c)
 *     wil_InitializeFeatureStaging @ 0x1C007A03C (wil_InitializeFeatureStaging.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  _QWORD *v4; // rax
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  ULONG ReturnLength; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+48h] [rbp-B8h] BYREF
  __int64 SystemInformation; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v14; // [rsp+70h] [rbp-90h] BYREF
  __int128 v15; // [rsp+80h] [rbp-80h]
  __int128 v16; // [rsp+90h] [rbp-70h] BYREF
  __int128 v17; // [rsp+A0h] [rbp-60h]
  __int128 v18; // [rsp+B0h] [rbp-50h]
  void *v19; // [rsp+C0h] [rbp-40h]
  struct _OSVERSIONINFOW VersionInformation; // [rsp+D0h] [rbp-30h] BYREF

  ReturnLength = 0;
  DestinationString = 0LL;
  v10 = 0LL;
  v12 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  wil_InitializeFeatureStaging();
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = DriverObject;
  memset(&VersionInformation.dwMajorVersion, 0, 0x110uLL);
  VersionInformation.dwOSVersionInfoSize = 276;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    WPP_MAIN_CB.DeviceLock.Header.SignalState = 512;
    WPP_MAIN_CB.DeviceLock.Header.LockNV = 0x40000000;
  }
  RtlInitUnicodeString(&DestinationString, L"KseQueryDeviceFlags");
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"IoTryQueueWorkItem");
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = MmGetSystemRoutineAddress(&DestinationString);
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_USBXHCI;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm(DriverObject, RegistryPath);
  BYTE4(v10) = 0;
  LODWORD(v10) = 8;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v10);
  v19 = off_1C0060220;
  *((_QWORD *)&v16 + 1) = DriverCleanup;
  *(_QWORD *)&v16 = 56LL;
  *((_QWORD *)&v14 + 1) = Controller_WdfEvtDeviceAdd;
  *(_QWORD *)&v17 = 0LL;
  v18 = 0LL;
  *((_QWORD *)&v17 + 1) = 0x100000001LL;
  *(_QWORD *)&v14 = 32LL;
  *(_QWORD *)&v15 = 0LL;
  *((_QWORD *)&v15 + 1) = 0x5743485800000000LL;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, __int128 *, __int128 *, __int64 *))(WdfFunctions_01023 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         &v16,
         &v14,
         &v12) < 0 )
  {
    WppCleanupKm(DriverObject);
    wil_UninitializeFeatureStaging();
  }
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   v12,
                   off_1C0060220);
  g_WdfDriverUsbXhciContext = (__int64)v4;
  v4[1] = v4;
  *v4 = v4;
  KeInitializeSpinLock(v4 + 2);
  *(_DWORD *)(g_WdfDriverUsbXhciContext + 24) = 0;
  SystemInformation = 8LL;
  v5 = ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, &ReturnLength);
  if ( v5 >= 0 && (SystemInformation & 0x200000000LL) != 0 )
  {
    *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) = 1;
  }
  else
  {
    v5 = 0;
    *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) = 0;
  }
  imp_WppRecorderGetTriageInfo(WPP_GLOBAL_Control, &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  dword_1C00604C8 = WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
  qword_1C00604CC = (__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  dword_1C00604D4 = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
  dword_1C00604D8 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  qword_1C00604F0 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 3448))(WdfDriverGlobals);
  InitializeTelemetryAssertsKM((const void **)RegistryPath);
  McGenEventRegister_EtwRegister(v7, v6, &MS_USBXHCI_ETW_PROVIDER_Context, &MS_USBXHCI_ETW_PROVIDER_Context);
  SleepstudyHelper_Initialize(g_WdfDriverUsbXhciContext + 32, DriverObject);
  EtwSetInformation(
    MS_USBXHCI_ETW_PROVIDER_Context,
    EventProviderSetTraits,
    &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
    (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  Counter_Register();
  return v5;
}
