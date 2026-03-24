/*
 * XREFs of DpiFdoStartAdapter @ 0x1C0189268
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x1C0187BE8 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiLdaStartAdapterInChain @ 0x1C02D8788 (DpiLdaStartAdapterInChain.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D994 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     DxgkDiagCalcDuration1us @ 0x1C0020364 (DxgkDiagCalcDuration1us.c)
 *     ?DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z @ 0x1C0022AEC (-DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiHybridInternalPanelOverride @ 0x1C0022BB0 (DpiHybridInternalPanelOverride.c)
 *     DpiFdoInitializeMipiDsi @ 0x1C0022D3C (DpiFdoInitializeMipiDsi.c)
 *     DpiFdoCleanupMipiDsi @ 0x1C0022DD4 (DpiFdoCleanupMipiDsi.c)
 *     DpiFdoInitializeDP @ 0x1C0022DFC (DpiFdoInitializeDP.c)
 *     DpiFdoInitializeDisplayDiagnostics @ 0x1C0022EA0 (DpiFdoInitializeDisplayDiagnostics.c)
 *     DpiFdoCleanupDisplayDiagnostics @ 0x1C0022F1C (DpiFdoCleanupDisplayDiagnostics.c)
 *     SendBDDDiagTelemetry @ 0x1C00242C8 (SendBDDDiagTelemetry.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_HPDWakeFiltering__private_ReportDeviceUsage @ 0x1C00285E0 (Feature_HPDWakeFiltering__private_ReportDeviceUsage.c)
 *     Feature_LegacyHPDFiltering__private_ReportDeviceUsage @ 0x1C0028644 (Feature_LegacyHPDFiltering__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C003A380 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C003A9C0 (McTemplateK0pt_EtwWriteTransfer.c)
 *     NotifyUserMSBDAIfApplicable @ 0x1C0052B88 (NotifyUserMSBDAIfApplicable.c)
 *     DpiFdoCleanupDP @ 0x1C0052CB8 (DpiFdoCleanupDP.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C012E130 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C012E3AC (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C0145F7C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0174DC4 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C0178308 (DpiDxgkDdiDisplayDetectControl.c)
 *     MonitorInitializeAdapterDone @ 0x1C01842C4 (MonitorInitializeAdapterDone.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C0185C24 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     DpiFdoConnectInterrupt @ 0x1C01881BC (DpiFdoConnectInterrupt.c)
 *     DpiKsrIsSoftBoot @ 0x1C0188340 (DpiKsrIsSoftBoot.c)
 *     DpiDxgkDdiStartDevice @ 0x1C0188360 (DpiDxgkDdiStartDevice.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C0188434 (DpiFdoCreateRelatedObjects.c)
 *     DpiOpenPnpRegistryKey @ 0x1C01890E0 (DpiOpenPnpRegistryKey.c)
 *     DpiFdoOpenDeviceFileObjectIfNeeded @ 0x1C018ABE0 (DpiFdoOpenDeviceFileObjectIfNeeded.c)
 *     DpiGetDevicePropertyString @ 0x1C018AC18 (DpiGetDevicePropertyString.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C018B6B8 (DpiFdoInitializeGpuVirtualization.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C018B94C (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiQueryMiniportInterface @ 0x1C018E538 (DpiQueryMiniportInterface.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C01943B0 (DxgkRetrieveStringFromRegistry.c)
 *     DxgkAddAdapter @ 0x1C0195B98 (DxgkAddAdapter.c)
 *     DpiFdoEnumChildDevices @ 0x1C0197594 (DpiFdoEnumChildDevices.c)
 *     DxgkAcquireGdiViewIds @ 0x1C019DB44 (DxgkAcquireGdiViewIds.c)
 *     DpiMiracastDdiMiracastQueryCaps @ 0x1C019E8B8 (DpiMiracastDdiMiracastQueryCaps.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C02100FC (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C0210244 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1C0218208 (DxgkReleaseAdapterFdoReference.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1C0221578 (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C0221668 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C0221860 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02219D0 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     ?LPMDisplayRegisterInternalDisplay@@YAXPEAXI@Z @ 0x1C0276590 (-LPMDisplayRegisterInternalDisplay@@YAXPEAXI@Z.c)
 *     ?CommitSessionGdiViewIds@DXGSESSIONDATA@@QEAAJXZ @ 0x1C029EE94 (-CommitSessionGdiViewIds@DXGSESSIONDATA@@QEAAJXZ.c)
 *     DxgkReleaseGdiViewId @ 0x1C02A0734 (DxgkReleaseGdiViewId.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C02C8EC0 (DpiFdoCleanupGpuVirtualization.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C02C91B4 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x1C02C925C (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C02CC13C (DpiFdoRemoveChildDescriptors.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C02CCC18 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x1C02D33DC (DpiKsrRestoreAdapterDriverState.c)
 *     DpiDxgkDdiStopDevice @ 0x1C02D91A4 (DpiDxgkDdiStopDevice.c)
 */

__int64 __fastcall DpiFdoStartAdapter(
        struct _DEVICE_OBJECT *a1,
        char a2,
        void *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned int a5,
        __int64 a6,
        _QWORD *a7)
{
  char v7; // bl
  __int64 v9; // rsi
  char *DeviceExtension; // r14
  __int64 v11; // r12
  __int64 (__fastcall *v12)(_QWORD, _QWORD, __int64); // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 started; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int *v19; // rdi
  unsigned int v20; // ebx
  struct _DEVICE_OBJECT *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r9
  int v25; // edi
  DXGADAPTER *v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rdi
  int v29; // eax
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // eax
  bool v42; // cf
  bool v43; // zf
  __int64 v44; // rdx
  __int64 v45; // rcx
  NTSTATUS LocallyUniqueId; // eax
  struct _LUID *v47; // rdx
  _QWORD *v48; // rcx
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  _DWORD *v64; // rbx
  __int64 v65; // rax
  unsigned int v66; // ecx
  int v67; // eax
  _DWORD *v68; // rdi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  int DevicePropertyString; // eax
  __int64 v76; // rcx
  __int64 v77; // rbx
  _QWORD *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  int v81; // eax
  _BYTE *v82; // rbx
  int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rax
  int v86; // r8d
  unsigned int v87; // eax
  unsigned int *v88; // rax
  int v89; // eax
  __int64 v90; // rax
  char v91; // r8
  __int64 v92; // rax
  bool v93; // zf
  __int64 v94; // r8
  __int64 v95; // rdx
  int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rcx
  int RelatedObjects; // eax
  int Caps; // eax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rbx
  __int64 v104; // rax
  int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rbx
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rcx
  int v118; // eax
  NTSTATUS v119; // eax
  unsigned int v120; // edx
  int v121; // eax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  int v127; // eax
  __int64 v128; // rbx
  int v129; // eax
  struct DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rax
  int v135; // eax
  BOOLEAN v136; // dl
  NTSTATUS v137; // eax
  __int64 v138; // rdx
  __int64 v139; // rcx
  int v140; // eax
  __int64 v141; // rax
  __int64 DiagnosticInfoArgs; // rax
  __int64 v143; // rdi
  __int64 v144; // rcx
  unsigned __int64 v145; // rax
  __int64 v146; // rdi
  __int64 v147; // rcx
  __int64 (__fastcall *v148)(__int64, _QWORD); // rax
  int v149; // eax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r12
  __int64 v153; // rax
  __int64 (__fastcall *v154)(__int64, __int128 *); // rax
  __int64 v155; // rcx
  int v156; // eax
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r12
  __int64 v160; // rax
  _DWORD *v161; // rax
  _DWORD *v162; // r12
  __int64 v163; // rcx
  __int64 v164; // rax
  char *v165; // rax
  char *v166; // rbx
  int v167; // eax
  unsigned __int64 v169; // [rsp+20h] [rbp-158h]
  char v170; // [rsp+40h] [rbp-138h]
  char v171; // [rsp+41h] [rbp-137h]
  char v172; // [rsp+42h] [rbp-136h]
  char v173; // [rsp+42h] [rbp-136h]
  char v174; // [rsp+43h] [rbp-135h]
  unsigned int *v175; // [rsp+48h] [rbp-130h]
  char v176; // [rsp+50h] [rbp-128h]
  int v177; // [rsp+54h] [rbp-124h] BYREF
  char v178; // [rsp+58h] [rbp-120h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v179; // [rsp+60h] [rbp-118h]
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-110h] BYREF
  PVOID P; // [rsp+70h] [rbp-108h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-100h] BYREF
  __int64 v183; // [rsp+80h] [rbp-F8h] BYREF
  int v184; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v185; // [rsp+90h] [rbp-E8h]
  char v186; // [rsp+98h] [rbp-E0h]
  void *v187; // [rsp+A0h] [rbp-D8h]
  _QWORD *v188; // [rsp+A8h] [rbp-D0h]
  __int64 v189; // [rsp+B0h] [rbp-C8h]
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-C0h] BYREF
  __int128 v191; // [rsp+C8h] [rbp-B0h] BYREF
  __int64 v192; // [rsp+D8h] [rbp-A0h]
  __int128 v193; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v194; // [rsp+F0h] [rbp-88h]
  unsigned int v195[8]; // [rsp+F8h] [rbp-80h] BYREF
  _OWORD v196[2]; // [rsp+118h] [rbp-60h] BYREF

  v188 = a7;
  v7 = a2;
  Handle = 0LL;
  v9 = 0LL;
  memset(v195, 0, 28);
  v179 = a4;
  DestinationString = 0LL;
  v187 = a3;
  v178 = a2;
  DeviceExtension = (char *)a1->DeviceExtension;
  v172 = 0;
  v174 = 0;
  v171 = 0;
  v43 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  v11 = *((_QWORD *)DeviceExtension + 5);
  v189 = v11;
  v170 = 0;
  v176 = 0;
  v175 = 0LL;
  v183 = MEMORY[0xFFFFF78000000320];
  if ( v43 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v9 = (__int64)DeviceExtension;
    if ( (int)DpiQueryMiniportInterface(
                *((_QWORD *)DeviceExtension + 3),
                (unsigned int)&GUID_DEVINTERFACE_INDIRECT_DISP_KMD,
                112,
                3) >= 0 )
    {
      if ( a6 )
      {
        v12 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))*((_QWORD *)DeviceExtension + 131);
        if ( v12 )
        {
          v13 = v12(*((_QWORD *)DeviceExtension + 126), a5, a6);
          started = v13;
          if ( v13 < 0 )
          {
            v17 = WdLogNewEntry5_WdError(v15, v14);
            v18 = *((_QWORD *)DeviceExtension + 131);
LABEL_9:
            *(_QWORD *)(v17 + 24) = v18;
            *(_QWORD *)(v17 + 32) = started;
            goto LABEL_10;
          }
        }
      }
    }
    else
    {
      memset(DeviceExtension + 1000, 0, 0x70uLL);
    }
    v7 = v178;
    *((_DWORD *)DeviceExtension + 994) = 0;
  }
  v31 = DpiFdoConnectInterrupt(a1);
  started = v31;
  if ( v31 == -1073741275 )
  {
    v34 = WdLogNewEntry5_WdEvent(v33, v32);
    *(_QWORD *)(v34 + 24) = a1;
    WdLogEvent5_WdEvent(v34);
  }
  else
  {
    v19 = 0LL;
    if ( v31 < 0 )
      goto LABEL_49;
    v172 = 1;
  }
  if ( DeviceExtension[1152] == 1 )
  {
    if ( DeviceExtension[1155] == 1 && v7 && byte_1C00B2B16 && !DpiFdoIsCompatibleWithHighResolutionBoot((__int64)a1) )
    {
      v184 = -1;
      v185 = 0LL;
      if ( (qword_1C00B19B0 & 2) != 0 )
      {
        v186 = 1;
        v184 = 8006;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerEnter, v37, 8006);
      }
      else
      {
        v186 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v184, 8006LL);
      memset(v196, 0, sizeof(v196));
      LODWORD(v196[0]) = 18;
      x86BiosCall(16LL, v196);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v184, v38);
      if ( v186 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v184);
    }
    if ( v9 )
    {
      v41 = *(_DWORD *)(v11 + 28);
      if ( byte_1C00B2B16 )
      {
        v42 = v41 < 0x300E;
        v43 = v41 == 12302;
      }
      else
      {
        v42 = v41 < 0x2005;
        v43 = v41 == 8197;
      }
      *(_BYTE *)(v9 + 3904) = *(_BYTE *)(v9 + 3904) & 0xFB | (4 * (!v42 && !v43));
    }
  }
  for ( Interval.QuadPart = 0LL; ; Interval.QuadPart = 0LL )
  {
    LODWORD(started) = ExUuidCreate((UUID *)DeviceExtension + 166);
    if ( (int)started >= 0 )
      break;
    if ( (_DWORD)started != -1073741267 )
    {
      v17 = WdLogNewEntry5_WdError(v45, v44);
      *(_QWORD *)(v17 + 24) = (int)started;
      goto LABEL_10;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)DeviceExtension + 334);
  started = LocallyUniqueId;
  if ( LocallyUniqueId < 0 )
  {
LABEL_73:
    v17 = WdLogNewEntry5_WdError(v48, v47);
    *(_QWORD *)(v17 + 24) = started;
    goto LABEL_10;
  }
  if ( v9 )
  {
    v49 = DpiFdoSetAdapterLuid((struct _FDO_CONTEXT *)v9);
    v52 = v49;
    if ( v49 < 0 )
    {
      v53 = WdLogNewEntry5_WdError(v51, v50);
      *(_QWORD *)(v53 + 24) = v52;
      WdLogEvent5_WdError(v53);
    }
    if ( DpiKsrIsSoftBoot() )
    {
      v54 = DpiKsrRestoreAdapterDriverState((struct _FDO_CONTEXT *)v9);
      v57 = v54;
      if ( v54 < 0 )
      {
        v58 = WdLogNewEntry5_WdError(v56, v55);
        *(_QWORD *)(v58 + 24) = v57;
        WdLogEvent5_WdError(v58);
      }
    }
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x1E0uLL, 0x74727044u);
  v64 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_82;
  memset(PoolWithTag, 0, 0x1E0uLL);
  v66 = *(_DWORD *)(v11 + 28);
  v67 = 16387;
  if ( v66 <= 0x4003 )
  {
    if ( v66 <= 0x300E )
    {
      v67 = 8197;
      if ( v66 <= 0x2005 )
      {
        *v64 = 184;
      }
      else
      {
        *v64 = 256;
        v67 = 12302;
      }
    }
    else
    {
      *v64 = 264;
    }
  }
  else
  {
    *v64 = 480;
    v67 = *((_DWORD *)DeviceExtension + 681);
  }
  v64[1] = v67;
  *((_QWORD *)v64 + 2) = DpEvalAcpiMethod;
  *((_QWORD *)v64 + 3) = &DpGetDeviceInformation;
  *((_QWORD *)v64 + 4) = DpIndicateChildStatus;
  *((_QWORD *)v64 + 5) = DpMapMemory;
  *((_QWORD *)v64 + 6) = DpQueueDpc;
  *((_QWORD *)v64 + 7) = DpQueryServices;
  *((_QWORD *)v64 + 8) = DpReadDeviceSpace;
  *((_QWORD *)v64 + 9) = DpSynchronizeExecution;
  *((_QWORD *)v64 + 10) = DpUnmapMemory;
  *((_QWORD *)v64 + 11) = DpWriteDeviceSpace;
  *((_QWORD *)v64 + 12) = DpIsDevicePresent;
  *((_QWORD *)v64 + 13) = DxgGetHandleDataCB;
  *((_QWORD *)v64 + 14) = DxgGetHandleParentCB;
  *((_QWORD *)v64 + 15) = DxgEnumHandleChildrenCB;
  *((_QWORD *)v64 + 16) = DxgNotifyInterruptCB;
  *((_QWORD *)v64 + 17) = DxgNotifyDpcCB;
  *((_QWORD *)v64 + 18) = DxgMiniportQueryVidPnInterfaceCB;
  *((_QWORD *)v64 + 19) = DxgMiniportQueryMonitorInterfaceCB;
  *((_QWORD *)v64 + 20) = DxgGetCaptureAddressCB;
  *((_QWORD *)v64 + 21) = DxgLogEtwEventCb;
  *((_QWORD *)v64 + 22) = DpExcludeAdapterAccess;
  *((_QWORD *)v64 + 23) = DxgCreateContextAllocationCB;
  *((_QWORD *)v64 + 24) = DxgDestroyContextAllocationCB;
  *((_QWORD *)v64 + 25) = &DxgSetPowerComponentActiveCB;
  *((_QWORD *)v64 + 26) = DxgSetPowerComponentIdleCB;
  *((_QWORD *)v64 + 28) = DxgkPowerRuntimeControlRequestCB;
  *((_QWORD *)v64 + 29) = DxgkSetPowerComponentLatencyCB;
  *((_QWORD *)v64 + 30) = DxgkSetPowerComponentResidencyCB;
  *((_QWORD *)v64 + 31) = DxgkCompleteFStateTransitionCB;
  *((_QWORD *)v64 + 32) = DxgkCompletePStateTransitionCB;
  *((_QWORD *)v64 + 27) = DpAcquirePostDisplayOwnership;
  *((_QWORD *)v64 + 33) = DxgkMapContextAllocationCB;
  *((_QWORD *)v64 + 34) = DxgkUpdateContextAllocationCB;
  *((_QWORD *)v64 + 35) = DxgkReserveGpuVirtualAddressRangeCB;
  *((_QWORD *)v64 + 36) = DxgkAcquireHandleDataCB;
  *((_QWORD *)v64 + 37) = DxgkReleaseHandleDataCB;
  *((_QWORD *)v64 + 38) = DxgkHardwareContentProtectionTeardownCB;
  *((_QWORD *)v64 + 39) = DxgkMultiPlaneOverlayDisabledCB;
  *((_QWORD *)v64 + 40) = DxgkMitigatedRangeUpdateCB;
  *((_QWORD *)v64 + 1) = a1;
  *((_QWORD *)v64 + 42) = DpIndicateConnectorChange;
  *((_QWORD *)v64 + 43) = DxgkUnblockUEFIFrameBufferRangesCB;
  *((_QWORD *)v64 + 44) = DpAcquirePostDisplayOwnership2;
  *((_QWORD *)v64 + 45) = DxgkSetProtectedSessionStatusCB;
  *((_QWORD *)v64 + 46) = DxgkAllocateContiguousMemoryCB;
  *((_QWORD *)v64 + 47) = DxgkFreeContiguousMemoryCB;
  *((_QWORD *)v64 + 48) = DxgkAllocatePagesForMdlCB;
  *((_QWORD *)v64 + 49) = DxgkFreePagesFromMdlCB;
  *((_QWORD *)v64 + 50) = DxgkPinFrameBufferForSaveCB;
  *((_QWORD *)v64 + 51) = DxgkUnpinFrameBufferForSaveCB;
  *((_QWORD *)v64 + 52) = DxgkMapFrameBufferPointerCB;
  *((_QWORD *)v64 + 53) = DxgkUnmapFrameBufferPointerCB;
  *((_QWORD *)v64 + 54) = DxgkMapMdlToIoMmuCB;
  *((_QWORD *)v64 + 55) = DxgkUnmapMdlFromIoMmuCB;
  *((_QWORD *)v64 + 56) = DxgkCbReportDiagnostic;
  *((_QWORD *)v64 + 41) = DxgkInvalidateHwContextCB;
  *((_QWORD *)v64 + 57) = DxgkSignalEventCB;
  *((_QWORD *)v64 + 58) = DpIsFeatureEnabled;
  *((_QWORD *)v64 + 59) = DpSaveMemoryForHotUpdateCB;
  v195[0] = 32;
  v68 = DeviceExtension + 2684;
  *(_OWORD *)&v195[1] = *((_OWORD *)DeviceExtension + 166);
  *(_QWORD *)&v195[5] = *((_QWORD *)DeviceExtension + 334);
  qword_1C00B2E70 = (__int64)KeGetCurrentThread();
  qword_1C00B2E78 = (__int64)a1;
  started = (int)DpiDxgkDdiStartDevice(
                   v11,
                   *((_QWORD *)DeviceExtension + 6),
                   v195,
                   (__int64)v64,
                   (_DWORD *)DeviceExtension + 671,
                   (_DWORD *)DeviceExtension + 670);
  ExFreePoolWithTag(v64, 0x74727044u);
  qword_1C00B2E78 = 0LL;
  qword_1C00B2E70 = 0LL;
  if ( (int)started < 0 )
  {
    v72 = WdLogNewEntry5_WdError(v70, v69);
    *(_QWORD *)(v72 + 24) = *(_QWORD *)(v11 + 152);
    *(_QWORD *)(v72 + 32) = started;
    WdLogEvent5_WdError(v72);
    if ( (_DWORD)started != -1071775735 )
    {
      if ( (_DWORD)started == -1071774944 && DeviceExtension[1152] )
      {
        v78 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v74, v73);
        v78[3] = 275LL;
        v78[4] = 26LL;
        v78[5] = v11;
        v79 = (unsigned __int8)byte_1C00B2B16;
        v78[7] = 0LL;
        v78[6] = v79;
        WdLogEvent5_WdCriticalError(v78);
      }
      goto LABEL_11;
    }
    P = 0LL;
    if ( !DeviceExtension[1152] )
    {
LABEL_11:
      v19 = v175;
      goto LABEL_12;
    }
    DevicePropertyString = DpiGetDevicePropertyString(
                             *((PDEVICE_OBJECT *)DeviceExtension + 19),
                             DevicePropertyHardwareID,
                             PagedPool,
                             (__int64)&v177);
    v77 = DevicePropertyString;
    if ( DevicePropertyString >= 0 )
    {
      WdDiagNotifyUser(8LL, 5LL, 1LL, &P);
      if ( P )
        ExFreePoolWithTag(P, 0);
      goto LABEL_11;
    }
LABEL_94:
    v17 = WdLogNewEntry5_WdError(v76, v47);
    *(_QWORD *)(v17 + 24) = v77;
LABEL_10:
    WdLogEvent5_WdError(v17);
    goto LABEL_11;
  }
  if ( DeviceExtension[1152] )
  {
    xmmword_1C00B2DD8 = 0LL;
    DWORD2(xmmword_1C00B2DD8) = -1;
    xmmword_1C00B2DC8 = 0LL;
    memset(&xmmword_1C00B2DE8, 0, 0x80uLL);
    dword_1C00B2E68 = 3;
  }
  if ( !*((_DWORD *)DeviceExtension + 672) && *v68 > 1u )
  {
    v80 = WdLogNewEntry5_WdWarning(v70, v69, v71);
    *(_QWORD *)(v80 + 24) = (unsigned int)*v68;
    WdLogEvent5_WdWarning(v80);
    *v68 = 1;
  }
  v174 = 1;
  if ( !v9 )
  {
    v19 = 0LL;
    goto LABEL_202;
  }
  if ( *(_DWORD *)(v9 + 2680) )
  {
    v81 = DpiFdoEnumChildDevices(a1);
    started = v81;
    if ( v81 < 0 )
      goto LABEL_73;
  }
  v82 = (_BYTE *)(v9 + 3904);
  v83 = DxgkAddAdapter(a1, v187, (struct _DXGK_ADAPTER_CAPS *)(v9 + 3904), v179);
  started = v83;
  if ( v83 < 0 )
    goto LABEL_73;
  v84 = *(_QWORD *)(v9 + 3896);
  if ( v84 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v84 + 24));
  }
  else
  {
    v85 = WdLogNewEntry5_WdError(v48, v47);
    *(_QWORD *)(v85 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v85);
  }
  v171 = 1;
  *(_BYTE *)(v9 + 2743) = DXGADAPTER::IsAdapterSessionized(
                            *(DXGADAPTER **)(v9 + 3896),
                            v47,
                            0LL,
                            (unsigned __int64 *)(v9 + 5936));
  v87 = *(_DWORD *)(v9 + 2684);
  if ( v87 )
  {
    v88 = (unsigned int *)ExAllocatePoolWithTag((POOL_TYPE)(v86 + 1), 4LL * v87, 0x74727044u);
    v175 = v88;
    if ( !v88 )
    {
LABEL_82:
      LODWORD(started) = -1073741670;
      v65 = WdLogNewEntry5_WdLowResource(v61, v60, v62, v63);
      *(_QWORD *)(v65 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v65);
      goto LABEL_11;
    }
    LOBYTE(v61) = *(_BYTE *)(v9 + 2743);
    v89 = DxgkAcquireGdiViewIds(v61, *(_QWORD *)(v9 + 5936), v9 + 2684, v88);
    v19 = 0LL;
    started = v89;
    if ( v89 < 0 )
    {
      v90 = WdLogNewEntry5_WdError(v76, v47);
      *(_QWORD *)(v90 + 24) = started;
      WdLogEvent5_WdError(v90);
      ExFreePoolWithTag(v175, 0);
      v175 = 0LL;
      goto LABEL_12;
    }
  }
  LOBYTE(v76) = *(_BYTE *)(v9 + 3905) ^ (*(_BYTE *)(v9 + 3905) ^ (2 * *(_BYTE *)(v9 + 3905))) & 8;
  *(_BYTE *)(v9 + 3905) = v76;
  v91 = v76;
  if ( (v76 & 4) != 0 && (!*(_QWORD *)(v11 + 1128) || !*(_QWORD *)(v11 + 1136)) )
  {
    v92 = WdLogNewEntry5_WdError(v76, v47);
    *(_QWORD *)(v92 + 24) = (int)started;
    WdLogEvent5_WdError(v92);
    *(_BYTE *)(v9 + 3905) &= ~8u;
    v91 = *(_BYTE *)(v9 + 3905);
    LOBYTE(v76) = v91;
  }
  LOBYTE(v47) = v76;
  if ( (*v82 & 1) != 0 && *(int *)(v9 + 3912) >= 0x2000 && !*(_BYTE *)(v9 + 1158) )
  {
    if ( (v91 & 8) != 0 )
    {
      Feature_HPDWakeFiltering__private_ReportDeviceUsage();
    }
    else
    {
      Feature_LegacyHPDFiltering__private_ReportDeviceUsage();
      *(_BYTE *)(v9 + 3905) |= 0x10u;
    }
    LOBYTE(v47) = *(_BYTE *)(v9 + 3905);
  }
  if ( ((unsigned __int8)v47 & 8) == 0 && !*(_QWORD *)(v11 + 208)
    || *(_BYTE *)(v9 + 2697) && ((unsigned __int8)v47 & 0x20) == 0 )
  {
    v77 = -1073741735LL;
    LODWORD(started) = -1073741735;
    goto LABEL_94;
  }
  if ( qword_1C00B2B28 )
  {
    if ( *(_BYTE *)(v9 + 2692) && ((unsigned __int8)v47 & 1) != 0 )
    {
      v93 = (_BYTE)word_1C00B2B1D == 0;
LABEL_141:
      if ( !v93 )
        goto LABEL_143;
      goto LABEL_142;
    }
  }
  else
  {
    if ( ((unsigned __int8)v47 & 1) != 0 )
    {
LABEL_142:
      qword_1C00B2B28 = (__int64)a1;
      goto LABEL_143;
    }
    if ( DpiHybridInternalPanelOverride() && (*v82 & 0x20) != 0 && *(_BYTE *)(v9 + 1152) )
    {
      v93 = (*v82 & 0x40) == 0;
      goto LABEL_141;
    }
  }
LABEL_143:
  if ( (*v82 & 0x40) != 0 )
  {
    v76 = qword_1C00B2B20;
    if ( qword_1C00B2B20 && (struct _DEVICE_OBJECT *)qword_1C00B2B20 != a1 )
    {
      if ( !*(_BYTE *)(v9 + 2692) || (_BYTE)word_1C00B2B1D )
      {
        *v82 &= ~0x40u;
        goto LABEL_150;
      }
      *(_BYTE *)(*(_QWORD *)(qword_1C00B2B20 + 64) + 3904LL) &= ~0x40u;
    }
    qword_1C00B2B20 = (__int64)a1;
    HIBYTE(word_1C00B2B1D) = (*(_BYTE *)(v9 + 3905) & 2) != 0;
  }
LABEL_150:
  if ( qword_1C00B2B28 )
  {
    v47 = (struct _LUID *)qword_1C00B2B20;
    if ( qword_1C00B2B20 )
    {
      if ( !(_BYTE)word_1C00B2B1D )
      {
        LOBYTE(v76) = *(_BYTE *)(*(_QWORD *)(qword_1C00B2B28 + 64) + 2692LL);
        if ( *(_BYTE *)(*(_QWORD *)(qword_1C00B2B20 + 64) + 2692LL) )
        {
          if ( !(_BYTE)v76 )
            goto LABEL_155;
        }
        else if ( (_BYTE)v76 )
        {
LABEL_155:
          LOBYTE(word_1C00B2B1D) = 0;
          goto LABEL_156;
        }
        LOBYTE(word_1C00B2B1D) = 1;
        *((_BYTE *)DXGGLOBAL::GetGlobal(v76, qword_1C00B2B20) + 761) = 1;
      }
    }
  }
LABEL_156:
  v48 = v188;
  if ( v188 )
  {
    *v188 = *(_QWORD *)v82;
    *((_DWORD *)v48 + 2) = *(_DWORD *)(v9 + 3912);
  }
  if ( *(_BYTE *)(v9 + 1152) && (*v82 & 1) == 0 && !DeviceExtension[2695] )
  {
    started = -1071775740LL;
    goto LABEL_73;
  }
  if ( *(_DWORD *)(v9 + 3480) )
  {
    v94 = *(_QWORD *)(v9 + 48);
    v95 = *(_QWORD *)(v9 + 40);
    v191 = 0LL;
    LODWORD(v191) = 67108861;
    v192 = 0LL;
    v96 = DpiDxgkDdiDisplayDetectControl(v9, v95, v94, (unsigned int *)&v191);
    started = v96;
    if ( v96 < 0 )
    {
      v17 = WdLogNewEntry5_WdError(v98, v97);
      v18 = *(_QWORD *)(v11 + 1128);
      goto LABEL_9;
    }
  }
  v19 = v175;
  RelatedObjects = DpiFdoCreateRelatedObjects((__int64)a1, *(_DWORD *)(v9 + 2684), (__int64)v175, (__int64)v179);
  started = RelatedObjects;
  if ( RelatedObjects < 0 )
    goto LABEL_49;
  if ( (*v82 & 1) != 0 && (int)DpiAcquireCoreSyncAccessSafe((__int64)a1, 1) >= 0 )
  {
    MonitorInitializeAdapterDone(*(PERESOURCE **)(v9 + 3896), v179);
    DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
  }
  v170 = 1;
  if ( *(_DWORD *)(v9 + 3224) != -1 )
  {
    Caps = DpiMiracastDdiMiracastQueryCaps(v9, v32, v9 + 3216);
    v103 = Caps;
    if ( Caps < 0 )
    {
      v104 = WdLogNewEntry5_WdEvent(v102, v101);
      *(_QWORD *)(v104 + 24) = v103;
      WdLogEvent5_WdEvent(v104);
      *(_DWORD *)(v9 + 3224) = -1;
      memset((void *)(v9 + 3152), 0, 0x40uLL);
    }
  }
  v105 = DpiOpenPnpRegistryKey((__int64)a1, 2u, 0x20019u, &Handle);
  v108 = v105;
  if ( v105 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"MiracastDriverName");
    if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
    {
      v114 = WdLogNewEntry5_WdEvent(v113, v112);
      *(_QWORD *)(v114 + 24) = DxgkRetrieveStringFromRegistry;
      WdLogEvent5_WdEvent(v114);
    }
    ZwClose(Handle);
  }
  else
  {
    v109 = WdLogNewEntry5_WdEvent(v107, v106);
    *(_QWORD *)(v109 + 24) = v108;
    WdLogEvent5_WdEvent(v109);
  }
  v115 = *(_QWORD *)(v9 + 4936);
  if ( v115 )
  {
    v116 = *(_QWORD *)(v9 + 4936);
    if ( *(_QWORD *)(v115 + 48) && *(_BYTE *)v115 )
    {
      *(_BYTE *)v115 = 0;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      {
        LODWORD(v169) = *(unsigned __int8 *)(*(_QWORD *)(v9 + 4936) + 2LL);
        McTemplateK0pt_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          &EventDpiFdoThermalActiveCooling,
          v111,
          a1,
          v169);
      }
      v117 = *(_QWORD *)(v9 + 4936);
      LOBYTE(v110) = *(_BYTE *)(v117 + 2);
      (*(void (__fastcall **)(_QWORD, __int64))(v117 + 48))(*(_QWORD *)(v117 + 16), v110);
      v116 = *(_QWORD *)(v9 + 4936);
    }
    if ( *(_QWORD *)(v116 + 56) && *(_BYTE *)(v116 + 1) )
    {
      *(_BYTE *)(v116 + 1) = 0;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      {
        LODWORD(v169) = *(_DWORD *)(*(_QWORD *)(v9 + 4936) + 4LL);
        McTemplateK0pq_EtwWriteTransfer((unsigned int)v169, &EventDpiFdoThermalPassiveCooling, v111, a1, v169);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v9 + 4936) + 56LL))(
        *(_QWORD *)(*(_QWORD *)(v9 + 4936) + 16LL),
        *(unsigned int *)(*(_QWORD *)(v9 + 4936) + 4LL));
    }
  }
  v118 = DpiFdoInitializeGpuVirtualization(a1);
  started = v118;
  if ( v118 < 0
    || *(_BYTE *)(v9 + 482)
    && (DXGADAPTER::StartRuntimePowerManagement(*(DXGADAPTER **)(v9 + 3896)), *(_BYTE *)(v9 + 5736))
    && (v119 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 5720), 1u), started = v119, v119 < 0) )
  {
LABEL_49:
    v35 = WdLogNewEntry5_WdError(v33, v32);
    *(_QWORD *)(v35 + 24) = started;
    WdLogEvent5_WdError(v35);
    goto LABEL_12;
  }
  if ( !*(_BYTE *)(v9 + 480) )
  {
    v120 = *(_DWORD *)(v9 + 3484);
    if ( v120 != -1 )
      LPMDisplayRegisterInternalDisplay(*(void **)(v9 + 3896), v120);
  }
  DpiBrightnessStartDevice(a1);
  DpiFdoInitializeMipiDsi((__int64)a1);
  DpiFdoInitializeDP((__int64)a1);
  DpiFdoInitializeDisplayDiagnostics((__int64)a1);
LABEL_202:
  v121 = DpiFdoOpenDeviceFileObjectIfNeeded(DeviceExtension);
  started = v121;
  if ( v121 < 0 )
  {
LABEL_203:
    v124 = WdLogNewEntry5_WdError(v123, v122);
    *(_QWORD *)(v124 + 24) = started;
    WdLogEvent5_WdError(v124);
    v170 = v171;
    goto LABEL_12;
  }
  DxgkMiracastQueryMiracastSupportInternal(0LL);
  v126 = *((_DWORD *)DeviceExtension + 69) & 7;
  *(_DWORD *)&DeviceExtension[4 * v126 + 244] = *((_DWORD *)DeviceExtension + 60);
  v127 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  *((_DWORD *)DeviceExtension + 60) = v127;
  *((_DWORD *)DeviceExtension + 59) = 2;
  if ( v9 && v19 )
  {
    v128 = *(_QWORD *)(v9 + 5936);
    if ( *(_BYTE *)(v9 + 2743) )
    {
      Global = DXGGLOBAL::GetGlobal(v126, v125);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         *((DXGSESSIONMGR **)Global + 102),
                                         (unsigned int)v128);
      if ( !SessionDataForSpecifiedSession )
      {
        v134 = WdLogNewEntry5_WdError(v133, v132);
        *(_QWORD *)(v134 + 24) = (unsigned int)v128;
        *(_QWORD *)(v134 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v134);
LABEL_212:
        v135 = *((_DWORD *)DeviceExtension + 60);
        --*((_DWORD *)DeviceExtension + 69);
        *((_DWORD *)DeviceExtension + 59) = v135;
        *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7)
                                                                      + 244];
        goto LABEL_203;
      }
      v129 = DXGSESSIONDATA::CommitSessionGdiViewIds(SessionDataForSpecifiedSession);
    }
    else
    {
      v129 = DMgrWriteDeviceCountToRegistry();
    }
    if ( v129 < 0 )
      goto LABEL_212;
  }
  v170 = v171;
  if ( v9 )
  {
    v136 = !*(_BYTE *)(v9 + 1154) || !*(_BYTE *)(v9 + 480);
    v137 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2744), v136);
    started = v137;
    if ( v137 >= 0 )
    {
      v176 = 1;
    }
    else
    {
      v140 = *((_DWORD *)DeviceExtension + 60);
      --*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = v140;
      *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
      v141 = WdLogNewEntry5_WdError(v139, v138);
      *(_QWORD *)(v141 + 24) = started;
      WdLogEvent5_WdError(v141);
    }
    v170 = v171;
  }
LABEL_12:
  v20 = 0;
  if ( v9 )
    v20 = (*(unsigned __int8 *)(v9 + 3904) >> 1) & 0x21 | (2
                                                         * (*(_BYTE *)(v9 + 3904) & 1 | (2
                                                                                       * (*(_BYTE *)(v9 + 480) & 1 | (2 * (*(_BYTE *)(v9 + 1152) & 1 | (2 * (*(_BYTE *)(v9 + 2692) & 1 | (4 * (*(_BYTE *)(v9 + 3904) & 0x84 | *(_BYTE *)(v9 + 3905) & 1 | (2 * (*(_BYTE *)(v9 + 3904) & 0x38 | (*(_DWORD *)(v9 + 504) != 0 ? 4 : 0) | *(_BYTE *)(v9 + 1158) & 1))))))))))));
  if ( (int)started < 0 )
  {
    v21 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
    DeviceExtension[232] = 1;
    IoInvalidateDeviceState(v21);
    if ( *((_DWORD *)DeviceExtension + 59) == 2 )
    {
      v22 = *((_DWORD *)DeviceExtension + 60);
      --*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = v22;
      *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
    }
    if ( v9 )
    {
      if ( v176 == 1 )
        IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2744), 0);
      DpiFdoCleanupGpuVirtualization(v9);
      DpiFdoCleanupMipiDsi(v9);
      DpiFdoCleanupDP((_QWORD *)v9);
      DpiFdoCleanupDisplayDiagnostics(v9);
      if ( v170 == 1 )
        DpiFdoDestroyRelatedObjects(a1, v179);
      if ( v19 )
      {
        v25 = *(_DWORD *)(v9 + 2684);
        if ( v25 )
        {
          do
          {
            --v25;
            LOBYTE(v23) = *(_BYTE *)(v9 + 2743);
            LOBYTE(v24) = 1;
            DxgkReleaseGdiViewId(v23, *(_QWORD *)(v9 + 5936), v175[v25], v24);
          }
          while ( v25 );
          v11 = v189;
        }
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C00B2B20 == a1 )
      {
        qword_1C00B2B20 = 0LL;
        word_1C00B2B1D = 0;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C00B2B28 == a1 )
      {
        LOBYTE(word_1C00B2B1D) = 0;
        qword_1C00B2B28 = 0LL;
      }
      if ( v171 == 1 )
      {
        if ( *((_QWORD *)DeviceExtension + 61) )
        {
          PoFxUnregisterDevice();
          *(_QWORD *)(*(_QWORD *)(v9 + 3896) + 2808LL) = 0LL;
          *((_QWORD *)DeviceExtension + 61) = 0LL;
        }
        v26 = *(DXGADAPTER **)(v9 + 3896);
        if ( v26 && *((_DWORD *)v26 + 50) != 2 && *((_DWORD *)v26 + 50) != 4 )
          DXGADAPTER::Stop(v26, 0, 0);
        DxgkReleaseAdapterFdoReference(*(_QWORD *)(v9 + 3896));
        *(_QWORD *)(v9 + 3896) = 0LL;
      }
      DpiFdoRemoveChildDescriptors(a1);
    }
    if ( v174 == 1 && v11 )
    {
      if ( !DeviceExtension[1152] )
        goto LABEL_225;
      v177 = DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1);
      v27 = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x74727044u);
      v28 = v27;
      if ( v27 )
      {
        memset(v27, 0, 0x48uLL);
        v29 = v177;
        v28[8] = *((_QWORD *)DeviceExtension + 334);
        *(_DWORD *)v28 = 30;
        *((_DWORD *)v28 + 1) = 72;
        *((_DWORD *)v28 + 12) = 98;
        *((_DWORD *)v28 + 13) = 1;
        *((_DWORD *)v28 + 14) = v29;
        if ( v9 )
          v30 = *(_QWORD *)(v9 + 5936);
        else
          v30 = 0x200000000LL;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v28, v30);
        ExFreePoolWithTag(v28, 0x74727044u);
      }
      if ( v177 < 0 )
      {
LABEL_225:
        if ( v9 )
          *(_BYTE *)(v9 + 3904) &= ~4u;
        DpiDxgkDdiStopDevice(v11, *((_QWORD *)DeviceExtension + 6));
      }
    }
    if ( v172 == 1 )
      DpiFdoDisconnectInterrupt(a1);
    v173 = 1;
    if ( v174 )
      goto LABEL_238;
    if ( !*(_QWORD *)(v11 + 1344) )
      goto LABEL_238;
    DiagnosticInfoArgs = DxgAllocateDiagnosticInfoArgs(2LL);
    v143 = DiagnosticInfoArgs;
    if ( !DiagnosticInfoArgs )
      goto LABEL_238;
    *(_QWORD *)DiagnosticInfoArgs = *((_QWORD *)DeviceExtension + 6);
    v144 = *((_QWORD *)DeviceExtension + 19);
    v177 = *(_DWORD *)(DiagnosticInfoArgs + 216);
    if ( (*(int (__fastcall **)(__int64, __int64))(v11 + 1344))(v144, DiagnosticInfoArgs) >= 0 )
    {
      if ( *(_DWORD *)(v143 + 220) > (unsigned int)v177 )
        *(_DWORD *)(v143 + 220) = 0;
      DxgCreateLiveDumpWithDriverBlob(
        *((struct _DEVICE_OBJECT **)DeviceExtension + 19),
        0x1B0u,
        *(int *)(v143 + 8),
        (int)started,
        v20,
        *(_QWORD *)(v11 + 152),
        (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v143);
      v173 = 0;
    }
    DxgFreeDiagnosticInfoArgs((struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v143);
    if ( v173 )
    {
LABEL_238:
      if ( v11 )
        v145 = *(_QWORD *)(v11 + 152);
      else
        v145 = 0LL;
      DxgCreateLiveDumpWithWdLogs(0x193u, 0x804uLL, (int)started, v20, v145, 0);
    }
  }
  if ( v175 )
    ExFreePoolWithTag(v175, 0);
  if ( DeviceExtension[1154] && DeviceExtension[1152] )
    NotifyUserMSBDAIfApplicable();
  v146 = 0LL;
  v177 = 0;
  if ( v9 )
  {
    if ( DeviceExtension[1158] )
    {
      v147 = *(_QWORD *)(v9 + 1008);
      if ( v147 )
      {
        v148 = *(__int64 (__fastcall **)(__int64, _QWORD))(v9 + 1064);
        if ( v148 )
        {
          v149 = v148(v147, (unsigned int)started);
          v152 = v149;
          if ( v149 < 0 )
          {
            v153 = WdLogNewEntry5_WdError(v151, v150);
            *(_QWORD *)(v153 + 24) = *(_QWORD *)(v9 + 1064);
            *(_QWORD *)(v153 + 32) = v152;
            WdLogEvent5_WdError(v153);
          }
        }
        v154 = *(__int64 (__fastcall **)(__int64, __int128 *))(v9 + 1080);
        if ( v154 )
        {
          v194 = 0LL;
          v155 = *(_QWORD *)(v9 + 1008);
          v193 = 0LL;
          v156 = v154(v155, &v193);
          v159 = v156;
          if ( v156 < 0 )
          {
            v160 = WdLogNewEntry5_WdError(v158, v157);
            *(_QWORD *)(v160 + 24) = *(_QWORD *)(v9 + 1080);
            *(_QWORD *)(v160 + 32) = v159;
            WdLogEvent5_WdError(v160);
          }
          else
          {
            v146 = *((_QWORD *)&v193 + 1);
            *(_DWORD *)(v9 + 1164) = DWORD1(v193);
            v177 = v194;
          }
        }
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v9 + 152), PowerRelations);
      }
    }
    v161 = ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x74727044u);
    v162 = v161;
    if ( v161 )
    {
      memset(v161, 0, 0x60uLL);
      *v162 = 41;
      v162[1] = 96;
      v162[13] = (unsigned int)a1 & 0xFFFF00;
      v162[12] = started;
      *((_QWORD *)v162 + 7) = *((_QWORD *)DeviceExtension + 334);
      v162[16] = DxgkDiagCalcDuration1us(&v183);
      v162[17] = *(_DWORD *)(v9 + 3912);
      v162[22] = v177;
      v162[18] = v20;
      *((_QWORD *)v162 + 10) = v146;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v162, *(_QWORD *)(v9 + 5936));
      ExFreePoolWithTag(v162, 0x74727044u);
    }
    if ( DeviceExtension[1152] )
    {
      if ( qword_1C00B2DC0 )
      {
        v163 = *(_QWORD *)(qword_1C00B2DC0 + 64);
        if ( v163 )
        {
          v164 = *(_QWORD *)(v163 + 40);
          if ( v164 )
          {
            if ( *(_QWORD *)(v164 + 408) )
              SendBDDDiagTelemetry(v163);
          }
        }
      }
    }
  }
  else
  {
    v165 = (char *)ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x74727044u);
    v166 = v165;
    if ( v165 )
    {
      memset(v165, 0, 0x40uLL);
      v167 = DxgkDiagCalcDuration1us(&v183);
      *((_DWORD *)v166 + 10) = 0;
      *((_QWORD *)v166 + 4) = 0LL;
      *(_DWORD *)v166 = 6;
      *((_DWORD *)v166 + 1) = 64;
      *(_OWORD *)(v166 + 8) = 0LL;
      *((_QWORD *)v166 + 3) = 0LL;
      *((_DWORD *)v166 + 12) = 35;
      *((_DWORD *)v166 + 13) = (unsigned int)a1 & 0xFFFF00;
      *((_DWORD *)v166 + 14) = v167;
      *((_DWORD *)v166 + 15) = started;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v166, 0x200000000LL);
      ExFreePoolWithTag(v166, 0x74727044u);
    }
  }
  return (unsigned int)started;
}
