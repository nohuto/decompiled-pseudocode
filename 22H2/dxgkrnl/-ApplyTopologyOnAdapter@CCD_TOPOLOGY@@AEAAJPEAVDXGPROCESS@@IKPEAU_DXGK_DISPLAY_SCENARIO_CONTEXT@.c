/*
 * XREFs of ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EBB74
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013B690 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C0002760 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000278C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00027F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0002B08 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0002B70 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008A7C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000A33C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A09C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001AFFC (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C00DFEB4 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E0464 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00E43CC (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E5FF8 (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E6FD8 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z @ 0x1C00EBA08 (-DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EC1CC (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     MonitorSetLastWireformatAndColorspace @ 0x1C00EC238 (MonitorSetLastWireformatAndColorspace.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00EC320 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00EC704 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 *     DxgkQueryDmmInterface @ 0x1C00EC7C8 (DxgkQueryDmmInterface.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C00EC83C (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0168BA0 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C016B7EC (-ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C02A04F8 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C02EB4FC (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyOnAdapter(
        CCD_TOPOLOGY *this,
        struct DXGFASTMUTEX *const *a2,
        int a3,
        unsigned int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v7; // r14
  volatile signed __int64 *v8; // r15
  __int64 v9; // rax
  struct _LUID *v10; // rax
  struct D3DKMT_VIDPN_SOURCE_MASKS *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGADAPTER *v14; // r13
  char v15; // si
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  int DmmInterface; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  ADAPTER_DISPLAY *v26; // rcx
  unsigned int v27; // esi
  int i; // r15d
  __int64 v29; // r9
  __int64 v30; // r8
  unsigned int v31; // r12d
  __int64 v32; // rcx
  int PathModalityForAdapterWithCoreAccessHeld; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // r8d
  __int64 v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // r8
  __int64 v46; // rsi
  int v47; // r12d
  __int64 v48; // rdx
  __int64 v50; // r15
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned int v53; // eax
  unsigned __int8 v54; // cf
  unsigned int v55; // eax
  __int64 v56; // rax
  unsigned int v57; // edx
  bool v58; // sf
  __int64 v59; // rax
  __int64 v60; // r9
  __int64 v61; // r8
  __int64 v62; // r10
  __int128 v63; // xmm1
  __int64 v64; // r12
  __int64 v65; // rcx
  __int64 v66; // r8
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r12
  struct DXGGLOBAL *Global; // rax
  int v72; // r8d
  _QWORD *v73; // rax
  struct DXGADAPTER *v74; // rdx
  int v75; // r8d
  __int64 v76; // rdx
  __int64 v77; // rdx
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  _QWORD *v86; // rax
  char v87; // [rsp+40h] [rbp-C0h]
  _BYTE v88[7]; // [rsp+41h] [rbp-BFh] BYREF
  DXGDEVICE *v89; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v90; // [rsp+50h] [rbp-B0h]
  int v91; // [rsp+58h] [rbp-A8h]
  int v92; // [rsp+5Ch] [rbp-A4h] BYREF
  struct DXGADAPTER *v93[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v94; // [rsp+70h] [rbp-90h]
  __int64 v95; // [rsp+78h] [rbp-88h] BYREF
  __int64 v96; // [rsp+80h] [rbp-80h]
  _BYTE v97[8]; // [rsp+88h] [rbp-78h] BYREF
  char v98; // [rsp+90h] [rbp-70h]
  _BYTE v99[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v100; // [rsp+A0h] [rbp-60h]
  void (__fastcall *v101)(__int64, __int64); // [rsp+A8h] [rbp-58h]
  __int64 v102; // [rsp+B0h] [rbp-50h]
  int v103; // [rsp+B8h] [rbp-48h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v104; // [rsp+C0h] [rbp-40h]
  __int128 v105; // [rsp+C8h] [rbp-38h]
  _BYTE v106[24]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v107[8]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v108[64]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v109[88]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v110[144]; // [rsp+190h] [rbp+90h] BYREF

  v104 = a5;
  v7 = 336LL * a4;
  v96 = a4;
  v8 = 0LL;
  v9 = *((_QWORD *)this + 8);
  v91 = a3;
  v89 = 0LL;
  v93[0] = 0LL;
  v10 = (struct _LUID *)(v7 + *(_QWORD *)(v9 + 40));
  v88[0] = 0;
  v90 = (__int64)v10;
  v11 = (struct D3DKMT_VIDPN_SOURCE_MASKS *)&v10[10];
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v93, v10);
  v14 = v93[0];
  if ( v93[0] )
  {
    v15 = *(_BYTE *)(*((_QWORD *)v93[0] + 337) + 248LL);
    v87 = v15;
    if ( v15 )
    {
      v74 = v93[0];
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 76) = 1;
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v110, v74, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v110, (unsigned int)(v75 + 1)) >= 0
        && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*((DXGADAPTER ***)v14 + 337)) )
      {
        ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(*((PERESOURCE ***)v14 + 337), 0LL);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110, v76);
    }
    while ( 1 )
    {
      if ( v8 )
      {
        DxgkDestroyCddDeviceAndContextForCurrentSession(
          (struct _LUID *)(v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
          (struct DXGDEVICE *)v8);
        if ( _InterlockedExchangeAdd64(v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v89 + 2), v89);
        v89 = 0LL;
      }
      CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                               (struct _LUID *)(v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                                               &v89,
                                               0LL,
                                               0LL,
                                               v15);
      v19 = CddDeviceAndContextForCurrentSession;
      if ( CddDeviceAndContextForCurrentSession < 0 )
      {
        v73 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
        v73[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
        v73[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
        v73[5] = v19;
        goto LABEL_84;
      }
      v8 = (volatile signed __int64 *)v89;
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v106, v89);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v97, a2[42], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v97);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v107, (__int64)v8, 1, v20, 0);
      v19 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v107, 2LL);
      if ( !DXGDEVICE::IsExecutionStateErrorState((DXGDEVICE *)v8) )
        break;
      COREACCESS::~COREACCESS((COREACCESS *)v109);
      COREACCESS::~COREACCESS((COREACCESS *)v108);
      if ( v98 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v97, v77);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v106);
      v15 = v87;
    }
    if ( (int)v19 < 0 )
    {
      v78 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
      v78[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
      v78[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
      v78[5] = *((_QWORD *)this + 8);
      v78[6] = v19;
    }
    else
    {
      v94 = 0LL;
      DmmInterface = DxgkQueryDmmInterface(v93[0]);
      v19 = DmmInterface;
      if ( DmmInterface >= 0 )
      {
        v26 = (ADAPTER_DISPLAY *)*((_QWORD *)v14 + 337);
        v27 = 0;
        for ( i = 1; v27 < *((_DWORD *)v26 + 20); i *= 2 )
        {
          if ( (i & *(_DWORD *)v11) != 0 )
          {
            v67 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(v26, v27);
            v70 = v67;
            if ( v67 < 0 )
            {
              v79 = (_QWORD *)WdLogNewEntry5_WdError(v69, v68);
              v79[3] = v27;
              v79[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
              v79[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
              v79[6] = v70;
              WdLogEvent5_WdError(v79);
            }
            ADAPTER_DISPLAY::ProcessModeChange(*((ADAPTER_DISPLAY **)v14 + 337), v27);
          }
          if ( (i & *((_DWORD *)v11 + 1)) != 0 )
          {
            v60 = *((_QWORD *)this + 8);
            v61 = *(_QWORD *)(*((_QWORD *)v14 + 337) + 112LL);
            v62 = 3968LL * v27;
            v63 = *(_OWORD *)(v61 + v62 + 652);
            v64 = 272LL * *(unsigned int *)(*(_QWORD *)(v60 + 40) + 4 * (v27 + 84 * v96) + 8);
            v65 = *(_QWORD *)(v61 + v62 + 652);
            *(_OWORD *)(v61 + v62 + 652) = *(_OWORD *)(v60 + v64 + 216);
            v66 = *((_QWORD *)this + 8);
            v105 = v63;
            if ( (_DWORD)v65 != *(_DWORD *)(v64 + v66 + 216)
              || __PAIR64__(DWORD2(v105), HIDWORD(v65)) != *(_QWORD *)(v64 + v66 + 220)
              || HIDWORD(v105) != *(_DWORD *)(v64 + v66 + 228) )
            {
              *((_DWORD *)v11 + 11) |= i;
              v66 = *((_QWORD *)this + 8);
            }
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 337) + 112LL) + v62 + 644) = *(_QWORD *)(v64 + v66 + 200);
            *(_DWORD *)(v64 + *((_QWORD *)this + 8) + 236) = ADAPTER_DISPLAY::GetDisplayId(
                                                               *((ADAPTER_DISPLAY **)v14 + 337),
                                                               v27);
          }
          v26 = (ADAPTER_DISPLAY *)*((_QWORD *)v14 + 337);
          ++v27;
        }
        v29 = *((unsigned int *)this + 20);
        v30 = *((_DWORD *)this + 19) & 1;
        v31 = v91;
        v100 = 0LL;
        v101 = 0LL;
        v102 = 0LL;
        v103 = 0;
        v95 = 0LL;
        v32 = *((_QWORD *)this + 8);
        v99[0] = 0;
        PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                     v32,
                                                     v93[0],
                                                     v30,
                                                     v29,
                                                     v91,
                                                     &v95);
        v19 = PathModalityForAdapterWithCoreAccessHeld;
        if ( PathModalityForAdapterWithCoreAccessHeld < 0 )
        {
          v80 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
          v80[3] = *((_QWORD *)this + 8);
          v80[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
          v80[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
          v80[6] = v19;
          WdLogEvent5_WdError(v80);
          v8 = (volatile signed __int64 *)v89;
        }
        else
        {
          DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
            (__int64)v99,
            v95,
            *(_QWORD *)(v94 + 64),
            (__int64)v93[0]);
          v8 = (volatile signed __int64 *)v89;
          v36 = v31;
          v37 = v100;
          v19 = (int)DmmSetTimingsOnAdapter(
                       (__int64)v93[0],
                       v100,
                       v36,
                       1u,
                       v11,
                       (__int64)v88,
                       (__int64)v89,
                       (__int64)v107);
          DisplayScenarioJournalSetCommitVidPnStatus(
            v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 8LL,
            *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 164);
          if ( (int)v19 < 0 )
          {
            v81 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38);
            v81[3] = v37;
            v81[4] = *((_QWORD *)this + 8);
            v81[5] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
            v81[6] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
            v81[7] = v19;
            WdLogEvent5_WdError(v81);
            if ( v99[0] )
              v101(v102, v37);
          }
          else
          {
            if ( v99[0] )
              v101(v102, v37);
            v40 = *((unsigned int *)v11 + 2);
            if ( ((unsigned int)v40 & *((_DWORD *)v11 + 3)) != 0 )
            {
              v82 = WdLogNewEntry5_WdAssertion(v40, v38);
              WdLogEvent5_WdAssertion(v82);
              v40 = *((unsigned int *)v11 + 2);
            }
            v41 = *((unsigned int *)v11 + 10);
            if ( ((unsigned int)v40 | *((_DWORD *)v11 + 10)) != (_DWORD)v40
              || ((unsigned int)v40 & (unsigned int)v41) != (_DWORD)v41 )
            {
              v83 = WdLogNewEntry5_WdAssertion(v40, v41);
              WdLogEvent5_WdAssertion(v83);
              v40 = *(unsigned int *)(v90 + 88);
            }
            v42 = *(unsigned int *)v11;
            if ( (_DWORD)v40 != ((unsigned int)v40 & ((unsigned int)v42 | *((_DWORD *)v11 + 1))) )
            {
              v84 = WdLogNewEntry5_WdAssertion(v40, v42);
              WdLogEvent5_WdAssertion(v84);
              v42 = *(unsigned int *)v11;
            }
            v43 = *((unsigned int *)v11 + 3);
            if ( (_DWORD)v43 != ((unsigned int)v42 & *((_DWORD *)v11 + 3))
              || ((unsigned int)v43 & *((_DWORD *)v11 + 1)) != 0 )
            {
              v85 = WdLogNewEntry5_WdAssertion(v43, v42);
              WdLogEvent5_WdAssertion(v85);
            }
            v44 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
            v44[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
            v44[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
            v44[5] = *((unsigned int *)v11 + 2);
            v44[6] = *((unsigned int *)v11 + 10);
            v44[7] = *((unsigned int *)v11 + 3);
            WdLogEvent5_WdDmmEvent(v44);
            v45 = *((_QWORD *)v14 + 337);
            v46 = 0LL;
            if ( *(_DWORD *)(v45 + 80) )
            {
              do
              {
                v47 = 1 << v46;
                if ( ((1 << v46) & *((_DWORD *)v11 + 20)) != 0 )
                {
                  *((_DWORD *)v11 + 3) |= v47 & *(_DWORD *)v11;
                  CCD_TOPOLOGY::MarkPathsApplyFailure(
                    this,
                    (const struct _LUID *)(v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                    v46,
                    *((_DWORD *)v11 + v46 + 21));
                }
                else if ( (v47 & *((_DWORD *)v11 + 1)) != 0 )
                {
                  v50 = *((_QWORD *)this + 8);
                  v90 = 272LL * *(unsigned int *)(*(_QWORD *)(v50 + 40) + 4 * ((unsigned int)v46 + 84 * v96) + 8);
                  v91 = ADAPTER_DISPLAY::SetCopyProtectionWithLock((ADAPTER_DISPLAY *)v45, v46);
                  if ( v91 < 0 )
                  {
                    v86 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
                    v86[3] = (unsigned int)v46;
                    v86[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
                    v86[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
                    v86[6] = v91;
                    WdLogEvent5_WdDmmEvent(v86);
                  }
                  if ( v87
                    || (v53 = *((_DWORD *)v11 + 10),
                        v54 = _bittest((const int *)&v53, v46),
                        v55 = *((_DWORD *)v11 + 2),
                        LOBYTE(v52) = !v54,
                        (!v54 & _bittest((const int *)&v55, v46)) != 0) )
                  {
                    Global = DXGGLOBAL::GetGlobal(v52, v51);
                    do
                      v72 = _InterlockedIncrement((volatile signed __int32 *)Global + 316);
                    while ( !v72 );
                    *(_DWORD *)(v90 + v50 + 236) = v72;
                    ADAPTER_DISPLAY::SetDisplayId(*((ADAPTER_DISPLAY **)v14 + 337), (unsigned int)v46, v72);
                  }
                  v56 = v90;
                  if ( (v47 & *((_DWORD *)v11 + 16)) != 0 )
                    *(_QWORD *)(v90 + v50 + 244) = 0LL;
                  v57 = *(_DWORD *)(v56 + v50 + 76);
                  v92 = 0;
                  v58 = (int)DmmGetTargetLinkTrainingStatus(
                               (PERESOURCE *)v93[0],
                               v57,
                               (enum _DXGK_CONNECTION_STATUS *)&v92) < 0;
                  v59 = v90;
                  if ( !v58 && v92 == 12 )
                    *(_DWORD *)(v90 + v50 + 240) = 259;
                  MonitorSetLastWireformatAndColorspace(
                    v93[0],
                    *(unsigned int *)(v59 + v50 + 76),
                    *(unsigned int *)(v59 + v50 + 252),
                    *(unsigned int *)(v59 + v50 + 256));
                }
                if ( ((*((_DWORD *)v11 + 14) | *((_DWORD *)v11 + 20)) & v47) != 0 )
                  ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(*((PERESOURCE ***)v14 + 337), v46);
                v45 = *((_QWORD *)v14 + 337);
                v46 = (unsigned int)(v46 + 1);
              }
              while ( (unsigned int)v46 < *(_DWORD *)(v45 + 80) );
              v8 = (volatile signed __int64 *)v89;
            }
            if ( v87 )
              *(_BYTE *)(v45 + 248) = 0;
            DmmHandleSetTimingsResult(v93[0], (struct _DMM_SET_TIMING_RESULT *)v88, v104);
            LODWORD(v19) = 0;
          }
        }
        goto LABEL_34;
      }
      v78 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
      v78[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
      v78[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
      v78[5] = v19;
    }
    WdLogEvent5_WdError(v78);
LABEL_34:
    if ( (int)v19 < 0 )
    {
      *((_DWORD *)v11 + 20) = *(_DWORD *)v11 | *((_DWORD *)v11 + 1);
      FillFailedStatus(v11, v19);
      *((_DWORD *)v11 + 3) = *(_DWORD *)v11;
      CCD_TOPOLOGY::MarkPathsApplyFailure(
        this,
        (const struct _LUID *)(v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
        0xFFFFFFFF,
        v19);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v109);
    COREACCESS::~COREACCESS((COREACCESS *)v108);
    if ( v98 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v97, v48);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v106);
    if ( v8 && _InterlockedExchangeAdd64(v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v89 + 2), v89);
    goto LABEL_41;
  }
  v73 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
  v73[3] = 0LL;
  LODWORD(v19) = -1073741811;
  v73[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
  v73[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
  v73[6] = -1073741811LL;
LABEL_84:
  WdLogEvent5_WdError(v73);
LABEL_41:
  DXGADAPTER_REFERENCE::Assign(v93, 0LL);
  return (unsigned int)v19;
}
