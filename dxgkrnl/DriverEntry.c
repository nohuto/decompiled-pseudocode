/*
 * XREFs of DriverEntry @ 0x1C03D9E6C
 * Callers:
 *     GsDriverEntry @ 0x1C03D9010 (GsDriverEntry.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McGenEventRegister_EtwRegister @ 0x1C00205D0 (McGenEventRegister_EtwRegister.c)
 *     ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C0021DF4 (-DxgkInitializeTelemetry@@YAXXZ.c)
 *     InitializeTelemetryAssertsKMByDriverObject @ 0x1C0023004 (InitializeTelemetryAssertsKMByDriverObject.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     MonitorCleanupGlobal @ 0x1C006AF64 (MonitorCleanupGlobal.c)
 *     ?DxgkInitTest@@YAXXZ @ 0x1C01DD9D8 (-DxgkInitTest@@YAXXZ.c)
 *     MonitorInitializeGlobal @ 0x1C01FAE24 (MonitorInitializeGlobal.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C0203154 (WdmlibIoCreateDeviceSecure.c)
 *     ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C0205590 (-CreateGlobal@CCD_BTL@@SAJXZ.c)
 *     DxgkInitialPower @ 0x1C02056FC (DxgkInitialPower.c)
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C0205754 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     ?SysMmInitializeGlobal@@YAXXZ @ 0x1C020CF44 (-SysMmInitializeGlobal@@YAXXZ.c)
 *     ?TdrInit@@YAXXZ @ 0x1C0213610 (-TdrInit@@YAXXZ.c)
 *     ?DxgDbgInit@@YAXXZ @ 0x1C0219AB4 (-DxgDbgInit@@YAXXZ.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C030D864 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     DxgkCleanupPower @ 0x1C0395C18 (DxgkCleanupPower.c)
 *     wil_InitializeFeatureStaging @ 0x1C03D9078 (wil_InitializeFeatureStaging.c)
 *     DpiInitializeGlobalState @ 0x1C03D91E8 (DpiInitializeGlobalState.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  int v4; // eax
  __int64 v5; // rbx
  NTSTATUS v6; // eax
  int ProcessNotifyRoutineEx2; // eax
  unsigned __int8 v8; // al
  NTSTATUS result; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  NTSTATUS v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  NTSTATUS v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  const wchar_t *v37; // rax
  __int64 v38; // rbx
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  int v42; // ecx
  int v43; // r8d
  int v44; // edx
  int v45; // r8d
  int v46; // edx
  int v47; // r8d
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  BOOLEAN Size; // [rsp+28h] [rbp-D8h]
  __int64 v53; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v54; // [rsp+68h] [rbp-98h]
  char v55; // [rsp+70h] [rbp-90h]
  _QWORD v56[2]; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DefaultSDDLString; // [rsp+88h] [rbp-78h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-50h] BYREF
  int v60; // [rsp+B8h] [rbp-48h]
  const wchar_t *v61; // [rsp+C0h] [rbp-40h]
  unsigned __int8 *v62; // [rsp+C8h] [rbp-38h]
  int v63; // [rsp+D0h] [rbp-30h]
  unsigned __int8 *v64; // [rsp+D8h] [rbp-28h]
  int v65; // [rsp+E0h] [rbp-20h]
  __int64 v66; // [rsp+E8h] [rbp-18h]
  int v67; // [rsp+F0h] [rbp-10h]
  __int128 v68; // [rsp+F8h] [rbp-8h]
  __int128 v69; // [rsp+108h] [rbp+8h]
  __int64 v70; // [rsp+118h] [rbp+18h]
  __int64 SystemInformation; // [rsp+140h] [rbp+40h] BYREF

  g_pDriverObject = DriverObject;
  g_RegistryPath.Buffer = (wchar_t *)operator new[](RegistryPath->MaximumLength, 0x4B677844u, 256LL);
  if ( !g_RegistryPath.Buffer )
  {
    WdLogSingleEntry1(2LL, 345LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v32,
        v31,
        v33,
        0LL,
        0,
        -1,
        L"Failed to allocate registry path buffer.",
        345LL,
        0LL,
        0LL,
        0LL,
        0LL);
    return -1073741801;
  }
  g_RegistryPath.MaximumLength = RegistryPath->MaximumLength;
  RtlCopyUnicodeString(&g_RegistryPath, RegistryPath);
  v4 = PsTlsAlloc(DxgkThreadPsTslCallback, 0LL, &g_DxgkThreadTlsId);
  v5 = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry1(2LL, v4);
    if ( !bTracingEnabled )
      return v5;
    LOBYTE(v35) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) == 0 )
      return v5;
    v37 = L"Failed to allocate a PsTls slot for DxgkThread, returning 0x%I64x.";
    goto LABEL_29;
  }
  v6 = ExInitializeLookasideListEx(&g_DxgkThreadLookasideList, 0LL, 0LL, (POOL_TYPE)512, 0, 0x40uLL, 0x54677844u, 0);
  v5 = v6;
  if ( v6 < 0 )
  {
    PsTlsFree(g_DxgkThreadTlsId);
    WdLogSingleEntry1(2LL, v5);
    if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) == 0 )
      return v5;
    v37 = L"Failed to initialize the lookaside list for DXGTHREAD, returning 0x%I64x";
LABEL_29:
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(v35, v34, v36, 0LL, 0, -1, v37, v5, 0LL, 0LL, 0LL, 0LL);
    return v5;
  }
  ProcessNotifyRoutineEx2 = PsSetCreateProcessNotifyRoutineEx2(0LL, DxgkProcessNotify, 0LL);
  if ( ProcessNotifyRoutineEx2 < 0 )
  {
    v38 = ProcessNotifyRoutineEx2;
    WdLogSingleEntry1(2LL, ProcessNotifyRoutineEx2);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v40,
          v39,
          v41,
          0LL,
          0,
          -1,
          L"PsSetCreateProcessNotifyRoutineEx failed 0x%I64x",
          v38,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  SystemInformation = 8LL;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) < 0
    || (v8 = 1, (SystemInformation & 0x200000000LL) == 0) )
  {
    v8 = 0;
  }
  g_OSTestSigningEnabled = v8;
  v59 = 0LL;
  v60 = 288;
  v61 = L"IsInternalRelease";
  v63 = 67108868;
  v62 = &g_IsInternalRelease;
  v64 = &g_IsInternalRelease;
  v65 = 4;
  v66 = 0LL;
  v67 = 0;
  v70 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v59, 0LL, 0LL);
  g_IsInternalRelease = g_IsInternalRelease != 0;
  g_IsInternalReleaseOrDbg = g_IsInternalRelease;
  g_bSkuSupportMultipleUsers = (RtlGetSuiteMask() & 0x110) == 16;
  wil_InitializeFeatureStaging();
  InitializeTelemetryAssertsKMByDriverObject((__int64)DriverObject);
  WdInitialize();
  result = DpiInitializeGlobalState();
  if ( result >= 0 )
  {
    result = DXGGLOBAL::CreateGlobal(v11, v10, v12, v13);
    if ( result >= 0 )
    {
      result = CCD_BTL::CreateGlobal();
      if ( result >= 0 )
      {
        DxgkInitializeTelemetry();
        Size = 0;
        v14 = ExSubscribeWnfStateChange(&gScreenStudyEventSubscription, &WNF_SRUM_SCREENONSTUDY_SESSION, 1LL);
        if ( v14 < 0 )
        {
          WdLogSingleEntry1(2LL, v14);
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v42,
              v15,
              v43,
              0LL,
              0,
              -1,
              L"ExSubscribeWnfStateChange failed, returing 0x%I64x");
          gScreenStudyEventSubscription = 0LL;
        }
        bTracingEnabled = 0;
        McGenEventRegister_EtwRegister(
          &DxgkControlGuid,
          v15,
          &DxgkControlGuid_Context,
          (ULONGLONG *)&DxgkControlGuid_Context);
        LODWORD(v53) = -1;
        v54 = 0LL;
        if ( (qword_1C013A870 & 2) != 0 )
        {
          v55 = 1;
          LODWORD(v53) = 0;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerEnter, v17, 0);
        }
        else
        {
          v55 = 0;
        }
        DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v53, 0);
        v56[0] = &DxgkControlGuid;
        v56[1] = &Dxgk_WDI_NotifyUser;
        WdDiagInit(v56);
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
          L"D:P(A;;GRGW;;;S-1-5-83-0)(A;;GRGW;;;S-1-15-3-1024-2268835264-3721307629-241982045-173645152-1490879176-1046434"
           "41-2915960892-1612460704)");
        v18 = WdmlibIoCreateDeviceSecure(
                DriverObject,
                0,
                &DestinationString,
                0x22u,
                0x100u,
                Size,
                &DefaultSDDLString,
                &GUID_SD_DXGKRNL_DRIVER_OBJECT,
                (PDEVICE_OBJECT *)&g_pDeviceObject);
        v5 = v18;
        if ( v18 < 0
          || (v19 = DxgkInitialPower(), v5 = v19, v19 < 0)
          || (v24 = MonitorInitializeGlobal(v21, v20, v22, v23), v5 = v24, v24 < 0) )
        {
          WdLogSingleEntry1(3LL, v5);
        }
        else
        {
          SysMmInitializeGlobal(v26, v25);
          DxgkInitTest();
          DxgDbgInit();
          TdrInit();
          v27 = SMgrRegisterSessionChangeCallout(DxgkNotifySessionStateChange);
          v5 = v27;
          if ( v27 < 0 )
          {
            WdLogSingleEntry1(2LL, v27);
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                0,
                v44,
                v45,
                0LL,
                0,
                -1,
                L"Could not register session change callout with session manager, returning 0x%I64x.",
                v5,
                0LL,
                0LL,
                0LL,
                0LL,
                v53,
                v54);
          }
          else
          {
            v28 = IoRegisterShutdownNotification((PDEVICE_OBJECT)g_pDeviceObject);
            v5 = v28;
            if ( v28 >= 0 )
            {
              LODWORD(v5) = 0;
LABEL_19:
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
              if ( v55 )
              {
                LOBYTE(v29) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v53);
              }
              return v5;
            }
            WdLogSingleEntry1(2LL, v28);
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                0,
                v46,
                v47,
                0LL,
                0,
                -1,
                L"Could not register for shutdown notification, returning 0x%I64x.",
                v5,
                0LL,
                0LL,
                0LL,
                0LL,
                v53,
                v54);
            SMgrUnregisterSessionChangeCallout(DxgkNotifySessionStateChange);
          }
        }
        DxgkCleanupPower();
        MonitorCleanupGlobal(v49, v48, v50, v51);
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
        goto LABEL_19;
      }
    }
  }
  return result;
}
