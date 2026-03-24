/*
 * XREFs of ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z @ 0x1C01534C0
 * Callers:
 *     DxgkOfferAllocations @ 0x1C0153020 (DxgkOfferAllocations.c)
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
 *     ?VmBusSendOfferAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_OFFERALLOCATIONS@@PEBI@Z @ 0x1C024A658 (-VmBusSendOfferAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_.c)
 */

__int64 __fastcall DXGDEVICE::OfferAllocations(DXGDEVICE *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r13
  struct _D3DKMT_OFFERALLOCATIONS *v5; // r14
  struct _EX_RUNDOWN_REF *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 HandleList; // r15
  _BYTE *PoolWithTag; // rcx
  const unsigned int *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  UINT i; // r9d
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v28; // rdx
  unsigned int v29; // ebx
  UINT NumAllocations; // eax
  UINT v31; // r12d
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  ULONG_PTR Count; // rdi
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r15
  __int64 v42; // rdx
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v51; // rax
  int CurrentProcessSessionId; // edi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rbx
  void *v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 *ThreadWin32Thread; // rax
  int *ThreadProperty; // rbx
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // r13
  __int64 v76; // rdx
  DXGALLOCATIONREFERENCE *AllocationSafe; // rdi
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  struct _KTHREAD *v82; // r15
  __int64 v83; // rax
  int v84; // edi
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rax
  __int64 v90; // rbx
  void *v91; // rax
  __int64 v92; // rdi
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rax
  int v98; // ebx
  __int64 v99; // rax
  __int64 *v100; // rax
  int *DxgThread; // rbx
  _QWORD *v102; // rax
  ULONG_PTR v103; // rdx
  int v104; // eax
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // rdi
  _QWORD *v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rax
  _QWORD *v111; // rax
  _QWORD *v112; // rax
  _QWORD *v113; // rax
  struct _EX_RUNDOWN_REF *v114; // [rsp+30h] [rbp-B8h] BYREF
  struct _EX_RUNDOWN_REF *v115; // [rsp+38h] [rbp-B0h] BYREF
  const unsigned int *v116; // [rsp+40h] [rbp-A8h]
  _BYTE v117[16]; // [rsp+48h] [rbp-A0h] BYREF
  struct _EX_RUNDOWN_REF *v118; // [rsp+58h] [rbp-90h] BYREF
  PVOID P; // [rsp+60h] [rbp-88h]
  _BYTE v120[64]; // [rsp+68h] [rbp-80h] BYREF
  int v121; // [rsp+A8h] [rbp-40h]

  v4 = a3;
  v5 = (struct _D3DKMT_OFFERALLOCATIONS *)a2;
  v115 = (struct _EX_RUNDOWN_REF *)this;
  v7 = 0LL;
  v114 = 0LL;
  v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( !*(_BYTE *)(v8 + 2613) )
  {
    v9 = WdLogNewEntry5_WdEvent(v8, a2);
    *(_QWORD *)(v9 + 24) = this;
    *(_QWORD *)(v9 + 32) = 0LL;
    WdLogEvent5_WdEvent(v9);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v114, v10);
    return 0LL;
  }
  v11 = *(unsigned int *)(a2 + 24);
  if ( !(_DWORD)v11
    || (a2 = *(_QWORD *)(a2 + 8), HandleList = (__int64)v5->HandleList, v8 = HandleList != 0, (a2 != 0) == (_DWORD)v8) )
  {
    v12 = WdLogNewEntry5_WdWarning(v8, a2, a3);
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v12);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v114, v13);
    return 3221225485LL;
  }
  if ( a2 )
    HandleList = a2;
  v116 = (const unsigned int *)HandleList;
  PoolWithTag = 0LL;
  P = 0LL;
  v121 = 0;
  if ( (unsigned int)v11 <= 0x10 )
  {
    PoolWithTag = v120;
    P = v120;
LABEL_12:
    v121 = v11;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 4 * v11);
      PoolWithTag = P;
    }
    goto LABEL_14;
  }
  a2 = 0xFFFFFFFFFFFFFFFFuLL % v11;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v11 >= 4 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4 * v11, 0x4B677844u);
    P = PoolWithTag;
    goto LABEL_12;
  }
LABEL_14:
  if ( v4 )
  {
    v17 = (const unsigned int *)PoolWithTag;
    v116 = (const unsigned int *)PoolWithTag;
    if ( !PoolWithTag )
    {
      v18 = WdLogNewEntry5_WdLowResource(0LL, a2, a3, a4);
      *(_QWORD *)(v18 + 24) = this;
      *(_QWORD *)(v18 + 32) = v5->NumAllocations;
      WdLogEvent5_WdLowResource(v18);
      if ( P != v120 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
      P = 0LL;
      v121 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v114, v19);
      return 3221225495LL;
    }
    for ( i = 0; i < v5->NumAllocations; ++i )
    {
      v21 = 4LL * i;
      a2 = v21 + HandleList;
      if ( v21 + HandleList >= MmUserProbeAddress )
        a2 = MmUserProbeAddress;
      v17[(unsigned __int64)v21 / 4] = *(_DWORD *)a2;
      PoolWithTag = P;
    }
  }
  else
  {
    v17 = (const unsigned int *)HandleList;
  }
  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
  {
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)PoolWithTag, a2) + 408) > 0x10u )
    {
      v26 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      Current = DXGPROCESS::GetCurrent(v23, v22, v24, v25);
      v29 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOfferAllocations(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v26 + 4240),
              Current,
              this,
              v5,
              v17);
      if ( P != v120 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v121 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v114, v28);
      return v29;
    }
    if ( P != v120 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v121 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v114, v22);
    return 0LL;
  }
  NumAllocations = v5->NumAllocations;
  v31 = 0;
  if ( v5->pResources )
  {
    if ( NumAllocations )
    {
      while ( 1 )
      {
        v32 = v17[v31];
        DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v115, v32);
        if ( !v115 )
          break;
        if ( (DXGDEVICE *)v115[1].Count != this )
        {
          v72 = (_QWORD *)WdLogNewEntry5_WdError(v33, v115);
          v72[3] = this;
          v72[4] = v115;
          v72[5] = -1073741811LL;
          WdLogEvent5_WdError(v72);
LABEL_73:
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v115, v47);
          if ( P != v120 && P )
            ExFreePoolWithTag(P, 0);
          goto LABEL_76;
        }
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v117, (struct DXGFASTMUTEX *const)&v115[10], 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v117);
        Count = v115[3].Count;
        if ( Count )
        {
          while ( 1 )
          {
            v37 = *(_QWORD *)(Count + 24);
            if ( !v37 )
            {
              v46 = WdLogNewEntry5_WdError(v35, 0LL);
              *(_QWORD *)(v46 + 24) = Count;
              WdLogEvent5_WdError(v46);
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v117);
              goto LABEL_73;
            }
            v38 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                                         + 8LL)
                                                                             + 672LL))(
                    *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                    v37,
                    (unsigned int)v5->Priority,
                    v5->Flags.Value);
            v41 = v38;
            if ( v38 < 0 )
              break;
            Count = *(_QWORD *)(Count + 64);
            if ( !Count )
              goto LABEL_44;
          }
          v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v39, v40);
          v43[3] = this;
          v43[4] = Count;
          v43[5] = v41;
          WdLogEvent5_WdWarning(v43);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v117);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v115, v44);
          if ( P != v120 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v121 = 0;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v114, v45);
          return (unsigned int)v41;
        }
LABEL_44:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v117);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v115, v42);
        if ( ++v31 >= v5->NumAllocations )
        {
          PoolWithTag = P;
          goto LABEL_52;
        }
        v17 = v116;
      }
      v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, 0LL, v34);
      v73[3] = this;
      v73[4] = v32;
      v73[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v73);
      goto LABEL_73;
    }
    goto LABEL_52;
  }
  if ( !NumAllocations )
  {
LABEL_52:
    if ( PoolWithTag != v120 && PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    P = 0LL;
    v121 = 0;
    if ( v7 )
      ExReleaseRundownProtection(v7 + 11);
    if ( !*((_DWORD *)DXGGLOBAL::GetGlobal((__int64)PoolWithTag, a2) + 311) )
      return 0LL;
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v51 = WdLogNewEntry5_WdAssertion(v49, v48);
      *(_QWORD *)(v51 + 24) = 507LL;
      WdLogEvent5_WdAssertion(v51);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v49, v48);
    CurrentProcess = PsGetCurrentProcess(v54, v53, v55, v56);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    if ( !CurrentProcessSessionId )
      goto LABEL_121;
    if ( (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId )
      goto LABEL_121;
    if ( !ProcessDxgProcess )
      goto LABEL_121;
    v59 = *(void **)(ProcessDxgProcess + 88);
    if ( !v59 || v59 == &gDxgkWin32kEngInterface )
      goto LABEL_121;
    v60 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v65 = PsGetCurrentProcess(v62, v61, v63, v64),
          ProcessSessionId = PsGetProcessSessionIdEx(v65),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v60 = *ThreadWin32Thread;
    }
    if ( v60 )
    {
      ThreadProperty = *(int **)(v60 + 80);
    }
    else
    {
LABEL_121:
      ThreadProperty = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
      if ( !ThreadProperty )
        ThreadProperty = (int *)DxgkThreadObjectCreateDxgThread();
      if ( !ThreadProperty )
        return 0LL;
      ObfDereferenceObject(ThreadProperty);
    }
    if ( ThreadProperty && ThreadProperty[8] )
    {
      v113 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v69, v68);
      v113[3] = 275LL;
      v113[4] = 38LL;
      v113[5] = ThreadProperty[8];
      v113[6] = 0LL;
      v113[7] = 0LL;
      WdLogEvent5_WdCriticalError(v113);
    }
    return 0LL;
  }
  while ( 1 )
  {
    v75 = v17[v31];
    AllocationSafe = DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v118, v17[v31]);
    if ( v7 )
      ExReleaseRundownProtection(v7 + 11);
    v7 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    v114 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    *(_QWORD *)AllocationSafe = 0LL;
    v78 = (__int64)v118;
    if ( v118 )
      ExReleaseRundownProtection(v118 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v78, v76) + 311) )
    {
      v82 = KeGetCurrentThread();
      if ( !v82 )
      {
        v83 = WdLogNewEntry5_WdAssertion(v80, v79);
        *(_QWORD *)(v83 + 24) = 507LL;
        WdLogEvent5_WdAssertion(v83);
      }
      v84 = PsGetCurrentProcessSessionId(v80, v79);
      v89 = PsGetCurrentProcess(v86, v85, v87, v88);
      v90 = PsGetProcessDxgProcess(v89);
      if ( !v84 )
        goto LABEL_96;
      if ( (unsigned int)PsGetThreadSessionId(v82) != v84 )
        goto LABEL_96;
      if ( !v90 )
        goto LABEL_96;
      v91 = *(void **)(v90 + 88);
      if ( !v91 || v91 == &gDxgkWin32kEngInterface )
        goto LABEL_96;
      v92 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v97 = PsGetCurrentProcess(v94, v93, v95, v96),
            v98 = PsGetProcessSessionIdEx(v97),
            v99 = PsGetCurrentThreadProcess(),
            v98 == (unsigned int)PsGetProcessSessionIdEx(v99)) )
      {
        v100 = (__int64 *)PsGetThreadWin32Thread(v82);
        if ( v100 )
          v92 = *v100;
      }
      if ( v92 )
      {
        DxgThread = *(int **)(v92 + 80);
      }
      else
      {
LABEL_96:
        DxgThread = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
        if ( !DxgThread )
          DxgThread = (int *)DxgkThreadObjectCreateDxgThread();
        if ( !DxgThread )
          goto LABEL_103;
        ObfDereferenceObject(DxgThread);
      }
      if ( DxgThread && DxgThread[8] )
      {
        v102 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v80, v79);
        v102[3] = 275LL;
        v102[4] = 38LL;
        v102[5] = DxgThread[8];
        v102[6] = 0LL;
        v102[7] = 0LL;
        WdLogEvent5_WdCriticalError(v102);
      }
LABEL_103:
      v7 = v114;
    }
    if ( !v7 )
      break;
    if ( (DXGDEVICE *)v7[1].Count != this )
    {
      v111 = (_QWORD *)WdLogNewEntry5_WdError(v80, v79);
      v111[3] = this;
      v111[4] = v7;
      v111[5] = -1073741811LL;
      WdLogEvent5_WdError(v111);
      goto LABEL_117;
    }
    v103 = v7[3].Count;
    if ( !v103 )
    {
      v110 = WdLogNewEntry5_WdError(v80, 0LL);
      *(_QWORD *)(v110 + 24) = v7;
      WdLogEvent5_WdError(v110);
      goto LABEL_117;
    }
    v104 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 640LL)
                                                                                    + 8LL)
                                                                        + 672LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
             v103,
             (unsigned int)v5->Priority,
             v5->Flags.Value);
    v107 = v104;
    if ( v104 < 0 )
    {
      v108 = (_QWORD *)WdLogNewEntry5_WdWarning(v105, a2, v106);
      v108[3] = this;
      v108[4] = v7;
      v108[5] = v107;
      WdLogEvent5_WdWarning(v108);
      if ( P != v120 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v121 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v114, v109);
      return (unsigned int)v107;
    }
    ++v31;
    v17 = v116;
    if ( v31 >= v5->NumAllocations )
    {
      PoolWithTag = P;
      goto LABEL_52;
    }
  }
  v112 = (_QWORD *)WdLogNewEntry5_WdWarning(v80, v79, v81);
  v112[3] = this;
  v112[4] = v75;
  v112[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v112);
LABEL_117:
  if ( P != v120 && P )
    ExFreePoolWithTag(P, 0);
LABEL_76:
  P = 0LL;
  v121 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v114, v74);
  return 3221225485LL;
}
