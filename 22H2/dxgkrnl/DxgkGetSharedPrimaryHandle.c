/*
 * XREFs of DxgkGetSharedPrimaryHandle @ 0x1C02D1FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001064 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000138C (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0002AE8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C00049B8 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C00052E0 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000538C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0007158 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007174 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000778C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0007850 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0007998 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0008248 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00151DC (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C001651C (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024B68 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0024BAC (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0024EB4 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C0167DE0 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C016A398 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C0172110 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0188608 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01C71F0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C02BD294 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 */

__int64 __fastcall DxgkGetSharedPrimaryHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v4; // rax
  struct _KTHREAD **Current; // rax
  DXGPROCESS *v6; // r13
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // sf
  struct DXGADAPTER *v10; // rsi
  __int64 v11; // rdi
  int PairingAdapters; // r14d
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGADAPTER *v16; // rsi
  ADAPTER_DISPLAY *v17; // rcx
  int VidPnSourceOwnerType; // eax
  volatile signed __int64 *v19; // r14
  DXGSESSIONMGR *SessionDataForSpecifiedSession; // rax
  __int64 v21; // rcx
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // eax
  int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rcx
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v32; // rbx
  __int64 v33; // r9
  __int64 v34; // r9
  const wchar_t *v35; // r9
  int v36; // edx
  int v37; // eax
  struct COREDEVICEACCESS *v38; // rbx
  int v39; // eax
  __int64 v40; // rbx
  __int64 v41; // rdi
  int v42; // eax
  struct COREDEVICEACCESS *v43; // rbx
  int v44; // eax
  __int64 v45; // rbx
  _DWORD *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // [rsp+20h] [rbp-2A8h]
  __int64 v50; // [rsp+20h] [rbp-2A8h]
  struct COREDEVICEACCESS *v51; // [rsp+28h] [rbp-2A0h]
  __int64 v52; // [rsp+30h] [rbp-298h]
  char v53[8]; // [rsp+50h] [rbp-278h] BYREF
  int v54; // [rsp+58h] [rbp-270h] BYREF
  __int64 v55; // [rsp+60h] [rbp-268h]
  char v56; // [rsp+68h] [rbp-260h]
  unsigned int v57[2]; // [rsp+70h] [rbp-258h]
  int CddPrimaryShareResourceHandle; // [rsp+78h] [rbp-250h]
  DXGSESSIONMGR *v59; // [rsp+80h] [rbp-248h] BYREF
  struct DXGDEVICE *v60; // [rsp+88h] [rbp-240h] BYREF
  struct DXGCONTEXT *v61; // [rsp+90h] [rbp-238h] BYREF
  _BYTE v62[8]; // [rsp+98h] [rbp-230h] BYREF
  struct DXGADAPTER *v63; // [rsp+A0h] [rbp-228h]
  char v64; // [rsp+A8h] [rbp-220h]
  _BYTE v65[16]; // [rsp+B0h] [rbp-218h] BYREF
  DXGADAPTER *v66; // [rsp+C0h] [rbp-208h] BYREF
  struct DXGADAPTER *v67; // [rsp+D0h] [rbp-1F8h] BYREF
  struct DXGADAPTER *v68; // [rsp+D8h] [rbp-1F0h] BYREF
  unsigned int v69; // [rsp+E0h] [rbp-1E8h] BYREF
  ULONG64 v70; // [rsp+E8h] [rbp-1E0h]
  unsigned __int64 v71; // [rsp+F0h] [rbp-1D8h] BYREF
  _QWORD v72[7]; // [rsp+F8h] [rbp-1D0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+130h] [rbp-198h] BYREF
  char v74; // [rsp+160h] [rbp-168h]
  _BYTE v75[160]; // [rsp+170h] [rbp-158h] BYREF
  _BYTE v76[144]; // [rsp+210h] [rbp-B8h] BYREF

  v70 = a1;
  v54 = -1;
  v55 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v56 = 1;
    v54 = 2021;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2021);
  }
  else
  {
    v56 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v54, 2021);
  v4 = a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_QWORD *)v57 = *(_QWORD *)v4;
  CddPrimaryShareResourceHandle = *(_DWORD *)(v4 + 8);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress);
  v6 = (DXGPROCESS *)Current;
  if ( !Current )
    goto LABEL_8;
  v67 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v66, v57[0], Current, &v67, 1);
  v10 = v67;
  if ( !v67 )
  {
    WdLogSingleEntry2(3LL, v57[0], -1073741811LL);
    if ( v66 )
      DXGADAPTER::ReleaseReference(v66);
LABEL_8:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
    if ( !v56 )
      return 3221225485LL;
    v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_34:
    if ( v9 )
      McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v54);
    return 3221225485LL;
  }
  v68 = 0LL;
  v11 = v57[1];
  PairingAdapters = DxgkpGetPairingAdapters(v67, v57[1], 0LL, 0LL, &v68, &v71, 0);
  if ( PairingAdapters >= 0 )
  {
    v16 = v68;
    if ( !v68 || !*((_QWORD *)v68 + 365) )
    {
      WdLogSingleEntry1(1LL, 5384LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pDisplayAdapter != NULL) && pDisplayAdapter->IsDisplayAdapter()",
        5384LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v53[0] = 0;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v76, v16, 0LL);
    PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v76, 0LL);
    if ( PairingAdapters < 0 )
    {
      DXGADAPTER::ReleaseReference(v16);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v76);
      if ( v66 )
        DXGADAPTER::ReleaseReference(v66);
      goto LABEL_18;
    }
    v17 = (ADAPTER_DISPLAY *)*((_QWORD *)v16 + 365);
    if ( (unsigned int)v11 >= *((_DWORD *)v17 + 24) )
    {
      DXGADAPTER::ReleaseReference(v16);
      WdLogSingleEntry2(2LL, v11, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
        v11,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v76);
      if ( v66 )
        DXGADAPTER::ReleaseReference(v66);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
      if ( !v56 )
        return 3221225485LL;
      LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_34;
    }
    CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(v17, v11);
    if ( !CddPrimaryShareResourceHandle && !DXGPROCESS::IsRemoteConnection(v6) )
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v16 + 365), v11) )
      {
        if ( DXGADAPTER::UsingSetTimingsFromVidPn(v16) )
        {
          VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((ADAPTER_DISPLAY **)v16 + 365), v11);
          if ( !VidPnSourceOwnerType || (v53[0] = 0, VidPnSourceOwnerType == 3) )
            v53[0] = 1;
        }
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v76);
    v19 = 0LL;
    v60 = 0LL;
    v61 = 0LL;
    if ( !v53[0] )
    {
LABEL_83:
      DXGADAPTER::ReleaseReference(v16);
      if ( v61 )
        DXGCONTEXT::ReleaseReference(v61);
      if ( v19 && _InterlockedExchangeAdd64(v19 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v60 + 2), v60);
      goto LABEL_88;
    }
    SessionDataForSpecifiedSession = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    v59 = SessionDataForSpecifiedSession;
    if ( SessionDataForSpecifiedSession )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v21);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v59, CurrentProcessSessionId);
    }
    v59 = SessionDataForSpecifiedSession;
    if ( !SessionDataForSpecifiedSession )
    {
      v23 = PsGetCurrentProcessSessionId(v21);
      WdLogSingleEntry2(2LL, v23, -1073741811LL);
      v25 = PsGetCurrentProcessSessionId(v24);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
        v25,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_83;
    }
    DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v53);
    v26 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v53, 0);
    if ( v26 < 0 )
    {
      v27 = v26;
      WdLogSingleEntry1(2LL, v26);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
        v27,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_51:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v53);
      goto LABEL_83;
    }
    if ( DXGPROCESS::IsRemoteConnection(v6) )
    {
      v29 = PsGetCurrentProcessSessionId(v28);
      WdLogSingleEntry2(2LL, v29, -1073741811LL);
      v49 = (unsigned int)PsGetCurrentProcessSessionId(v30);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Current session 0x%I64x has just been switched to remote session , returning 0x%I64x.",
        v49,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_51;
    }
    v74 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)v59 + 2331));
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)((char *)v16 + 404),
                                             &v60,
                                             &v61,
                                             0LL,
                                             0);
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v32 = CddDeviceAndContextForCurrentSession;
      WdLogSingleEntry2(2LL, v16, CddDeviceAndContextForCurrentSession);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get CDD device and context on adapter 0x%I64x for current session (Status = 0x%I64x).",
        (__int64)v16,
        v32,
        0LL,
        0LL,
        0LL);
      if ( !v74 )
      {
        v19 = (volatile signed __int64 *)v60;
        goto LABEL_51;
      }
      KeUnstackDetachProcess(&ApcState);
      v19 = (volatile signed __int64 *)v60;
LABEL_82:
      v74 = 0;
      goto LABEL_51;
    }
    v19 = (volatile signed __int64 *)v60;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v65, v60);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v72,
      &v61,
      1u,
      v33,
      1);
    v63 = v16;
    v64 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v75, (__int64)v19, 1, v34, 0);
    if ( !v72[0] )
    {
      WdLogSingleEntry1(6LL, 5517LL);
      v52 = 0LL;
      v51 = 0LL;
      v50 = 5517LL;
      v35 = L"Out of memory - could not initialize context array lock exclusive.";
      v36 = 262145;
LABEL_60:
      DxgkLogInternalTriageEvent(0LL, v36, -1, (__int64)v35, v50, (__int64)v51, v52, 0LL, 0LL);
LABEL_78:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v75);
      if ( v64 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v72);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v65);
      if ( !v74 )
        goto LABEL_51;
      KeUnstackDetachProcess(&ApcState);
      goto LABEL_82;
    }
    v37 = COREDEVICEACCESS::AcquireExclusive((__int64)v75, 1LL);
    if ( v37 < 0 )
    {
      v38 = (struct COREDEVICEACCESS *)v37;
      WdLogSingleEntry2(2LL, v19, v37);
      v52 = 0LL;
      v51 = v38;
      v50 = (__int64)v19;
      v35 = L"Failed to acquire device core access shared on device 0x%I64x (Status = 0x%I64x).";
LABEL_63:
      v36 = 0x40000;
      goto LABEL_60;
    }
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v16 + 365), v11) || DXGPROCESS::IsRemoteConnection(v6) )
    {
      WdLogSingleEntry3(2LL, v11, *((int *)v16 + 102), *((unsigned int *)v16 + 101));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Getting Shared Primary Handle on not used VidPn source 0x%I64x on adapter 0x%I64x%08I64x in current session.",
        v11,
        *((int *)v16 + 102),
        *((unsigned int *)v16 + 101),
        0LL,
        0LL);
    }
    else
    {
      v39 = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((ADAPTER_DISPLAY **)v16 + 365), v11);
      if ( !v39 || v39 == 3 )
      {
        CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                          *((ADAPTER_DISPLAY **)v16 + 365),
                                          v11);
        if ( CddPrimaryShareResourceHandle )
          goto LABEL_78;
        v42 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
                *((ADAPTER_DISPLAY **)v16 + 365),
                (struct DXGDEVICE *)v19,
                v11,
                (unsigned int *)&v59,
                &v69,
                (struct COREDEVICEACCESS *)v75);
        if ( v42 >= 0 )
        {
          CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                            *((ADAPTER_DISPLAY **)v16 + 365),
                                            v11);
          if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*((ADAPTER_DISPLAY **)v16 + 365), v11) )
            goto LABEL_78;
          if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(*((ADAPTER_DISPLAY **)v16 + 365), v11) )
            goto LABEL_78;
          v44 = ADAPTER_DISPLAY::PresentCddPrimary(
                  *((PERESOURCE ***)v16 + 365),
                  v61,
                  v11,
                  (struct COREDEVICEACCESS *)v75);
          if ( v44 >= 0 )
            goto LABEL_78;
          v45 = v44;
          WdLogSingleEntry3(2LL, v11, v16, v44);
          v52 = v45;
          v51 = v16;
          v50 = v11;
          v35 = L"PresentFromCdd failed to present the existing Cdd Primary on VidPn source 0x%I64x on adapter 0x%I64x (St"
                 "atus = 0x%I64x).";
        }
        else
        {
          v43 = (struct COREDEVICEACCESS *)v42;
          WdLogSingleEntry2(2LL, v16, v42);
          v52 = 0LL;
          v51 = v43;
          v50 = (__int64)v16;
          v35 = L"Failed to delay create CDD primary on adapter 0x%I64x (Status = 0x%I64x).";
        }
        goto LABEL_63;
      }
      v40 = v11;
      v41 = v39;
      WdLogSingleEntry4(2LL, v39, v40, *((int *)v16 + 102), *((unsigned int *)v16 + 101));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Ownership has been changed to 0x%I64x on VidPn source 0x%I64x on adapter 0x%I64x%08I64x.",
        v41,
        v40,
        *((int *)v16 + 102),
        *((unsigned int *)v16 + 101),
        0LL);
    }
    CddPrimaryShareResourceHandle = 0;
    goto LABEL_78;
  }
  WdLogSingleEntry2(2LL, v10, (unsigned int)v11);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x!",
    (__int64)v10,
    v11,
    0LL,
    0LL,
    0LL);
  if ( *((_BYTE *)v10 + 209) )
  {
    CddPrimaryShareResourceHandle = 0;
LABEL_88:
    v46 = (_DWORD *)(v70 + 8);
    if ( v70 + 8 >= MmUserProbeAddress )
      v46 = (_DWORD *)MmUserProbeAddress;
    *v46 = CddPrimaryShareResourceHandle;
    if ( v66 )
      DXGADAPTER::ReleaseReference(v66);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
    if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v47, &EventProfilerExit, v48, v54);
    return 0LL;
  }
  if ( v66 )
    DXGADAPTER::ReleaseReference(v66);
LABEL_18:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
  if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v54);
  return (unsigned int)PairingAdapters;
}
