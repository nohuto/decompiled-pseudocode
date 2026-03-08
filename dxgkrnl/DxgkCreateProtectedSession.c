/*
 * XREFs of DxgkCreateProtectedSession @ 0x1C0344700
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0006A6C (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000717C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007344 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001573C (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0018D48 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0186E18 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C0343A9C (-CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTE.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C0343F1C (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C0344238 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall DxgkCreateProtectedSession(struct DXGDEVICE *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // sf
  ULONG64 v9; // rax
  char *v10; // r14
  __int64 v11; // r8
  size_t v12; // rdx
  char *v13; // r15
  unsigned int v14; // ebx
  size_t v15; // r12
  int v16; // ebx
  __int64 v17; // r14
  struct DXGDEVICE *v18; // r14
  __int64 v19; // rbx
  __int64 v21; // r9
  __int64 v22; // rbx
  struct DXGGLOBAL *v23; // rax
  unsigned int v24; // eax
  __int64 v25; // r8
  unsigned int v26; // ecx
  int v27; // ecx
  __int64 v28; // r14
  __int64 v29; // rbx
  struct DXGDEVICE *v30; // r8
  struct DXGDEVICE *v31; // r15
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rbx
  struct DXGSYNCOBJECT *v35; // r14
  _DWORD *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r9
  unsigned __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // r8
  struct DXGSYNCOBJECT *v42; // r14
  PERESOURCE *Global; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  struct DXGDEVICE *v46[2]; // [rsp+50h] [rbp-178h] BYREF
  int v47; // [rsp+60h] [rbp-168h] BYREF
  __int64 v48; // [rsp+68h] [rbp-160h]
  char v49; // [rsp+70h] [rbp-158h]
  DXGPROTECTEDSESSION *v50; // [rsp+78h] [rbp-150h] BYREF
  struct DXGSYNCOBJECT *v51; // [rsp+80h] [rbp-148h] BYREF
  void *v52; // [rsp+88h] [rbp-140h] BYREF
  void *v53; // [rsp+90h] [rbp-138h] BYREF
  char v54[8]; // [rsp+98h] [rbp-130h] BYREF
  char v55; // [rsp+A0h] [rbp-128h]
  struct DXGDEVICE *v56; // [rsp+A8h] [rbp-120h] BYREF
  _BYTE v57[16]; // [rsp+B0h] [rbp-118h] BYREF
  void *Src[2]; // [rsp+C0h] [rbp-108h]
  size_t Size[2]; // [rsp+D0h] [rbp-F8h]
  size_t v60; // [rsp+E0h] [rbp-E8h] BYREF
  struct DXGDEVICE *v61; // [rsp+E8h] [rbp-E0h]
  _BYTE v62[160]; // [rsp+F0h] [rbp-D8h] BYREF

  v61 = a1;
  v46[1] = a1;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry1(1LL, 57LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PsGetCurrentThreadPreviousMode() == UserMode",
      57LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v47 = -1;
  v48 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v49 = 1;
    v47 = 2148;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2148);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v47, 2148);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
    if ( !v49 )
      return 3221225485LL;
    v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_48:
    if ( v8 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v47);
    return 3221225485LL;
  }
  v9 = (ULONG64)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v9;
  *(_OWORD *)Size = *(_OWORD *)(v9 + 16);
  v60 = *(_QWORD *)(v9 + 32);
  HIDWORD(v60) = 0;
  v10 = (char *)Src[1];
  if ( !Src[1] )
  {
    if ( !LODWORD(Size[0]) )
      goto LABEL_19;
LABEL_17:
    v11 = LODWORD(Size[0]);
    v12 = (size_t)Src[1];
LABEL_18:
    WdLogSingleEntry3(3LL, v12, v11, -1073741811LL);
    goto LABEL_9;
  }
  if ( !LODWORD(Size[0]) )
    goto LABEL_17;
LABEL_19:
  v11 = 0x2000000LL;
  if ( LODWORD(Size[0]) > 0x2000000 )
  {
    v12 = LODWORD(Size[0]);
    goto LABEL_18;
  }
  v13 = (char *)Size[1];
  v14 = v60;
  if ( !Size[1] )
  {
    if ( !(_DWORD)v60 )
      goto LABEL_26;
LABEL_25:
    v11 = (unsigned int)v60;
    v12 = Size[1];
    goto LABEL_18;
  }
  if ( !(_DWORD)v60 )
    goto LABEL_25;
LABEL_26:
  if ( (unsigned int)v60 > 0x2000000 )
  {
    v12 = (unsigned int)v60;
    goto LABEL_18;
  }
  v52 = 0LL;
  v53 = 0LL;
  v51 = 0LL;
  v50 = 0LL;
  if ( LODWORD(Size[0]) )
  {
    v15 = LODWORD(Size[0]);
    v52 = (void *)operator new[](LODWORD(Size[0]), 0x4B677844u, 256LL);
    if ( !v52 )
    {
      v16 = -1073741801;
      WdLogSingleEntry2(6LL, (unsigned int)v15, -1073741801LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Out of memory allocating 0x%I64x bytes for private driver data, returning 0x%I64x",
        v15,
        -1073741801LL,
        0LL,
        0LL,
        0LL);
LABEL_113:
      if ( v50 )
        DXGPROTECTEDSESSION::DestroyProtectedSession(v50, HIDWORD(v60));
      v42 = v51;
      if ( v51 )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
        DXGGLOBAL::DestroySyncObject(Global, v42, 0);
      }
      if ( v52 )
        operator delete(v52);
      if ( v53 )
        operator delete(v53);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
      if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v47);
      return (unsigned int)v16;
    }
    if ( &v10[v15] < v10 || (unsigned __int64)&v10[v15] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v52, v10, v15);
  }
  if ( v14 )
  {
    v17 = v14;
    v53 = (void *)operator new[](v14, 0x4B677844u, 256LL);
    if ( !v53 )
    {
      v16 = -1073741801;
      WdLogSingleEntry2(6LL, (unsigned int)v17, -1073741801LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Out of memory allocating 0x%I64x bytes for private runtime data, returning 0x%I64x",
        v17,
        -1073741801LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_113;
    }
    if ( &v13[v14] < v13 || (unsigned __int64)&v13[v14] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v53, v13, v14);
  }
  v56 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)v46,
    (unsigned int)Src[0],
    (struct _KTHREAD **)Current,
    &v56);
  v18 = v56;
  if ( !v56 )
  {
    v19 = LODWORD(Src[0]);
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v19,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v46[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v46[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46[0] + 2), v46[0]);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
    if ( !v49 )
      return 3221225485LL;
    LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_48;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v57, v56);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v62, (__int64)v18, 1, v21, 0);
  v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v62, 0LL);
  if ( v16 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v57);
    if ( !v46[0] )
      goto LABEL_113;
LABEL_53:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v46[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46[0] + 2), v46[0]);
    goto LABEL_113;
  }
  v22 = *((_QWORD *)v18 + 235);
  if ( !v22 )
  {
    v16 = -1073741637;
    WdLogSingleEntry2(2LL, v18, -1073741637LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"function is called on a render only device (0x%I64x), returning 0x%I64x.",
      (__int64)v18,
      -1073741637LL,
      0LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v57);
    if ( !v46[0] )
      goto LABEL_113;
    goto LABEL_53;
  }
  v23 = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v54, v23, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v54);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v24 = (HIDWORD(Src[0]) >> 6) & 0xFFFFFF;
  if ( v24 >= *((_DWORD *)Current + 74) )
    goto LABEL_64;
  v25 = *((_QWORD *)Current + 35);
  v26 = *(_DWORD *)(v25 + 16LL * v24 + 8);
  if ( HIDWORD(Src[0]) >> 30 != ((v26 >> 5) & 3) )
    goto LABEL_64;
  if ( (v26 & 0x2000) != 0 )
    goto LABEL_64;
  v27 = v26 & 0x1F;
  if ( !v27 )
    goto LABEL_64;
  if ( v27 != 11 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_64:
    v28 = 0LL;
    goto LABEL_65;
  }
  v28 = *(_QWORD *)(v25 + 16LL * v24);
LABEL_65:
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v28 )
  {
    v29 = HIDWORD(Src[0]);
    WdLogSingleEntry2(2LL, Current, HIDWORD(Src[0]));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid sync object, process 0x%I64x, handle 0x%I64x",
      (__int64)Current,
      v29,
      0LL,
      0LL,
      0LL);
    goto LABEL_67;
  }
  v30 = *(struct DXGDEVICE **)(v28 + 16);
  v31 = v56;
  if ( v30 != v56 )
  {
    v32 = HIDWORD(Src[0]);
    WdLogSingleEntry3(2LL, HIDWORD(Src[0]), v30, v56);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%x object belongs to a different device 0x%p that 0x%p passed.",
      v32,
      *(_QWORD *)(v28 + 16),
      (__int64)v31,
      0LL,
      0LL);
LABEL_67:
    v16 = -1073741811;
    if ( v55 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v54);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v57);
    if ( !v46[0] )
      goto LABEL_113;
    goto LABEL_53;
  }
  v33 = *(_QWORD *)(v28 + 32);
  v51 = (struct DXGSYNCOBJECT *)v33;
  _InterlockedAdd((volatile signed __int32 *)(v33 + 24), 1u);
  if ( *(_DWORD *)(v33 + 200) != 5 )
  {
    v34 = HIDWORD(Src[0]);
    WdLogSingleEntry2(2LL, Current, HIDWORD(Src[0]));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"not monitored fence object, process 0x%I64x, handle 0x%I64x",
      (__int64)Current,
      v34,
      0LL,
      0LL,
      0LL);
    goto LABEL_76;
  }
  if ( (*(_DWORD *)(v33 + 204) & 2) == 0 )
  {
    v35 = v51;
    WdLogSingleEntry2(2LL, v51, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"not NT shared fence: Protected session's sync object 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
      (__int64)v35,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_76:
    v16 = -1073741811;
    if ( v55 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v54);
    goto LABEL_78;
  }
  if ( v55 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v54);
  v16 = ADAPTER_DISPLAY::CreateProtectedSession(*(DXGADAPTER ***)(v22 + 2920), &v51, &v52, Size[0], &v53, v60, &v50);
  if ( v16 < 0 )
  {
    if ( v50 )
    {
      WdLogSingleEntry1(1LL, 302LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProtectedSession == NULL", 302LL, 0LL, 0LL, 0LL, 0LL);
    }
    goto LABEL_78;
  }
  if ( v51 )
  {
    WdLogSingleEntry1(1LL, 309LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSyncObject == NULL", 309LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v52 )
  {
    WdLogSingleEntry1(1LL, 310LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pKMPrivateDriverData == NULL", 310LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v53 )
  {
    WdLogSingleEntry1(1LL, 311LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pKMPrivateRuntimeData == NULL", 311LL, 0LL, 0LL, 0LL, 0LL);
  }
  v16 = DXGPROTECTEDSESSION::Open(v50, (unsigned int *)&v60 + 1);
  if ( v16 < 0 )
  {
LABEL_78:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v57);
    if ( !v46[0] )
      goto LABEL_113;
    goto LABEL_53;
  }
  if ( _InterlockedDecrement((volatile signed __int32 *)v50 + 20) <= 0 )
  {
    WdLogSingleEntry1(1LL, 328LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"c > 0", 328LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !HIDWORD(v60) )
  {
    WdLogSingleEntry1(1LL, 334LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"KMCreateProtectedSession.hHandle", 334LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v57);
  if ( v46[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v46[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46[0] + 2), v46[0]);
  v36 = (_DWORD *)((char *)v61 + 36);
  if ( (unsigned __int64)v61 + 36 >= MmUserProbeAddress )
    v36 = (_DWORD *)MmUserProbeAddress;
  *v36 = HIDWORD(v60);
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
  v37 = (HIDWORD(v60) >> 6) & 0xFFFFFF;
  if ( (unsigned int)v37 < *((_DWORD *)Current + 74) )
  {
    v38 = *((_QWORD *)Current + 35);
    if ( ((HIDWORD(v60) >> 25) & 0x60) == (*(_BYTE *)(v38 + 16 * v37 + 8) & 0x60)
      && (*(_DWORD *)(v38 + 16 * v37 + 8) & 0x1F) != 0 )
    {
      v39 = 2 * (((unsigned __int64)HIDWORD(v60) >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v38 + 16 * (((unsigned __int64)HIDWORD(v60) >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry1(1LL, 217LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          217LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v39 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)Current + 32) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
  if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v47);
  return 0LL;
}
