/*
 * XREFs of DxgkPresentRedirected @ 0x1C033D150
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00012E4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C000148C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000717C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007344 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0018D48 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x1C0051C34 (McTemplateK0qpqqqqpp_EtwWriteTransfer.c)
 *     McTemplateK0qqxxqq_EtwWriteTransfer @ 0x1C0051D0C (McTemplateK0qqxxqq_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C01C94F0 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ??0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01C9790 (--0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01C9880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x1C01CA280 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkPresentRedirected(__int64 a1)
{
  ULONG64 v1; // rbx
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 CurrentProcess; // rax
  int v5; // r15d
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // r8
  _OWORD *v10; // rax
  __int64 v11; // rcx
  const wchar_t *v12; // r9
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v18; // r15
  DXGPUSHLOCK *v19; // rcx
  __int64 v20; // r15
  __int64 v21; // r8
  int v22; // edx
  int v23; // edx
  __int64 v24; // r15
  __int64 v25; // rcx
  __int64 v26; // r8
  struct DXGDEVICE *v27; // rbx
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // eax
  struct _D3DKMT_PRESENTHISTORYTOKEN *v32; // r15
  struct VIDSCH_SUBMIT_DATA_BASE *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  ULONG64 v36; // rcx
  struct DXGDEVICE *v37; // [rsp+60h] [rbp-608h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN *v38; // [rsp+68h] [rbp-600h]
  int v39; // [rsp+70h] [rbp-5F8h] BYREF
  __int64 v40; // [rsp+78h] [rbp-5F0h]
  ULONG64 v41; // [rsp+80h] [rbp-5E8h]
  int *v42; // [rsp+88h] [rbp-5E0h]
  char v43; // [rsp+90h] [rbp-5D8h]
  int v44; // [rsp+98h] [rbp-5D0h] BYREF
  struct DXGDEVICE *v45; // [rsp+A0h] [rbp-5C8h] BYREF
  char v46[8]; // [rsp+A8h] [rbp-5C0h] BYREF
  char v47; // [rsp+B0h] [rbp-5B8h]
  char v48[8]; // [rsp+B8h] [rbp-5B0h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-5A8h]
  char v50; // [rsp+C8h] [rbp-5A0h]
  ULONG64 v51; // [rsp+D0h] [rbp-598h]
  struct VIDSCH_SUBMIT_DATA_BASE *v52[2]; // [rsp+D8h] [rbp-590h] BYREF
  ULONG64 v53; // [rsp+E8h] [rbp-580h] BYREF
  int v54; // [rsp+F0h] [rbp-578h]
  int v55; // [rsp+F4h] [rbp-574h]
  __int64 v56; // [rsp+F8h] [rbp-570h]
  struct DXGDEVICE *v57; // [rsp+100h] [rbp-568h]
  _DWORD v58[10]; // [rsp+108h] [rbp-560h] BYREF
  _BYTE v59[160]; // [rsp+130h] [rbp-538h] BYREF
  _BYTE v60[1120]; // [rsp+1D0h] [rbp-498h] BYREF

  v1 = a1;
  v44 = -1073741823;
  Current = DXGPROCESS::GetCurrent(a1);
  v38 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v2);
    v5 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v7 = PsGetCurrentProcess(v6);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v7,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v5;
  }
  memset(v60, 0, sizeof(v60));
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    if ( v1 >= MmUserProbeAddress )
      v1 = MmUserProbeAddress;
    v10 = v60;
    v11 = 8LL;
    do
    {
      *v10 = *(_OWORD *)v1;
      v10[1] = *(_OWORD *)(v1 + 16);
      v10[2] = *(_OWORD *)(v1 + 32);
      v10[3] = *(_OWORD *)(v1 + 48);
      v10[4] = *(_OWORD *)(v1 + 64);
      v10[5] = *(_OWORD *)(v1 + 80);
      v10[6] = *(_OWORD *)(v1 + 96);
      v10 += 8;
      *(v10 - 1) = *(_OWORD *)(v1 + 112);
      v1 += 128LL;
      --v11;
    }
    while ( v11 );
    *v10 = *(_OWORD *)v1;
    v10[1] = *(_OWORD *)(v1 + 16);
    v10[2] = *(_OWORD *)(v1 + 32);
    v10[3] = *(_OWORD *)(v1 + 48);
    v10[4] = *(_OWORD *)(v1 + 64);
    v10[5] = *(_OWORD *)(v1 + 80);
    v1 = (ULONG64)v60;
  }
  v51 = v1;
  v40 = 0LL;
  v39 = 2147;
  v42 = &v44;
  v43 = 1;
  v41 = v1 & -(__int64)(bTracingEnabled != 0);
  if ( (qword_1C013A870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v1 & -(__int64)(bTracingEnabled != 0), &EventProfilerEnter, v9, 2147);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 2147);
  v38 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v1 + 16);
  if ( *(_DWORD *)(v1 + 16) != 9 )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v12 = L"Invalid PresentHistoryToken Mode, returning 0x%I64x";
LABEL_15:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_60;
  }
  if ( *(_DWORD *)(v1 + 1096) )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v12 = L"Reserved bits should not be set, returning 0x%I64x";
    goto LABEL_15;
  }
  v13 = *(unsigned int *)v1;
  v45 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v37,
    *(_DWORD *)(v1 + 4),
    (struct _KTHREAD **)Current,
    &v45);
  if ( !v45 )
  {
    v5 = -1073741811;
    WdLogSingleEntry2(2LL, *(unsigned int *)(v1 + 4), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      *(unsigned int *)(v1 + 4),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( !v37 || _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_60;
    goto LABEL_59;
  }
  v14 = *(_QWORD *)(*((_QWORD *)v45 + 2) + 16LL);
  if ( (*(_DWORD *)(v14 + 2792) & 8) != 0 )
  {
    WdLogSingleEntry1(2LL, *(unsigned int *)(v1 + 4));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Present is not supported on MCDM adapter device 0x%I64x",
      *(unsigned int *)(v1 + 4),
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v43 )
    {
      if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v41,
          v16,
          *(_DWORD *)v41,
          *(_DWORD *)(v41 + 56),
          *(_QWORD *)(v41 + 80),
          *(_QWORD *)(v41 + 88),
          *(_DWORD *)(v41 + 1096),
          *v42);
    }
    else if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v41,
        v16,
        *(_DWORD *)v41,
        *(_QWORD *)(v41 + 8),
        *(_DWORD *)(v41 + 16),
        *(_DWORD *)(v41 + 84),
        *(_DWORD *)(v41 + 88),
        *v42,
        *(_DWORD *)(v41 + 20),
        *(_DWORD *)(v41 + 24));
    }
    if ( (qword_1C013A870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v39);
    return (unsigned int)-1073741811;
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v46, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v46);
  v18 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
  v19 = (struct DXGPROCESS *)((char *)Current + 248);
  if ( *(int *)(v14 + 2820) < 2000 )
  {
    DXGPUSHLOCK::AcquireShared(v19);
    if ( (unsigned int)v18 < *((_DWORD *)Current + 74) )
    {
      v20 = 2 * v18;
      v21 = *((_QWORD *)Current + 35);
      if ( (((unsigned int)v13 >> 25) & 0x60) == (*(_BYTE *)(v21 + 8 * v20 + 8) & 0x60)
        && (*(_DWORD *)(v21 + 8 * v20 + 8) & 0x2000) == 0 )
      {
        v23 = *(_DWORD *)(v21 + 8 * v20 + 8) & 0x1F;
        if ( v23 )
        {
          if ( v23 != 8 )
          {
LABEL_50:
            WdLogSingleEntry1(2LL, 267LL);
            v24 = 0LL;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
            goto LABEL_53;
          }
          goto LABEL_51;
        }
      }
    }
  }
  else
  {
    DXGPUSHLOCK::AcquireShared(v19);
    if ( (unsigned int)v18 < *((_DWORD *)Current + 74) )
    {
      v20 = 2 * v18;
      v21 = *((_QWORD *)Current + 35);
      if ( (((unsigned int)v13 >> 25) & 0x60) == (*(_BYTE *)(v21 + 8 * v20 + 8) & 0x60)
        && (*(_DWORD *)(v21 + 8 * v20 + 8) & 0x2000) == 0 )
      {
        v22 = *(_DWORD *)(v21 + 8 * v20 + 8) & 0x1F;
        if ( v22 )
        {
          if ( v22 != 11 )
            goto LABEL_50;
LABEL_51:
          v24 = *(_QWORD *)(v21 + 8 * v20);
          goto LABEL_53;
        }
      }
    }
  }
  v24 = 0LL;
LABEL_53:
  _InterlockedAdd((volatile signed __int32 *)Current + 66, 0xFFFFFFFF);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v24 )
  {
    v5 = -1073741811;
    WdLogSingleEntry2(2LL, v13, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hSyncObj (0x%I64x) specified, returning 0x%I64x",
      v13,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_55;
  }
  v27 = v45;
  _InterlockedIncrement64((volatile signed __int64 *)v45 + 8);
  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v46);
  v49 = v14;
  v50 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
  if ( *(_DWORD *)(v14 + 200) != 1 )
  {
    WdLogSingleEntry2(2LL, v14, -1073741823LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGADAPTER: 0x%I64x stopped, returning 0x%I64x",
      v14,
      -1073741823LL,
      0LL,
      0LL,
      0LL);
    if ( v50 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
    if ( v47 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v46);
    if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v43 )
    {
      if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v41,
          v30,
          *(_DWORD *)v41,
          *(_DWORD *)(v41 + 56),
          *(_QWORD *)(v41 + 80),
          *(_QWORD *)(v41 + 88),
          *(_DWORD *)(v41 + 1096),
          *v42);
    }
    else if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v41,
        v30,
        *(_DWORD *)v41,
        *(_QWORD *)(v41 + 8),
        *(_DWORD *)(v41 + 16),
        *(_DWORD *)(v41 + 84),
        *(_DWORD *)(v41 + 88),
        *v42,
        *(_DWORD *)(v41 + 20),
        *(_DWORD *)(v41 + 24));
    }
    if ( (qword_1C013A870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v39);
    return 3221225473LL;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v59, (__int64)v45, 2, v28, 0);
  v31 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v59, 0LL);
  v44 = v31;
  if ( v31 < 0 )
  {
    WdLogSingleEntry1(2LL, v31);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire CoreDeviceAccess, returning 0x%I64x",
      v44,
      0LL,
      0LL,
      0LL,
      0LL);
    v5 = v44;
LABEL_94:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v59);
LABEL_95:
    if ( v50 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
LABEL_55:
    if ( v47 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v46);
    if ( !v37 || _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_60;
LABEL_59:
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
LABEL_60:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v43 )
    {
      if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v41,
          v26,
          *(_DWORD *)v41,
          *(_DWORD *)(v41 + 56),
          *(_QWORD *)(v41 + 80),
          *(_QWORD *)(v41 + 88),
          *(_DWORD *)(v41 + 1096),
          *v42);
    }
    else if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v41,
        v26,
        *(_DWORD *)v41,
        *(_QWORD *)(v41 + 8),
        *(_DWORD *)(v41 + 16),
        *(_DWORD *)(v41 + 84),
        *(_DWORD *)(v41 + 88),
        *v42,
        *(_DWORD *)(v41 + 20),
        *(_DWORD *)(v41 + 24));
    }
    if ( (qword_1C013A870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v39);
    return (unsigned int)v5;
  }
  v5 = SubmitPresentHistoryTokenPreparation(
         (struct DXGADAPTERSTOPRESETLOCKSHARED *)v48,
         (struct COREDEVICEACCESS *)v59,
         (struct DXGADAPTER *)v14,
         v38,
         0LL,
         0);
  v44 = v5;
  if ( v5 < 0 )
    goto LABEL_94;
  v32 = v38;
  TOKEN_BINDING_GUARD::TOKEN_BINDING_GUARD(
    (TOKEN_BINDING_GUARD *)v58,
    v38,
    (struct DXGADAPTERSTOPRESETLOCKSHARED *)v48,
    (struct COREDEVICEACCESS *)v59);
  v52[0] = 0LL;
  v52[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v14 + 2928);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v52);
  v33 = v52[0];
  if ( v52[0] )
  {
    *(_DWORD *)v52[0] = *(_DWORD *)v52[0] & 0xFFFCFEDF | 0x10120;
    v36 = v51;
    *((_QWORD *)v33 + 59) = *(_QWORD *)(v51 + 8);
    v55 = 0;
    v53 = v36;
    v54 = v13;
    v56 = v14;
    v57 = v45;
    v5 = SubmitPresentHistoryToken(
           v32,
           (struct COREDEVICEACCESS *)v59,
           (struct DXGADAPTERSTOPRESETLOCKSHARED *)v48,
           0LL,
           1,
           0LL,
           0LL,
           v33,
           0LL,
           (struct _PRESENT_REDIRECTED_PARAMS *)&v53,
           0LL);
    v44 = v5;
    v58[0] = v5;
    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v52);
    TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)v58);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v59);
    goto LABEL_95;
  }
  WdLogSingleEntry1(6LL, 1215LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate VidSchSubmitData",
    1215LL,
    0LL,
    0LL,
    0LL,
    0LL);
  CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v52);
  TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)v58);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v59);
  if ( v50 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
  if ( v47 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v46);
  if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v43 )
  {
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v41,
        v35,
        *(_DWORD *)v41,
        *(_DWORD *)(v41 + 56),
        *(_QWORD *)(v41 + 80),
        *(_QWORD *)(v41 + 88),
        *(_DWORD *)(v41 + 1096),
        *v42);
  }
  else if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
  {
    McTemplateK0qpqqqqpp_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      v41,
      v35,
      *(_DWORD *)v41,
      *(_QWORD *)(v41 + 8),
      *(_DWORD *)(v41 + 16),
      *(_DWORD *)(v41 + 84),
      *(_DWORD *)(v41 + 88),
      *v42,
      *(_DWORD *)(v41 + 20),
      *(_DWORD *)(v41 + 24));
  }
  if ( (qword_1C013A870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v39);
  return 3221225495LL;
}
