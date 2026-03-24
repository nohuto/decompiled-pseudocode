/*
 * XREFs of ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x1C010A290
 * Callers:
 *     DxgkReclaimAllocations @ 0x1C010D3C0 (DxgkReclaimAllocations.c)
 *     DxgkReclaimAllocations2 @ 0x1C0117190 (DxgkReclaimAllocations2.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00038D4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0015390 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0025DE8 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0101D00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C015C100 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@PEBI@Z @ 0x1C024BAEC (-VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEB.c)
 */

__int64 __fastcall DXGDEVICE::ReclaimAllocations(
        DXGDEVICE *this,
        __int64 pResources,
        struct _D3DKMT_RECLAIMALLOCATIONS2 *a3,
        __int64 a4)
{
  struct _EX_RUNDOWN_REF *v6; // rbx
  __int64 v7; // rcx
  UINT i; // edx
  BOOL *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 NumAllocations; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // r12d
  const unsigned int *HandleList; // r15
  _BYTE *PoolWithTag; // rax
  const unsigned int *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  UINT v22; // esi
  UINT j; // r9d
  __int64 v24; // r8
  __int64 k; // rdx
  __int64 v26; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v28; // rdx
  unsigned int v29; // ebx
  UINT m; // r15d
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rax
  __int64 v35; // rdx
  struct _EX_RUNDOWN_REF *v36; // rax
  __int64 v37; // rdx
  ULONG_PTR Count; // rdi
  int v39; // esi
  __int64 v40; // r8
  int *v41; // rdx
  __int64 v42; // r10
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r15
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  BOOL *pDiscarded; // rax
  _DWORD *v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // r15
  __int64 v56; // rdx
  DXGALLOCATIONREFERENCE *AllocationSafe; // rdi
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  struct _KTHREAD *v62; // rsi
  __int64 v63; // rax
  int v64; // edi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  __int64 v70; // rbx
  void *v71; // rax
  __int64 v72; // rdi
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  int v78; // ebx
  __int64 v79; // rax
  __int64 *v80; // rax
  int *DxgThread; // rbx
  _QWORD *v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rax
  ULONG_PTR v85; // r8
  BOOL *v86; // rdx
  __int64 v87; // r10
  int v88; // eax
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // rdi
  _QWORD *v92; // rax
  __int64 v93; // rdx
  BOOL *v94; // rcx
  PVOID v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v99; // rax
  int CurrentProcessSessionId; // edi
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rbx
  void *v107; // rax
  __int64 v108; // rdi
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 *ThreadWin32Thread; // rax
  int *ThreadProperty; // rbx
  _QWORD *v120; // rax
  char v121; // [rsp+30h] [rbp-108h]
  struct _EX_RUNDOWN_REF *v122; // [rsp+38h] [rbp-100h] BYREF
  UINT v123; // [rsp+40h] [rbp-F8h]
  struct _EX_RUNDOWN_REF *v124; // [rsp+48h] [rbp-F0h] BYREF
  BOOL v125; // [rsp+50h] [rbp-E8h] BYREF
  int v126; // [rsp+54h] [rbp-E4h] BYREF
  struct DXGPAGINGQUEUE *v127; // [rsp+58h] [rbp-E0h]
  DXGDEVICE *v128; // [rsp+60h] [rbp-D8h]
  const unsigned int *v129; // [rsp+68h] [rbp-D0h]
  UINT v130; // [rsp+70h] [rbp-C8h]
  struct DXGPAGINGQUEUE *v131; // [rsp+78h] [rbp-C0h]
  _BYTE v132[16]; // [rsp+80h] [rbp-B8h] BYREF
  struct _EX_RUNDOWN_REF *v133; // [rsp+90h] [rbp-A8h] BYREF
  PVOID P; // [rsp+A0h] [rbp-98h]
  _BYTE v135[64]; // [rsp+A8h] [rbp-90h] BYREF
  int v136; // [rsp+E8h] [rbp-50h]

  v121 = a4;
  v131 = (struct DXGPAGINGQUEUE *)pResources;
  v128 = this;
  v6 = 0LL;
  v122 = 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( !*(_BYTE *)(v7 + 2613) )
  {
    if ( a3->pDiscarded )
    {
      for ( i = 0; ; ++i )
      {
        v130 = i;
        if ( i >= a3->NumAllocations )
          break;
        v9 = &a3->pDiscarded[i];
        if ( (_BYTE)a4 )
        {
          if ( (unsigned __int64)v9 >= MmUserProbeAddress )
            v9 = (BOOL *)MmUserProbeAddress;
        }
        *v9 = 0;
      }
    }
    v10 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v10 + 24) = this;
    *(_QWORD *)(v10 + 32) = 0LL;
    WdLogEvent5_WdEvent(v10);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v122, v11);
    return 0LL;
  }
  NumAllocations = a3->NumAllocations;
  if ( !(_DWORD)NumAllocations
    || (v16 = 0,
        pResources = (__int64)a3->pResources,
        HandleList = a3->HandleList,
        v7 = HandleList != 0LL,
        (pResources != 0) == (_DWORD)v7) )
  {
    v14 = WdLogNewEntry5_WdWarning(v7, pResources, a3);
    *(_QWORD *)(v14 + 24) = this;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v14);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v122, v15);
    return 3221225485LL;
  }
  if ( pResources )
    HandleList = a3->pResources;
  v129 = HandleList;
  P = 0LL;
  v136 = 0;
  if ( (unsigned int)NumAllocations <= 0x10 )
  {
    PoolWithTag = v135;
  }
  else
  {
    pResources = 0xFFFFFFFFFFFFFFFFuLL % NumAllocations;
    if ( 0xFFFFFFFFFFFFFFFFuLL / NumAllocations < 4 )
      goto LABEL_21;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4 * NumAllocations, 0x4B677844u);
  }
  P = PoolWithTag;
  v136 = NumAllocations;
  v7 = (__int64)PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 4 * NumAllocations);
LABEL_21:
  if ( v121 )
  {
    v19 = (const unsigned int *)P;
    v129 = (const unsigned int *)P;
    if ( !P )
    {
      v20 = WdLogNewEntry5_WdLowResource(v7, pResources, a3, a4);
      *(_QWORD *)(v20 + 24) = this;
      *(_QWORD *)(v20 + 32) = a3->NumAllocations;
      WdLogEvent5_WdLowResource(v20);
      if ( P != v135 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v136 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v122, v21);
      return 3221225495LL;
    }
    v22 = 0;
    for ( j = 0; j < a3->NumAllocations; ++j )
    {
      v24 = j;
      pResources = (__int64)&HandleList[v24];
      v7 = MmUserProbeAddress;
      if ( (unsigned __int64)&HandleList[v24] >= MmUserProbeAddress )
        pResources = MmUserProbeAddress;
      v19[v24] = *(_DWORD *)pResources;
    }
  }
  else
  {
    v19 = HandleList;
    v22 = 0;
  }
  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
  {
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v7, pResources) + 408) <= 0x10u )
    {
      if ( a3->pDiscarded )
      {
        for ( k = 0LL; (unsigned int)k < a3->NumAllocations; k = (unsigned int)(k + 1) )
          a3->pDiscarded[(unsigned int)k] = 0;
      }
      if ( P != v135 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v136 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v122, k);
      return 0LL;
    }
    else
    {
      v26 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      Current = DXGPROCESS::GetCurrent();
      v29 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReclaimAllocations(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v26 + 4240),
              Current,
              this,
              v131,
              a3,
              v19);
      if ( P != v135 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v136 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v122, v28);
      return v29;
    }
  }
  if ( a3->pResources )
  {
    for ( m = 0; ; ++m )
    {
      v123 = m;
      if ( m >= a3->NumAllocations )
        goto LABEL_143;
      v127 = (struct DXGPAGINGQUEUE *)(4LL * m);
      v31 = *(unsigned int *)((char *)v19 + (_QWORD)v127);
      DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v124, v31);
      if ( !v124 )
        break;
      if ( (DXGDEVICE *)v124[1].Count != this )
      {
        v36 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v32, v124);
        v36[3].Count = (ULONG_PTR)this;
        v36[4].Count = v124[1].Count;
        WdLogEvent5_WdError(v36);
        goto LABEL_74;
      }
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v132, (struct DXGFASTMUTEX *const)&v124[10], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v132);
      Count = v124[3].Count;
      v39 = 0;
      if ( Count )
      {
        while ( 1 )
        {
          v40 = *(_QWORD *)(Count + 24);
          if ( !v40 )
          {
            v50 = WdLogNewEntry5_WdError(0LL, v37);
            *(_QWORD *)(v50 + 24) = Count;
            WdLogEvent5_WdError(v50);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v132);
            goto LABEL_74;
          }
          v126 = 0;
          v41 = &v126;
          if ( !a3->pDiscarded )
            v41 = 0LL;
          v42 = v131 ? *((_QWORD *)v131 + 4) : 0LL;
          v43 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, UINT64 *, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                                                 + 8LL)
                                                                                     + 680LL))(
                  *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                  v42,
                  v40,
                  &a3->PagingFenceValue,
                  v41);
          v46 = v43;
          if ( v43 < 0 )
            break;
          if ( v43 == 259 )
            v16 = 259;
          if ( v126 == 2 )
          {
            v39 = 2;
LABEL_78:
            m = v123;
            goto LABEL_79;
          }
          if ( v126 == 1 )
            v39 = 1;
          Count = *(_QWORD *)(Count + 64);
          if ( !Count )
            goto LABEL_78;
        }
        v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v37, v45);
        v47[3] = this;
        v47[4] = Count;
        v47[5] = v46;
        WdLogEvent5_WdWarning(v47);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v132);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v124, v48);
        if ( P != v135 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v136 = 0;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v122, v49);
        return (unsigned int)v46;
      }
LABEL_79:
      pDiscarded = a3->pDiscarded;
      if ( pDiscarded )
      {
        if ( v121 )
        {
          v53 = (_DWORD *)((char *)v127 + (_QWORD)pDiscarded);
          if ( (struct DXGPAGINGQUEUE *)((char *)v127 + (_QWORD)pDiscarded) >= (struct DXGPAGINGQUEUE *)MmUserProbeAddress )
            v53 = (_DWORD *)MmUserProbeAddress;
          *v53 = v39;
        }
        else
        {
          *(_DWORD *)((char *)v127 + (_QWORD)pDiscarded) = v39;
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v132);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v124, v54);
      v19 = v129;
    }
    v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, 0LL, v33);
    v34[3] = this;
    v34[4] = v31;
    v34[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v34);
LABEL_74:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v124, v35);
    if ( P != v135 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_77;
  }
  while ( 1 )
  {
    v123 = v22;
    if ( v22 >= a3->NumAllocations )
    {
LABEL_143:
      v95 = P;
      if ( P != v135 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v136 = 0;
      if ( v6 )
        ExReleaseRundownProtection(v6 + 11);
      if ( !*((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v95, pResources) + 311) )
        return v16;
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v99 = WdLogNewEntry5_WdAssertion(v97, v96);
        *(_QWORD *)(v99 + 24) = 507LL;
        WdLogEvent5_WdAssertion(v99);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v97, v96);
      CurrentProcess = PsGetCurrentProcess(v102, v101, v103, v104);
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
      if ( !CurrentProcessSessionId )
        goto LABEL_162;
      if ( (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId )
        goto LABEL_162;
      if ( !ProcessDxgProcess )
        goto LABEL_162;
      v107 = *(void **)(ProcessDxgProcess + 88);
      if ( !v107 || v107 == &gDxgkWin32kEngInterface )
        goto LABEL_162;
      v108 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v113 = PsGetCurrentProcess(v110, v109, v111, v112),
            ProcessSessionId = PsGetProcessSessionIdEx(v113),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v108 = *ThreadWin32Thread;
      }
      if ( v108 )
      {
        ThreadProperty = *(int **)(v108 + 80);
      }
      else
      {
LABEL_162:
        ThreadProperty = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
        if ( !ThreadProperty )
          ThreadProperty = (int *)DxgkThreadObjectCreateDxgThread();
        if ( !ThreadProperty )
          return v16;
        ObfDereferenceObject(ThreadProperty);
      }
      if ( ThreadProperty && ThreadProperty[8] )
      {
        v120 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v117, v116);
        v120[3] = 275LL;
        v120[4] = 38LL;
        v120[5] = ThreadProperty[8];
        v120[6] = 0LL;
        v120[7] = 0LL;
        WdLogEvent5_WdCriticalError(v120);
      }
      return v16;
    }
    v127 = (struct DXGPAGINGQUEUE *)(4LL * v22);
    v55 = *(unsigned int *)((char *)v19 + (_QWORD)v127);
    AllocationSafe = DXGPROCESS::GetAllocationSafe(
                       *((_QWORD *)this + 5),
                       (DXGALLOCATIONREFERENCE *)&v133,
                       *(const unsigned int *)((char *)v19 + (_QWORD)v127));
    if ( v6 )
      ExReleaseRundownProtection(v6 + 11);
    v6 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    v122 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    *(_QWORD *)AllocationSafe = 0LL;
    v58 = (__int64)v133;
    if ( v133 )
      ExReleaseRundownProtection(v133 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v58, v56) + 311) )
    {
      v62 = KeGetCurrentThread();
      if ( !v62 )
      {
        v63 = WdLogNewEntry5_WdAssertion(v60, v59);
        *(_QWORD *)(v63 + 24) = 507LL;
        WdLogEvent5_WdAssertion(v63);
      }
      v64 = PsGetCurrentProcessSessionId(v60, v59);
      v69 = PsGetCurrentProcess(v66, v65, v67, v68);
      v70 = PsGetProcessDxgProcess(v69);
      if ( !v64 )
        goto LABEL_105;
      if ( (unsigned int)PsGetThreadSessionId(v62) != v64 )
        goto LABEL_105;
      if ( !v70 )
        goto LABEL_105;
      v71 = *(void **)(v70 + 88);
      if ( !v71 || v71 == &gDxgkWin32kEngInterface )
        goto LABEL_105;
      v72 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v77 = PsGetCurrentProcess(v74, v73, v75, v76),
            v78 = PsGetProcessSessionIdEx(v77),
            v79 = PsGetCurrentThreadProcess(),
            v78 == (unsigned int)PsGetProcessSessionIdEx(v79)) )
      {
        v80 = (__int64 *)PsGetThreadWin32Thread(v62);
        if ( v80 )
          v72 = *v80;
      }
      if ( v72 )
      {
        DxgThread = *(int **)(v72 + 80);
      }
      else
      {
LABEL_105:
        DxgThread = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
        if ( !DxgThread )
          DxgThread = (int *)DxgkThreadObjectCreateDxgThread();
        if ( !DxgThread )
        {
LABEL_112:
          v6 = v122;
          v22 = v123;
          goto LABEL_113;
        }
        ObfDereferenceObject(DxgThread);
      }
      if ( DxgThread && DxgThread[8] )
      {
        v82 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v60, v59);
        v82[3] = 275LL;
        v82[4] = 38LL;
        v82[5] = DxgThread[8];
        v82[6] = 0LL;
        v82[7] = 0LL;
        WdLogEvent5_WdCriticalError(v82);
        v6 = v122;
        v22 = v123;
        goto LABEL_113;
      }
      goto LABEL_112;
    }
LABEL_113:
    if ( !v6 )
    {
      v83 = (_QWORD *)WdLogNewEntry5_WdWarning(v60, v59, v61);
      v83[3] = this;
      v83[4] = v55;
      v83[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v83);
      goto LABEL_120;
    }
    if ( (DXGDEVICE *)v6[1].Count != this )
    {
      v84 = WdLogNewEntry5_WdError(v60, v59);
      *(_QWORD *)(v84 + 24) = this;
      *(struct _EX_RUNDOWN_REF *)(v84 + 32) = v6[1];
      goto LABEL_119;
    }
    v85 = v6[3].Count;
    if ( !v85 )
      break;
    v125 = 0;
    v86 = &v125;
    if ( !a3->pDiscarded )
      v86 = 0LL;
    if ( v131 )
      v87 = *((_QWORD *)v131 + 4);
    else
      v87 = 0LL;
    v88 = (*(__int64 (__fastcall **)(_QWORD, __int64, ULONG_PTR, UINT64 *, BOOL *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                                              + 8LL)
                                                                                  + 680LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
            v87,
            v85,
            &a3->PagingFenceValue,
            v86);
    v91 = v88;
    if ( v88 < 0 )
    {
      v92 = (_QWORD *)WdLogNewEntry5_WdWarning(v89, pResources, v90);
      v92[3] = this;
      v92[4] = v6;
      v92[5] = v91;
      WdLogEvent5_WdWarning(v92);
      if ( P != v135 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v136 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v122, v93);
      return (unsigned int)v91;
    }
    if ( v88 == 259 )
      v16 = 259;
    v94 = a3->pDiscarded;
    if ( v94 )
    {
      if ( v121 )
      {
        pResources = (__int64)v127 + (_QWORD)v94;
        if ( (struct DXGPAGINGQUEUE *)((char *)v127 + (_QWORD)v94) >= (struct DXGPAGINGQUEUE *)MmUserProbeAddress )
          pResources = MmUserProbeAddress;
        *(_DWORD *)pResources = v125;
      }
      else
      {
        pResources = (__int64)v127;
        *(BOOL *)((char *)v94 + (_QWORD)v127) = v125;
      }
    }
    ++v22;
    v19 = v129;
  }
  v84 = WdLogNewEntry5_WdError(v60, v59);
  *(_QWORD *)(v84 + 24) = v6;
LABEL_119:
  WdLogEvent5_WdError(v84);
LABEL_120:
  if ( P != v135 && P )
    ExFreePoolWithTag(P, 0);
LABEL_77:
  P = 0LL;
  v136 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v122, v51);
  return 3221225485LL;
}
