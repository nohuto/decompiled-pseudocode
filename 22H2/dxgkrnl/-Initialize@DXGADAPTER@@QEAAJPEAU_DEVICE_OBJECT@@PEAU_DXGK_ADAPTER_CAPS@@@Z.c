/*
 * XREFs of ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C018F684
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C019450C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00028F0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00085E0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000903C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0009188 (-IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0009D98 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019DC8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0MOCKDRIVERSTATE@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0022F44 (--0MOCKDRIVERSTATE@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?CheckMcdmDdiOverall@DXGADAPTER@@AEAAJXZ @ 0x1C0022FC0 (-CheckMcdmDdiOverall@DXGADAPTER@@AEAAJXZ.c)
 *     DxgkConvertWddmVersionToD3DKMTDriverVersion @ 0x1C0023004 (DxgkConvertWddmVersionToD3DKMTDriverVersion.c)
 *     Feature_NonDXArgonGpuSupport__private_ReportDeviceUsage @ 0x1C00249D8 (Feature_NonDXArgonGpuSupport__private_ReportDeviceUsage.c)
 *     Feature_SupportComputeOnlyAdapters__private_ReportDeviceUsage @ 0x1C0024A3C (Feature_SupportComputeOnlyAdapters__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C011DA44 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0133E18 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C0188F90 (DpiReadPnpRegistryValue.c)
 *     ?ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C018E79C (-ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0191054 (-RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ @ 0x1C01910F4 (-InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C019138C (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0191440 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C01917E8 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ @ 0x1C0191D50 (-InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ.c)
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C0191DC4 (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 *     ?GetDriverCapsSizeFromDdiVersion@@YAII@Z @ 0x1C0192D58 (-GetDriverCapsSizeFromDdiVersion@@YAII@Z.c)
 *     ?CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z @ 0x1C0192D9C (-CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z.c)
 *     DpiGetAdapterInfo @ 0x1C0192E7C (DpiGetAdapterInfo.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C019AC9C (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C019CF40 (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x1C019D0E0 (-SetModeBehavior@DXGADAPTER@@AEAAXEE@Z.c)
 *     ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ @ 0x1C019DACC (-AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ.c)
 *     ?SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019EC14 (-SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z @ 0x1C020C304 (-CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z.c)
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C020E2FC (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 *     ?ValidateHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x1C0210AD4 (-ValidateHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z.c)
 */

__int64 __fastcall DXGADAPTER::Initialize(DXGADAPTER *this, PDEVICE_OBJECT DeviceObject, struct _DXGK_ADAPTER_CAPS *a3)
{
  char v6; // r13
  __int64 v7; // rax
  struct _ERESOURCE *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 result; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rax
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  struct _ERESOURCE *v27; // rax
  NTSTATUS v28; // eax
  int v29; // ebx
  _BYTE *DeviceExtension; // rax
  int v31; // eax
  const struct _GUID *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned __int16 v35; // r9
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  int AdapterInfo; // eax
  __int64 v41; // r14
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r15
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned int v49; // r15d
  unsigned __int8 v50; // r8
  _QWORD *v51; // rax
  __int64 v52; // r8
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  int PnpRegistryValue; // eax
  __int64 v61; // r8
  int v62; // ecx
  char v63; // al
  int v64; // eax
  _DWORD *v65; // r14
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  unsigned __int64 v71; // r12
  __int64 v72; // rax
  bool IsBddFallbackDriver; // cf
  SIZE_T v74; // rax
  char *v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  void *v80; // rdi
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  unsigned __int64 v84; // r8
  unsigned int v85; // eax
  __int64 v86; // r9
  int v87; // eax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rdi
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rax
  int v94; // eax
  __int64 DisplayCore; // rdi
  unsigned int v96; // edx
  int v97; // eax
  SIZE_T v98; // rax
  struct _DXGK_PHYSICAL_MEMORY_RANGE *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  struct _DXGK_PHYSICAL_MEMORY_RANGE *v103; // r14
  __int64 v104; // rax
  __int64 v105; // rdx
  DXGADAPTER *v106; // rcx
  __int64 v107; // rax
  unsigned int v108; // eax
  bool v109; // zf
  unsigned int v110; // r13d
  int v111; // eax
  __int64 v112; // rdx
  char v113; // al
  __int64 v114; // rcx
  int v115; // eax
  int v116; // ecx
  char v117; // dl
  char v118; // dl
  char v119; // dl
  bool IsComputeOnlyAdapter; // al
  __int64 v121; // rdx
  unsigned int v122; // r9d
  __int64 v123; // r10
  char v124; // r8
  char v125; // r8
  __int64 v126; // rcx
  unsigned int v127; // eax
  __int64 v128; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v130; // rax
  struct DXGGLOBAL *v131; // rax
  char v132; // r9
  char v133; // r8
  __int64 v134; // rcx
  __int64 v135; // rcx
  unsigned int v136; // edi
  DXGGLOBAL *v137; // rax
  int v138; // eax
  __int64 v139; // rdx
  _DWORD *v140; // rcx
  __int64 v141; // rax
  __int64 *v142; // r14
  int RenderCore; // eax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rax
  char v151; // dl
  char v152; // cl
  __int64 v153; // rdx
  DXGADAPTER *v154; // rcx
  int v155; // eax
  __int64 v156; // rcx
  __int64 v157; // rdx
  int v158; // eax
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // rax
  __int64 v164; // rdx
  DXGGLOBAL *v165; // rax
  int v166; // eax
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // rax
  __int64 v170; // rdx
  __int64 v171; // rcx
  int v172; // eax
  MOCKDRIVERSTATE *v173; // rax
  __int64 v174; // rdx
  __int64 v175; // rcx
  MOCKDRIVERSTATE *v176; // rax
  __int64 v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // rbx
  struct DXGGLOBAL *v183; // rax
  __int64 v184; // rbx
  int v185; // eax
  struct DXGGLOBAL *v186; // rax
  __int64 v187; // rdx
  DXGGLOBAL *v188; // rax
  void *v189; // [rsp+28h] [rbp-B1h]
  unsigned int v190; // [rsp+30h] [rbp-A9h] BYREF
  int v191; // [rsp+34h] [rbp-A5h] BYREF
  int v192; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v193; // [rsp+40h] [rbp-99h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v194; // [rsp+48h] [rbp-91h] BYREF
  unsigned int v195[4]; // [rsp+78h] [rbp-61h] BYREF
  _BYTE v196[16]; // [rsp+88h] [rbp-51h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v197; // [rsp+98h] [rbp-41h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v198; // [rsp+C8h] [rbp-11h] BYREF
  unsigned int v200; // [rsp+158h] [rbp+7Fh] BYREF

  v6 = 0;
  if ( KeGetCurrentIrql() )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, DeviceObject);
    *(_QWORD *)(v7 + 24) = 6474LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_DWORD *)this + 50) )
    return 3221225485LL;
  v8 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 21) = v8;
  if ( !v8 )
  {
LABEL_5:
    v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(v12 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v12);
    return 3221225495LL;
  }
  v14 = ExInitializeResourceLite(v8);
  v18 = v14;
  if ( v14 < 0 )
    goto LABEL_8;
  *((_QWORD *)this + 27) = DeviceObject;
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  *((_QWORD *)this + 28) = DeviceAttachmentBaseRef;
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  v21 = DXGGLOBAL::AcquireAdapterOrdinal(*((DXGGLOBAL **)this + 2));
  *((_DWORD *)this + 58) = v21;
  if ( v21 == -1 )
    return 3221225495LL;
  LODWORD(v18) = ZwAllocateLocallyUniqueId((PLUID)((char *)this + 4316));
  if ( (int)v18 < 0 )
  {
    v26 = WdLogNewEntry5_WdLowResource(v23, v22, v24, v25);
    *(_QWORD *)(v26 + 24) = 6533LL;
LABEL_13:
    WdLogEvent5_WdLowResource(v26);
    return (unsigned int)v18;
  }
  v27 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 33) = v27;
  if ( !v27 )
    goto LABEL_5;
  v28 = ExInitializeResourceLite(v27);
  v18 = v28;
  if ( v28 < 0 )
  {
LABEL_8:
    v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = this;
    *(_QWORD *)(v19 + 32) = v18;
    WdLogEvent5_WdWarning(v19);
    return (unsigned int)v18;
  }
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  v29 = 0;
  *((_QWORD *)this + 5) = -1LL;
  DeviceExtension = DeviceObject->DeviceExtension;
  v192 = 0;
  if ( DeviceExtension[481] )
  {
    v31 = DXGADAPTER::InitializeParavirtualizedAdapter(this, (struct DRIVER_WORKAROUNDS *)&v192);
    v18 = v31;
    if ( v31 < 0 )
    {
      v36 = WdLogNewEntry5_WdError(v33, v32);
      *(_QWORD *)(v36 + 24) = v18;
      *(_QWORD *)(v36 + 32) = 6580LL;
LABEL_19:
      WdLogEvent5_WdError(v36);
      return (unsigned int)v18;
    }
    v29 = v192;
  }
  else
  {
    AdapterInfo = DpiGetAdapterInfo(DeviceObject, (char *)this + 1392, (char *)this + 272, (char *)this + 1880);
    v41 = AdapterInfo;
    if ( AdapterInfo < 0 )
    {
      v42 = WdLogNewEntry5_WdWarning(v33, v32, v34);
      *(_QWORD *)(v42 + 24) = this;
      *(_QWORD *)(v42 + 32) = v41;
      WdLogEvent5_WdWarning(v42);
      return (unsigned int)v41;
    }
  }
  v37 = *((_DWORD *)this + 87);
  if ( (v37 & 0x200) != 0 )
  {
    *((_BYTE *)DXGGLOBAL::GetGlobal(v33, (__int64)v32) + 304320) = 1;
    v37 = *((_DWORD *)this + 87);
  }
  if ( (v37 & 8) != 0 && (v37 & 0x10) != 0 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v33, v32);
    *(_QWORD *)(v38 + 24) = 6610LL;
    WdLogEvent5_WdAssertion(v38);
  }
  if ( !*((_QWORD *)this + 45) )
  {
    v39 = WdLogNewEntry5_WdError(v33, v32);
    *(_QWORD *)(v39 + 24) = 6617LL;
LABEL_28:
    WdLogEvent5_WdError(v39);
    return 3221225561LL;
  }
  if ( !*((_QWORD *)this + 62) )
    *((_QWORD *)this + 62) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)this + 123) )
    *((_QWORD *)this + 123) = W32kStub_GreSfmOpenTokenEvent;
  v43 = DXGADAPTER::CallDriverQueryInterface(this, v32, v34, v35, (char *)this + 1688, v189);
  v46 = v43;
  if ( v43 < 0 )
  {
    v47 = WdLogNewEntry5_WdTrace(v45, v44);
    *(_QWORD *)(v47 + 24) = this;
    *(_QWORD *)(v47 + 32) = v46;
LABEL_39:
    memset((char *)this + 1688, 0, 0xB8uLL);
    goto LABEL_40;
  }
  if ( *((_WORD *)this + 845) < 4u )
    goto LABEL_39;
LABEL_40:
  v48 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
  v49 = *(_DWORD *)(*(_QWORD *)(v48 + 40) + 28LL);
  *((_DWORD *)this + 468) = v49;
  if ( v49 >= 0x7000 && *((_DWORD *)this + 362) && *((_DWORD *)this + 363) )
  {
    v50 = 0;
LABEL_48:
    DXGADAPTER::SetModeBehavior(this, v44, v50);
    goto LABEL_49;
  }
  if ( v49 >= 0x6002 && *((_DWORD *)this + 362) && *((_DWORD *)this + 363) )
  {
    v50 = 1;
    goto LABEL_48;
  }
LABEL_49:
  if ( v49 - 20480 <= 5 )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v48, v44);
    v51[3] = 6692LL;
LABEL_51:
    WdLogEvent5_WdError(v51);
    return 3221225485LL;
  }
  *(_QWORD *)&v194.Type = 1LL;
  *(_QWORD *)&v194.InputDataSize = 0LL;
  v194.pOutputData = (char *)this + 1992;
  *(_OWORD *)&v194.OutputDataSize = 0LL;
  v194.pInputData = 0LL;
  v194.OutputDataSize = GetDriverCapsSizeFromDdiVersion(v49);
  if ( !v194.OutputDataSize )
    return 3221225485LL;
  v53 = DXGADAPTER::DdiQueryAdapterInfo(this, &v194, v52);
  v41 = v53;
  if ( v53 < 0 )
  {
    v56 = WdLogNewEntry5_WdError(v55, v54);
    *(_QWORD *)(v56 + 24) = v41;
    WdLogEvent5_WdError(v56);
    return (unsigned int)v41;
  }
  v57 = *((unsigned int *)this + 582);
  if ( (int)v57 > 9472 && *((_DWORD *)DeviceObject->DeviceExtension + 681) <= 0xA00Bu )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v57, v54);
    v58 = *((int *)this + 582);
LABEL_59:
    v51[3] = v58;
    goto LABEL_51;
  }
  if ( (int)v57 < 4864 )
  {
    if ( *((_QWORD *)this + 92) )
    {
      *((_DWORD *)this + 649) = 1300;
    }
    else if ( (_DWORD)v57 == 4608 )
    {
      *((_DWORD *)this + 649) = 1200;
    }
    else if ( *((_QWORD *)this + 88) && (*((_DWORD *)this + 511) & 4) != 0 )
    {
      *((_DWORD *)this + 649) = 1105;
    }
    else
    {
      *((_DWORD *)this + 649) = 1000;
    }
  }
  else
  {
    *((_DWORD *)this + 649) = DxgkConvertWddmVersionToD3DKMTDriverVersion(v57);
  }
  v59 = *((_QWORD *)this + 27);
  v191 = 0;
  PnpRegistryValue = DpiReadPnpRegistryValue(v59, L"ACGSupported", (char *)&v191, 4u, 2u);
  v62 = v191;
  if ( PnpRegistryValue < 0 )
    v62 = 0;
  v191 = v62;
  if ( v62 || (v63 = 0, *((int *)this + 649) >= 2200) )
    v63 = 1;
  *((_BYTE *)this + 212) = v63;
  if ( *((_BYTE *)this + 209) )
  {
    *((_BYTE *)a3 + 1) &= ~1u;
    *(_BYTE *)a3 &= 0x7Bu;
    *((_DWORD *)this + 515) &= 0xFFFFD3FF;
    *((_DWORD *)this + 642) &= 0xFFFFFFEB;
    *((_BYTE *)this + 2532) = 0;
    if ( *((_BYTE *)this + 210) )
      *((_DWORD *)this + 511) &= ~0x100000u;
  }
  else if ( v49 >= 0x5023 )
  {
    if ( g_bCreateParavirtualizedGpu )
    {
      v64 = *((_DWORD *)this + 87);
      if ( (v64 & 4) == 0 && (v64 & 0x10) == 0 && !*(_BYTE *)(*((_QWORD *)DeviceObject->DeviceExtension + 5) + 133LL) )
        *((_DWORD *)this + 515) |= 0x400u;
    }
  }
  v65 = (_DWORD *)((char *)this + 2576);
  *((_DWORD *)this + 644) = 0;
  if ( v49 >= 0x5010 && !*((_BYTE *)this + 209) )
  {
    *(_QWORD *)&v198.Type = 16LL;
    *(_QWORD *)&v198.InputDataSize = 0LL;
    *(_QWORD *)&v198.Flags.0 = 0LL;
    HIDWORD(v198.hKmdProcessHandle) = 0;
    v198.pInputData = 0LL;
    v198.pOutputData = (char *)this + 2576;
    v198.OutputDataSize = 4;
    v66 = DXGADAPTER::DdiQueryAdapterInfo(this, &v198, v61);
    if ( v66 < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v68, v67) + 24) = v66;
      *v65 = 0;
      if ( *((int *)this + 582) >= 8704 )
        *v65 |= 2u;
    }
    v69 = *((unsigned int *)this + 582);
    v70 = (unsigned int)*v65;
    if ( (int)v69 >= 9472 )
    {
      if ( (v70 & 0xC) == 0xC )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdError(v70, v69);
        v51[3] = this;
        v51[4] = 6853LL;
        goto LABEL_51;
      }
    }
    else
    {
      LODWORD(v70) = v70 & 0xFFFFFFF3;
      *v65 = v70;
    }
    if ( (int)v69 < 9984 )
      *v65 = v70 & 0xFFFFFFEF;
  }
  v71 = *((unsigned int *)this + 70);
  v72 = 360 * v71;
  if ( !is_mul_ok(v71, 0x168uLL) )
    v72 = -1LL;
  IsBddFallbackDriver = __CFADD__(v72, 8LL);
  v74 = v72 + 8;
  if ( IsBddFallbackDriver )
    v74 = -1LL;
  v75 = (char *)operator new[](v74, 0x4B677844u, (POOL_TYPE)512);
  if ( v75 )
  {
    v80 = v75 + 8;
    *(_QWORD *)v75 = v71;
    `vector constructor iterator'(
      v75 + 8,
      360LL,
      (unsigned int)v71,
      (void (__fastcall *)(char *))DXGK_PHYSICALADAPTERINFO::DXGK_PHYSICALADAPTERINFO);
  }
  else
  {
    v80 = 0LL;
  }
  *((_QWORD *)this + 323) = v80;
  if ( !v80 )
  {
    v81 = WdLogNewEntry5_WdLowResource(v77, v76, v78, v79);
    *(_QWORD *)(v81 + 24) = 6870LL;
    WdLogEvent5_WdLowResource(v81);
    return 3221225495LL;
  }
  memset(v80, 0, 360 * v71);
  if ( *((int *)this + 582) < 0x2000 || v49 < 0x5005 )
  {
    v6 = 1;
  }
  else
  {
    v83 = 0LL;
    *((_DWORD *)this + 648) = 0;
    v85 = 0;
    v200 = 0;
    if ( (_DWORD)v71 )
    {
      v86 = *((_QWORD *)this + 323);
      v84 = 0LL;
      while ( 1 )
      {
        *(_QWORD *)&v197.Flags.0 = 0LL;
        HIDWORD(v197.hKmdProcessHandle) = 0;
        v197.pInputData = &v200;
        *(_QWORD *)&v197.Type = 15LL;
        *(_QWORD *)&v197.InputDataSize = 4LL;
        v197.pOutputData = (void *)(v86 + 360LL * (unsigned int)v84);
        v197.OutputDataSize = v49 < 0xC003 ? (v49 < 0x6000 ? 20 : 24) : 32;
        v87 = DXGADAPTER::DdiQueryAdapterInfo(this, &v197, v84);
        v90 = v87;
        if ( v87 < 0 )
          break;
        if ( v49 >= 0xC003 )
        {
          v91 = *((_QWORD *)this + 323);
          v92 = 360LL * v200;
          if ( (*(_DWORD *)(v92 + v91 + 16) & 0x20) != 0 )
          {
            if ( *(_DWORD *)(v92 + v91 + 24) >= (unsigned int)*(unsigned __int16 *)(v92 + v91) )
            {
              v51 = (_QWORD *)WdLogNewEntry5_WdError(v92, v91);
              v51[3] = this;
              v51[4] = *(unsigned int *)(360LL * v200 + *((_QWORD *)this + 323) + 24);
              v51[5] = *(unsigned __int16 *)(360LL * v200 + *((_QWORD *)this + 323));
              goto LABEL_51;
            }
            if ( (*((_DWORD *)this + 515) & 0x2000) == 0 )
            {
              v51 = (_QWORD *)WdLogNewEntry5_WdError(v92, v91);
              v51[3] = this;
              v51[4] = 6936LL;
              goto LABEL_51;
            }
          }
        }
        v86 = *((_QWORD *)this + 323);
        v83 = 360LL * v200;
        v82 = *(unsigned __int16 *)(v83 + v86);
        v85 = v82 + *((_DWORD *)this + 648);
        v84 = ++v200;
        *((_DWORD *)this + 648) = v85;
        if ( (unsigned int)v84 >= (unsigned int)v71 )
          goto LABEL_135;
      }
      v93 = WdLogNewEntry5_WdEvent(v89, v88);
      *(_QWORD *)(v93 + 24) = v90;
      WdLogEvent5_WdEvent(v93);
      v6 = 1;
    }
    else
    {
LABEL_135:
      if ( *((int *)this + 649) <= 2400 && v85 > 0x40 )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
        v51[3] = this;
        v51[4] = 64LL;
        v51[5] = *((unsigned int *)this + 648);
        goto LABEL_51;
      }
      if ( (*((_DWORD *)this + 514) & 1) == 0 )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
        v51[3] = this;
        v51[4] = 6958LL;
        goto LABEL_51;
      }
    }
    if ( (*((_DWORD *)this + 515) & 0x800) != 0 )
    {
      v190 = 0;
      if ( (_DWORD)v71 )
      {
        do
        {
          v193 = 0LL;
          v194.pInputData = &v190;
          v194.Type = DXGKQAITYPE_FRAMEBUFFERSAVESIZE;
          v194.pOutputData = &v193;
          v194.InputDataSize = 4;
          v194.OutputDataSize = 8;
          v94 = DXGADAPTER::DdiQueryAdapterInfo(this, &v194, v84);
          DisplayCore = v94;
          if ( v94 < 0 )
            goto LABEL_141;
          if ( (v193 & 0xFFF) != 0 )
          {
            v51 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
            v58 = v193;
            goto LABEL_59;
          }
          *(_QWORD *)(360LL * v190 + *((_QWORD *)this + 323) + 56) = v193;
          v96 = v190;
          v84 = *(_QWORD *)(360LL * v190 + *((_QWORD *)this + 323) + 56);
          if ( v84 )
          {
            result = DXGADAPTER::CreateFrameBufferSaveAreaSection(this, v190, v84);
            if ( (int)result < 0 )
              return result;
            v96 = v190;
          }
          v190 = v96 + 1;
        }
        while ( v96 + 1 < (unsigned int)v71 );
      }
      v194.InputDataSize = 0;
      v194.pInputData = 0LL;
      v194.pOutputData = v195;
      v194.Type = DXGKQAITYPE_HARDWARERESERVEDRANGES;
      *(_OWORD *)v195 = 0LL;
      v194.OutputDataSize = 16;
      v97 = DXGADAPTER::DdiQueryAdapterInfo(this, &v194, v84);
      DisplayCore = v97;
      if ( v97 < 0 )
      {
LABEL_141:
        v104 = WdLogNewEntry5_WdError(v83, v82);
        *(_QWORD *)(v104 + 24) = DisplayCore;
        goto LABEL_142;
      }
      if ( v195[0] )
      {
        v98 = 16LL * v195[0];
        if ( !is_mul_ok(v195[0], 0x10uLL) )
          v98 = -1LL;
        v99 = (struct _DXGK_PHYSICAL_MEMORY_RANGE *)operator new[](v98, 0x4B677844u, PagedPool);
        v103 = v99;
        if ( !v99 )
        {
          v104 = WdLogNewEntry5_WdError(v101, v100);
          *(_QWORD *)(v104 + 24) = v195[0];
LABEL_142:
          WdLogEvent5_WdError(v104);
          return (unsigned int)DisplayCore;
        }
        *(_QWORD *)&v195[2] = v99;
        if ( (int)DXGADAPTER::DdiQueryAdapterInfo(this, &v194, v102) < 0 )
        {
          v107 = WdLogNewEntry5_WdAssertion(v106, v105);
          *(_QWORD *)(v107 + 24) = 7027LL;
          WdLogEvent5_WdAssertion(v107);
        }
        LODWORD(DisplayCore) = DXGADAPTER::ValidateHardwareReservedRanges(v106, v103, v195[0]);
        if ( (int)DisplayCore < 0 )
        {
          operator delete[](v103);
          return (unsigned int)DisplayCore;
        }
        v108 = v195[0];
        *((_QWORD *)this + 547) = v103;
        v65 = (_DWORD *)((char *)this + 2576);
        *((_DWORD *)this + 1093) = v108;
      }
    }
  }
  v109 = v6 == 0;
  v110 = v71;
  if ( !v109 && (_DWORD)v71 )
  {
    v82 = 0LL;
    do
    {
      *(_WORD *)(v82 + *((_QWORD *)this + 323)) = *((_WORD *)this + 1034);
      v82 += 360LL;
      *(_DWORD *)(*((_QWORD *)this + 323) + v82 - 344) ^= (*(_DWORD *)(*((_QWORD *)this + 323) + v82 - 344) ^ (*((_DWORD *)this + 515) >> 7)) & 1;
      *(_DWORD *)(*((_QWORD *)this + 323) + v82 - 344) ^= (*(_DWORD *)(*((_QWORD *)this + 323) + v82 - 344) ^ (*((_DWORD *)this + 515) >> 5)) & 2;
      *(_WORD *)(*((_QWORD *)this + 323) + v82 - 358) = *((_WORD *)this + 1032);
      v83 = *((_QWORD *)this + 323);
      *(_QWORD *)(v83 + v82 - 352) = *((_QWORD *)this + 27);
      --v71;
    }
    while ( v71 );
  }
  if ( *((int *)this + 649) >= 2400 )
  {
    if ( *((_DWORD *)this + 642) >= 0x20u )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
      v51[3] = 7065LL;
      goto LABEL_51;
    }
    *((_BYTE *)this + 2650) = *((_BYTE *)this + 2568) & 1;
  }
  v111 = *((_DWORD *)this + 642);
  if ( (v111 & 0x10) != 0 && !*((_QWORD *)this + 167) )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
    v51[3] = 7076LL;
    goto LABEL_51;
  }
  if ( *((_BYTE *)this + 2796) )
    *((_DWORD *)this + 642) = v111 & 0xFFFFFFEF;
  if ( v49 >= 0x3001 )
  {
    v115 = *((_DWORD *)this + 582);
    if ( v115 != 4096
      && v115 != 4608
      && v115 != 4864
      && v115 != 0x2000
      && v115 != 8448
      && v115 != 8704
      && v115 != 8960
      && v115 != 9216
      && v115 != 9472
      && v115 != 9728
      && v115 != 9984 )
    {
      v39 = WdLogNewEntry5_WdError(v83, v82);
      *(_QWORD *)(v39 + 24) = *((int *)this + 582);
      goto LABEL_28;
    }
  }
  else
  {
    *((_DWORD *)this + 582) = 4096;
  }
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v83, v82) + 760) || (v113 = 1, (*((_DWORD *)this + 87) & 8) != 0) )
    v113 = 0;
  *((_BYTE *)this + 2608) = v113;
  if ( v113 )
  {
    v114 = *((unsigned int *)this + 582);
    if ( (int)v114 < 4608
      && (*((_DWORD *)this + 630)
       || *((_DWORD *)this + 631)
       || *((_BYTE *)this + 2528)
       || *((_BYTE *)this + 2529)
       || *((_BYTE *)this + 2530)
       || (*((_DWORD *)this + 511) & 0x10000000) != 0
       || (*((_DWORD *)this + 514) & 0x14) != 0
       || *((_BYTE *)this + 2531)
       || *((_BYTE *)this + 2533)
       || *((_BYTE *)this + 2534)) )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v114, v112);
      v51[3] = 7155LL;
      goto LABEL_51;
    }
    if ( (int)v114 < 4864
      && ((*((_DWORD *)this + 513) & 0x10) != 0
       || (*((_DWORD *)this + 515) & 0x10) != 0
       || *((_BYTE *)this + 2535)
       || *((_DWORD *)this + 634)) )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v114, v112);
      v51[3] = 7170LL;
      goto LABEL_51;
    }
    if ( (int)v114 < 0x2000 && *((_BYTE *)this + 2540) )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v114, v112);
      v51[3] = 7198LL;
      goto LABEL_51;
    }
  }
  if ( v49 < 0x4000 )
  {
    *((_DWORD *)this + 515) &= ~0x10u;
    *((_BYTE *)this + 2535) = 0;
  }
  if ( v49 < 0x5011 )
  {
    v116 = *((_DWORD *)this + 87);
    if ( (v116 & 1) != 0 && (*((_DWORD *)this + 515) & 0x10) != 0 && (v116 & 0x1000) != 0 )
      *((_BYTE *)this + 2540) = 1;
  }
  *(_BYTE *)a3 ^= (*(_BYTE *)a3 ^ (4 * *((_BYTE *)this + 2528))) & 4;
  v117 = *(_BYTE *)a3 & 0xF7 | (*((_BYTE *)this + 2534) != 0 ? 8 : 0);
  *(_BYTE *)a3 = v117;
  v118 = (v117 ^ (32 * (*((_DWORD *)this + 515) >> 4))) & 0x20 ^ v117;
  *(_BYTE *)a3 = v118;
  v119 = (v118 ^ (*((_BYTE *)this + 2535) << 6)) & 0x40 ^ v118;
  *(_BYTE *)a3 = v119;
  *((_DWORD *)a3 + 1) = *((_DWORD *)this + 507);
  *(_BYTE *)a3 = v119 & 0x7F | (*(_BYTE *)v65 << 7);
  *((_BYTE *)a3 + 1) ^= (*((_BYTE *)a3 + 1) ^ *((_BYTE *)this + 2540)) & 1;
  *((_DWORD *)a3 + 2) = *((_DWORD *)this + 582);
  IsComputeOnlyAdapter = DXGADAPTER::IsComputeOnlyAdapter(this);
  v125 = v124 & 0xEF;
  *(_BYTE *)a3 = v125;
  LOBYTE(v126) = v121 ^ (v121 ^ (32 * IsComputeOnlyAdapter)) & 0x20;
  *((_BYTE *)a3 + 1) = v126;
  if ( v49 >= 0x5021 )
  {
    v125 |= 16 * (*((_BYTE *)this + 2560) & 1);
    *(_BYTE *)a3 = v125;
  }
  if ( *((_BYTE *)this + 209) == (_BYTE)v123 )
  {
    LOBYTE(v121) = v125 & 0x40;
    if ( (v125 & 0x40) != 0 )
    {
      if ( v49 < 0x5005 && (*((_DWORD *)this + 362) != (_DWORD)v123 || *((_DWORD *)this + 363) != (_DWORD)v123) )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdError(v126, v121);
        v58 = *((_QWORD *)this + 27);
        goto LABEL_59;
      }
      LOBYTE(v126) = v126 ^ (v126 ^ (2 * *((_BYTE *)this + 2563))) & 2;
      *((_BYTE *)a3 + 1) = v126;
    }
    LOBYTE(v126) = v126 & 1;
    if ( ((_BYTE)v121 || (_BYTE)v126) && (v125 & 0x20) == 0 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v126, v121);
      v51[3] = *((_QWORD *)this + 27);
      v51[4] = 7277LL;
      goto LABEL_51;
    }
    if ( (_BYTE)v121 )
    {
      if ( (_BYTE)v126 )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdError(v126, v121);
        v51[3] = *((_QWORD *)this + 27);
        v51[4] = 7284LL;
        goto LABEL_51;
      }
    }
    else if ( (_BYTE)v126 && *((_DWORD *)this + 363) == (_DWORD)v123 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v126, v121);
      v51[3] = *((_QWORD *)this + 27);
      v51[4] = 7292LL;
      goto LABEL_51;
    }
    if ( *((_BYTE *)this + 2530) != (_BYTE)v123
      && (*((_QWORD *)this + 89) == v123 || *((_QWORD *)this + 90) == v123 || *((_QWORD *)this + 91) == v123) )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v126, v121);
      v51[3] = 7306LL;
      goto LABEL_51;
    }
    if ( (*((_DWORD *)this + 511) & 4) != 0 && *((_QWORD *)this + 88) == v123 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v126, v121);
      v51[3] = 7313LL;
      goto LABEL_51;
    }
    if ( *((_BYTE *)this + 2533) != (_BYTE)v123 && (*((_QWORD *)this + 93) == v123 || *((_QWORD *)this + 94) == v123) )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v126, v121);
      v51[3] = 7321LL;
      goto LABEL_51;
    }
    if ( v49 < 0x300C && *((_QWORD *)this + 93) != v123 && *((_QWORD *)this + 94) != v123 )
      *((_BYTE *)this + 2533) = 1;
  }
  *((_WORD *)this + 1305) = v123;
  *((_BYTE *)this + 2612) = v123;
  if ( *((_BYTE *)this + 2532) != (_BYTE)v123 )
  {
    if ( v49 < 0x300B )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v126, v121);
      v51[3] = 7343LL;
      goto LABEL_51;
    }
    if ( v49 >= v122 )
    {
      if ( v49 == v122 )
      {
        *((_BYTE *)this + 2611) = 1;
      }
      else
      {
        v127 = *((_DWORD *)this + 634);
        if ( !v127 )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdError(v126, v121);
          v51[3] = 7356LL;
          goto LABEL_51;
        }
        if ( v127 <= 8 )
        {
          if ( v49 > 0x5000 )
            *((_BYTE *)this + 2612) = 1;
        }
        else
        {
          v126 = *((unsigned int *)this + 582);
          if ( (int)v126 < 8704 )
          {
            if ( (int)v126 < 0x2000 || v127 != 10 )
            {
              v51 = (_QWORD *)WdLogNewEntry5_WdError(v126, v121);
              v51[3] = 7379LL;
              goto LABEL_51;
            }
            *((_DWORD *)this + 634) = 8;
          }
          else if ( v127 > 0xA )
          {
            v51 = (_QWORD *)WdLogNewEntry5_WdError(v126, v121);
            v51[3] = 7366LL;
            goto LABEL_51;
          }
        }
      }
    }
    else
    {
      *((_BYTE *)this + 2610) = 1;
    }
    v128 = *((_QWORD *)this + 97);
    if ( !v128 && *((_QWORD *)this + 113) == v123 && *((_QWORD *)this + 117) == v123 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v126, v121);
      v51[3] = 7395LL;
      goto LABEL_51;
    }
    if ( v49 > 0x4002
      && *((_QWORD *)this + 101) == v123
      && *((_QWORD *)this + 112) == v123
      && *((_QWORD *)this + 116) == v123 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v126, v121);
      v51[3] = 7407LL;
      goto LABEL_51;
    }
    if ( *((_BYTE *)this + 2531) == (_BYTE)v123 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v126, v121);
      v51[3] = 7417LL;
      goto LABEL_51;
    }
    if ( v128 )
    {
      Global = DXGGLOBAL::GetGlobal(v126, v121);
      DXGGLOBAL::RecordFeatureUsage(Global, 1LL, 1LL);
      v123 = 0LL;
    }
    if ( *((_QWORD *)this + 113) != v123 )
    {
      v130 = DXGGLOBAL::GetGlobal(v126, v121);
      DXGGLOBAL::RecordFeatureUsage(v130, 2LL, 1LL);
      v123 = 0LL;
    }
    if ( *((_QWORD *)this + 117) != v123 )
    {
      v131 = DXGGLOBAL::GetGlobal(v126, v121);
      DXGGLOBAL::RecordFeatureUsage(v131, 3LL, 1LL);
      v123 = 0LL;
    }
  }
  v132 = *((_BYTE *)this + 209);
  *((_BYTE *)this + 2648) = v123;
  if ( v132 )
    goto LABEL_292;
  v133 = v123;
  if ( v49 >= 0x700A
    && *((int *)this + 582) >= 8704
    && (*((_QWORD *)this + 71) == v123 || *((_QWORD *)this + 137) != v123) )
  {
    *((_BYTE *)this + 2648) = 1;
    v133 = 1;
  }
  if ( *((int *)this + 582) < 8960 )
  {
LABEL_292:
    *((_DWORD *)this + 510) &= 0xFFFFFFE3;
  }
  else
  {
    v134 = (*((_DWORD *)this + 510) >> 3) & 1;
    v121 = (*((_DWORD *)this + 510) >> 2) & 1;
    if ( (unsigned int)v121 < (unsigned int)v134
      || (unsigned int)v134 < ((*((_DWORD *)this + 510) >> 4) & 1u)
      || !v133 && (_DWORD)v121 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v134, v121);
      v51[3] = *((_QWORD *)this + 27);
      v51[4] = -1073741811LL;
      goto LABEL_51;
    }
  }
  v135 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
  if ( *(_BYTE *)(*(_QWORD *)(v135 + 40) + 133LL) == (_BYTE)v123 && !v132 )
  {
    v136 = v123;
    LOBYTE(v136) = *((_DWORD *)this + 582) >= 0x2000;
    v137 = DXGGLOBAL::GetGlobal(v135, v121);
    v138 = DXGGLOBAL::DeferredInitialize(v137, v136);
    LOBYTE(v123) = 0;
    DisplayCore = v138;
    if ( v138 < 0 )
      goto LABEL_141;
  }
  DXGADAPTER::Config = v123;
  DXGADAPTER::ReadConfig(this, a3);
  DXGADAPTER::InitializeDriverWorkarounds(this);
  if ( *((_BYTE *)this + 209) )
  {
    **((_DWORD **)this + 325) ^= (v29 ^ **((_DWORD **)this + 325)) & 0x10000;
    v140 = (_DWORD *)*((_QWORD *)this + 325);
    *v140 ^= ((unsigned __int16)v29 ^ (unsigned __int16)*v140) & 0x8000;
  }
  if ( *((int *)this + 582) < 9216 )
    goto LABEL_301;
  v141 = *((_QWORD *)this + 159);
  if ( !*((_QWORD *)this + 158) )
  {
    if ( !v141 )
    {
LABEL_301:
      *((_QWORD *)this + 158) = W32kStub_UserRemoveWindowedSwapChain;
      *((_QWORD *)this + 159) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
      goto LABEL_302;
    }
LABEL_308:
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v140, v139);
    v51[3] = 7537LL;
    goto LABEL_51;
  }
  if ( !v141 )
    goto LABEL_308;
LABEL_302:
  result = DXGADAPTER::CheckMcdmDdiOverall(this, v139);
  if ( (int)result >= 0 )
  {
    DXGADAPTER::InitializeDriverDiagnosticReporting(this);
    v142 = (__int64 *)((char *)this + 2704);
    RenderCore = ADAPTER_RENDER::CreateRenderCore(this, (struct ADAPTER_RENDER **)this + 338);
    v18 = RenderCore;
    if ( RenderCore < 0 )
    {
      if ( *v142 )
      {
        v146 = WdLogNewEntry5_WdAssertion(v145, v144);
        *(_QWORD *)(v146 + 24) = 7560LL;
        WdLogEvent5_WdAssertion(v146);
      }
      v36 = WdLogNewEntry5_WdError(v145, v144);
      *(_QWORD *)(v36 + 24) = this;
      *(_QWORD *)(v36 + 32) = v18;
      goto LABEL_19;
    }
    DisplayCore = (int)ADAPTER_DISPLAY::CreateDisplayCore(this, (struct ADAPTER_DISPLAY **)this + 337);
    v149 = *((_QWORD *)this + 337);
    if ( (int)DisplayCore < 0 )
    {
      if ( v149 )
      {
        v150 = WdLogNewEntry5_WdAssertion(v148, v147);
        *(_QWORD *)(v150 + 24) = 7582LL;
        WdLogEvent5_WdAssertion(v150);
      }
      v104 = WdLogNewEntry5_WdError(v148, v147);
      *(_QWORD *)(v104 + 24) = this;
      *(_QWORD *)(v104 + 32) = DisplayCore;
      goto LABEL_142;
    }
    if ( !*v142 && !v149 )
    {
      v39 = WdLogNewEntry5_WdError(v148, v147);
      *(_QWORD *)(v39 + 24) = this;
      *(_QWORD *)(v39 + 32) = -1073741735LL;
      goto LABEL_28;
    }
    v151 = *(_BYTE *)a3 & 0xFE | (v149 != 0);
    *(_BYTE *)a3 = v151;
    v152 = v151 & 0xFD | (*v142 != 0 ? 2 : 0);
    *(_BYTE *)a3 = v152;
    if ( (v152 & 1) != 0 )
      *((_BYTE *)a3 + 1) = *((_BYTE *)a3 + 1) & 0xFB | (DXGADAPTER::DriverSupportSetTimingsFromVidPn(this) != 0 ? 4 : 0);
    else
      *((_BYTE *)a3 + 1) &= ~4u;
    if ( !*v142 )
      *((_DWORD *)this + 511) |= 1u;
    if ( DXGADAPTER::IsDxgmms2(this) )
    {
      v155 = *((_DWORD *)this + 87);
      if ( (v155 & 4) == 0
        && (v155 & 8) == 0
        && v153
        && v49 >= 0x5008
        && (!*((_QWORD *)this + 102) || !*((_QWORD *)this + 114)) )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdError(v154, v153);
        v51[3] = 7638LL;
        goto LABEL_51;
      }
    }
    if ( *((_BYTE *)this + 2608)
      && DXGADAPTER::IsFullWDDMAdapter(v154)
      && *((int *)this + 582) >= 4608
      && !*((_BYTE *)this + 2531) )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v156, v153);
      v51[3] = 7653LL;
      goto LABEL_51;
    }
    if ( ((*((_BYTE *)this + 209) == 0) & *((_BYTE *)this + 2531)) != 0
      && (!v153
       || !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v153 + 640) + 8LL) + 712LL))(*(_QWORD *)(v153 + 648))) )
    {
      *(_WORD *)((char *)this + 2531) = 0;
    }
    if ( *((_BYTE *)this + 209) )
      *((_QWORD *)this + 102) = 0LL;
    IsBddFallbackDriver = DXGADAPTER::IsBddFallbackDriver(this);
    v158 = *((_DWORD *)this + 87);
    *((_DWORD *)this + 50) = IsBddFallbackDriver ? 3 : 1;
    if ( (v158 & 0x10) != 0 && !*((_QWORD *)this + 337) )
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v196, v157);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v196);
      if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v160, v159) + 103) )
      {
        v163 = WdLogNewEntry5_WdError(v162, v161);
        *(_QWORD *)(v163 + 24) = this;
        *(_QWORD *)(v163 + 32) = -1073741735LL;
        WdLogEvent5_WdError(v163);
      }
      else
      {
        _InterlockedIncrement64((volatile signed __int64 *)this + 3);
        *((_QWORD *)this + 4) = -1LL;
        v165 = DXGGLOBAL::GetGlobal(v162, v161);
        DXGGLOBAL::SetWarpAdapter(v165, this);
      }
      if ( v196[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v196, v164);
    }
    if ( !*((_BYTE *)this + 209) )
    {
      v166 = DXGADAPTER::InitializePowerManagement(this);
      DisplayCore = v166;
      if ( v166 >= 0 )
      {
LABEL_350:
        if ( *((_BYTE *)this + 2608) )
        {
          if ( *((int *)this + 582) >= 4864 && DXGADAPTER::IsFullWDDMAdapter(this) )
          {
            v172 = *((_DWORD *)this + 87);
            if ( (v172 & 4) == 0 && (v172 & 0x20) == 0 && (*((_DWORD *)this + 513) & 0x10) == 0 )
            {
              v51 = (_QWORD *)WdLogNewEntry5_WdError(v171, v170);
              v51[3] = 7734LL;
              goto LABEL_51;
            }
          }
        }
LABEL_357:
        if ( (*((_DWORD *)this + 87) & 0x10) != 0 )
          *((_BYTE *)this + 2651) = 1;
        if ( v49 >= 0xA008 )
        {
          *((_BYTE *)this + 2651) = 1;
          Feature_NonDXArgonGpuSupport__private_ReportDeviceUsage();
        }
        v173 = (MOCKDRIVERSTATE *)operator new[](0xAB0uLL, 0x4B677844u, (POOL_TYPE)512);
        if ( v173 )
          v176 = MOCKDRIVERSTATE::MOCKDRIVERSTATE(v173, this);
        else
          v176 = 0LL;
        *((_QWORD *)this + 561) = v176;
        if ( !v176 )
        {
          v177 = WdLogNewEntry5_WdError(v175, v174);
          *(_QWORD *)(v177 + 24) = 7772LL;
          WdLogEvent5_WdError(v177);
          return 3221225495LL;
        }
        if ( *((int *)this + 649) >= 2600 && (*((_DWORD *)this + 642) & 8) != 0 )
          Feature_SupportComputeOnlyAdapters__private_ReportDeviceUsage();
        LODWORD(v18) = DXGADAPTER::InitializeVSyncPhaseState(this);
        if ( (int)v18 < 0 )
        {
          v26 = WdLogNewEntry5_WdLowResource(v179, v178, v180, v181);
          *(_QWORD *)(v26 + 24) = 7790LL;
          goto LABEL_13;
        }
        v182 = *v142;
        if ( *v142 && !*((_BYTE *)this + 209) )
        {
          v183 = DXGGLOBAL::GetGlobal(v179, v178);
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v182 + 616) + 8LL) + 912LL))(
            *(_QWORD *)(v182 + 624),
            (__int64)v183 + 1216);
        }
        if ( (*((_DWORD *)this + 87) & 1) != 0 )
        {
          v184 = *(_QWORD *)((char *)this + 316);
          *((_QWORD *)DXGGLOBAL::GetGlobal(v179, v178) + 107) = v184;
        }
        if ( (int)DisplayCore < 0 )
          return (unsigned int)DisplayCore;
        if ( v110 <= 1 )
          goto LABEL_383;
        v185 = *((_DWORD *)this + 81);
        if ( v185 == 4318 )
        {
          v186 = DXGGLOBAL::GetGlobal(v179, v178);
          v187 = 7LL;
        }
        else
        {
          if ( v185 != 4098 )
          {
LABEL_383:
            v188 = DXGGLOBAL::GetGlobal(v179, v178);
            DXGGLOBAL::RecordFeatureUsageWddmVersion(v188, this);
            return (unsigned int)DisplayCore;
          }
          v186 = DXGGLOBAL::GetGlobal(v179, v178);
          v187 = 8LL;
        }
        DXGGLOBAL::RecordFeatureUsage(v186, v187, 1LL);
        goto LABEL_383;
      }
      v169 = WdLogNewEntry5_WdError(v168, v167);
      *(_QWORD *)(v169 + 24) = this;
      *(_QWORD *)(v169 + 32) = DisplayCore;
      WdLogEvent5_WdError(v169);
    }
    if ( (int)DisplayCore < 0 )
      goto LABEL_357;
    goto LABEL_350;
  }
  return result;
}
