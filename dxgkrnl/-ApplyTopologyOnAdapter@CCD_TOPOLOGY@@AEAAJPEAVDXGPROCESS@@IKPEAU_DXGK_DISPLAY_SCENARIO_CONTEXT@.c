/*
 * XREFs of ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016A260
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BB60C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPN__@@P6AJPEAXPEAU1@@ZPEAX@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPN__@@Q6AJPEAX0@Z1@Z @ 0x1C0001BD0 (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPN__@@P6AJPEAXPEAU1@@ZPEAX@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPN__@.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C0001DAC (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?SetCurrentVirtualMode@ADAPTER_DISPLAY@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0002104 (-SetCurrentVirtualMode@ADAPTER_DISPLAY@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___ @ 0x1C00021A8 (DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C00035C8 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0003DD8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0003E44 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0009084 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x1C0009308 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C000945C (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00095E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00096AC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0166DF0 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01676B0 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C0167B60 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0168044 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     MonitorSetLastWireformatAndColorspace @ 0x1C0168AEC (MonitorSetLastWireformatAndColorspace.c)
 *     DxgkQueryDmmInterface @ 0x1C016A964 (DxgkQueryDmmInterface.c)
 *     ?DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z @ 0x1C016AB50 (-DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C016D30C (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C017597C (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C01787D0 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0179A9C (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C01C5CF0 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01DD228 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01DD7C0 (-ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0351EE0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C03B6EBC (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyOnAdapter(
        CCD_TOPOLOGY *this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        unsigned int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v6; // rax
  volatile signed __int64 *v8; // rdi
  const struct _LUID *v9; // rbx
  struct _LUID *v10; // r12
  PERESOURCE ***v11; // r14
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v13; // r9
  int DmmInterface; // eax
  ADAPTER_DISPLAY *v15; // rcx
  int v16; // r15d
  unsigned int i; // edi
  __int64 v18; // r9
  struct DXGADAPTER *v19; // r15
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned int v22; // r14d
  int PathModalityForAdapterWithCoreAccessHeld; // eax
  unsigned int v24; // r8d
  __int64 v25; // r14
  DWORD LowPart; // edx
  LONG HighPart; // ecx
  ADAPTER_DISPLAY **v28; // r12
  __int64 v29; // r14
  ADAPTER_DISPLAY *v30; // r8
  int v31; // r15d
  unsigned int v32; // ebx
  int *v33; // r11
  __int64 v35; // r12
  __int64 v36; // rdi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v38; // rcx
  __m128i v39; // xmm1
  __int64 v40; // xmm0_8
  UINT v41; // eax
  ADAPTER_DISPLAY **v42; // r10
  int v43; // eax
  DWORD v44; // eax
  unsigned __int8 v45; // cf
  DWORD v46; // eax
  struct DXGGLOBAL *Global; // rax
  int v48; // r8d
  ADAPTER_DISPLAY **v49; // rcx
  unsigned int v50; // edx
  __int64 v51; // r10
  __int64 v52; // r9
  PERESOURCE *v53; // r8
  unsigned __int64 v54; // xmm1_8
  __int64 v55; // r12
  int v56; // eax
  int v57; // r8d
  struct D3DKMT_VIDPN_SOURCE_MASKS *v58; // r10
  _DWORD *v59; // r10
  unsigned int *v60; // rdx
  int *v61; // r11
  unsigned int v62; // [rsp+40h] [rbp-C0h] BYREF
  char v63; // [rsp+48h] [rbp-B8h]
  int v64; // [rsp+4Ch] [rbp-B4h] BYREF
  _BYTE v65[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v66; // [rsp+54h] [rbp-ACh] BYREF
  DXGDEVICE *v67; // [rsp+58h] [rbp-A8h]
  char v68[8]; // [rsp+60h] [rbp-A0h] BYREF
  char v69; // [rsp+68h] [rbp-98h]
  ADAPTER_DISPLAY **v70; // [rsp+70h] [rbp-90h]
  struct DXGADAPTER *v71[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v72; // [rsp+88h] [rbp-78h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v73; // [rsp+90h] [rbp-70h]
  char v74[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v75; // [rsp+A0h] [rbp-60h]
  void (__fastcall *v76)(__int64, __int64); // [rsp+A8h] [rbp-58h]
  __int64 v77; // [rsp+B0h] [rbp-50h]
  int v78; // [rsp+B8h] [rbp-48h]
  __int128 v79; // [rsp+C0h] [rbp-40h] BYREF
  _D3DKMT_DISPLAYMODE v80; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v81[16]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v82; // [rsp+110h] [rbp+10h] BYREF
  CCD_TOPOLOGY *v83; // [rsp+120h] [rbp+20h]
  unsigned int *v84; // [rsp+128h] [rbp+28h]
  int *v85; // [rsp+130h] [rbp+30h] BYREF
  struct D3DKMT_VIDPN_SOURCE_MASKS *v86; // [rsp+138h] [rbp+38h]
  CCD_TOPOLOGY *v87; // [rsp+140h] [rbp+40h]
  unsigned int *v88; // [rsp+148h] [rbp+48h]
  char v89; // [rsp+150h] [rbp+50h]
  char v90[8]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v91[64]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v92[88]; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v93[144]; // [rsp+200h] [rbp+100h] BYREF

  v73 = a5;
  v6 = *((_QWORD *)this + 8);
  v62 = a4;
  v8 = 0LL;
  v64 = 0;
  v65[0] = 0;
  v9 = (const struct _LUID *)(*(_QWORD *)(v6 + 48) + 340LL * a4);
  *(_QWORD *)&v82 = &v64;
  v83 = this;
  v66 = a3;
  v10 = (struct _LUID *)&v9[10];
  v67 = 0LL;
  *((_QWORD *)&v82 + 1) = v9 + 10;
  v71[0] = 0LL;
  v84 = &v62;
  DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297_((__int64)&v85, &v82);
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v71, v9);
  v11 = (PERESOURCE ***)v71[0];
  if ( !v71[0] )
  {
    v64 = -1073741811;
    WdLogSingleEntry4(
      2LL,
      0LL,
      *(int *)(340LL * v62 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
      *(unsigned int *)(340LL * v62 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
      -1073741811LL);
    goto LABEL_39;
  }
  v63 = *(_BYTE *)(*((_QWORD *)v71[0] + 365) + 288LL);
  if ( v63 )
  {
    *(_BYTE *)(340LL * v62 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 76) = 1;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v93, (struct DXGADAPTER *const)v11, 0LL);
    v64 = COREADAPTERACCESS::AcquireExclusive((__int64)v93, (unsigned int)(v57 + 1));
    if ( v64 >= 0 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner((ADAPTER_DISPLAY *)v11[365]) )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(v11[365], 0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v93);
  }
  while ( 1 )
  {
    if ( v8 )
    {
      DxgkDestroyCddDeviceAndContextForCurrentSession(
        (struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v62),
        (struct DXGDEVICE *)v8);
      if ( _InterlockedExchangeAdd64(v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
      v67 = 0LL;
    }
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v62),
                                             v63);
    v64 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      WdLogSingleEntry3(
        2LL,
        *(int *)(340LL * v62 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
        *(unsigned int *)(340LL * v62 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
        CddDeviceAndContextForCurrentSession);
      goto LABEL_39;
    }
    v8 = (volatile signed __int64 *)v67;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v81, v67);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v68, (struct DXGPROCESS *)((char *)a2 + 376), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v68);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v90, (__int64)v8, 1, v13, 0);
    v64 = COREDEVICEACCESS::AcquireExclusive((__int64)v90, 2LL);
    if ( !DXGDEVICE::IsExecutionStateErrorState((DXGDEVICE *)v8) )
      break;
    COREACCESS::~COREACCESS((COREACCESS *)v92);
    COREACCESS::~COREACCESS((COREACCESS *)v91);
    if ( v69 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v68);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v81);
  }
  if ( v64 < 0 )
  {
    WdLogSingleEntry4(
      2LL,
      *(int *)(340LL * v62 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
      *(unsigned int *)(340LL * v62 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
      *((_QWORD *)this + 8),
      v64);
  }
  else
  {
    v72 = 0LL;
    DmmInterface = DxgkQueryDmmInterface(v71[0]);
    v64 = DmmInterface;
    if ( DmmInterface < 0 )
    {
      WdLogSingleEntry3(
        2LL,
        *(int *)(340LL * v62 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
        *(unsigned int *)(340LL * v62 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
        DmmInterface);
    }
    else
    {
      v15 = (ADAPTER_DISPLAY *)v11[365];
      v16 = 1;
      for ( i = 0; i < *((_DWORD *)v15 + 24); v16 *= 2 )
      {
        if ( (v16 & v10->LowPart) != 0 )
        {
          v56 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(v15, i);
          v64 = v56;
          if ( v56 < 0 )
            WdLogSingleEntry4(
              2LL,
              i,
              *(int *)(340LL * v62 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
              *(unsigned int *)(340LL * v62 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
              v56);
          ADAPTER_DISPLAY::SetCurrentVirtualMode((ADAPTER_DISPLAY *)v11[365], i, 0LL);
          ADAPTER_DISPLAY::ProcessModeChange((ADAPTER_DISPLAY *)v11[365], i);
        }
        if ( (v16 & v9[10].HighPart) != 0 )
        {
          v51 = *((_QWORD *)this + 8);
          v52 = 500LL * i;
          v53 = v11[365][16];
          v79 = *(_OWORD *)&v53[v52 + 86];
          v54 = v79;
          v55 = 296LL * *(unsigned int *)(*(_QWORD *)(v51 + 48) + 4 * (i + 85LL * v62) + 8);
          *(_OWORD *)&v53[v52 + 86] = *(_OWORD *)(v51 + v55 + 224);
          if ( __PAIR128__(*((unsigned __int64 *)&v79 + 1), v54) != *(_OWORD *)(v55 + *((_QWORD *)this + 8) + 224) )
            v9[15].HighPart |= v16;
          *(_DWORD *)(v55 + *((_QWORD *)this + 8) + 244) = ADAPTER_DISPLAY::GetDisplayId((ADAPTER_DISPLAY *)v11[365], i);
          v10 = (struct _LUID *)&v9[10];
        }
        v15 = (ADAPTER_DISPLAY *)v11[365];
        ++i;
      }
      v18 = *((unsigned int *)this + 20);
      v19 = v71[0];
      v20 = *((_DWORD *)this + 19) & 1;
      v21 = *((_QWORD *)this + 8);
      v22 = v66;
      v75 = 0LL;
      v76 = 0LL;
      v77 = 0LL;
      v78 = 0;
      v74[0] = 0;
      *(_QWORD *)&v79 = 0LL;
      PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                   v21,
                                                   v71[0],
                                                   v20,
                                                   v18,
                                                   v66,
                                                   &v79);
      v64 = PathModalityForAdapterWithCoreAccessHeld;
      if ( PathModalityForAdapterWithCoreAccessHeld < 0 )
      {
        WdLogSingleEntry4(
          2LL,
          *((_QWORD *)this + 8),
          *(int *)(340LL * v62 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
          *(unsigned int *)(340LL * v62 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
          PathModalityForAdapterWithCoreAccessHeld);
        COREACCESS::~COREACCESS((COREACCESS *)v92);
        COREACCESS::~COREACCESS((COREACCESS *)v91);
        if ( v69 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v68);
        v8 = (volatile signed __int64 *)v67;
        goto LABEL_36;
      }
      DXGDMM::AutoRelease<D3DKMDT_HVIDPN__ *,long (*)(void *,D3DKMDT_HVIDPN__ *),void *>::Own(
        (__int64)v74,
        v79,
        *(_QWORD *)(v72 + 64),
        (__int64)v19);
      v8 = (volatile signed __int64 *)v67;
      v24 = v22;
      v25 = v75;
      v64 = DmmSetTimingsOnAdapter((__int64)v19, v75, v24, 1u, v10, (__int64)v65, (__int64)v67, (__int64)v90);
      DisplayScenarioJournalSetCommitVidPnStatus(
        340LL * v62 + 8 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL),
        *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v62 + 168);
      if ( v64 < 0 )
      {
        WdLogSingleEntry5(
          2LL,
          v25,
          *((_QWORD *)this + 8),
          *(int *)(340LL * v62 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
          *(unsigned int *)(340LL * v62 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
          v64);
        if ( v74[0] )
          v76(v77, v25);
      }
      else
      {
        if ( v74[0] )
          v76(v77, v25);
        if ( (v9[11].LowPart & v9[11].HighPart) != 0 )
          WdLogSingleEntry0(1LL);
        LowPart = v9[11].LowPart;
        if ( (LowPart | v9[15].LowPart) != LowPart || (LowPart & v9[15].LowPart) != v9[15].LowPart )
          WdLogSingleEntry0(1LL);
        if ( v9[11].LowPart != (v9[11].LowPart & (v9[10].HighPart | v10->LowPart)) )
          WdLogSingleEntry0(1LL);
        HighPart = v9[11].HighPart;
        if ( HighPart != (HighPart & v10->LowPart) || (HighPart & v9[10].HighPart) != 0 )
          WdLogSingleEntry0(1LL);
        WdLogSingleEntry5(
          7LL,
          *(int *)(340LL * v62 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
          *(unsigned int *)(340LL * v62 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
          v9[11].LowPart,
          v9[15].LowPart,
          (unsigned int)v9[11].HighPart);
        v28 = (ADAPTER_DISPLAY **)((char *)v19 + 2920);
        v29 = 0LL;
        v30 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 365);
        v70 = (ADAPTER_DISPLAY **)((char *)v19 + 2920);
        if ( *((_DWORD *)v30 + 24) )
        {
          do
          {
            v31 = 1 << v29;
            if ( ((1 << v29) & v9[20].HighPart) != 0 )
            {
              v9[11].HighPart |= v31 & v9[10].LowPart;
              CCD_TOPOLOGY::MarkPathsApplyFailure(
                this,
                (const struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v62),
                v29,
                *(&v9[21].LowPart + v29));
            }
            else if ( (v31 & v9[10].HighPart) != 0 )
            {
              v35 = *((_QWORD *)this + 8);
              v36 = 296LL * *(unsigned int *)(*(_QWORD *)(v35 + 48) + 4 * ((unsigned int)v29 + 85LL * v62) + 8);
              DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(v30, v29);
              v38 = *((_QWORD *)this + 8);
              v39 = *((__m128i *)DisplayModeInfo + 1);
              *(_OWORD *)&v80.Width = *(_OWORD *)DisplayModeInfo;
              v40 = *((_QWORD *)DisplayModeInfo + 4);
              *((_DWORD *)&v80.Flags + 1) = *((_DWORD *)DisplayModeInfo + 10);
              *(__m128i *)&v80.RefreshRate.Numerator = v39;
              *(_QWORD *)&v80.DisplayFixedOutput = v40;
              if ( ((_mm_srli_si128(v39, 8).m128i_i32[1] - 2) & 0xFFFFFFFD) != 0 )
              {
                v80.Width = *(_DWORD *)(v36 + v38 + 208);
                v41 = *(_DWORD *)(v36 + v38 + 212);
              }
              else
              {
                v80.Width = *(_DWORD *)(v36 + v38 + 212);
                v41 = *(_DWORD *)(v36 + v38 + 208);
              }
              v80.Height = v41;
              ADAPTER_DISPLAY::SetCurrentVirtualMode(*v70, v29, &v80);
              v43 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(*v42, v29);
              if ( v43 < 0 )
                WdLogSingleEntry4(
                  7LL,
                  (unsigned int)v29,
                  *(int *)(340LL * v62 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 4),
                  *(unsigned int *)(340LL * v62 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
                  v43);
              if ( v63
                || (v44 = v9[15].LowPart,
                    v45 = _bittest((const int *)&v44, v29),
                    v46 = v9[11].LowPart,
                    (!v45 & _bittest((const int *)&v46, v29)) != 0) )
              {
                Global = DXGGLOBAL::GetGlobal();
                do
                  v48 = _InterlockedIncrement((volatile signed __int32 *)Global + 344);
                while ( !v48 );
                v49 = v70;
                *(_DWORD *)(v35 + v36 + 244) = v48;
                ADAPTER_DISPLAY::SetDisplayId(*v49, v29, v48);
              }
              if ( (v31 & v9[18].HighPart) != 0 )
                *(_QWORD *)(v35 + v36 + 252) = 0LL;
              v50 = *(_DWORD *)(v35 + v36 + 84);
              v66 = 0;
              if ( DmmGetTargetLinkTrainingStatus(v71[0], v50, (enum _DXGK_CONNECTION_STATUS *)&v66) >= 0 && v66 == 12 )
                *(_DWORD *)(v35 + v36 + 248) = 259;
              MonitorSetLastWireformatAndColorspace(
                (__int64)v71[0],
                *(_DWORD *)(v35 + v36 + 84),
                *(_DWORD *)(v35 + v36 + 260),
                *(_DWORD *)(v35 + v36 + 264));
              v28 = v70;
            }
            if ( ((v9[17].HighPart | v9[20].HighPart) & v31) != 0 )
              ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(*v28, v29);
            v30 = *v28;
            v29 = (unsigned int)(v29 + 1);
          }
          while ( (unsigned int)v29 < *((_DWORD *)*v28 + 24) );
          v8 = (volatile signed __int64 *)v67;
          v19 = v71[0];
        }
        if ( v63 )
          *((_BYTE *)v30 + 288) = 0;
        DmmHandleSetTimingsResult((ADAPTER_DISPLAY **)v19, (struct _DMM_SET_TIMING_RESULT *)v65, v73);
        v64 = 0;
      }
    }
  }
  COREACCESS::~COREACCESS((COREACCESS *)v92);
  COREACCESS::~COREACCESS((COREACCESS *)v91);
  if ( v69 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v68);
LABEL_36:
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v81);
  if ( v8 && _InterlockedExchangeAdd64(v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
LABEL_39:
  v32 = v64;
  if ( v89 )
  {
    v33 = v85;
    if ( *v85 < 0 )
    {
      v58 = v86;
      *((_DWORD *)v86 + 21) = *(_DWORD *)v86 | *((_DWORD *)v86 + 1);
      FillFailedStatus(v58, *v33);
      v60 = v88;
      v59[3] = *v59;
      CCD_TOPOLOGY::MarkPathsApplyFailure(
        v87,
        (const struct _LUID *)(*(_QWORD *)(*((_QWORD *)v87 + 8) + 48LL) + 340LL * *v60),
        0xFFFFFFFF,
        *v61);
    }
  }
  DXGADAPTER_REFERENCE::Assign(v71, 0LL);
  return v32;
}
