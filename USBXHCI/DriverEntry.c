/*
 * XREFs of DriverEntry @ 0x1C0074360
 * Callers:
 *     FxDriverEntryWorker @ 0x1C001CDB4 (FxDriverEntryWorker.c)
 * Callees:
 *     McGenEventRegister_EtwRegister @ 0x1C001D020 (McGenEventRegister_EtwRegister.c)
 *     InitializeTelemetryAssertsKMByDriverObject @ 0x1C001D054 (InitializeTelemetryAssertsKMByDriverObject.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0020700 (memset.c)
 *     wil_UninitializeFeatureStaging @ 0x1C006D008 (wil_UninitializeFeatureStaging.c)
 *     SleepstudyHelper_Initialize @ 0x1C0074750 (SleepstudyHelper_Initialize.c)
 *     WppInitKm @ 0x1C00747C4 (WppInitKm.c)
 *     Counter_Register @ 0x1C0074878 (Counter_Register.c)
 *     WppLoadTracingSupport @ 0x1C0074988 (WppLoadTracingSupport.c)
 *     TraceLoggingRegister_EtwRegister_EtwSetInformation @ 0x1C0079958 (TraceLoggingRegister_EtwRegister_EtwSetInformation.c)
 *     WppCleanupKm @ 0x1C007999C (WppCleanupKm.c)
 *     wil_InitializeFeatureStaging @ 0x1C007E03C (wil_InitializeFeatureStaging.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  int v4; // ebx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  ULONG ReturnLength; // [rsp+40h] [rbp-C0h] BYREF
  __int64 SystemInformation; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v12[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+68h] [rbp-98h]
  int v14; // [rsp+70h] [rbp-90h]
  int v15; // [rsp+74h] [rbp-8Ch]
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v17[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v18; // [rsp+98h] [rbp-68h]
  int v19; // [rsp+A0h] [rbp-60h]
  int v20; // [rsp+A4h] [rbp-5Ch]
  __int128 v21; // [rsp+A8h] [rbp-58h]
  void *v22; // [rsp+B8h] [rbp-48h]
  __int128 v23; // [rsp+C0h] [rbp-40h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+D0h] [rbp-30h] BYREF

  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = DriverObject;
  ReturnLength = 0;
  v11 = 0LL;
  HIDWORD(v17[0]) = 0;
  v18 = 0LL;
  HIDWORD(v12[0]) = 0;
  v13 = 0LL;
  DestinationString = 0LL;
  v14 = 0;
  v23 = 0LL;
  v21 = 0LL;
  memset(&VersionInformation.dwMajorVersion, 0, 0x110uLL);
  VersionInformation.dwOSVersionInfoSize = 276;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = (_LIST_ENTRY *)0x20040000000LL;
  }
  wil_InitializeFeatureStaging();
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
  LODWORD(v23) = 16;
  *((_QWORD *)&v23 + 1) = 0x200000002LL;
  BYTE4(v23) = 0;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v23);
  v22 = off_1C0063220;
  v17[1] = DriverCleanup;
  v17[0] = 56LL;
  v12[1] = Controller_WdfEvtDeviceAdd;
  v18 = 0LL;
  v21 = 0LL;
  v19 = 1;
  v20 = 1;
  v12[0] = 32LL;
  v13 = 0LL;
  v14 = 0;
  v15 = 1464027224;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01023 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         v17,
         v12,
         &v11);
  if ( v4 >= 0 )
  {
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     v11,
                     off_1C0063220);
    g_WdfDriverUsbXhciContext = (__int64)v5;
    v5[1] = v5;
    *v5 = v5;
    KeInitializeSpinLock(v5 + 2);
    *(_DWORD *)(g_WdfDriverUsbXhciContext + 24) = 0;
    SystemInformation = 8LL;
    v4 = ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, &ReturnLength);
    if ( v4 >= 0 && (SystemInformation & 0x200000000LL) != 0 )
    {
      *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) = 1;
    }
    else
    {
      v4 = 0;
      *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) = 0;
    }
    imp_WppRecorderGetTriageInfo(WPP_GLOBAL_Control, &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    dword_1C00634C8 = WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
    qword_1C00634CC = (__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
    dword_1C00634D4 = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
    dword_1C00634D8 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
    qword_1C00634F0 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 3448))(WdfDriverGlobals);
    InitializeTelemetryAssertsKMByDriverObject((__int64)DriverObject);
    McGenEventRegister_EtwRegister(v7, v6, &MS_USBXHCI_ETW_PROVIDER_Context, &MS_USBXHCI_ETW_PROVIDER_Context);
    SleepstudyHelper_Initialize(g_WdfDriverUsbXhciContext + 32, DriverObject);
    EtwSetInformation(
      MS_USBXHCI_ETW_PROVIDER_Context,
      EventProviderSetTraits,
      &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
      (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
    TraceLoggingRegister_EtwRegister_EtwSetInformation(&dword_1C0063748);
    Counter_Register();
  }
  else
  {
    WppCleanupKm(DriverObject);
    wil_UninitializeFeatureStaging();
  }
  return v4;
}
