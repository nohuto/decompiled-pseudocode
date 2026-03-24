/*
 * XREFs of ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C010DD90
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C010DAE0 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0004BC8 (W32GetThreadWin32Thread.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0004C60 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0004D20 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0004DC0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C010E508 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C012456C (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C0134E10 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1C01350A0 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C015C100 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyDeferredAllocations(DXGDEVICE *this, struct DXGTERMINATIONTRACKER *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  void **v8; // rdi
  _QWORD *v9; // rbx
  int i; // r12d
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rdi
  int v24; // r13d
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  int *ThreadProperty; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // r12d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  void **v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rcx
  char v46; // di
  __int64 v47; // r13
  __int64 v48; // rbx
  int v49; // eax
  __int64 v50; // r15
  __int64 v51; // rax
  void *v52; // rcx
  void *v53; // r12
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  bool v57; // sf
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  unsigned int v62; // r8d
  __int64 j; // rax
  __int64 v64; // rax
  int v66; // r9d
  int v67; // r9d
  struct DXGTHREAD *Current; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  void *v71; // rcx
  __int64 ThreadWin32Thread; // rax
  _QWORD *v73; // rax
  __int64 v74; // rcx
  _QWORD *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // [rsp+38h] [rbp-D0h]
  __int64 v84; // [rsp+38h] [rbp-D0h]
  __int64 v85; // [rsp+40h] [rbp-C8h]
  int v86; // [rsp+40h] [rbp-C8h]
  void **v87; // [rsp+48h] [rbp-C0h]
  void **v88[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 CurrentIrql; // [rsp+60h] [rbp-A8h]
  _QWORD v90[2]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v91[5]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v92[16]; // [rsp+A0h] [rbp-68h] BYREF
  char v93[8]; // [rsp+B0h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v95[128]; // [rsp+E8h] [rbp-20h] BYREF

  memset(v95, 0, sizeof(v95));
  v7 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 || (v8 = *(void ***)(v7 + 64), (v87 = v8) == 0LL) )
  {
    v8 = (void **)v95;
    v87 = (void **)v95;
  }
  *(_OWORD *)v88 = 0LL;
  if ( v7 )
  {
    v59 = WdLogNewEntry5_WdTrace(v5, v4);
    *(_QWORD *)(v59 + 24) = *(_QWORD *)a2;
    v4 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
    v5 = *(_QWORD *)(v4 + 40);
    *(_QWORD *)(v59 + 32) = v5;
  }
  v9 = (_QWORD *)*((_QWORD *)a2 + 1);
  for ( i = 0; v9; v9 = (_QWORD *)v9[8] )
  {
    v11 = WdLogNewEntry5_WdTrace(v5, v4);
    *(_QWORD *)(v11 + 24) = v9;
    *(_QWORD *)(v11 + 32) = *(_QWORD *)(v9[1] + 40LL);
    v4 = v9[3];
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                          + 8LL)
                                                              + 168LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
        v4,
        0LL,
        *((unsigned int *)a2 + 12));
      v9[3] = 0LL;
    }
    v5 = v9[4];
    if ( v5 )
    {
      v8[LODWORD(v88[0])] = (void *)v5;
      ++LODWORD(v88[0]);
      v9[4] = 0LL;
    }
  }
  if ( LODWORD(v88[0]) )
  {
    v12 = *((_QWORD *)this + 2);
    v83 = *((_QWORD *)this + 73);
    v88[1] = v8;
    LODWORD(v90[0]) = -1;
    v90[1] = 0LL;
    if ( (qword_1C00B19B0 & 2) != 0 )
    {
      LOBYTE(v91[0]) = 1;
      LODWORD(v90[0]) = 5029;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 5029);
    }
    else
    {
      LOBYTE(v91[0]) = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v90, 5029LL);
    CurrentProcess = PsGetCurrentProcess(v14, v13, v15, v16);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v21 = ProcessDxgProcess;
    if ( (!ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0)
      && (Current = DXGTHREAD::GetCurrent(v20, v19)) != 0LL
      && (v22 = *((_QWORD *)Current + 1)) != 0
      || (v22 = v21) != 0 )
    {
      v23 = v22 + 112;
    }
    else
    {
      v23 = 0LL;
    }
    v24 = 0;
    if ( v23 && *(struct _KTHREAD **)(v23 + 8) == KeGetCurrentThread() )
    {
      v69 = WdLogNewEntry5_WdAssertion(v20, v19);
      *(_QWORD *)(v69 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v69);
    }
    if ( v22 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v23, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v66 = *(_DWORD *)(v23 + 24);
          if ( v66 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v25, &EventBlockThread, v26, v66);
        }
        ExAcquirePushLockExclusiveEx(v23, 0LL);
      }
      v24 = 2;
      *(_QWORD *)(v23 + 8) = KeGetCurrentThread();
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v12 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v12 + 16) + 4364LL));
    CurrentIrql = KeGetCurrentIrql();
    ThreadProperty = 0LL;
    if ( (unsigned __int8)CurrentIrql >= 2u )
      goto LABEL_33;
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v70 = WdLogNewEntry5_WdAssertion(v28, v27);
      *(_QWORD *)(v70 + 24) = 507LL;
      WdLogEvent5_WdAssertion(v70);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v28, v27);
    v36 = PsGetCurrentProcess(v33, v32, v34, v35);
    v85 = PsGetProcessDxgProcess(v36);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && v85
      && (v71 = *(void **)(v85 + 88)) != 0LL
      && v71 != &gDxgkWin32kEngInterface
      && (ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread)) != 0 )
    {
      ThreadProperty = *(int **)(ThreadWin32Thread + 80);
    }
    else
    {
      ThreadProperty = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
      if ( !ThreadProperty )
      {
        ThreadProperty = (int *)DxgkThreadObjectCreateDxgThread();
        if ( !ThreadProperty )
        {
          i = 0;
          ThreadProperty = 0LL;
LABEL_33:
          DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
            (DXGVALIDATIONPROCESSATTACH *)v93,
            *(struct DXGADAPTER **)(v12 + 16));
          v86 = (*(__int64 (__fastcall **)(__int64, void ***))(*(_QWORD *)(v12 + 16) + 632LL))(v83, v88);
          if ( v93[0] )
            KeUnstackDetachProcess(&ApcState);
          v38 = KeGetCurrentIrql();
          if ( (_BYTE)CurrentIrql != (_BYTE)v38 )
          {
            v73 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38, v37);
            v74 = (unsigned __int8)CurrentIrql;
            v73[3] = 275LL;
            v73[4] = 16LL;
            v73[5] = v12;
            v73[6] = v74;
            LOBYTE(v74) = KeGetCurrentIrql();
            v73[7] = (unsigned __int8)v74;
            WdLogEvent5_WdCriticalError(v73);
          }
          if ( ThreadProperty && ThreadProperty[8] != i )
          {
            v75 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38, v37);
            v75[3] = 275LL;
            v75[4] = 38LL;
            v75[5] = ThreadProperty[8];
            v75[6] = i;
            v75[7] = 0LL;
            WdLogEvent5_WdCriticalError(v75);
          }
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v12 + 16) + 4364LL));
          v39 = (_QWORD *)WdLogNewEntry5_WdTrace(v38, v37);
          v39[3] = v86;
          v39[4] = v83;
          v39[5] = LODWORD(v88[0]);
          v40 = v88[1];
          v41 = (__int64)*v88[1];
          v39[6] = *v88[1];
          if ( v86 )
          {
            v76 = WdLogNewEntry5_WdError(v40, v41);
            *(_QWORD *)(v76 + 24) = v86;
            WdLogEvent5_WdError(v76);
          }
          DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v12 + 16));
          if ( v24 == 2 )
          {
            *(_QWORD *)(v23 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v23, 0LL);
            KeLeaveCriticalRegion();
          }
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v90, v42);
          if ( LOBYTE(v91[0]) && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v90[0]);
          goto LABEL_45;
        }
      }
      ObfDereferenceObject(ThreadProperty);
    }
    if ( ThreadProperty )
      i = ThreadProperty[8];
    else
      i = 0;
    goto LABEL_33;
  }
LABEL_45:
  v45 = *(_QWORD *)a2;
  v46 = 1;
  v84 = 0LL;
  v47 = 0LL;
  if ( *(_QWORD *)a2 )
  {
    if ( (*(_DWORD *)(v45 + 4) & 1) != 0 )
    {
      v60 = *(_QWORD *)(v45 + 56);
      if ( v60 )
      {
        v61 = *(_QWORD *)(v60 + 152);
        if ( v61 )
        {
          if ( *(DXGDEVICE **)(v61 + 72) == this && (*(_DWORD *)(v61 + 64))-- == 1 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v92,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 152LL) + 8LL),
              0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v92);
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 152LL) + 72LL) = 0LL;
            if ( v92[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v92, v4);
          }
        }
        v62 = 0;
        for ( j = *(_QWORD *)(*(_QWORD *)a2 + 24LL); j; ++v62 )
          j = *(_QWORD *)(j + 64);
        v45 = *(_QWORD *)(*(_QWORD *)a2 + 56LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v45 + 68), 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v45, v87, v62);
        *(_QWORD *)(*(_QWORD *)a2 + 56LL) = 0LL;
      }
      v46 = 0;
    }
    else
    {
      v47 = *(_QWORD *)(v45 + 56);
      v84 = v47;
    }
  }
  v48 = *((_QWORD *)a2 + 1);
  memset(&v91[1], 0, 32);
  if ( v48 )
  {
    while ( 1 )
    {
      v49 = *(_DWORD *)(v48 + 72);
      v50 = *(_QWORD *)(v48 + 64);
      if ( (v49 & 0x800) != 0 )
      {
        v77 = WdLogNewEntry5_WdAssertion(v45, v4);
        *(_QWORD *)(v77 + 24) = 1916LL;
        WdLogEvent5_WdAssertion(v77);
        v49 = *(_DWORD *)(v48 + 72);
      }
      if ( (v49 & 0x7FE) != 0 )
      {
        v78 = WdLogNewEntry5_WdAssertion(v45, v4);
        *(_QWORD *)(v78 + 24) = 1917LL;
        WdLogEvent5_WdAssertion(v78);
      }
      v51 = *(_QWORD *)(v48 + 48);
      if ( v51 )
      {
        if ( !v46 )
          goto LABEL_88;
        if ( *(_QWORD *)(v51 + 8) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 136LL))(
            *((_QWORD *)this + 95),
            0LL);
          *(_QWORD *)(*(_QWORD *)(v48 + 48) + 8LL) = 0LL;
          v51 = *(_QWORD *)(v48 + 48);
        }
        v52 = *(void **)(v51 + 16);
        if ( v52 )
        {
          v87[LODWORD(v91[1])] = v52;
          ++LODWORD(v91[1]);
          *(_QWORD *)(*(_QWORD *)(v48 + 48) + 16LL) = 0LL;
        }
      }
      else if ( !v46 )
      {
LABEL_88:
        v64 = *(_QWORD *)a2;
        if ( !*(_QWORD *)a2 )
        {
          v79 = WdLogNewEntry5_WdAssertion(v45, v4);
          *(_QWORD *)(v79 + 24) = 1943LL;
          WdLogEvent5_WdAssertion(v79);
          v64 = *(_QWORD *)a2;
        }
        if ( (*(_DWORD *)(v64 + 4) & 1) == 0 )
        {
          v80 = WdLogNewEntry5_WdAssertion(v45, v4);
          *(_QWORD *)(v80 + 24) = 1944LL;
          WdLogEvent5_WdAssertion(v80);
        }
      }
      if ( !*(_QWORD *)a2 || (*(_DWORD *)(*(_QWORD *)a2 + 4LL) & 1) == 0 )
      {
        v53 = *(void **)(v48 + 48);
        if ( v53 )
        {
          DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(*(DXGADAPTERALLOCATION **)(v48 + 48));
          operator delete(v53);
        }
      }
      DXGALLOCATION::~DXGALLOCATION((DXGALLOCATION *)v48);
      ExFreePoolWithTag((PVOID)v48, 0);
      v48 = v50;
      if ( !v50 )
      {
        v47 = v84;
        break;
      }
    }
  }
  if ( v46 )
  {
    LODWORD(v91[4]) = *(_QWORD *)a2 != 0LL;
    v91[3] = v47;
    if ( LODWORD(v91[1]) )
    {
      v91[2] = v87;
    }
    else
    {
      v91[2] = 0LL;
      if ( !v47 )
        goto LABEL_66;
    }
    ADAPTER_RENDER::DdiDestroyAllocation(
      *((ADAPTER_RENDER **)this + 2),
      (const struct _DXGKARG_DESTROYALLOCATION *)&v91[1],
      0);
  }
LABEL_66:
  if ( this != (DXGDEVICE *)-176LL && *((struct _KTHREAD **)this + 23) == KeGetCurrentThread() )
  {
    v81 = WdLogNewEntry5_WdAssertion(v45, v4);
    *(_QWORD *)(v81 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v81);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 176, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v67 = *((_DWORD *)this + 50);
      if ( v67 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v55, &EventBlockThread, v56, v67);
    }
    ExAcquirePushLockExclusiveEx((char *)this + 176, 0LL);
  }
  *((_QWORD *)this + 23) = KeGetCurrentThread();
  v57 = --*((_DWORD *)this + 468) < 0;
  v58 = *((_DWORD *)this + 468);
  if ( v57 )
  {
    v82 = WdLogNewEntry5_WdAssertion(v55, v54);
    *(_QWORD *)(v82 + 24) = 1248LL;
    WdLogEvent5_WdAssertion(v82);
    v58 = *((_DWORD *)this + 468);
  }
  if ( !v58 )
    KeSetEvent(*((PRKEVENT *)this + 235), 0, 0);
  *((_QWORD *)this + 23) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 176, 0LL);
  KeLeaveCriticalRegion();
}
