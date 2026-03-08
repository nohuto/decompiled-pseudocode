/*
 * XREFs of DpiFdoStartAdapter @ 0x1C01F17F0
 * Callers:
 *     DpiFdoStartNonLdaAdapter @ 0x1C0209FAC (DpiFdoStartNonLdaAdapter.c)
 *     DpiLdaStartAdapterInChain @ 0x1C03A4064 (DpiLdaStartAdapterInChain.c)
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0001D60 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     DxgkDiagCalcDuration1us @ 0x1C001BD88 (DxgkDiagCalcDuration1us.c)
 *     ?DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z @ 0x1C001D270 (-DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiFdoInitializeDisplayDiagnostics @ 0x1C001D334 (DpiFdoInitializeDisplayDiagnostics.c)
 *     DpiFdoInitializeMipiDsi @ 0x1C001D3B8 (DpiFdoInitializeMipiDsi.c)
 *     DpiFdoInitializeDP @ 0x1C001D4C0 (DpiFdoInitializeDP.c)
 *     SendBDDDiagTelemetry @ 0x1C002320C (SendBDDDiagTelemetry.c)
 *     DpiFdoCleanupDisplayDiagnostics @ 0x1C002406C (DpiFdoCleanupDisplayDiagnostics.c)
 *     DpiFdoCleanupMipiDsi @ 0x1C0024208 (DpiFdoCleanupMipiDsi.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     Feature_EnableIddCx110__private_IsEnabledDeviceUsage @ 0x1C0024584 (Feature_EnableIddCx110__private_IsEnabledDeviceUsage.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_DmaRemapping__private_ReportDeviceUsage @ 0x1C00267A0 (Feature_DmaRemapping__private_ReportDeviceUsage.c)
 *     Feature_LegacyHPDFiltering__private_ReportDeviceUsage @ 0x1C0026804 (Feature_LegacyHPDFiltering__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C003FF7C (McTemplateK0pt_EtwWriteTransfer.c)
 *     DpiHybridInternalPanelOverride @ 0x1C005E144 (DpiHybridInternalPanelOverride.c)
 *     NotifyUserMSBDAIfApplicable @ 0x1C005E7B4 (NotifyUserMSBDAIfApplicable.c)
 *     DpiFdoCleanupDP @ 0x1C005E8E4 (DpiFdoCleanupDP.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0180684 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0180B30 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C01E6A28 (DpiDxgkDdiDisplayDetectControl.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C01EDDF0 (DxgkRetrieveStringFromRegistry.c)
 *     DpiFdoConnectInterrupt @ 0x1C01F0E70 (DpiFdoConnectInterrupt.c)
 *     DpiDxgkDdiStartDevice @ 0x1C01F0FE8 (DpiDxgkDdiStartDevice.c)
 *     DxgkAddAdapter @ 0x1C01F10BC (DxgkAddAdapter.c)
 *     DpiOpenPnpRegistryKey @ 0x1C01F1750 (DpiOpenPnpRegistryKey.c)
 *     DpiFdoOpenDeviceFileObjectIfNeeded @ 0x1C01F3348 (DpiFdoOpenDeviceFileObjectIfNeeded.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C01F3380 (DpiFdoInitializeGpuVirtualization.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01F59A0 (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiQueryMiniportInterface @ 0x1C01F65F4 (DpiQueryMiniportInterface.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C01F7DCC (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C0202548 (DpiFdoCreateRelatedObjects.c)
 *     DpiFdoEnumChildDevices @ 0x1C02088D0 (DpiFdoEnumChildDevices.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C020F0E4 (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     MonitorInitializeAdapterDone @ 0x1C0215528 (MonitorInitializeAdapterDone.c)
 *     DpiGetDevicePropertyString @ 0x1C02163CC (DpiGetDevicePropertyString.c)
 *     DxgkAcquireGdiViewIds @ 0x1C0218CEC (DxgkAcquireGdiViewIds.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C021A664 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     DpiMiracastDdiMiracastQueryCaps @ 0x1C021A734 (DpiMiracastDdiMiracastQueryCaps.c)
 *     DpiKsrIsSoftBoot @ 0x1C021A914 (DpiKsrIsSoftBoot.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02B5558 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1C02BE328 (DxgkReleaseAdapterFdoReference.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1C02C9034 (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02C911C (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1C02C935C (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02C95C8 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     ?CommitSessionGdiViewIds@DXGSESSIONDATA@@QEAAJXZ @ 0x1C035043C (-CommitSessionGdiViewIds@DXGSESSIONDATA@@QEAAJXZ.c)
 *     DxgkReleaseGdiViewId @ 0x1C03521F8 (DxgkReleaseGdiViewId.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C0396550 (DpiFdoCleanupGpuVirtualization.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0396844 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x1C03968EC (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C039868C (DpiFdoRemoveChildDescriptors.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C03990F8 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiKsrGetSavedAdapterState @ 0x1C03A1908 (DpiKsrGetSavedAdapterState.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x1C03A1B4C (DpiKsrRestoreAdapterDriverState.c)
 *     DpiDxgkDdiStopDevice @ 0x1C03A4A88 (DpiDxgkDdiStopDevice.c)
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
  char v8; // bl
  __int64 v9; // rsi
  char *DeviceExtension; // r14
  __int64 v11; // r12
  __int64 started; // r15
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 (__fastcall *v18)(_QWORD, _QWORD, __int64); // rax
  int v19; // eax
  __int64 v20; // rdx
  char v21; // di
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // eax
  bool v31; // cf
  bool v32; // zf
  NTSTATUS LocallyUniqueId; // eax
  int SavedAdapterState; // eax
  int v35; // eax
  _DWORD *Pool2; // rbx
  unsigned int v37; // ecx
  int v38; // eax
  int v39; // edx
  __int128 v40; // xmm0
  _DWORD *v41; // rdi
  int DevicePropertyString; // eax
  int v43; // eax
  _BYTE *v44; // rbx
  int v45; // eax
  struct _LUID *v46; // rdx
  __int64 v47; // rax
  unsigned int v48; // eax
  void *v49; // rax
  __int64 v50; // rcx
  int v51; // eax
  char v52; // cl
  char v53; // dl
  _BYTE *v54; // rcx
  char v55; // cl
  _QWORD *v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rdx
  int v59; // eax
  int RelatedObjects; // eax
  __int64 v61; // rdx
  int Caps; // eax
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  int v69; // eax
  NTSTATUS v70; // eax
  int v71; // eax
  int v72; // eax
  __int64 v73; // rbx
  int v74; // eax
  struct DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  int v77; // eax
  BOOLEAN v78; // dl
  NTSTATUS v79; // eax
  int v80; // eax
  BOOLEAN v81; // dl
  NTSTATUS v82; // eax
  unsigned int v83; // ebx
  __int64 v84; // r8
  struct _DEVICE_OBJECT *v85; // rcx
  int v86; // eax
  __int64 v87; // rcx
  __int64 v88; // r9
  int v89; // edi
  unsigned int *v90; // r12
  DXGADAPTER *v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rdi
  int v94; // eax
  __int64 v95; // rdx
  __int64 DiagnosticInfoArgs; // rax
  __int64 v97; // rdi
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rdi
  __int64 v101; // rcx
  __int64 (__fastcall *v102)(__int64, _QWORD, __int64); // rax
  int v103; // eax
  __int64 (__fastcall *v104)(__int64, __int128 *, __int64); // rax
  __int64 v105; // rcx
  int v106; // eax
  _QWORD *v107; // rax
  _QWORD *v108; // r12
  int v109; // eax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rax
  char *v113; // rax
  char *v114; // rbx
  int v115; // eax
  unsigned __int64 v117; // [rsp+20h] [rbp-E0h]
  char v118; // [rsp+51h] [rbp-AFh]
  char v119; // [rsp+52h] [rbp-AEh]
  char v120; // [rsp+52h] [rbp-AEh]
  char v121; // [rsp+53h] [rbp-ADh]
  char v122; // [rsp+54h] [rbp-ACh]
  char v123; // [rsp+55h] [rbp-ABh]
  int v124; // [rsp+58h] [rbp-A8h] BYREF
  char v125; // [rsp+5Ch] [rbp-A4h]
  PVOID v126; // [rsp+60h] [rbp-A0h]
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v129; // [rsp+78h] [rbp-88h]
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  __int64 v131; // [rsp+88h] [rbp-78h] BYREF
  int v132; // [rsp+90h] [rbp-70h] BYREF
  __int64 v133; // [rsp+98h] [rbp-68h]
  char v134; // [rsp+A0h] [rbp-60h]
  __int64 v135; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v136; // [rsp+B0h] [rbp-50h] BYREF
  void *v137; // [rsp+B8h] [rbp-48h]
  _QWORD *v138; // [rsp+C0h] [rbp-40h]
  char *v139; // [rsp+C8h] [rbp-38h]
  __int64 v140; // [rsp+D0h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v142; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v143; // [rsp+F8h] [rbp-8h]
  _QWORD v144[10]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v145; // [rsp+150h] [rbp+50h] BYREF
  __int64 v146; // [rsp+160h] [rbp+60h]
  _OWORD v147[2]; // [rsp+168h] [rbp+68h] BYREF
  _OWORD v148[2]; // [rsp+188h] [rbp+88h] BYREF

  v138 = a7;
  Handle = 0LL;
  v8 = a2;
  v9 = 0LL;
  memset(v147, 0, 28);
  v129 = a4;
  DestinationString = 0LL;
  v137 = a3;
  v125 = a2;
  DeviceExtension = (char *)a1->DeviceExtension;
  v119 = 0;
  v121 = 0;
  v118 = 0;
  v32 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  v11 = *((_QWORD *)DeviceExtension + 5);
  v140 = v11;
  v122 = 0;
  v123 = 0;
  v126 = 0LL;
  v131 = MEMORY[0xFFFFF78000000320];
  v139 = DeviceExtension;
  if ( v32 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v9 = (__int64)DeviceExtension;
    if ( *(_BYTE *)(v11 + 134) )
    {
      LODWORD(started) = DpiQueryMiniportInterface(
                           *((_QWORD *)DeviceExtension + 3),
                           (unsigned int)&GUID_DEVINTERFACE_INDIRECT_DISP_KMD,
                           112,
                           3);
      if ( (int)started >= 0 )
      {
        if ( a6 )
        {
          v18 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))*((_QWORD *)DeviceExtension + 131);
          if ( v18 )
          {
            v19 = v18(*((_QWORD *)DeviceExtension + 126), a5, a6);
            started = v19;
            if ( v19 < 0 )
            {
              v20 = *((_QWORD *)DeviceExtension + 131);
LABEL_21:
              WdLogSingleEntry2(2LL, v20, started);
              goto LABEL_22;
            }
          }
        }
      }
      else
      {
        memset(DeviceExtension + 1000, 0, 0x70uLL);
      }
      if ( (unsigned int)Feature_EnableIddCx110__private_IsEnabledDeviceUsage() )
      {
        if ( (int)started >= 0 )
        {
          memset(v144, 0, sizeof(v144));
          if ( (int)DpiQueryMiniportInterface(
                      *((_QWORD *)DeviceExtension + 3),
                      (unsigned int)&GUID_DEVINTERFACE_DOD_EXTENDED,
                      80,
                      1) >= 0
            && LODWORD(v144[0]) == 65616 )
          {
            if ( v144[4] )
            {
              v13 = v144[5];
              if ( v144[5] )
              {
                v14 = v144[6];
                if ( v144[6] )
                {
                  v15 = v144[7];
                  if ( v144[7] )
                  {
                    v16 = v144[8];
                    if ( v144[8] )
                    {
                      v17 = v144[9];
                      if ( v144[9] )
                      {
                        *(_QWORD *)(v11 + 1008) = v144[4];
                        *(_QWORD *)(v11 + 1088) = v13;
                        *(_QWORD *)(v11 + 1128) = v14;
                        *(_QWORD *)(v11 + 1136) = v15;
                        *(_QWORD *)(v11 + 1312) = v16;
                        *(_QWORD *)(v11 + 1096) = v17;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      memset(DeviceExtension + 1000, 0, 0x70uLL);
    }
    *((_DWORD *)DeviceExtension + 1000) = 0;
    v8 = v125;
  }
  v23 = DpiFdoConnectInterrupt(a1);
  started = v23;
  if ( v23 == -1073741275 )
  {
    WdLogSingleEntry1(4LL, a1);
  }
  else
  {
    if ( v23 < 0 )
    {
LABEL_30:
      v24 = started;
      goto LABEL_31;
    }
    v119 = 1;
  }
  if ( DeviceExtension[1152] == 1 )
  {
    if ( DeviceExtension[1156] == 1
      && v8
      && byte_1C013B495
      && !(unsigned __int8)DpiFdoIsCompatibleWithHighResolutionBoot(a1) )
    {
      v132 = -1;
      v133 = 0LL;
      if ( (qword_1C013A870 & 2) != 0 )
      {
        v134 = 1;
        v132 = 8006;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerEnter, v27, 8006);
      }
      else
      {
        v134 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v132, 8006);
      memset(v148, 0, sizeof(v148));
      LODWORD(v148[0]) = 18;
      x86BiosCall(16LL, v148);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v132);
      if ( v134 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v132);
    }
    if ( v9 )
    {
      v30 = *(_DWORD *)(v11 + 28);
      if ( byte_1C013B495 )
      {
        v31 = v30 < 0x300E;
        v32 = v30 == 12302;
      }
      else
      {
        v31 = v30 < 0x2005;
        v32 = v30 == 8197;
      }
      *(_BYTE *)(v9 + 3920) = *(_BYTE *)(v9 + 3920) & 0xFB | (4 * (!v31 && !v32));
    }
  }
  while ( 1 )
  {
    Interval.QuadPart = 0LL;
    LODWORD(started) = ExUuidCreate((UUID *)DeviceExtension + 166);
    if ( (int)started >= 0 )
      break;
    if ( (_DWORD)started != -1073741267 )
    {
      v24 = (int)started;
      goto LABEL_31;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)DeviceExtension + 334);
  started = LocallyUniqueId;
  if ( LocallyUniqueId < 0 )
    goto LABEL_30;
  if ( v9 )
  {
    if ( (unsigned __int8)DpiKsrIsSoftBoot() )
    {
      SavedAdapterState = DpiKsrRestoreAdapterDriverState((struct _FDO_CONTEXT *)v9);
      if ( SavedAdapterState < 0
        || (v124 = 0, v136 = 0LL,
                      SavedAdapterState = DpiKsrGetSavedAdapterState(a1, &v124, &v136),
                      SavedAdapterState < 0) )
      {
        WdLogSingleEntry1(2LL, SavedAdapterState);
      }
    }
    v35 = DpiFdoSetAdapterLuid((struct _FDO_CONTEXT *)v9);
    if ( v35 < 0 )
      WdLogSingleEntry1(2LL, v35);
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 576LL, 1953656900LL);
  if ( !Pool2 )
  {
LABEL_64:
    v24 = -1073741670LL;
    LODWORD(started) = -1073741670;
    v25 = 6LL;
    goto LABEL_32;
  }
  v37 = *(_DWORD *)(v11 + 28);
  Pool2[1] = 0;
  if ( v37 >= 0xD001 )
  {
    *Pool2 = 576;
LABEL_70:
    v38 = *((_DWORD *)DeviceExtension + 681);
    goto LABEL_89;
  }
  v38 = 40971;
  if ( v37 > 0xA00B )
  {
    *Pool2 = 480;
    goto LABEL_70;
  }
  v39 = 36870;
  if ( v37 > 0x9006 )
  {
    *Pool2 = 464;
    goto LABEL_89;
  }
  v38 = 32769;
  if ( v37 > 0x8001 )
  {
    *Pool2 = 456;
LABEL_87:
    v38 = v39;
    goto LABEL_89;
  }
  v39 = 28682;
  if ( v37 > 0x700A )
  {
    *Pool2 = 368;
    goto LABEL_89;
  }
  v38 = 24579;
  if ( v37 > 0x6003 )
  {
    *Pool2 = 360;
    goto LABEL_87;
  }
  v39 = 20515;
  if ( v37 > 0x5023 )
  {
    *Pool2 = 328;
    goto LABEL_89;
  }
  v38 = 16387;
  if ( v37 > 0x4003 )
  {
    *Pool2 = 312;
    goto LABEL_87;
  }
  v39 = 12302;
  if ( v37 > 0x300E )
  {
    *Pool2 = 264;
    goto LABEL_89;
  }
  v38 = 8197;
  if ( v37 > 0x2005 )
  {
    *Pool2 = 256;
    goto LABEL_87;
  }
  *Pool2 = 184;
LABEL_89:
  Pool2[1] = v38;
  *((_QWORD *)Pool2 + 2) = DpEvalAcpiMethod;
  *((_QWORD *)Pool2 + 3) = &DpGetDeviceInformation;
  *((_QWORD *)Pool2 + 4) = DpIndicateChildStatus;
  *((_QWORD *)Pool2 + 5) = &DpMapMemory;
  *((_QWORD *)Pool2 + 6) = DpQueueDpc;
  *((_QWORD *)Pool2 + 7) = DpQueryServices;
  *((_QWORD *)Pool2 + 8) = DpReadDeviceSpace;
  *((_QWORD *)Pool2 + 9) = DpSynchronizeExecution;
  *((_QWORD *)Pool2 + 10) = DpUnmapMemory;
  *((_QWORD *)Pool2 + 11) = DpWriteDeviceSpace;
  *((_QWORD *)Pool2 + 12) = DpIsDevicePresent;
  *((_QWORD *)Pool2 + 13) = DxgGetHandleDataCB;
  *((_QWORD *)Pool2 + 14) = DxgGetHandleParentCB;
  *((_QWORD *)Pool2 + 15) = DxgEnumHandleChildrenCB;
  *((_QWORD *)Pool2 + 16) = DxgNotifyInterruptCB;
  *((_QWORD *)Pool2 + 17) = DxgNotifyDpcCB;
  *((_QWORD *)Pool2 + 18) = DxgMiniportQueryVidPnInterfaceCB;
  *((_QWORD *)Pool2 + 19) = DxgMiniportQueryMonitorInterfaceCB;
  *((_QWORD *)Pool2 + 20) = DxgGetCaptureAddressCB;
  *((_QWORD *)Pool2 + 21) = DxgLogEtwEventCb;
  *((_QWORD *)Pool2 + 22) = DpExcludeAdapterAccess;
  *((_QWORD *)Pool2 + 23) = DxgCreateContextAllocationCB;
  *((_QWORD *)Pool2 + 24) = DxgDestroyContextAllocationCB;
  *((_QWORD *)Pool2 + 25) = DxgSetPowerComponentActiveCB;
  *((_QWORD *)Pool2 + 26) = DxgSetPowerComponentIdleCB;
  *((_QWORD *)Pool2 + 28) = DxgkPowerRuntimeControlRequestCB;
  *((_QWORD *)Pool2 + 29) = DxgkSetPowerComponentLatencyCB;
  *((_QWORD *)Pool2 + 30) = DxgkSetPowerComponentResidencyCB;
  *((_QWORD *)Pool2 + 31) = DxgkCompleteFStateTransitionCB;
  *((_QWORD *)Pool2 + 32) = DxgkCompletePStateTransitionCB;
  *((_QWORD *)Pool2 + 27) = DpAcquirePostDisplayOwnership;
  *((_QWORD *)Pool2 + 33) = DxgkMapContextAllocationCB;
  *((_QWORD *)Pool2 + 34) = DxgkUpdateContextAllocationCB;
  *((_QWORD *)Pool2 + 35) = DxgkReserveGpuVirtualAddressRangeCB;
  *((_QWORD *)Pool2 + 36) = DxgkAcquireHandleDataCB;
  *((_QWORD *)Pool2 + 37) = DxgkReleaseHandleDataCB;
  *((_QWORD *)Pool2 + 38) = DxgkHardwareContentProtectionTeardownCB;
  *((_QWORD *)Pool2 + 39) = DxgkMultiPlaneOverlayDisabledCB;
  *((_QWORD *)Pool2 + 40) = DxgkMitigatedRangeUpdateCB;
  *((_QWORD *)Pool2 + 1) = a1;
  *((_QWORD *)Pool2 + 42) = DpIndicateConnectorChange;
  *((_QWORD *)Pool2 + 43) = DxgkUnblockUEFIFrameBufferRangesCB;
  *((_QWORD *)Pool2 + 44) = DpAcquirePostDisplayOwnership2;
  *((_QWORD *)Pool2 + 45) = DxgkSetProtectedSessionStatusCB;
  *((_QWORD *)Pool2 + 50) = DxgkPinFrameBufferForSaveCB;
  *((_QWORD *)Pool2 + 51) = DxgkUnpinFrameBufferForSaveCB;
  *((_QWORD *)Pool2 + 52) = DxgkMapFrameBufferPointerCB;
  *((_QWORD *)Pool2 + 53) = DxgkUnmapFrameBufferPointerCB;
  *((_QWORD *)Pool2 + 46) = DxgkAllocateContiguousMemoryCB;
  *((_QWORD *)Pool2 + 47) = DxgkFreeContiguousMemoryCB;
  *((_QWORD *)Pool2 + 48) = DxgkAllocatePagesForMdlCB;
  *((_QWORD *)Pool2 + 49) = DxgkFreePagesFromMdlCB;
  *((_QWORD *)Pool2 + 54) = DxgkMapMdlToIoMmuCB;
  *((_QWORD *)Pool2 + 55) = DxgkUnmapMdlFromIoMmuCB;
  *((_QWORD *)Pool2 + 56) = DxgkCbReportDiagnostic;
  *((_QWORD *)Pool2 + 41) = DxgkInvalidateHwContextCB;
  *((_QWORD *)Pool2 + 57) = DxgkSignalEventCB;
  *((_QWORD *)Pool2 + 58) = DpIsFeatureEnabled;
  *((_QWORD *)Pool2 + 59) = DpSaveMemoryForHotUpdateCB;
  *((_QWORD *)Pool2 + 60) = DxgkNotifyCursorSupportChangeCB;
  *((_QWORD *)Pool2 + 61) = DpQueryFeatureSupport;
  Feature_DmaRemapping__private_ReportDeviceUsage();
  LODWORD(v147[0]) = 32;
  v40 = *((_OWORD *)DeviceExtension + 166);
  *((_QWORD *)Pool2 + 62) = DxgkCreatePhysicalMemoryObjectCB;
  v41 = DeviceExtension + 2684;
  *((_QWORD *)Pool2 + 63) = DxgkDestroyPhysicalMemoryObjectCB;
  *(_OWORD *)((char *)v147 + 4) = v40;
  *((_QWORD *)Pool2 + 64) = DxgkMapPhysicalMemoryCB;
  *((_QWORD *)Pool2 + 65) = DxgkUnmapPhysicalMemoryCB;
  *((_QWORD *)Pool2 + 66) = DxgkAllocateAdlCB;
  *((_QWORD *)Pool2 + 67) = DxgkFreeAdlCB;
  *((_QWORD *)Pool2 + 68) = DxgkOpenPhysicalMemoryObjectCB;
  *((_QWORD *)Pool2 + 69) = DxgkClosePhysicalMemoryObjectCB;
  *((_QWORD *)Pool2 + 70) = DxgkPinFrameBufferForSave2CB;
  *((_QWORD *)Pool2 + 71) = DxgkDisconnectDoorbellCB;
  *(_QWORD *)((char *)&v147[1] + 4) = *((_QWORD *)DeviceExtension + 334);
  qword_1C013B7F8 = (__int64)KeGetCurrentThread();
  qword_1C013B800 = (__int64)a1;
  started = (int)DpiDxgkDdiStartDevice(
                   v11,
                   *((_QWORD *)DeviceExtension + 6),
                   (unsigned int *)v147,
                   (__int64)Pool2,
                   (_DWORD *)DeviceExtension + 671,
                   (_DWORD *)DeviceExtension + 670);
  ExFreePoolWithTag(Pool2, 0x74727044u);
  qword_1C013B800 = 0LL;
  qword_1C013B7F8 = 0LL;
  if ( (int)started < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v11 + 152), started);
    if ( (_DWORD)started != -1071775735 )
    {
      if ( (_DWORD)started == -1071774944 && DeviceExtension[1152] )
        WdLogSingleEntry5(0LL, 275LL, 26LL, v11, (unsigned __int8)byte_1C013B495, 0LL);
      goto LABEL_22;
    }
    P = 0LL;
    if ( DeviceExtension[1152] )
    {
      DevicePropertyString = DpiGetDevicePropertyString(
                               *((PDEVICE_OBJECT *)DeviceExtension + 19),
                               DevicePropertyHardwareID,
                               (__int64)&v135);
      if ( DevicePropertyString >= 0 )
      {
        WdDiagNotifyUser(8LL, 5LL, 1LL, &P);
        if ( P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_22;
      }
      v24 = DevicePropertyString;
      v25 = 2LL;
      goto LABEL_32;
    }
LABEL_22:
    v21 = 0;
    goto LABEL_23;
  }
  if ( DeviceExtension[1152] )
  {
    xmmword_1C013B760 = 0LL;
    DWORD2(xmmword_1C013B760) = -1;
    xmmword_1C013B750 = 0LL;
    memset(&xmmword_1C013B770, 0, 0x80uLL);
    dword_1C013B7F0 = 3;
  }
  if ( !*((_DWORD *)DeviceExtension + 672) && *v41 > 1u )
  {
    WdLogSingleEntry1(3LL, (unsigned int)*v41);
    *v41 = 1;
  }
  v121 = 1;
  if ( !v9 )
    goto LABEL_197;
  if ( *(_DWORD *)(v9 + 2680) )
  {
    v43 = DpiFdoEnumChildDevices(a1);
    started = v43;
    if ( v43 < 0 )
      goto LABEL_30;
  }
  v44 = (_BYTE *)(v9 + 3920);
  v45 = DxgkAddAdapter(a1, v137, (struct _DXGK_ADAPTER_CAPS *)(v9 + 3920), (_DWORD *)(v9 + 3932), v129);
  v21 = 0;
  started = v45;
  if ( v45 < 0 )
  {
LABEL_108:
    WdLogSingleEntry1(2LL, started);
    goto LABEL_23;
  }
  v47 = *(_QWORD *)(v9 + 3912);
  if ( v47 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v47 + 24));
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"No pAdapter specified, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v118 = 1;
  *(_BYTE *)(v9 + 2743) = DXGADAPTER::IsAdapterSessionized(
                            *(DXGADAPTER **)(v9 + 3912),
                            v46,
                            0LL,
                            (unsigned __int64 *)(v9 + 5744));
  v48 = *(_DWORD *)(v9 + 2684);
  if ( v48 )
  {
    v49 = (void *)ExAllocatePool2(256LL, 4LL * v48, 1953656900LL);
    v126 = v49;
    if ( !v49 )
      goto LABEL_64;
    LOBYTE(v50) = *(_BYTE *)(v9 + 2743);
    v51 = DxgkAcquireGdiViewIds(v50, *(_QWORD *)(v9 + 5744), v9 + 2684, v49);
    LODWORD(started) = v51;
    if ( v51 < 0 )
    {
      WdLogSingleEntry1(2LL, v51);
      ExFreePoolWithTag(v126, 0);
      v126 = 0LL;
      goto LABEL_22;
    }
  }
  v52 = *(_BYTE *)(v9 + 3921) ^ (*(_BYTE *)(v9 + 3921) ^ (2 * *(_BYTE *)(v9 + 3921))) & 8;
  *(_BYTE *)(v9 + 3921) = v52;
  if ( (v52 & 4) != 0 && (!*(_QWORD *)(v11 + 1128) || !*(_QWORD *)(v11 + 1136)) )
  {
    WdLogSingleEntry1(2LL, (unsigned int)started);
    *(_BYTE *)(v9 + 3921) &= ~8u;
    v52 = *(_BYTE *)(v9 + 3921);
  }
  v53 = v52;
  if ( (*v44 & 1) != 0 && *(int *)(v9 + 3928) >= 0x2000 && !*(_BYTE *)(v9 + 1159) && (v52 & 8) == 0 )
  {
    Feature_LegacyHPDFiltering__private_ReportDeviceUsage();
    v53 = *(_BYTE *)(v9 + 3921) | 0x10;
    *(_BYTE *)(v9 + 3921) = v53;
  }
  if ( (v53 & 8) == 0 && !*(_QWORD *)(v11 + 208) || *(_BYTE *)(v9 + 2697) && (v53 & 0x20) == 0 )
  {
    v24 = -1073741735LL;
    LODWORD(started) = -1073741735;
LABEL_31:
    v25 = 2LL;
LABEL_32:
    WdLogSingleEntry1(v25, v24);
    goto LABEL_22;
  }
  if ( qword_1C013B4B0 )
  {
    v54 = (_BYTE *)(v9 + 2692);
    if ( *(_BYTE *)(v9 + 2692) && (v53 & 1) != 0 && !(_BYTE)word_1C013B49C )
      qword_1C013B4B0 = (__int64)a1;
  }
  else
  {
    if ( (v53 & 1) != 0
      || DpiHybridInternalPanelOverride() && (*v44 & 0x20) != 0 && *(_BYTE *)(v9 + 1152) && (*v44 & 0x40) == 0 )
    {
      qword_1C013B4B0 = (__int64)a1;
    }
    v54 = (_BYTE *)(v9 + 2692);
  }
  if ( (*v44 & 0x40) != 0 )
  {
    if ( qword_1C013B4A8 && (struct _DEVICE_OBJECT *)qword_1C013B4A8 != a1 )
    {
      if ( !*v54 || (_BYTE)word_1C013B49C )
      {
        *v44 &= ~0x40u;
        goto LABEL_150;
      }
      *(_BYTE *)(*(_QWORD *)(qword_1C013B4A8 + 64) + 3920LL) &= ~0x40u;
    }
    qword_1C013B4A8 = (__int64)a1;
    HIBYTE(word_1C013B49C) = (*(_BYTE *)(v9 + 3921) & 2) != 0;
  }
LABEL_150:
  if ( !qword_1C013B4B0 || !qword_1C013B4A8 || (_BYTE)word_1C013B49C )
    goto LABEL_156;
  v55 = *(_BYTE *)(*(_QWORD *)(qword_1C013B4B0 + 64) + 2692LL);
  if ( *(_BYTE *)(*(_QWORD *)(qword_1C013B4A8 + 64) + 2692LL) )
  {
    if ( !v55 )
      goto LABEL_155;
LABEL_163:
    LOBYTE(word_1C013B49C) = 1;
    *((_BYTE *)DXGGLOBAL::GetGlobal() + 889) = 1;
    goto LABEL_156;
  }
  if ( !v55 )
    goto LABEL_163;
LABEL_155:
  LOBYTE(word_1C013B49C) = 0;
LABEL_156:
  v56 = v138;
  if ( v138 )
  {
    *v138 = *(_QWORD *)v44;
    *((_DWORD *)v56 + 2) = *(_DWORD *)(v9 + 3928);
  }
  if ( *(_BYTE *)(v9 + 1152) && (*v44 & 1) == 0 && !DeviceExtension[2695] )
  {
    started = -1071775740LL;
    goto LABEL_30;
  }
  if ( *(_DWORD *)(v9 + 3496) )
  {
    v57 = *(_QWORD *)(v9 + 48);
    v58 = *(_QWORD *)(v9 + 40);
    v142 = 0LL;
    LODWORD(v142) = 67108861;
    v143 = 0LL;
    v59 = DpiDxgkDdiDisplayDetectControl(v9, v58, v57, (unsigned int *)&v142);
    started = v59;
    if ( v59 < 0 )
    {
      v20 = *(_QWORD *)(v11 + 1128);
      goto LABEL_21;
    }
  }
  DpiFdoInitializeMipiDsi((__int64)a1);
  RelatedObjects = DpiFdoCreateRelatedObjects(a1, *(unsigned int *)(v9 + 2684), v126, v129);
  started = RelatedObjects;
  if ( RelatedObjects < 0 )
    goto LABEL_30;
  if ( (*v44 & 1) != 0 && (int)DpiAcquireCoreSyncAccessSafe((__int64)a1, 1) >= 0 )
  {
    MonitorInitializeAdapterDone(*(DXGADAPTER **)(v9 + 3912));
    DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
  }
  v21 = 1;
  if ( *(_DWORD *)(v9 + 3240) != -1 )
  {
    Caps = DpiMiracastDdiMiracastQueryCaps(v9, v61, v9 + 3232);
    if ( Caps < 0 )
    {
      WdLogSingleEntry1(4LL, Caps);
      *(_DWORD *)(v9 + 3240) = -1;
      memset((void *)(v9 + 3168), 0, 0x40uLL);
    }
  }
  v63 = DpiOpenPnpRegistryKey((__int64)a1, 2, 0x20019u, &Handle);
  if ( v63 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"MiracastDriverName");
    if ( DxgkRetrieveStringFromRegistry(Handle, &DestinationString, v9 + 4864) < 0 )
      WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
    ZwClose(Handle);
  }
  else
  {
    WdLogSingleEntry1(4LL, v63);
  }
  v66 = *(_QWORD *)(v9 + 4880);
  if ( v66 )
  {
    if ( *(_QWORD *)(v66 + 48) && *(_BYTE *)v66 )
    {
      *(_BYTE *)v66 = 0;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      {
        LODWORD(v117) = *(unsigned __int8 *)(*(_QWORD *)(v9 + 4880) + 2LL);
        McTemplateK0pt_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          &EventDpiFdoThermalActiveCooling,
          v65,
          a1,
          v117);
      }
      v67 = *(_QWORD *)(v9 + 4880);
      LOBYTE(v64) = *(_BYTE *)(v67 + 2);
      (*(void (__fastcall **)(_QWORD, __int64))(v67 + 48))(*(_QWORD *)(v67 + 16), v64);
    }
    v68 = *(_QWORD *)(v9 + 4880);
    if ( *(_QWORD *)(v68 + 56) && *(_BYTE *)(v68 + 1) )
    {
      *(_BYTE *)(v68 + 1) = 0;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      {
        LODWORD(v117) = *(_DWORD *)(*(_QWORD *)(v9 + 4880) + 4LL);
        McTemplateK0pt_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          &EventDpiFdoThermalPassiveCooling,
          v65,
          a1,
          v117);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v9 + 4880) + 56LL))(
        *(_QWORD *)(*(_QWORD *)(v9 + 4880) + 16LL),
        *(unsigned int *)(*(_QWORD *)(v9 + 4880) + 4LL));
    }
  }
  v69 = DpiFdoInitializeGpuVirtualization(a1);
  started = v69;
  if ( v69 < 0 )
    goto LABEL_108;
  if ( *(_BYTE *)(v9 + 482) )
  {
    DXGADAPTER::StartRuntimePowerManagement(*(DXGADAPTER **)(v9 + 3912));
    if ( *(_BYTE *)(v9 + 5680) )
    {
      v70 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 5664), 1u);
      started = v70;
      if ( v70 < 0 )
        goto LABEL_108;
    }
  }
  DpiBrightnessStartDevice(a1);
  DpiFdoInitializeDP((__int64)a1);
  DpiFdoInitializeDisplayDiagnostics((__int64)a1);
LABEL_197:
  v71 = DpiFdoOpenDeviceFileObjectIfNeeded(DeviceExtension);
  started = v71;
  if ( v71 < 0 )
  {
LABEL_198:
    WdLogSingleEntry1(2LL, started);
    v21 = v118;
    goto LABEL_23;
  }
  DxgkMiracastQueryMiracastSupportInternal(0LL);
  *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
  v72 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  *((_DWORD *)DeviceExtension + 60) = v72;
  *((_DWORD *)DeviceExtension + 59) = 2;
  if ( v9 && v126 )
  {
    v73 = *(_QWORD *)(v9 + 5744);
    if ( *(_BYTE *)(v9 + 2743) )
    {
      Global = DXGGLOBAL::GetGlobal();
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         *((DXGSESSIONMGR **)Global + 118),
                                         v73);
      if ( !SessionDataForSpecifiedSession )
      {
        WdLogSingleEntry2(2LL, (unsigned int)v73, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
          (unsigned int)v73,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
LABEL_207:
        v77 = *((_DWORD *)DeviceExtension + 60);
        --*((_DWORD *)DeviceExtension + 69);
        *((_DWORD *)DeviceExtension + 59) = v77;
        *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7)
                                                                      + 244];
        goto LABEL_198;
      }
      v74 = DXGSESSIONDATA::CommitSessionGdiViewIds(SessionDataForSpecifiedSession);
    }
    else
    {
      v74 = DMgrWriteDeviceCountToRegistry();
    }
    if ( v74 < 0 )
      goto LABEL_207;
  }
  v21 = v118;
  if ( v9 )
  {
    v78 = !*(_BYTE *)(v9 + 1154) || !*(_BYTE *)(v9 + 480);
    v79 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2744), v78);
    started = v79;
    if ( v79 < 0 )
      goto LABEL_214;
    v81 = 1;
    v122 = 1;
    if ( (*(_BYTE *)(v9 + 3921) & 0x20) != 0 || !*(_QWORD *)(v9 + 2768) )
      goto LABEL_23;
    if ( *(_BYTE *)(v9 + 1154) )
      v81 = *(_BYTE *)(v9 + 480) == 0;
    v82 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2760), v81);
    started = v82;
    if ( v82 < 0 )
    {
LABEL_214:
      v80 = *((_DWORD *)DeviceExtension + 60);
      --*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = v80;
      *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
      goto LABEL_108;
    }
    v123 = 1;
  }
LABEL_23:
  Interval.QuadPart = (int)started;
  if ( v9 )
    v22 = *(_QWORD *)(v9 + 3912);
  else
    v22 = 0LL;
  DxgkLogInternalTriageEvent(
    v22,
    131076,
    -1,
    (__int64)L"Adapter StartDevice has completed with status %1",
    (int)started,
    0LL,
    0LL,
    0LL,
    0LL);
  v83 = 0;
  v84 = 1LL;
  if ( v9 )
    v83 = (*(unsigned __int8 *)(v9 + 3920) >> 1) & 0x21 | (2
                                                         * (*(_BYTE *)(v9 + 3920) & 1 | (2
                                                                                       * (*(_BYTE *)(v9 + 480) & 1 | (2 * (*(_BYTE *)(v9 + 1152) & 1 | (2 * (*(_BYTE *)(v9 + 2692) & 1 | (4 * (*(_BYTE *)(v9 + 3920) & 0x84 | *(_BYTE *)(v9 + 3921) & 1 | (2 * (*(_BYTE *)(v9 + 3920) & 0x38 | (*(_DWORD *)(v9 + 504) != 0 ? 4 : 0) | *(_BYTE *)(v9 + 1159) & 1))))))))))));
  if ( (int)started < 0 )
  {
    v85 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
    DeviceExtension[232] = 1;
    IoInvalidateDeviceState(v85);
    if ( *((_DWORD *)DeviceExtension + 59) == 2 )
    {
      v86 = *((_DWORD *)DeviceExtension + 60);
      --*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = v86;
      *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
    }
    if ( v9 )
    {
      if ( v122 == 1 )
        IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2744), 0);
      if ( v123 == 1 )
        IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2760), 0);
      DpiFdoCleanupGpuVirtualization(v9);
      DpiFdoCleanupMipiDsi(v9);
      DpiFdoCleanupDP((_QWORD *)v9);
      DpiFdoCleanupDisplayDiagnostics(v9);
      if ( v21 == 1 )
        DpiFdoDestroyRelatedObjects(a1, v129);
      if ( v126 )
      {
        v89 = *(_DWORD *)(v9 + 2684);
        if ( v89 )
        {
          v90 = (unsigned int *)v126;
          do
          {
            --v89;
            LOBYTE(v87) = *(_BYTE *)(v9 + 2743);
            LOBYTE(v88) = 1;
            DxgkReleaseGdiViewId(v87, *(_QWORD *)(v9 + 5744), v90[v89], v88);
          }
          while ( v89 );
          DeviceExtension = v139;
          v11 = v140;
        }
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C013B4A8 == a1 )
      {
        word_1C013B49C = 0;
        qword_1C013B4A8 = 0LL;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C013B4B0 == a1 )
      {
        LOBYTE(word_1C013B49C) = 0;
        qword_1C013B4B0 = 0LL;
      }
      if ( v118 == 1 )
      {
        if ( *((_QWORD *)DeviceExtension + 61) )
        {
          PoFxUnregisterDevice();
          *(_QWORD *)(*(_QWORD *)(v9 + 3912) + 3032LL) = 0LL;
          *((_QWORD *)DeviceExtension + 61) = 0LL;
        }
        v91 = *(DXGADAPTER **)(v9 + 3912);
        if ( v91 && *((_DWORD *)v91 + 50) != 2 && *((_DWORD *)v91 + 50) != 4 )
          DXGADAPTER::Stop(v91, 0, 0);
        DxgkReleaseAdapterFdoReference(*(DXGADAPTER **)(v9 + 3912));
        *(_QWORD *)(v9 + 3912) = 0LL;
      }
      DpiFdoRemoveChildDescriptors(a1);
    }
    if ( v121 == 1 && v11 )
    {
      if ( !DeviceExtension[1152] )
        goto LABEL_261;
      v124 = DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1);
      v92 = ExAllocatePool2(256LL, 72LL, 1953656900LL);
      v93 = v92;
      if ( v92 )
      {
        *(_DWORD *)(v92 + 44) = 0;
        *(_DWORD *)(v92 + 40) = 0;
        *(_QWORD *)(v92 + 32) = 0LL;
        *(_DWORD *)v92 = 30;
        *(_DWORD *)(v92 + 4) = 72;
        *(_OWORD *)(v92 + 8) = 0LL;
        *(_QWORD *)(v92 + 24) = 0LL;
        v94 = v124;
        *(_DWORD *)(v93 + 60) = 0;
        *(_DWORD *)(v93 + 56) = v94;
        *(_QWORD *)(v93 + 64) = *((_QWORD *)DeviceExtension + 334);
        *(_DWORD *)(v93 + 48) = 98;
        *(_DWORD *)(v93 + 52) = 1;
        if ( v9 )
          v95 = *(_QWORD *)(v9 + 5744);
        else
          v95 = 0x200000000LL;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v93, v95);
        ExFreePoolWithTag((PVOID)v93, 0x74727044u);
      }
      if ( v124 < 0 )
      {
LABEL_261:
        if ( v9 )
          *(_BYTE *)(v9 + 3920) &= ~4u;
        DpiDxgkDdiStopDevice(v11, *((_QWORD *)DeviceExtension + 6));
      }
    }
    if ( v119 == 1 )
      DpiFdoDisconnectInterrupt(a1);
    if ( !DeviceExtension[1163] )
    {
      v120 = 1;
      if ( v121 )
        goto LABEL_275;
      if ( !*(_QWORD *)(v11 + 1344) )
        goto LABEL_275;
      DiagnosticInfoArgs = DxgAllocateDiagnosticInfoArgs(2LL);
      v97 = DiagnosticInfoArgs;
      if ( !DiagnosticInfoArgs )
        goto LABEL_275;
      *(_QWORD *)DiagnosticInfoArgs = *((_QWORD *)DeviceExtension + 6);
      v98 = *((_QWORD *)DeviceExtension + 19);
      v124 = *(_DWORD *)(DiagnosticInfoArgs + 216);
      if ( (*(int (__fastcall **)(__int64, __int64))(v11 + 1344))(v98, DiagnosticInfoArgs) >= 0 )
      {
        if ( *(_DWORD *)(v97 + 220) > (unsigned int)v124 )
          *(_DWORD *)(v97 + 220) = 0;
        DxgCreateLiveDumpWithDriverBlob(
          *((struct _DEVICE_OBJECT **)DeviceExtension + 19),
          0x1B0u,
          *(int *)(v97 + 8),
          Interval.QuadPart,
          v83,
          *(_QWORD *)(v11 + 152),
          (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v97);
        v120 = 0;
      }
      DxgFreeDiagnosticInfoArgs((struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v97);
      if ( v120 )
      {
LABEL_275:
        if ( v11 )
          v99 = *(_QWORD *)(v11 + 152);
        else
          v99 = 0LL;
        P = (PVOID)1;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))DxgCreateLiveDumpWithWdLogs2)(
          403LL,
          2052LL,
          (union _LARGE_INTEGER)Interval.QuadPart,
          v83,
          v99,
          1LL);
      }
    }
  }
  if ( v126 )
    ExFreePoolWithTag(v126, 0);
  if ( DeviceExtension[1154] && DeviceExtension[1152] )
    NotifyUserMSBDAIfApplicable();
  v100 = 0LL;
  v124 = 0;
  if ( v9 )
  {
    if ( DeviceExtension[1159] )
    {
      v101 = *(_QWORD *)(v9 + 1008);
      if ( v101 )
      {
        v102 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v9 + 1064);
        if ( v102 )
        {
          v103 = v102(v101, (unsigned int)started, v84);
          if ( v103 < 0 )
            WdLogSingleEntry2(2LL, *(_QWORD *)(v9 + 1064), v103);
        }
        v104 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64))(v9 + 1080);
        if ( v104 )
        {
          v146 = 0LL;
          v105 = *(_QWORD *)(v9 + 1008);
          v145 = 0LL;
          v106 = v104(v105, &v145, v84);
          if ( v106 < 0 )
          {
            WdLogSingleEntry2(2LL, *(_QWORD *)(v9 + 1080), v106);
          }
          else
          {
            v100 = *((_QWORD *)&v145 + 1);
            *(_DWORD *)(v9 + 1164) = DWORD1(v145);
            v124 = v146;
          }
        }
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v9 + 152), PowerRelations);
      }
    }
    v107 = (_QWORD *)ExAllocatePool2(256LL, 96LL, 1953656900LL);
    v108 = v107;
    if ( v107 )
    {
      memset(v107, 0, 0x60uLL);
      v108[7] = *((_QWORD *)DeviceExtension + 334);
      *(_DWORD *)v108 = 41;
      *((_DWORD *)v108 + 1) = 96;
      *((_DWORD *)v108 + 12) = started;
      *((_DWORD *)v108 + 13) = (unsigned int)a1 & 0xFFFF00;
      v109 = DxgkDiagCalcDuration1us(&v131);
      v110 = *(_QWORD *)(v9 + 5744);
      *((_DWORD *)v108 + 16) = v109;
      *((_DWORD *)v108 + 17) = *(_DWORD *)(v9 + 3928);
      *((_DWORD *)v108 + 22) = v124;
      *((_DWORD *)v108 + 18) = v83;
      v108[10] = v100;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v108, v110);
      ExFreePoolWithTag(v108, 0x74727044u);
    }
    if ( DeviceExtension[1152] )
    {
      if ( qword_1C013B748 )
      {
        v111 = *(_QWORD *)(qword_1C013B748 + 64);
        if ( v111 )
        {
          v112 = *(_QWORD *)(v111 + 40);
          if ( v112 )
          {
            if ( *(_QWORD *)(v112 + 408) )
              SendBDDDiagTelemetry(v111);
          }
        }
      }
    }
  }
  else
  {
    v113 = (char *)ExAllocatePool2(256LL, 64LL, 1953656900LL);
    v114 = v113;
    if ( v113 )
    {
      memset(v113, 0, 0x40uLL);
      v115 = DxgkDiagCalcDuration1us(&v131);
      *((_DWORD *)v114 + 10) = 0;
      *((_QWORD *)v114 + 4) = 0LL;
      *(_DWORD *)v114 = 6;
      *((_DWORD *)v114 + 1) = 64;
      *(_OWORD *)(v114 + 8) = 0LL;
      *((_QWORD *)v114 + 3) = 0LL;
      *((_DWORD *)v114 + 12) = 35;
      *((_DWORD *)v114 + 13) = (unsigned int)a1 & 0xFFFF00;
      *((_DWORD *)v114 + 14) = v115;
      *((_DWORD *)v114 + 15) = started;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v114, 0x200000000LL);
      ExFreePoolWithTag(v114, 0x74727044u);
    }
  }
  return (unsigned int)started;
}
