/*
 * XREFs of DriverEntry @ 0x1C03072C8
 * Callers:
 *     GsDriverEntry @ 0x1C0307010 (GsDriverEntry.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C0021644 (-DxgkInitializeTelemetry@@YAXXZ.c)
 *     McGenEventRegister_EtwRegister @ 0x1C0024828 (McGenEventRegister_EtwRegister.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_DxgkrnlPrereleaseDiagnostic__private_ReportDeviceUsage @ 0x1C00277C4 (Feature_DxgkrnlPrereleaseDiagnostic__private_ReportDeviceUsage.c)
 *     MonitorCleanupGlobal @ 0x1C005DFCC (MonitorCleanupGlobal.c)
 *     wil_UninitializeFeatureStaging @ 0x1C00DBF8C (wil_UninitializeFeatureStaging.c)
 *     ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C017A600 (-CreateGlobal@CCD_BTL@@SAJXZ.c)
 *     DxgkInitialPower @ 0x1C017AB4C (DxgkInitialPower.c)
 *     DxgkInitIoMmu @ 0x1C017ABA4 (DxgkInitIoMmu.c)
 *     ?DxgDbgInit@@YAXXZ @ 0x1C017ABDC (-DxgDbgInit@@YAXXZ.c)
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C017AC54 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     ?TdrInit@@YAXXZ @ 0x1C017B02C (-TdrInit@@YAXXZ.c)
 *     MonitorInitializeGlobal @ 0x1C017E718 (MonitorInitializeGlobal.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C0187B4C (WdmlibIoCreateDeviceSecure.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C0269654 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     DxgkCleanupPower @ 0x1C02C81A8 (DxgkCleanupPower.c)
 *     wil_InitializeFeatureStaging @ 0x1C0307078 (wil_InitializeFeatureStaging.c)
 *     ?LPMDisplayInitializeGlobal@@YAJXZ @ 0x1C03071EC (-LPMDisplayInitializeGlobal@@YAJXZ.c)
 *     DpiInitializeGlobalState @ 0x1C0307788 (DpiInitializeGlobalState.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  NTSTATUS ProcessNotifyRoutine; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int8 v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  NTSTATUS v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  NTSTATUS v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  NTSTATUS v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  PVOID v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // r8
  _QWORD v50[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+68h] [rbp-A0h]
  _QWORD v52[2]; // [rsp+70h] [rbp-98h] BYREF
  struct _UNICODE_STRING DefaultSDDLString; // [rsp+80h] [rbp-88h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-60h] BYREF
  int v56; // [rsp+B0h] [rbp-58h]
  const wchar_t *v57; // [rsp+B8h] [rbp-50h]
  unsigned __int8 *v58; // [rsp+C0h] [rbp-48h]
  int v59; // [rsp+C8h] [rbp-40h]
  unsigned __int8 *v60; // [rsp+D0h] [rbp-38h]
  int v61; // [rsp+D8h] [rbp-30h]
  __int64 v62; // [rsp+E0h] [rbp-28h]
  int v63; // [rsp+E8h] [rbp-20h]
  __int128 v64; // [rsp+F0h] [rbp-18h]
  __int128 v65; // [rsp+100h] [rbp-8h]
  __int64 v66; // [rsp+110h] [rbp+8h]
  __int64 SystemInformation; // [rsp+138h] [rbp+30h] BYREF

  v3 = wil_InitializeFeatureStaging();
  v6 = v3;
  if ( v3 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdError(v7);
    return v6;
  }
  g_pDriverObject = DriverObject;
  ProcessNotifyRoutine = PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)DxgkProcessNotify, 0);
  v11 = ProcessNotifyRoutine;
  if ( ProcessNotifyRoutine < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdError(v12);
  }
  SystemInformation = 8LL;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) < 0
    || (v13 = 1, (SystemInformation & 0x200000000LL) == 0) )
  {
    v13 = 0;
  }
  g_OSTestSigningEnabled = v13;
  Feature_DxgkrnlPrereleaseDiagnostic__private_ReportDeviceUsage();
  v55 = 0LL;
  v56 = 288;
  v57 = L"IsInternalRelease";
  v59 = 67108868;
  v58 = &g_IsInternalRelease;
  v60 = &g_IsInternalRelease;
  v61 = 4;
  v62 = 0LL;
  v63 = 0;
  v64 = 0LL;
  v66 = 0LL;
  v65 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v55, 0LL, 0LL);
  g_IsInternalRelease = g_IsInternalRelease != 0;
  g_IsInternalReleaseOrDbg = g_IsInternalRelease;
  g_bSkuSupportMultipleUsers = (RtlGetSuiteMask() & 0x110) == 16;
  WdInitialize();
  LODWORD(v6) = DpiInitializeGlobalState();
  if ( (int)v6 < 0
    || (LODWORD(v6) = DXGGLOBAL::CreateGlobal(v15, v14), (int)v6 < 0)
    || (LODWORD(v6) = CCD_BTL::CreateGlobal(v17, v16), (int)v6 < 0) )
  {
    wil_UninitializeFeatureStaging();
    return v6;
  }
  DxgkInitializeTelemetry();
  v18 = ExSubscribeWnfStateChange(&gScreenStudyEventSubscription, &WNF_SRUM_SCREENONSTUDY_SESSION, 1LL);
  v21 = v18;
  if ( v18 < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v22 + 24) = v21;
    WdLogEvent5_WdError(v22);
    gScreenStudyEventSubscription = 0LL;
  }
  bTracingEnabled = 0;
  McGenEventRegister_EtwRegister(&DxgkControlGuid, v19, &DxgkControlGuid_Context, (ULONGLONG *)&DxgkControlGuid_Context);
  LODWORD(v50[0]) = -1;
  v50[1] = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    LOBYTE(v51) = 1;
    LODWORD(v50[0]) = 0;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerEnter, v24, 0);
  }
  else
  {
    LOBYTE(v51) = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v50, 0LL);
  v52[0] = &DxgkControlGuid;
  v52[1] = &Dxgk_WDI_NotifyUser;
  WdDiagInit(v52);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\DxgKrnl");
  DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)DxgkCreateClose;
  DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)DxgkCreateClose;
  DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)DxgkDeviceIoctl;
  DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)DxgkInternalDeviceIoctl;
  DriverObject->MajorFunction[16] = (PDRIVER_DISPATCH)DxgkShutdown;
  DriverObject->DriverUnload = (PDRIVER_UNLOAD)DxgkUnload;
  DefaultSDDLString = 0LL;
  RtlInitUnicodeString(
    &DefaultSDDLString,
    L"D:P(A;;GRGW;;;S-1-5-83-0)(A;;GRGW;;;S-1-15-3-1024-2268835264-3721307629-241982045-173645152-1490879176-104643441-291"
     "5960892-1612460704)");
  v25 = WdmlibIoCreateDeviceSecure(
          DriverObject,
          0,
          &DestinationString,
          0x22u,
          0x100u,
          0,
          &DefaultSDDLString,
          &GUID_SD_DXGKRNL_DRIVER_OBJECT,
          (PDEVICE_OBJECT *)&g_pDeviceObject);
  v6 = v25;
  if ( v25 < 0
    || (v30 = DxgkInitialPower(), v6 = v30, v30 < 0)
    || (v31 = MonitorInitializeGlobal(v27, v26), v6 = v31, v31 < 0)
    || (v32 = LPMDisplayInitializeGlobal(), v6 = v32, v32 < 0) )
  {
    v29 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v29 + 24) = v6;
    WdLogEvent5_WdWarning(v29);
LABEL_27:
    DxgkCleanupPower();
    MonitorCleanupGlobal(v44, v43);
    v46 = g_pDeviceObject;
    if ( g_pDeviceObject )
    {
      IoDeleteDevice((PDEVICE_OBJECT)g_pDeviceObject);
      g_pDeviceObject = 0LL;
    }
    DXGGLOBAL::DestroyGlobal((__int64)v46, v45);
    wil_UninitializeFeatureStaging();
    goto LABEL_31;
  }
  DxgkInitIoMmu();
  DxgDbgInit(v34, v33);
  TdrInit();
  v35 = SMgrRegisterSessionChangeCallout(DxgkNotifySessionStateChange);
  v6 = v35;
  if ( v35 < 0 )
  {
    v38 = WdLogNewEntry5_WdError(v37, v36);
    *(_QWORD *)(v38 + 24) = v6;
    WdLogEvent5_WdError(v38);
    goto LABEL_27;
  }
  v39 = IoRegisterShutdownNotification((PDEVICE_OBJECT)g_pDeviceObject);
  v6 = v39;
  if ( v39 < 0 )
  {
    v42 = WdLogNewEntry5_WdError(v41, v40);
    *(_QWORD *)(v42 + 24) = v6;
    WdLogEvent5_WdError(v42);
    SMgrUnregisterSessionChangeCallout(DxgkNotifySessionStateChange);
    goto LABEL_27;
  }
  LODWORD(v6) = 0;
LABEL_31:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v50, v40);
  if ( (_BYTE)v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v47, &EventProfilerExit, v48, v50[0]);
  return v6;
}
