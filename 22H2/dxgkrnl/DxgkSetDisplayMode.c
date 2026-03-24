/*
 * XREFs of DxgkSetDisplayMode @ 0x1C00E2B70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001E30 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0001F24 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000278C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002F54 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00038D4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A008 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000A41C (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0015390 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025B3C (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025B74 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0025BE4 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z @ 0x1C00E21E4 (-IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C00E22D0 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00E3390 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C00E4A50 (DxgkStatusChangeNotify.c)
 *     ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1C00E59B4 (-DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E63DC (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00EC320 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C0221860 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 *     DpiPollDisplayChildren @ 0x1C02C71CC (DpiPollDisplayChildren.c)
 */

__int64 __fastcall DxgkSetDisplayMode(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v7; // rbx
  unsigned int v8; // r13d
  ULONG64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGDEVICE *v12; // rdi
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGALLOCATION *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // r13d
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v48; // rbx
  __int64 v49; // rdx
  _QWORD *v50; // rbx
  __int64 v51; // rax
  _QWORD *v52; // rax
  _OWORD *v53; // r8
  __int64 v54; // rdx
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  unsigned int v61; // ebx
  _OWORD *v62; // r8
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r8
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  _DWORD *v77; // rdx
  _QWORD *v78; // rax
  __int64 v79; // rax
  void *v80; // rdi
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rax
  struct DXGALLOCATION *v84; // [rsp+40h] [rbp-3D8h] BYREF
  struct DXGDEVICE *v85; // [rsp+48h] [rbp-3D0h] BYREF
  int v86; // [rsp+50h] [rbp-3C8h] BYREF
  __int64 v87; // [rsp+58h] [rbp-3C0h]
  char v88; // [rsp+60h] [rbp-3B8h]
  ULONG64 v89; // [rsp+68h] [rbp-3B0h]
  _QWORD v90[2]; // [rsp+70h] [rbp-3A8h] BYREF
  _BYTE v91[16]; // [rsp+80h] [rbp-398h] BYREF
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v92[4]; // [rsp+90h] [rbp-388h]
  _BYTE v93[12]; // [rsp+A0h] [rbp-378h]
  unsigned int v94; // [rsp+B0h] [rbp-368h]
  unsigned int v95; // [rsp+B4h] [rbp-364h] BYREF
  _BYTE v96[24]; // [rsp+B8h] [rbp-360h] BYREF
  struct _KTHREAD **v97; // [rsp+D0h] [rbp-348h]
  struct DXGDEVICE *v98; // [rsp+D8h] [rbp-340h] BYREF
  _QWORD v99[2]; // [rsp+E0h] [rbp-338h] BYREF
  _OWORD v100[2]; // [rsp+F0h] [rbp-328h] BYREF
  __int64 v101; // [rsp+110h] [rbp-308h]
  int v102; // [rsp+118h] [rbp-300h]
  _OWORD v103[2]; // [rsp+120h] [rbp-2F8h] BYREF
  __int64 v104; // [rsp+140h] [rbp-2D8h]
  int v105; // [rsp+148h] [rbp-2D0h]
  _OWORD v106[2]; // [rsp+150h] [rbp-2C8h] BYREF
  __int64 v107; // [rsp+170h] [rbp-2A8h]
  int v108; // [rsp+178h] [rbp-2A0h]
  _OWORD v109[2]; // [rsp+180h] [rbp-298h] BYREF
  __int64 v110; // [rsp+1A0h] [rbp-278h]
  int v111; // [rsp+1A8h] [rbp-270h]
  _OWORD v112[2]; // [rsp+1B0h] [rbp-268h] BYREF
  __int64 v113; // [rsp+1D0h] [rbp-248h]
  int v114; // [rsp+1D8h] [rbp-240h]
  _OWORD v115[2]; // [rsp+1E0h] [rbp-238h] BYREF
  __int64 v116; // [rsp+200h] [rbp-218h]
  int v117; // [rsp+208h] [rbp-210h]
  _OWORD v118[2]; // [rsp+210h] [rbp-208h] BYREF
  __int64 v119; // [rsp+230h] [rbp-1E8h]
  int v120; // [rsp+238h] [rbp-1E0h]
  _OWORD v121[2]; // [rsp+240h] [rbp-1D8h] BYREF
  __int64 v122; // [rsp+260h] [rbp-1B8h]
  int v123; // [rsp+268h] [rbp-1B0h]
  _OWORD v124[2]; // [rsp+270h] [rbp-1A8h] BYREF
  __int64 v125; // [rsp+290h] [rbp-188h]
  int v126; // [rsp+298h] [rbp-180h]
  _OWORD v127[2]; // [rsp+2A0h] [rbp-178h] BYREF
  __int64 v128; // [rsp+2C0h] [rbp-158h]
  int v129; // [rsp+2C8h] [rbp-150h]
  _OWORD v130[2]; // [rsp+2D0h] [rbp-148h] BYREF
  __int64 v131; // [rsp+2F0h] [rbp-128h]
  int v132; // [rsp+2F8h] [rbp-120h]
  _BYTE v133[160]; // [rsp+300h] [rbp-118h] BYREF
  _QWORD v134[10]; // [rsp+3A0h] [rbp-78h] BYREF

  v89 = a1;
  memset(v134, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v134[1]);
  v134[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v134[3]) = 49;
  LOBYTE(v134[6]) = -1;
  v86 = -1;
  v87 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v88 = 1;
    v86 = 2018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2018);
  }
  else
  {
    v88 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v86, 2018LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v97 = Current;
  if ( !Current )
  {
    v48 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v48 + 24) = -1073741811LL;
    *(_QWORD *)(v48 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v48);
LABEL_98:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86, v49);
    if ( v88 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v70, &EventProfilerExit, v71, v86);
    return 3221225485LL;
  }
  v7 = 0LL;
  v8 = 0;
  v94 = 0;
  v9 = a1;
  if ( a1 >= MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  *(_OWORD *)v92 = *(_OWORD *)v9;
  *(_QWORD *)v93 = *(_QWORD *)(v9 + 16);
  *(_DWORD *)&v93[8] = *(_DWORD *)(v9 + 24);
  v98 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v85, (unsigned int)v92[0], Current, &v98);
  v12 = v98;
  if ( !v98 )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v50[3] = -1073741811LL;
    v50[4] = PsGetCurrentProcess();
    v50[5] = (unsigned int)v92[0];
    WdLogEvent5_WdError(v50);
LABEL_95:
    if ( v85 && _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
    goto LABEL_98;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v90, v98);
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v96, (struct DXGPROCESS *)Current);
  DXGUSERCRIT::Acquire((DXGUSERCRIT *)v96, 1LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v91, Current);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v91);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v133, (__int64)v12, 1, v13, 0);
  LODWORD(v16) = COREDEVICEACCESS::AcquireExclusive((__int64)v133, 2LL);
  if ( (int)v16 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v133);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v91);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v96);
    if ( v90[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v90);
    if ( v85 && _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
    goto LABEL_48;
  }
  v17 = *((_QWORD *)v12 + 231);
  if ( !v17 )
  {
    v51 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v51 + 24) = v12;
    *(_QWORD *)(v51 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v51);
LABEL_64:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v133);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v91);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v96);
    if ( v90[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v90);
    if ( v85 && _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
    goto LABEL_98;
  }
  ++*(_DWORD *)(*(_QWORD *)(v17 + 2696) + 360LL);
  DXGPROCESS::GetAllocationSafe((__int64)v97, (DXGALLOCATIONREFERENCE *)&v84, v92[1]);
  v20 = v84;
  if ( !v84 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v52[3] = -1073741811LL;
    v52[4] = v12;
    v52[5] = (unsigned int)v92[1];
    WdLogEvent5_WdError(v52);
    memset(v100, 0, sizeof(v100));
    v101 = 0LL;
    v102 = 0;
    v53 = v100;
    v54 = 0xFFFFFFFFLL;
LABEL_63:
    DmmCacheDisplayModeChangeRequest(v17, v54, v53);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v84);
    goto LABEL_64;
  }
  v21 = *((_QWORD *)v12 + 2);
  v22 = *(_QWORD *)(v21 + 16);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v84 + 1) + 16LL) + 16LL) != v22 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v21, v22);
    v55[3] = v12;
    v55[4] = v84;
    v55[5] = -1073741811LL;
    WdLogEvent5_WdError(v55);
    memset(v103, 0, sizeof(v103));
    v104 = 0LL;
    v105 = 0;
    v53 = v103;
LABEL_72:
    v54 = (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF;
    goto LABEL_63;
  }
  v23 = *((_QWORD *)v84 + 6);
  v24 = *(unsigned int *)(v23 + 4);
  if ( (v24 & 1) == 0 )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdError(v23, v24);
    v57[3] = -1073741811LL;
    v57[4] = v12;
    v57[5] = (unsigned int)v92[1];
    v57[6] = v84;
    v57[7] = (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdError(v57);
    memset(v106, 0, sizeof(v106));
    v107 = 0LL;
    v108 = 0;
    v53 = v106;
    goto LABEL_72;
  }
  if ( v17 != *((_QWORD *)v12 + 231) )
  {
    v58 = WdLogNewEntry5_WdAssertion(v23, v24);
    *(_QWORD *)(v58 + 24) = 6163LL;
    WdLogEvent5_WdAssertion(v58);
    v20 = v84;
  }
  v25 = (unsigned int)(v92[2] - 1);
  if ( (unsigned int)v25 > 2 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
    v59[3] = -1073741811LL;
    v59[4] = v12;
    v59[5] = v92[2];
    WdLogEvent5_WdError(v59);
    memset(v109, 0, sizeof(v109));
    v110 = 0LL;
    v111 = 0;
    v53 = v109;
    goto LABEL_72;
  }
  v26 = (unsigned int)(v92[3] - 1);
  if ( (unsigned int)v26 > 3 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v26, v24);
    v56[3] = -1073741811LL;
    v56[4] = v12;
    v56[5] = v92[3];
    WdLogEvent5_WdError(v56);
    memset(v112, 0, sizeof(v112));
    v113 = 0LL;
    v114 = 0;
    v53 = v112;
    goto LABEL_72;
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(
          *(DXGADAPTER ***)(v17 + 2696),
          v12,
          (*(_DWORD *)(*((_QWORD *)v20 + 6) + 4LL) >> 6) & 0xF) )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v61 = -1071775744;
    v60[3] = -1071775744LL;
    v60[4] = v12;
    v60[5] = (unsigned int)v92[1];
    v60[6] = v84;
    v60[7] = (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdDmmEvent(v60);
    memset(v115, 0, sizeof(v115));
    v116 = 0LL;
    v117 = 0;
    v62 = v115;
LABEL_77:
    DmmCacheDisplayModeChangeRequest(v17, (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF, v62);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v84);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v133);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v91);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v96);
    if ( v90[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v90);
    if ( v85 && _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86, v64);
    if ( v88 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v65, &EventProfilerExit, v66, v86);
    return v61;
  }
  if ( ((unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                        *(ADAPTER_DISPLAY **)(v17 + 2696),
                        (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF) == 2
     || *((_DWORD *)v12 + 108) == 1)
    && ADAPTER_DISPLAY::GetCddPrimaryAllocation(
         *(ADAPTER_DISPLAY **)(v17 + 2696),
         (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF,
         0) )
  {
    v67 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v61 = -1071774910;
    v67[3] = -1071774910LL;
    v67[4] = v12;
    v67[5] = (unsigned int)v92[1];
    v67[6] = v84;
    v67[7] = (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdDmmEvent(v67);
    memset(v118, 0, sizeof(v118));
    v119 = 0LL;
    v120 = 0;
    v62 = v118;
    goto LABEL_77;
  }
  if ( !ADAPTER_DISPLAY::IsPartOfDesktop(
          *(ADAPTER_DISPLAY **)(v17 + 2696),
          (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF) )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v61 = -1071774972;
    v63[3] = -1071774972LL;
    v63[4] = v12;
    v63[5] = (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF;
    v63[6] = (unsigned int)v92[1];
    v63[7] = v84;
    WdLogEvent5_WdDmmEvent(v63);
    memset(v121, 0, sizeof(v121));
    v122 = 0LL;
    v123 = 0;
    v62 = v121;
    goto LABEL_77;
  }
  if ( *((struct DXGDEVICE **)v84 + 1) != v12 )
  {
    v68 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
    v68[3] = -1073741811LL;
    v68[4] = v12;
    v68[5] = (unsigned int)v92[1];
    v68[6] = v84;
    v68[7] = *((_QWORD *)v84 + 1);
    WdLogEvent5_WdError(v68);
    memset(v124, 0, sizeof(v124));
    v125 = 0LL;
    v126 = 0;
    DmmCacheDisplayModeChangeRequest(v17, (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF, v124);
    DxgCreateLiveDumpWithWdLogs(
      0x193u,
      0x807uLL,
      (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF,
      *((_QWORD *)v84 + 1),
      (unsigned __int64)v12,
      0);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v84);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v133);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v91);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v96);
    if ( v90[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v90);
    if ( v85 && _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
    goto LABEL_98;
  }
  v29 = *((_QWORD *)v84 + 6);
  if ( *((_DWORD *)v12 + 108) == 1 )
  {
    v30 = (*(_DWORD *)(v29 + 4) >> 6) & 0xF;
    CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v17 + 2696), v30, 0);
    if ( CddPrimaryAllocation == *((struct DXGADAPTERALLOCATION **)v84 + 6)
      || (unsigned int)DXGDEVICE::IsAllocationInPrimaryAllocationsList(v12, v30, v84) )
    {
      v32 = DXGDEVICE::PinPrimaryAllocations(v12, v30);
      v16 = v32;
      if ( v32 < 0 )
      {
        v72 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v72[3] = v16;
        v72[4] = v12;
        v72[5] = (unsigned int)v92[1];
        v72[6] = v84;
        v72[7] = v30;
        WdLogEvent5_WdDmmEvent(v72);
      }
      v8 = v94;
      goto LABEL_28;
    }
    v69 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v69[3] = -1073741811LL;
    v69[4] = v12;
    v69[5] = (unsigned int)v92[1];
    v69[6] = v84;
    v69[7] = (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdDmmEvent(v69);
    memset(v127, 0, sizeof(v127));
    v128 = 0LL;
    v129 = 0;
    DmmCacheDisplayModeChangeRequest(v17, (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF, v127);
    DxgCreateLiveDumpWithWdLogs(
      0x193u,
      0x808uLL,
      (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF,
      *((_QWORD *)v84 + 1),
      (unsigned __int64)v12,
      0);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v84);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v133);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v91);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v96);
    if ( v90[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v90);
    goto LABEL_95;
  }
  if ( (*(_DWORD *)(v29 + 4) & 0x10) == 0 )
  {
LABEL_28:
    v33 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v33 + 24) = (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF;
    *(_QWORD *)(v33 + 32) = v17;
    WdLogEvent5_WdDmmEvent(v33);
    if ( (int)v16 >= 0 )
    {
      v95 = 0;
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v35, v34) + 304320) )
        v93[4] |= 1u;
      v36 = DXGDEVICE::SetDisplayMode(
              v12,
              v84,
              v92[2],
              (enum _D3DDDI_ROTATION)v92[3],
              *(struct _D3DKMT_SETDISPLAYMODE_FLAGS *)&v93[4],
              &v95,
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v134);
      LODWORD(v16) = v36;
      if ( v36 == -1071774891 )
      {
        v77 = (_DWORD *)(v89 + 16);
        if ( v89 + 16 >= MmUserProbeAddress )
          v77 = (_DWORD *)MmUserProbeAddress;
        *v77 = v95;
      }
      else if ( v36 >= 0 )
      {
        v37 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(
                *(ADAPTER_DISPLAY **)(v17 + 2696),
                (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF);
        v40 = v37;
        if ( v37 < 0 )
        {
          v78 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38);
          v78[3] = v17;
          v78[4] = (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF;
          v78[5] = v40;
          WdLogEvent5_WdError(v78);
        }
        v99[0] = 7LL;
        v99[1] = 0LL;
        if ( (int)DxgkStatusChangeNotify(v99) < 0 )
        {
          v79 = WdLogNewEntry5_WdAssertion(v42, v41);
          *(_QWORD *)(v79 + 24) = 6366LL;
          WdLogEvent5_WdAssertion(v79);
        }
        v7 = *(_QWORD *)(v17 + 316);
        v8 = (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF;
      }
    }
    if ( (_DWORD)v16 == -1071774920 )
    {
      v80 = *(void **)(v17 + 216);
      ObfReferenceObject(v80);
      v81 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v81 + 24) = v80;
      WdLogEvent5_WdDmmEvent(v81);
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v133, v82);
      DpiPollDisplayChildren(v80, 4LL, v134);
      ObfDereferenceObject(v80);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v84);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v133);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v91);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v96);
    if ( v90[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v90);
    if ( v85 && _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
    if ( (int)v16 >= 0 && (*((int (__fastcall **)(__int64, _QWORD))v97[11] + 51))(v7, v8) < 0 )
    {
      v83 = WdLogNewEntry5_WdAssertion(v44, v43);
      *(_QWORD *)(v83 + 24) = 6399LL;
      WdLogEvent5_WdAssertion(v83);
    }
LABEL_48:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86, v43);
    if ( v88 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v45, &EventProfilerExit, v46, v86);
    }
    return (unsigned int)v16;
  }
  v73 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
  v73[3] = -1071775482LL;
  v73[4] = v12;
  v73[5] = (unsigned int)v92[1];
  v73[6] = v84;
  v73[7] = (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF;
  WdLogEvent5_WdDmmEvent(v73);
  memset(v130, 0, sizeof(v130));
  v131 = 0LL;
  v132 = 0;
  DmmCacheDisplayModeChangeRequest(v17, (*(_DWORD *)(*((_QWORD *)v84 + 6) + 4LL) >> 6) & 0xF, v130);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v84);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v133);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v91);
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v96);
  if ( v90[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v90);
  if ( v85 && _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86, v74);
  if ( v88 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v75, &EventProfilerExit, v76, v86);
  return 3223191814LL;
}
