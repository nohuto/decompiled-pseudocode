/*
 * XREFs of DxgkPresentRedirected @ 0x1C0283740
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0005090 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00052C4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008BB0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0008C04 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0017974 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x1C004730C (McTemplateK0qpqqqqpp_EtwWriteTransfer.c)
 *     McTemplateK0qqxxqq_EtwWriteTransfer @ 0x1C00473E4 (McTemplateK0qqxxqq_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C010EC30 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C0157F40 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ??0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015C700 (--0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x1C015CF94 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkPresentRedirected(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // r8
  _OWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DXGDEVICE *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r15
  PERESOURCE *Global; // rax
  __int64 v28; // rdx
  __int64 v29; // rbx
  DXGPUSHLOCK *v30; // rcx
  __int64 v31; // r8
  int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rdx
  bool v36; // zf
  int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r9
  __int64 v48; // rax
  int v49; // r14d
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  struct DXGDEVICE *v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  struct _D3DKMT_PRESENTHISTORYTOKEN *v57; // r12
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  struct VIDSCH_SUBMIT_DATA_BASE *v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  ULONG64 v66; // rcx
  struct DXGDEVICE *v67; // [rsp+60h] [rbp-5F8h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN *v68; // [rsp+68h] [rbp-5F0h]
  int v69; // [rsp+70h] [rbp-5E8h] BYREF
  __int64 v70; // [rsp+78h] [rbp-5E0h]
  ULONG64 v71; // [rsp+80h] [rbp-5D8h]
  int *v72; // [rsp+88h] [rbp-5D0h]
  char v73; // [rsp+90h] [rbp-5C8h]
  int v74; // [rsp+98h] [rbp-5C0h] BYREF
  struct DXGDEVICE *v75; // [rsp+A0h] [rbp-5B8h] BYREF
  char v76[8]; // [rsp+A8h] [rbp-5B0h] BYREF
  char v77; // [rsp+B0h] [rbp-5A8h]
  char v78[8]; // [rsp+B8h] [rbp-5A0h] BYREF
  __int64 v79; // [rsp+C0h] [rbp-598h]
  char v80; // [rsp+C8h] [rbp-590h]
  ULONG64 v81; // [rsp+D0h] [rbp-588h]
  struct VIDSCH_SUBMIT_DATA_BASE *v82[2]; // [rsp+D8h] [rbp-580h] BYREF
  ULONG64 v83; // [rsp+E8h] [rbp-570h] BYREF
  int v84; // [rsp+F0h] [rbp-568h]
  int v85; // [rsp+F4h] [rbp-564h]
  __int64 v86; // [rsp+F8h] [rbp-560h]
  struct DXGDEVICE *v87; // [rsp+100h] [rbp-558h]
  _DWORD v88[10]; // [rsp+108h] [rbp-550h] BYREF
  _BYTE v89[160]; // [rsp+130h] [rbp-528h] BYREF
  _BYTE v90[1120]; // [rsp+1D0h] [rbp-488h] BYREF

  v4 = a1;
  v74 = -1073741823;
  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v68 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)Current;
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    *(_QWORD *)(v8 + 32) = PsGetCurrentProcess(v10, v9, v11, v12);
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  memset(v90, 0, sizeof(v90));
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    if ( v4 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    v15 = v90;
    v16 = 8LL;
    do
    {
      *v15 = *(_OWORD *)v4;
      v15[1] = *(_OWORD *)(v4 + 16);
      v15[2] = *(_OWORD *)(v4 + 32);
      v15[3] = *(_OWORD *)(v4 + 48);
      v15[4] = *(_OWORD *)(v4 + 64);
      v15[5] = *(_OWORD *)(v4 + 80);
      v15[6] = *(_OWORD *)(v4 + 96);
      v15 += 8;
      *(v15 - 1) = *(_OWORD *)(v4 + 112);
      v4 += 128LL;
      --v16;
    }
    while ( v16 );
    *v15 = *(_OWORD *)v4;
    v15[1] = *(_OWORD *)(v4 + 16);
    v15[2] = *(_OWORD *)(v4 + 32);
    v15[3] = *(_OWORD *)(v4 + 48);
    v15[4] = *(_OWORD *)(v4 + 64);
    v15[5] = *(_OWORD *)(v4 + 80);
    v4 = (ULONG64)v90;
  }
  v81 = v4;
  v70 = 0LL;
  v69 = 2147;
  v72 = &v74;
  v73 = 1;
  v71 = v4 & -(__int64)(bTracingEnabled != 0);
  if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v4 & -(__int64)(bTracingEnabled != 0), &EventProfilerEnter, v14, 2147);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v69, 2147LL);
  v68 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v4 + 16);
  if ( *(_DWORD *)(v4 + 16) != 9 || *(_DWORD *)(v4 + 1096) )
  {
    v19 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    goto LABEL_41;
  }
  v21 = *(unsigned int *)v4;
  v75 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v67,
    *(unsigned int *)(v4 + 4),
    (struct _KTHREAD **)Current,
    &v75);
  v24 = v75;
  if ( !v75 )
  {
    v25 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v25 + 24) = *(unsigned int *)(v4 + 4);
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    if ( !v67 || _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_41;
    goto LABEL_40;
  }
  v26 = *(_QWORD *)(*((_QWORD *)v75 + 2) + 16LL);
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v23, v22);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v76, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v76, v28);
  v29 = ((unsigned int)v21 >> 6) & 0xFFFFFF;
  v30 = (struct DXGPROCESS *)((char *)Current + 208);
  if ( *(int *)(v26 + 2596) < 2000 )
  {
    DXGPUSHLOCK::AcquireShared(v30);
    if ( (unsigned int)v29 >= *((_DWORD *)Current + 64) )
      goto LABEL_34;
    v31 = *((_QWORD *)Current + 30);
    v37 = *(_DWORD *)(v31 + 16 * v29 + 8);
    v33 = ((unsigned int)v21 >> 25) & 0x60;
    if ( (((unsigned int)v21 >> 25) & 0x60) != (*(_BYTE *)(v31 + 16 * v29 + 8) & 0x60)
      || (v37 & 0x2000) != 0
      || (v37 & 0x1F) == 0 )
    {
      goto LABEL_34;
    }
    v34 = 2 * v29;
    v35 = v37 & 0x1F;
    v36 = (_BYTE)v35 == 8;
  }
  else
  {
    DXGPUSHLOCK::AcquireShared(v30);
    if ( (unsigned int)v29 >= *((_DWORD *)Current + 64) )
      goto LABEL_34;
    v31 = *((_QWORD *)Current + 30);
    v32 = *(_DWORD *)(v31 + 16LL * (unsigned int)v29 + 8);
    v33 = ((unsigned int)v21 >> 25) & 0x60;
    if ( (((unsigned int)v21 >> 25) & 0x60) != (*(_BYTE *)(v31 + 16LL * (unsigned int)v29 + 8) & 0x60)
      || (v32 & 0x2000) != 0
      || (v32 & 0x1F) == 0 )
    {
      goto LABEL_34;
    }
    v34 = 2 * v29;
    v35 = v32 & 0x1F;
    v36 = (_BYTE)v35 == 11;
  }
  if ( !v36 )
  {
    v38 = WdLogNewEntry5_WdError(v33, v35);
    *(_QWORD *)(v38 + 24) = 316LL;
    WdLogEvent5_WdError(v38);
LABEL_34:
    v39 = 0LL;
    goto LABEL_35;
  }
  v39 = *(_QWORD *)(v31 + 8 * v34);
LABEL_35:
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v39 )
  {
    v42 = WdLogNewEntry5_WdError(v41, v40);
    *(_QWORD *)(v42 + 24) = v21;
    *(_QWORD *)(v42 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v42);
    if ( v77 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v76);
    if ( !v67 || _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_41;
LABEL_40:
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
LABEL_41:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69, v20);
    if ( v73 )
    {
      if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v71,
          v44,
          *(_DWORD *)v71,
          *(_DWORD *)(v71 + 56),
          *(_QWORD *)(v71 + 80),
          *(_QWORD *)(v71 + 88),
          *(_DWORD *)(v71 + 1096),
          *v72);
    }
    else if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v71,
        v44,
        *(_DWORD *)v71,
        *(_QWORD *)(v71 + 8),
        *(_DWORD *)(v71 + 16),
        *(_DWORD *)(v71 + 84),
        *(_DWORD *)(v71 + 88),
        *v72,
        *(_DWORD *)(v71 + 20),
        *(_DWORD *)(v71 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v69);
    return 3221225485LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)v24 + 8);
  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v76);
  v79 = v26;
  v80 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v78);
  if ( *(_DWORD *)(v26 + 200) != 1 )
  {
    v48 = WdLogNewEntry5_WdError(v46, v45);
    *(_QWORD *)(v48 + 24) = v26;
    v49 = -1073741823;
    *(_QWORD *)(v48 + 32) = -1073741823LL;
    WdLogEvent5_WdError(v48);
LABEL_54:
    if ( v80 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v78);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v24 + 2), v75);
    if ( v77 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v76);
    if ( v67 && _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
LABEL_63:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69, v50);
    if ( v73 )
    {
      if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v71,
          v52,
          *(_DWORD *)v71,
          *(_DWORD *)(v71 + 56),
          *(_QWORD *)(v71 + 80),
          *(_QWORD *)(v71 + 88),
          *(_DWORD *)(v71 + 1096),
          *v72);
    }
    else if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v71,
        v52,
        *(_DWORD *)v71,
        *(_QWORD *)(v71 + 8),
        *(_DWORD *)(v71 + 16),
        *(_DWORD *)(v71 + 84),
        *(_DWORD *)(v71 + 88),
        *v72,
        *(_DWORD *)(v71 + 20),
        *(_DWORD *)(v71 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v51, &EventProfilerExit, v52, v69);
    return (unsigned int)v49;
  }
  v53 = v75;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v89, (__int64)v75, 2, v47, 0);
  v74 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v89, 0LL);
  if ( v74 < 0 )
  {
    v56 = WdLogNewEntry5_WdError(v55, v54);
    *(_QWORD *)(v56 + 24) = v74;
    WdLogEvent5_WdError(v56);
    v49 = v74;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v89);
    goto LABEL_54;
  }
  v57 = v68;
  v49 = SubmitPresentHistoryTokenPreparation(
          (struct DXGADAPTERSTOPRESETLOCKSHARED *)v78,
          (struct COREDEVICEACCESS *)v89,
          (struct DXGADAPTER *)v26,
          v68,
          0LL,
          0);
  v74 = v49;
  if ( v49 < 0 )
  {
LABEL_77:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v89);
    if ( v80 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v78);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v24 + 2), v75);
    if ( v77 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v76);
    if ( v67 && _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
    goto LABEL_63;
  }
  TOKEN_BINDING_GUARD::TOKEN_BINDING_GUARD(
    (TOKEN_BINDING_GUARD *)v88,
    v57,
    (struct DXGADAPTERSTOPRESETLOCKSHARED *)v78,
    (struct COREDEVICEACCESS *)v89);
  v82[0] = 0LL;
  v82[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v26 + 2704);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v82);
  v61 = v82[0];
  if ( v82[0] )
  {
    *(_DWORD *)v82[0] = *(_DWORD *)v82[0] & 0xFFFCFEDF | 0x10120;
    v66 = v81;
    *((_QWORD *)v61 + 58) = *(_QWORD *)(v81 + 8);
    v85 = 0;
    v83 = v66;
    v84 = v21;
    v86 = v26;
    v87 = v53;
    v49 = SubmitPresentHistoryToken(
            v57,
            (struct COREDEVICEACCESS *)v89,
            (__int64)v78,
            0LL,
            1,
            0LL,
            0LL,
            v61,
            0LL,
            (struct _PRESENT_REDIRECTED_PARAMS *)&v83,
            0LL);
    v74 = v49;
    v88[0] = v49;
    CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v82);
    TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)v88);
    goto LABEL_77;
  }
  v62 = WdLogNewEntry5_WdLowResource(v58, 0LL, v59, v60);
  *(_QWORD *)(v62 + 24) = 1046LL;
  WdLogEvent5_WdLowResource(v62);
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v82);
  TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)v88);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v89);
  if ( v80 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v78);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v24 + 2), v75);
  if ( v77 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v76);
  if ( v67 && _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v67 + 2), v67);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69, v63);
  if ( v73 )
  {
    if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v71,
        v65,
        *(_DWORD *)v71,
        *(_DWORD *)(v71 + 56),
        *(_QWORD *)(v71 + 80),
        *(_QWORD *)(v71 + 88),
        *(_DWORD *)(v71 + 1096),
        *v72);
  }
  else if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qpqqqqpp_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      v71,
      v65,
      *(_DWORD *)v71,
      *(_QWORD *)(v71 + 8),
      *(_DWORD *)(v71 + 16),
      *(_DWORD *)(v71 + 84),
      *(_DWORD *)(v71 + 88),
      *v72,
      *(_DWORD *)(v71 + 20),
      *(_DWORD *)(v71 + 24));
  }
  if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v64, &EventProfilerExit, v65, v69);
  return 3221225495LL;
}
