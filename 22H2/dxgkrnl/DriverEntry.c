/*
 * XREFs of DriverEntry @ 0x1C03DEE7C
 * Callers:
 *     GsDriverEntry @ 0x1C03DE010 (GsDriverEntry.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McGenEventRegister_EtwRegister @ 0x1C00200E8 (McGenEventRegister_EtwRegister.c)
 *     ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C0021904 (-DxgkInitializeTelemetry@@YAXXZ.c)
 *     InitializeTelemetryAssertsKMByDriverObject @ 0x1C0022B14 (InitializeTelemetryAssertsKMByDriverObject.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     MonitorCleanupGlobal @ 0x1C006BB94 (MonitorCleanupGlobal.c)
 *     wil_UninitializeFeatureStaging @ 0x1C01673F4 (wil_UninitializeFeatureStaging.c)
 *     ?DxgkInitTest@@YAXXZ @ 0x1C01EACF8 (-DxgkInitTest@@YAXXZ.c)
 *     MonitorInitializeGlobal @ 0x1C020A038 (MonitorInitializeGlobal.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C0211CD4 (WdmlibIoCreateDeviceSecure.c)
 *     ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C0214110 (-CreateGlobal@CCD_BTL@@SAJXZ.c)
 *     DxgkInitialPower @ 0x1C021427C (DxgkInitialPower.c)
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C02142D4 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     ?SysMmInitializeGlobal@@YAXXZ @ 0x1C02183DC (-SysMmInitializeGlobal@@YAXXZ.c)
 *     ?TdrInit@@YAXXZ @ 0x1C0221BF0 (-TdrInit@@YAXXZ.c)
 *     ?DxgDbgInit@@YAXXZ @ 0x1C0228014 (-DxgDbgInit@@YAXXZ.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C0312694 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     DxgkCleanupPower @ 0x1C039A4F8 (DxgkCleanupPower.c)
 *     wil_InitializeFeatureStaging @ 0x1C03DE078 (wil_InitializeFeatureStaging.c)
 *     DpiInitializeGlobalState @ 0x1C03DE1F8 (DpiInitializeGlobalState.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  unsigned __int64 MaximumLength; // rcx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rbx
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  const wchar_t *v13; // rax
  NTSTATUS v14; // eax
  int ProcessNotifyRoutineEx2; // eax
  __int64 v16; // rbx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  unsigned __int8 v20; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // r8
  NTSTATUS v31; // eax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  int v41; // edx
  int v42; // r8d
  NTSTATUS v43; // eax
  int v44; // edx
  int v45; // r8d
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // r8
  BOOLEAN Size; // [rsp+28h] [rbp-D8h]
  __int64 v54; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v55; // [rsp+68h] [rbp-98h]
  char v56; // [rsp+70h] [rbp-90h]
  _QWORD v57[2]; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DefaultSDDLString; // [rsp+88h] [rbp-78h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-50h] BYREF
  int v61; // [rsp+B8h] [rbp-48h]
  const wchar_t *v62; // [rsp+C0h] [rbp-40h]
  unsigned __int8 *v63; // [rsp+C8h] [rbp-38h]
  int v64; // [rsp+D0h] [rbp-30h]
  unsigned __int8 *v65; // [rsp+D8h] [rbp-28h]
  int v66; // [rsp+E0h] [rbp-20h]
  __int64 v67; // [rsp+E8h] [rbp-18h]
  int v68; // [rsp+F0h] [rbp-10h]
  __int128 v69; // [rsp+F8h] [rbp-8h]
  __int128 v70; // [rsp+108h] [rbp+8h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  __int64 SystemInformation; // [rsp+140h] [rbp+40h] BYREF

  wil_InitializeFeatureStaging();
  MaximumLength = RegistryPath->MaximumLength;
  g_pDriverObject = DriverObject;
  g_RegistryPath.Buffer = (wchar_t *)operator new[](MaximumLength, 0x4B677844u, 256LL);
  if ( !g_RegistryPath.Buffer )
  {
    WdLogSingleEntry1(2LL, 350LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v6,
        v5,
        v7,
        0LL,
        0,
        -1,
        L"Failed to allocate registry path buffer.",
        350LL,
        0LL,
        0LL,
        0LL,
        0LL);
    LODWORD(v8) = -1073741801;
    goto LABEL_25;
  }
  g_RegistryPath.MaximumLength = RegistryPath->MaximumLength;
  RtlCopyUnicodeString(&g_RegistryPath, RegistryPath);
  v9 = PsTlsAlloc(DxgkThreadPsTslCallback, 0LL, &g_DxgkThreadTlsId);
  v8 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(2LL, v9);
    if ( !bTracingEnabled )
      goto LABEL_25;
    LOBYTE(v11) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) == 0 )
      goto LABEL_25;
    v13 = L"Failed to allocate a PsTls slot for DxgkThread, returning 0x%I64x.";
LABEL_10:
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(v11, v10, v12, 0LL, 0, -1, v13, v8, 0LL, 0LL, 0LL, 0LL);
LABEL_25:
    wil_UninitializeFeatureStaging();
    return v8;
  }
  v14 = ExInitializeLookasideListEx(&g_DxgkThreadLookasideList, 0LL, 0LL, (POOL_TYPE)512, 0, 0x40uLL, 0x54677844u, 0);
  v8 = v14;
  if ( v14 < 0 )
  {
    PsTlsFree(g_DxgkThreadTlsId);
    WdLogSingleEntry1(2LL, v8);
    if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) == 0 )
      goto LABEL_25;
    v13 = L"Failed to initialize the lookaside list for DXGTHREAD, returning 0x%I64x";
    goto LABEL_10;
  }
  ProcessNotifyRoutineEx2 = PsSetCreateProcessNotifyRoutineEx2(0LL, DxgkProcessNotify, 0LL);
  if ( ProcessNotifyRoutineEx2 < 0 )
  {
    v16 = ProcessNotifyRoutineEx2;
    WdLogSingleEntry1(2LL, ProcessNotifyRoutineEx2);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v18,
          v17,
          v19,
          0LL,
          0,
          -1,
          L"PsSetCreateProcessNotifyRoutineEx failed 0x%I64x",
          v16,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  SystemInformation = 8LL;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) < 0
    || (v20 = 1, (SystemInformation & 0x200000000LL) == 0) )
  {
    v20 = 0;
  }
  g_OSTestSigningEnabled = v20;
  v60 = 0LL;
  v61 = 288;
  v62 = L"IsInternalRelease";
  v64 = 67108868;
  v63 = &g_IsInternalRelease;
  v65 = &g_IsInternalRelease;
  v66 = 4;
  v67 = 0LL;
  v68 = 0;
  v71 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v60, 0LL, 0LL);
  g_IsInternalRelease = g_IsInternalRelease != 0;
  g_IsInternalReleaseOrDbg = g_IsInternalRelease;
  g_bSkuSupportMultipleUsers = (RtlGetSuiteMask() & 0x110) == 16;
  InitializeTelemetryAssertsKMByDriverObject((__int64)DriverObject);
  WdInitialize();
  LODWORD(v8) = DpiInitializeGlobalState();
  if ( (int)v8 < 0 )
    goto LABEL_25;
  LODWORD(v8) = DXGGLOBAL::CreateGlobal(v22, v21, v23, v24);
  if ( (int)v8 < 0 )
    goto LABEL_25;
  LODWORD(v8) = CCD_BTL::CreateGlobal();
  if ( (int)v8 < 0 )
    goto LABEL_25;
  DxgkInitializeTelemetry();
  Size = 0;
  v25 = ExSubscribeWnfStateChange(&gScreenStudyEventSubscription, &WNF_SRUM_SCREENONSTUDY_SESSION, 1LL);
  if ( v25 < 0 )
  {
    WdLogSingleEntry1(2LL, v25);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v27,
        v26,
        v28,
        0LL,
        0,
        -1,
        L"ExSubscribeWnfStateChange failed, returing 0x%I64x");
    gScreenStudyEventSubscription = 0LL;
  }
  bTracingEnabled = 0;
  McGenEventRegister_EtwRegister(&DxgkControlGuid, v26, &DxgkControlGuid_Context, (ULONGLONG *)&DxgkControlGuid_Context);
  LODWORD(v54) = -1;
  v55 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v56 = 1;
    LODWORD(v54) = 0;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerEnter, v30, 0);
  }
  else
  {
    v56 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v54, 0);
  v57[0] = &DxgkControlGuid;
  v57[1] = &Dxgk_WDI_NotifyUser;
  WdDiagInit(v57);
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
  v31 = WdmlibIoCreateDeviceSecure(
          DriverObject,
          0,
          &DestinationString,
          0x22u,
          0x100u,
          Size,
          &DefaultSDDLString,
          &GUID_SD_DXGKRNL_DRIVER_OBJECT,
          (PDEVICE_OBJECT *)&g_pDeviceObject);
  v8 = v31;
  if ( v31 < 0
    || (v32 = DxgkInitialPower(), v8 = v32, v32 < 0)
    || (v37 = MonitorInitializeGlobal(v34, v33, v35, v36), v8 = v37, v37 < 0) )
  {
    WdLogSingleEntry1(3LL, v8);
LABEL_48:
    DxgkCleanupPower();
    MonitorCleanupGlobal(v47, v46, v48, v49);
    if ( g_pDeviceObject )
    {
      IoDeleteDevice((PDEVICE_OBJECT)g_pDeviceObject);
      g_pDeviceObject = 0LL;
    }
    if ( g_RegistryPath.Buffer )
    {
      ExFreePoolWithTag(g_RegistryPath.Buffer, 0);
      g_RegistryPath = 0LL;
    }
    DXGGLOBAL::DestroyGlobal();
    PsTlsFree(g_DxgkThreadTlsId);
    ExDeleteLookasideListEx(&g_DxgkThreadLookasideList);
    wil_UninitializeFeatureStaging();
    goto LABEL_54;
  }
  SysMmInitializeGlobal(v39, v38);
  DxgkInitTest();
  DxgDbgInit();
  TdrInit();
  v40 = SMgrRegisterSessionChangeCallout(DxgkNotifySessionStateChange);
  v8 = v40;
  if ( v40 < 0 )
  {
    WdLogSingleEntry1(2LL, v40);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        0,
        v41,
        v42,
        0LL,
        0,
        -1,
        L"Could not register session change callout with session manager, returning 0x%I64x.",
        v8,
        0LL,
        0LL,
        0LL,
        0LL,
        v54,
        v55);
    goto LABEL_48;
  }
  v43 = IoRegisterShutdownNotification((PDEVICE_OBJECT)g_pDeviceObject);
  v8 = v43;
  if ( v43 < 0 )
  {
    WdLogSingleEntry1(2LL, v43);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        0,
        v44,
        v45,
        0LL,
        0,
        -1,
        L"Could not register for shutdown notification, returning 0x%I64x.",
        v8,
        0LL,
        0LL,
        0LL,
        0LL,
        v54,
        v55);
    SMgrUnregisterSessionChangeCallout(DxgkNotifySessionStateChange);
    goto LABEL_48;
  }
  LODWORD(v8) = 0;
LABEL_54:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
  if ( v56 )
  {
    LOBYTE(v50) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v50, &EventProfilerExit, v51, v54);
  }
  return v8;
}
