/*
 * XREFs of ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z @ 0x1C010E5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00033FC (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005500 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x1C001A308 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EFD60 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C0107B00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C010EC30 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020D704 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddSubmitPresentHistory(__int64 a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2, char *a3)
{
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r14
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rdi
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r15
  struct _KEVENT *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  volatile signed __int64 *v35; // rcx
  volatile signed __int64 *v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned int v39; // r14d
  struct DXGADAPTER *v40; // rcx
  struct DXGADAPTER *v41; // rcx
  DXGGLOBAL **v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v47; // rdx
  int v48; // r8d
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int8 v51; // bl
  __int64 v52; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  int v60; // r9d
  __int64 v61; // rax
  _QWORD *v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 v68; // rax
  int v69; // r9d
  _QWORD *v70; // rax
  int v71; // eax
  char *v72; // rcx
  _QWORD *v73; // rax
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // r9
  char *v77; // rdx
  __int64 v79; // [rsp+70h] [rbp-98h] BYREF
  struct DXGADAPTER *v80; // [rsp+78h] [rbp-90h]
  char v81; // [rsp+80h] [rbp-88h]
  int v82; // [rsp+88h] [rbp-80h] BYREF
  __int64 v83; // [rsp+90h] [rbp-78h]
  char v84; // [rsp+98h] [rbp-70h]
  union _LARGE_INTEGER v85; // [rsp+A0h] [rbp-68h] BYREF
  char v86[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v87; // [rsp+B0h] [rbp-58h]
  char v88; // [rsp+B8h] [rbp-50h]
  _QWORD v89[3]; // [rsp+C0h] [rbp-48h] BYREF
  char v90[8]; // [rsp+D8h] [rbp-30h] BYREF
  char v91[8]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v92; // [rsp+E8h] [rbp-20h]
  struct DXGADAPTER *v93; // [rsp+F0h] [rbp-18h]
  char v94; // [rsp+F8h] [rbp-10h]
  char *v95; // [rsp+100h] [rbp-8h]
  char v96[24]; // [rsp+108h] [rbp+0h] BYREF
  char v97[8]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v98; // [rsp+128h] [rbp+20h]
  struct DXGADAPTER *v99; // [rsp+130h] [rbp+28h]
  char v100; // [rsp+138h] [rbp+30h]
  __int64 v101; // [rsp+140h] [rbp+38h]
  __int64 v102; // [rsp+160h] [rbp+58h]
  char v103; // [rsp+168h] [rbp+60h]
  char v104[8]; // [rsp+178h] [rbp+70h] BYREF
  char v105[64]; // [rsp+180h] [rbp+78h] BYREF
  char v106[88]; // [rsp+1C0h] [rbp+B8h] BYREF

  v4 = (unsigned int)a1;
  v82 = -1;
  v83 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v84 = 1;
    v82 = 3036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 3036);
  }
  else
  {
    v84 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v82, 3036LL);
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v12, v11)) == 0LL
    || (v14 = *((_QWORD *)Current + 1)) == 0 )
  {
    v14 = v13;
    if ( !v13 )
    {
      v39 = -1073741811;
      v54 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v54 + 24) = -1073741811LL;
      *(_QWORD *)(v54 + 32) = PsGetCurrentProcess(v56, v55, v57, v58);
      WdLogEvent5_WdError(v54);
      goto LABEL_57;
    }
  }
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 208));
  v15 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( v15 < *(_DWORD *)(v14 + 256) )
  {
    v47 = *(_QWORD *)(v14 + 240);
    v48 = *(_DWORD *)(v47 + 16LL * v15 + 8);
    if ( (((unsigned int)v4 >> 25) & 0x60) == (*(_BYTE *)(v47 + 16LL * v15 + 8) & 0x60)
      && (v48 & 0x2000) == 0
      && (v48 & 0x1F) != 0
      && (*(_BYTE *)(v47 + 16LL * (((unsigned int)v4 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 7 )
    {
      v49 = WdLogNewEntry5_WdError(((unsigned int)v4 >> 25) & 0x60, v47);
      *(_QWORD *)(v49 + 24) = 316LL;
      WdLogEvent5_WdError(v49);
    }
  }
  ExReleasePushLockSharedEx(v14 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( v14 != -208 && *(struct _KTHREAD **)(v14 + 216) == KeGetCurrentThread() )
  {
    v59 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v59 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v59);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v14 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v60 = *(_DWORD *)(v14 + 232);
      if ( v60 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, &EventBlockThread, v19, v60);
    }
    ExAcquirePushLockSharedEx(v14 + 208, 0LL);
  }
  if ( v15 < *(_DWORD *)(v14 + 256) )
  {
    v20 = *(_QWORD *)(v14 + 240);
    v21 = *(_DWORD *)(v20 + 16LL * v15 + 8);
    if ( (((unsigned int)v4 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16LL * v15 + 8) & 0x60)
      && (v21 & 0x2000) == 0
      && (v21 & 0x1F) != 0 )
    {
      v22 = v21 & 0x1F;
      if ( (_BYTE)v22 == 7 )
      {
        v23 = *(_QWORD *)(v20 + 16LL * v15);
        if ( !v23 )
          goto LABEL_21;
        _m_prefetchw((const void *)(v23 + 32));
        v24 = *(_QWORD *)(v23 + 32);
        while ( v24 )
        {
          v25 = v24;
          v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 32), v24 + 1, v24);
          if ( v25 == v24 )
            goto LABEL_21;
        }
      }
      else
      {
        v61 = WdLogNewEntry5_WdError(((unsigned int)v4 >> 25) & 0x60, v22);
        *(_QWORD *)(v61 + 24) = 316LL;
        WdLogEvent5_WdError(v61);
      }
    }
  }
  v23 = 0LL;
LABEL_21:
  ExReleasePushLockSharedEx(v14 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( v23 )
  {
    v28 = *(_QWORD *)(v23 + 16);
    v29 = *(struct _KEVENT **)(v28 + 16);
    if ( !KeReadStateEvent(v29 + 5) )
      KeWaitForSingleObject(&v29[5], Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v28 + 136), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 104LL));
      v51 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v28 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v50, &EventBlockThread, v52, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v28 + 136), 1u);
      if ( v51 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v28 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 104LL, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v23 != -464 && *(struct _KTHREAD **)(v23 + 472) == KeGetCurrentThread() )
    {
      v68 = WdLogNewEntry5_WdAssertion(v31, v30);
      *(_QWORD *)(v68 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v68);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v23 + 464, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v69 = *(_DWORD *)(v23 + 488);
        if ( v69 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v32, &EventBlockThread, v33, v69);
      }
      ExAcquirePushLockExclusiveEx(v23 + 464, 0LL);
    }
    *(_QWORD *)(v23 + 472) = KeGetCurrentThread();
    v80 = *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) + 16LL);
    _InterlockedIncrement64((volatile signed __int64 *)v80 + 3);
    v79 = -1LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v80 + 136, 0LL);
    v81 = 1;
    v34 = *(_QWORD *)(v23 + 16);
    v35 = *(volatile signed __int64 **)(*(_QWORD *)(v34 + 16) + 16LL);
    v93 = (struct DXGADAPTER *)v35;
    v94 = 0;
    v95 = 0LL;
    if ( v35 )
    {
      _InterlockedIncrement64(v35 + 3);
      v92 = -1LL;
    }
    v36 = *(volatile signed __int64 **)(*(_QWORD *)(v34 + 16) + 16LL);
    v99 = (struct DXGADAPTER *)v36;
    v100 = 0;
    v101 = 0LL;
    if ( v36 )
    {
      _InterlockedIncrement64(v36 + 3);
      v98 = -1LL;
    }
    v102 = v34;
    v103 = 0;
    if ( v94 )
    {
      v70 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v34);
      v70[5] = v91;
      v70[3] = 275LL;
      v70[4] = 4LL;
      v70[6] = 0LL;
      v70[7] = 0LL;
      WdLogEvent5_WdCriticalError(v70);
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v93 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v93 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v37, &EventBlockThread, v38, 72);
        KeWaitForSingleObject((char *)v93 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v93, a3);
    }
    v95 = 0LL;
    if ( a3 )
    {
      v71 = RtlStringCbCopyA(v96, v34, a3);
      v72 = v96;
      if ( v71 < 0 )
        v72 = v95;
      v95 = v72;
    }
    v94 = 1;
    if ( *(_DWORD *)(v102 + 576) == 1 )
    {
      v85.QuadPart = -100000LL;
      v39 = SubmitPresentHistoryToken(
              a2,
              (struct COREDEVICEACCESS *)v90,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v79,
              0LL,
              0,
              &v85,
              0LL,
              0LL,
              (struct DXGCONTEXT *)v23,
              0LL,
              a3);
    }
    else
    {
      COREACCESS::Release((COREACCESS *)v91);
      if ( v103 )
        COREACCESS::Release((COREACCESS *)v97);
      v73 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v73[3] = -1073741130LL;
      v73[4] = v23;
      v73[5] = v14;
      WdLogEvent5_WdEvent(v73);
      v39 = -1073741130;
    }
    v40 = v99;
    if ( v99 )
    {
      if ( v100 )
      {
        COREACCESS::Release((COREACCESS *)v97);
        v40 = v99;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v40 + 2), v40);
    }
    v41 = v93;
    if ( v93 )
    {
      if ( v94 )
      {
        v94 = 0;
        v41 = v93;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v93 + 23) )
        {
          DXGADAPTER::ReleaseCoreResource(v93, v95);
          v41 = v93;
        }
        v95 = 0LL;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v41 + 2), v41);
    }
    if ( v81 )
    {
      v81 = 0;
      ExReleasePushLockSharedEx((char *)v80 + 136, 0LL);
      KeLeaveCriticalRegion();
      v42 = (DXGGLOBAL **)v80;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v80 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(v42[2], (struct DXGADAPTER *)v42);
    }
    *(_QWORD *)(v23 + 472) = 0LL;
    ExReleasePushLockExclusiveEx(v23 + 464, 0LL);
    KeLeaveCriticalRegion();
    ExReleaseResourceLite(*(PERESOURCE *)(v28 + 136));
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v74 = *(_QWORD *)(v23 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v89,
        (struct DXGDEVICE *)v74);
      v75 = *(_QWORD *)(v23 + 16);
      v88 = 0;
      v87 = *(_QWORD *)(*(_QWORD *)(v75 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v86);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v104, v74, 2, v76, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v104, v77);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v74 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v74, (struct DXGCONTEXT *)v23, (struct COREDEVICEACCESS *)v104);
      COREACCESS::~COREACCESS((COREACCESS *)v106);
      COREACCESS::~COREACCESS((COREACCESS *)v105);
      if ( v88 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v86);
      if ( v89[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v89);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v74 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v74 + 16), (struct DXGDEVICE *)v74);
    }
  }
  else
  {
    v39 = -1073741811;
    v62 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
    v62[3] = -1073741811LL;
    v67 = PsGetCurrentProcess(v64, v63, v65, v66);
    v62[5] = v4;
    v62[4] = v67;
    WdLogEvent5_WdError(v62);
  }
LABEL_57:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v82, v43);
  if ( v84 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v82);
  return v39;
}
