/*
 * XREFs of DxgkGetSharedPrimaryHandle @ 0x1C0223E60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001E30 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0001F24 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000202C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000278C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0005010 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008A7C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000A39C (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000A3B8 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A478 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A4B4 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000B9F0 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A09C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A448 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A6D4 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0025B64 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DEF50 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00E43CC (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E5C14 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C02132D8 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02142C8 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkGetSharedPrimaryHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  ULONG64 v7; // rax
  struct _KTHREAD **Current; // rax
  __int64 v9; // rdx
  DXGPROCESS *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGADAPTER *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int PairingAdapters; // esi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGADAPTER *v25; // rdi
  __int64 v26; // rax
  char v27; // si
  int v28; // r12d
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  int VidPnSourceOwnerType; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  DXGSESSIONMGR *v46; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rsi
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r12
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  unsigned int *v62; // r12
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rsi
  __int64 v67; // rax
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rsi
  _QWORD *v85; // rax
  int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rsi
  _QWORD *v90; // rax
  int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rsi
  _DWORD *v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  _BYTE v98[8]; // [rsp+40h] [rbp-268h] BYREF
  int v99; // [rsp+48h] [rbp-260h] BYREF
  __int64 v100; // [rsp+50h] [rbp-258h]
  char v101; // [rsp+58h] [rbp-250h]
  unsigned int v102[2]; // [rsp+60h] [rbp-248h]
  int CddPrimaryShareResourceHandle; // [rsp+68h] [rbp-240h]
  struct DXGDEVICE *v104; // [rsp+70h] [rbp-238h] BYREF
  struct DXGCONTEXT *v105; // [rsp+78h] [rbp-230h] BYREF
  _BYTE v106[8]; // [rsp+80h] [rbp-228h] BYREF
  struct DXGADAPTER *v107; // [rsp+88h] [rbp-220h]
  char v108; // [rsp+90h] [rbp-218h]
  _BYTE v109[16]; // [rsp+98h] [rbp-210h] BYREF
  DXGADAPTER *v110; // [rsp+A8h] [rbp-200h] BYREF
  struct DXGADAPTER *v111; // [rsp+B8h] [rbp-1F0h] BYREF
  struct DXGADAPTER *v112; // [rsp+C0h] [rbp-1E8h] BYREF
  unsigned int v113; // [rsp+C8h] [rbp-1E0h] BYREF
  unsigned int v114; // [rsp+CCh] [rbp-1DCh] BYREF
  unsigned __int64 v115; // [rsp+D0h] [rbp-1D8h] BYREF
  _QWORD v116[7]; // [rsp+D8h] [rbp-1D0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp-198h] BYREF
  char v118; // [rsp+140h] [rbp-168h]
  _BYTE v119[160]; // [rsp+150h] [rbp-158h] BYREF
  _BYTE v120[144]; // [rsp+1F0h] [rbp-B8h] BYREF

  v99 = -1;
  v100 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v101 = 1;
    v99 = 2021;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2021);
  }
  else
  {
    v101 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v99, 2021LL);
  v7 = a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  *(_QWORD *)v102 = *(_QWORD *)v7;
  CddPrimaryShareResourceHandle = *(_DWORD *)(v7 + 8);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress, v4, v5, v6);
  v10 = (DXGPROCESS *)Current;
  if ( !Current )
    goto LABEL_32;
  v111 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v110, v102[0], Current, &v111, 1);
  v14 = v111;
  if ( !v111 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = v102[0];
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
    if ( !v110 )
      goto LABEL_32;
    goto LABEL_31;
  }
  v112 = 0LL;
  v16 = v102[1];
  PairingAdapters = DxgkpGetPairingAdapters(v111, v102[1], 0LL, 0LL, &v112, &v115, 0);
  if ( PairingAdapters < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v20 + 24) = v14;
    *(_QWORD *)(v20 + 32) = v16;
    WdLogEvent5_WdError(v20);
    if ( v110 )
      DXGADAPTER::ReleaseReference(v110);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v99, v21);
    if ( v101 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v99);
    return (unsigned int)PairingAdapters;
  }
  v25 = v112;
  if ( !v112 || !*((_QWORD *)v112 + 337) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v26 + 24) = 5104LL;
    WdLogEvent5_WdAssertion(v26);
  }
  v27 = 0;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v120, v25, 0LL);
  v28 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v120, 0LL);
  if ( v28 < 0 )
  {
    DXGADAPTER::ReleaseReference(v25);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v120, v29);
    if ( v110 )
      DXGADAPTER::ReleaseReference(v110);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v99, v30);
    if ( v101 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v99);
    return (unsigned int)v28;
  }
  v33 = *((_QWORD *)v25 + 337);
  if ( (unsigned int)v16 >= *(_DWORD *)(v33 + 80) )
  {
    DXGADAPTER::ReleaseReference(v25);
    v36 = WdLogNewEntry5_WdError(v35, v34);
    *(_QWORD *)(v36 + 24) = v16;
    *(_QWORD *)(v36 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v36);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v120, v37);
    if ( !v110 )
    {
LABEL_32:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v99, v9);
      if ( v101 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v99);
      }
      return 3221225485LL;
    }
LABEL_31:
    DXGADAPTER::ReleaseReference(v110);
    goto LABEL_32;
  }
  CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                    (DXGADAPTER **)v33,
                                    (unsigned int)v16);
  if ( !CddPrimaryShareResourceHandle && !DXGPROCESS::IsRemoteConnection(v10) )
  {
    if ( ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v25 + 337), v16) )
    {
      if ( DXGADAPTER::UsingSetTimingsFromVidPn(v25) )
      {
        VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((ADAPTER_DISPLAY **)v25 + 337), v16);
        if ( !VidPnSourceOwnerType || VidPnSourceOwnerType == 3 )
          v27 = 1;
      }
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v120, v40);
  v104 = 0LL;
  v105 = 0LL;
  if ( v27 )
  {
    v46 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v43, v42) + 102);
    if ( v46 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v45, v44);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v46, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v49 = WdLogNewEntry5_WdError(v45, v44);
      *(_QWORD *)(v49 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v51, v50);
      *(_QWORD *)(v49 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v49);
      goto LABEL_80;
    }
    DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v98);
    v52 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v98, 0);
    v55 = v52;
    if ( v52 < 0 )
    {
      v56 = WdLogNewEntry5_WdError(v54, v53);
      *(_QWORD *)(v56 + 24) = v55;
      WdLogEvent5_WdError(v56);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v98);
      goto LABEL_80;
    }
    if ( DXGPROCESS::IsRemoteConnection(v10) )
    {
      v59 = WdLogNewEntry5_WdError(v58, v57);
      *(_QWORD *)(v59 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v61, v60);
      *(_QWORD *)(v59 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v59);
LABEL_79:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v98);
      goto LABEL_80;
    }
    v118 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2329));
    v62 = (unsigned int *)((char *)v25 + 316);
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)((char *)v25 + 316),
                                             &v104,
                                             &v105,
                                             0LL,
                                             0);
    v66 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v67 = WdLogNewEntry5_WdError(v65, v64);
      *(_QWORD *)(v67 + 24) = v25;
      *(_QWORD *)(v67 + 32) = v66;
      WdLogEvent5_WdError(v67);
LABEL_77:
      if ( v118 )
      {
        KeUnstackDetachProcess(&ApcState);
        v118 = 0;
      }
      goto LABEL_79;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v109, v104);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v116,
      &v105,
      1u);
    v107 = v25;
    v108 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v106);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v119, (__int64)v104, 1, v68, 0);
    if ( !v116[0] )
    {
      v73 = WdLogNewEntry5_WdLowResource(v70, v69, v71, v72);
      *(_QWORD *)(v73 + 24) = 5237LL;
      WdLogEvent5_WdLowResource(v73);
      goto LABEL_74;
    }
    v74 = COREDEVICEACCESS::AcquireExclusive((__int64)v119, 1LL);
    v77 = v74;
    if ( v74 < 0 )
    {
      v78 = WdLogNewEntry5_WdError(v76, v75);
      *(_QWORD *)(v78 + 24) = v104;
      *(_QWORD *)(v78 + 32) = v77;
      WdLogEvent5_WdError(v78);
      goto LABEL_74;
    }
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v25 + 337), v16) || DXGPROCESS::IsRemoteConnection(v10) )
    {
      v85 = (_QWORD *)WdLogNewEntry5_WdError(v80, v79);
      v85[3] = v16;
      v85[4] = *((int *)v25 + 80);
      v85[5] = *v62;
    }
    else
    {
      v81 = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((ADAPTER_DISPLAY **)v25 + 337), v16);
      v84 = v81;
      if ( !v81 || v81 == 3 )
      {
        CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                          *((DXGADAPTER ***)v25 + 337),
                                          (unsigned int)v16);
        if ( !CddPrimaryShareResourceHandle )
        {
          v86 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
                  *((DXGADAPTER ***)v25 + 337),
                  v104,
                  v16,
                  &v114,
                  &v113,
                  (struct COREDEVICEACCESS *)v119);
          v89 = v86;
          if ( v86 >= 0 )
          {
            CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                              *((DXGADAPTER ***)v25 + 337),
                                              (unsigned int)v16);
            if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*((ADAPTER_DISPLAY **)v25 + 337), (unsigned int)v16) )
              goto LABEL_74;
            if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(*((ADAPTER_DISPLAY **)v25 + 337), (unsigned int)v16) )
              goto LABEL_74;
            v91 = ADAPTER_DISPLAY::PresentCddPrimary(
                    *((ADAPTER_DISPLAY **)v25 + 337),
                    v105,
                    v16,
                    (struct COREDEVICEACCESS *)v119);
            v94 = v91;
            if ( v91 >= 0 )
              goto LABEL_74;
            v90 = (_QWORD *)WdLogNewEntry5_WdError(v93, v92);
            v90[3] = v16;
            v90[4] = v25;
            v90[5] = v94;
          }
          else
          {
            v90 = (_QWORD *)WdLogNewEntry5_WdError(v88, v87);
            v90[3] = v25;
            v90[4] = v89;
          }
          WdLogEvent5_WdError(v90);
        }
LABEL_74:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
        if ( v108 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v106);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v116);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v109);
        goto LABEL_77;
      }
      v85 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
      v85[3] = v84;
      v85[4] = v16;
      v85[5] = *((int *)v25 + 80);
      v85[6] = *v62;
    }
    WdLogEvent5_WdError(v85);
    CddPrimaryShareResourceHandle = 0;
    goto LABEL_74;
  }
LABEL_80:
  DXGADAPTER::ReleaseReference(v25);
  if ( v105 )
    DXGCONTEXT::ReleaseReference(v105);
  if ( v104 && _InterlockedExchangeAdd64((volatile signed __int64 *)v104 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v104 + 2), v104);
  v95 = (_DWORD *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v95 = (_DWORD *)MmUserProbeAddress;
  *v95 = CddPrimaryShareResourceHandle;
  if ( v110 )
    DXGADAPTER::ReleaseReference(v110);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v99, (__int64)v95);
  if ( v101 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v96, &EventProfilerExit, v97, v99);
  return 0LL;
}
