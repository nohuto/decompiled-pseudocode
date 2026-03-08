/*
 * XREFs of DxgkGetSharedPrimaryHandle @ 0x1C02CD270
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001064 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000138C (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C00035F4 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0003DD8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000469C (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00046DC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006DA4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0009274 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0009408 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0009440 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00095E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00096AC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0009F04 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000B044 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00250DC (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C00252A8 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C0162810 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C0164DD8 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C0176CA0 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C01787D0 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C02B8374 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
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
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // eax
  int v32; // eax
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v44; // rbx
  __int64 v45; // r9
  __int64 v46; // r9
  const wchar_t *v47; // r9
  int v48; // edx
  int v49; // eax
  struct COREDEVICEACCESS *v50; // rbx
  int v51; // eax
  __int64 v52; // rbx
  __int64 v53; // rdi
  int v54; // eax
  struct COREDEVICEACCESS *v55; // rbx
  int v56; // eax
  __int64 v57; // rbx
  _DWORD *v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // [rsp+20h] [rbp-2A8h]
  __int64 v62; // [rsp+20h] [rbp-2A8h]
  struct COREDEVICEACCESS *v63; // [rsp+28h] [rbp-2A0h]
  __int64 v64; // [rsp+30h] [rbp-298h]
  char v65[8]; // [rsp+50h] [rbp-278h] BYREF
  int v66; // [rsp+58h] [rbp-270h] BYREF
  __int64 v67; // [rsp+60h] [rbp-268h]
  char v68; // [rsp+68h] [rbp-260h]
  unsigned int v69[2]; // [rsp+70h] [rbp-258h]
  int CddPrimaryShareResourceHandle; // [rsp+78h] [rbp-250h]
  DXGSESSIONMGR *v71; // [rsp+80h] [rbp-248h] BYREF
  struct DXGDEVICE *v72; // [rsp+88h] [rbp-240h] BYREF
  DXGCONTEXT *v73; // [rsp+90h] [rbp-238h] BYREF
  _BYTE v74[8]; // [rsp+98h] [rbp-230h] BYREF
  struct DXGADAPTER *v75; // [rsp+A0h] [rbp-228h]
  char v76; // [rsp+A8h] [rbp-220h]
  _BYTE v77[16]; // [rsp+B0h] [rbp-218h] BYREF
  DXGADAPTER *v78; // [rsp+C0h] [rbp-208h] BYREF
  struct DXGADAPTER *v79; // [rsp+D0h] [rbp-1F8h] BYREF
  struct DXGADAPTER *v80; // [rsp+D8h] [rbp-1F0h] BYREF
  unsigned int v81; // [rsp+E0h] [rbp-1E8h] BYREF
  ULONG64 v82; // [rsp+E8h] [rbp-1E0h]
  unsigned __int64 v83; // [rsp+F0h] [rbp-1D8h] BYREF
  _QWORD v84[7]; // [rsp+F8h] [rbp-1D0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+130h] [rbp-198h] BYREF
  char v86; // [rsp+160h] [rbp-168h]
  _BYTE v87[160]; // [rsp+170h] [rbp-158h] BYREF
  _BYTE v88[144]; // [rsp+210h] [rbp-B8h] BYREF

  v82 = a1;
  v66 = -1;
  v67 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v68 = 1;
    v66 = 2021;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2021);
  }
  else
  {
    v68 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v66, 2021);
  v4 = a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_QWORD *)v69 = *(_QWORD *)v4;
  CddPrimaryShareResourceHandle = *(_DWORD *)(v4 + 8);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress);
  v6 = (DXGPROCESS *)Current;
  if ( !Current )
    goto LABEL_8;
  v79 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v78, v69[0], Current, &v79, 1);
  v10 = v79;
  if ( !v79 )
  {
    WdLogSingleEntry2(3LL, v69[0], -1073741811LL);
    if ( v78 )
      DXGADAPTER::ReleaseReference(v78);
LABEL_8:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66);
    if ( !v68 )
      return 3221225485LL;
    v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_34:
    if ( v9 )
      McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v66);
    return 3221225485LL;
  }
  v80 = 0LL;
  v11 = v69[1];
  PairingAdapters = DxgkpGetPairingAdapters(v79, v69[1], 0LL, 0LL, &v80, &v83, 0);
  if ( PairingAdapters >= 0 )
  {
    v16 = v80;
    if ( !v80 || !*((_QWORD *)v80 + 365) )
    {
      WdLogSingleEntry1(1LL, 5381LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pDisplayAdapter != NULL) && pDisplayAdapter->IsDisplayAdapter()",
        5381LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v65[0] = 0;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v88, v16, 0LL);
    PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v88, 0LL);
    if ( PairingAdapters < 0 )
    {
      DXGADAPTER::ReleaseReference(v16);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v88);
      if ( v78 )
        DXGADAPTER::ReleaseReference(v78);
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
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v88);
      if ( v78 )
        DXGADAPTER::ReleaseReference(v78);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66);
      if ( !v68 )
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
          if ( !VidPnSourceOwnerType || (v65[0] = 0, VidPnSourceOwnerType == 3) )
            v65[0] = 1;
        }
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v88);
    v19 = 0LL;
    v72 = 0LL;
    v73 = 0LL;
    if ( !v65[0] )
    {
LABEL_83:
      DXGADAPTER::ReleaseReference(v16);
      if ( v73 )
        DXGCONTEXT::ReleaseReference(v73);
      if ( v19 && _InterlockedExchangeAdd64(v19 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v72 + 2), v72);
      goto LABEL_88;
    }
    SessionDataForSpecifiedSession = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    v71 = SessionDataForSpecifiedSession;
    if ( SessionDataForSpecifiedSession )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v22, v21, v23, v24);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v71, CurrentProcessSessionId);
    }
    v71 = SessionDataForSpecifiedSession;
    if ( !SessionDataForSpecifiedSession )
    {
      v26 = PsGetCurrentProcessSessionId(v22, v21, v23, v24);
      WdLogSingleEntry2(2LL, v26, -1073741811LL);
      v31 = PsGetCurrentProcessSessionId(v28, v27, v29, v30);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
        v31,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_83;
    }
    DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v65);
    v32 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v65, 0);
    if ( v32 < 0 )
    {
      v33 = v32;
      WdLogSingleEntry1(2LL, v32);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
        v33,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_51:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v65);
      goto LABEL_83;
    }
    if ( DXGPROCESS::IsRemoteConnection(v6) )
    {
      v38 = PsGetCurrentProcessSessionId(v35, v34, v36, v37);
      WdLogSingleEntry2(2LL, v38, -1073741811LL);
      v61 = (unsigned int)PsGetCurrentProcessSessionId(v40, v39, v41, v42);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Current session 0x%I64x has just been switched to remote session , returning 0x%I64x.",
        v61,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_51;
    }
    v86 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)v71 + 2331));
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)((char *)v16 + 404),
                                             &v72,
                                             &v73,
                                             0LL,
                                             0);
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v44 = CddDeviceAndContextForCurrentSession;
      WdLogSingleEntry2(2LL, v16, CddDeviceAndContextForCurrentSession);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get CDD device and context on adapter 0x%I64x for current session (Status = 0x%I64x).",
        (__int64)v16,
        v44,
        0LL,
        0LL,
        0LL);
      if ( !v86 )
      {
        v19 = (volatile signed __int64 *)v72;
        goto LABEL_51;
      }
      KeUnstackDetachProcess(&ApcState);
      v19 = (volatile signed __int64 *)v72;
LABEL_82:
      v86 = 0;
      goto LABEL_51;
    }
    v19 = (volatile signed __int64 *)v72;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v77, v72);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v84,
      &v73,
      1u,
      v45,
      1);
    v75 = v16;
    v76 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v87, (__int64)v19, 1, v46, 0);
    if ( !v84[0] )
    {
      WdLogSingleEntry1(6LL, 5514LL);
      v64 = 0LL;
      v63 = 0LL;
      v62 = 5514LL;
      v47 = L"Out of memory - could not initialize context array lock exclusive.";
      v48 = 262145;
LABEL_60:
      DxgkLogInternalTriageEvent(0LL, v48, -1, (__int64)v47, v62, (__int64)v63, v64, 0LL, 0LL);
LABEL_78:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v87);
      if ( v76 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v84);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v77);
      if ( !v86 )
        goto LABEL_51;
      KeUnstackDetachProcess(&ApcState);
      goto LABEL_82;
    }
    v49 = COREDEVICEACCESS::AcquireExclusive((__int64)v87, 1LL);
    if ( v49 < 0 )
    {
      v50 = (struct COREDEVICEACCESS *)v49;
      WdLogSingleEntry2(2LL, v19, v49);
      v64 = 0LL;
      v63 = v50;
      v62 = (__int64)v19;
      v47 = L"Failed to acquire device core access shared on device 0x%I64x (Status = 0x%I64x).";
LABEL_63:
      v48 = 0x40000;
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
      v51 = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((ADAPTER_DISPLAY **)v16 + 365), v11);
      if ( !v51 || v51 == 3 )
      {
        CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                          *((ADAPTER_DISPLAY **)v16 + 365),
                                          v11);
        if ( CddPrimaryShareResourceHandle )
          goto LABEL_78;
        v54 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
                *((ADAPTER_DISPLAY **)v16 + 365),
                (struct DXGDEVICE *)v19,
                v11,
                (unsigned int *)&v71,
                &v81,
                (struct COREDEVICEACCESS *)v87);
        if ( v54 >= 0 )
        {
          CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                            *((ADAPTER_DISPLAY **)v16 + 365),
                                            v11);
          if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*((ADAPTER_DISPLAY **)v16 + 365), v11) )
            goto LABEL_78;
          if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(*((ADAPTER_DISPLAY **)v16 + 365), v11) )
            goto LABEL_78;
          v56 = ADAPTER_DISPLAY::PresentCddPrimary(
                  *((PERESOURCE ***)v16 + 365),
                  v73,
                  v11,
                  (struct COREDEVICEACCESS *)v87);
          if ( v56 >= 0 )
            goto LABEL_78;
          v57 = v56;
          WdLogSingleEntry3(2LL, v11, v16, v56);
          v64 = v57;
          v63 = v16;
          v62 = v11;
          v47 = L"PresentFromCdd failed to present the existing Cdd Primary on VidPn source 0x%I64x on adapter 0x%I64x (St"
                 "atus = 0x%I64x).";
        }
        else
        {
          v55 = (struct COREDEVICEACCESS *)v54;
          WdLogSingleEntry2(2LL, v16, v54);
          v64 = 0LL;
          v63 = v55;
          v62 = (__int64)v16;
          v47 = L"Failed to delay create CDD primary on adapter 0x%I64x (Status = 0x%I64x).";
        }
        goto LABEL_63;
      }
      v52 = v11;
      v53 = v51;
      WdLogSingleEntry4(2LL, v51, v52, *((int *)v16 + 102), *((unsigned int *)v16 + 101));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Ownership has been changed to 0x%I64x on VidPn source 0x%I64x on adapter 0x%I64x%08I64x.",
        v53,
        v52,
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
    v58 = (_DWORD *)(v82 + 8);
    if ( v82 + 8 >= MmUserProbeAddress )
      v58 = (_DWORD *)MmUserProbeAddress;
    *v58 = CddPrimaryShareResourceHandle;
    if ( v78 )
      DXGADAPTER::ReleaseReference(v78);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66);
    if ( v68 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v59, &EventProfilerExit, v60, v66);
    return 0LL;
  }
  if ( v78 )
    DXGADAPTER::ReleaseReference(v78);
LABEL_18:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66);
  if ( v68 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v66);
  return (unsigned int)PairingAdapters;
}
