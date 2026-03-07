char __fastcall ExpAcquireFastResourceSharedSlow(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        ULONG_PTR a3,
        KSPIN_LOCK *a4,
        char a5)
{
  unsigned __int8 CurrentIrql; // r12
  ULONG_PTR v7; // rsi
  char v10; // bl
  __int64 FastOwnerEntryForThread2; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v17; // r8
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  __int64 v20; // rax
  signed __int32 *v21; // r8
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  bool v27; // zf
  unsigned __int8 v28; // r15
  char v29; // r12
  signed __int32 *v30; // r8
  signed __int32 v31; // eax
  signed __int32 v32; // ett
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  char v36; // bl
  unsigned __int8 v37; // r8
  _DWORD *v38; // r10
  __int64 v39; // rdx
  struct _KPRCB *v40; // rcx
  signed __int32 *v41; // r8
  signed __int32 v42; // eax
  signed __int32 v43; // ett
  signed __int64 v44; // rax
  char v45; // r8
  unsigned __int64 v46; // rcx
  signed __int64 v47; // rcx
  signed __int64 v48; // rtt
  __int64 v49; // rdx
  char v50; // r13
  int v51; // r12d
  int v52; // r15d
  int v53; // r13d
  void *v54; // rbx
  char v55; // al
  __int64 v56; // r8
  __int64 v57; // rdx
  signed __int32 *v58; // r8
  signed __int32 v59; // eax
  signed __int32 v60; // ett
  __int64 v61; // rdx
  char v62; // r12
  char v63; // r15
  int v64; // ebx
  int v65; // r12d
  int v66; // r15d
  struct _KPRCB *v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rdx
  signed __int32 *v70; // r8
  signed __int32 v71; // eax
  signed __int32 v72; // ett
  unsigned __int8 v73; // al
  struct _KPRCB *v74; // r10
  _DWORD *v75; // r9
  int v76; // eax
  char v78; // [rsp+30h] [rbp-51h]
  unsigned __int8 v79; // [rsp+38h] [rbp-49h]
  __int128 v80; // [rsp+48h] [rbp-39h] BYREF
  __int128 v81; // [rsp+58h] [rbp-29h]
  __int128 v82; // [rsp+68h] [rbp-19h] BYREF
  ULONG_PTR v83; // [rsp+78h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-1h] BYREF
  char v85; // [rsp+F0h] [rbp+6Fh]

  CurrentIrql = 0;
  v83 = 0LL;
  v79 = 0;
  v7 = a3;
  v10 = 0;
  v85 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  _disable();
  v78 = 1;
  FastOwnerEntryForThread2 = ExpFindFastOwnerEntryForThread2((_DWORD)a4, BugCheckParameter2, a3, 0);
  v12 = -1LL;
  v13 = FastOwnerEntryForThread2;
  if ( FastOwnerEntryForThread2 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v79 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v15) = 4;
      else
        v15 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v15;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v17 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v17 )
    {
      _m_prefetchw(v17);
      v18 = *v17;
      do
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange(v17, v18 & 0xFFDFFFFF, v18);
      }
      while ( v19 != v18 );
      if ( (v18 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v85 = 1;
    v78 = 0;
    v20 = ExpFindFastOwnerEntryForThread2((_DWORD)a4, BugCheckParameter2, (_DWORD)v17, 0);
    v12 = -1LL;
    v13 = v20;
  }
  if ( v13 && (*(_BYTE *)(v13 + 37) & 4) == 0 )
  {
    if ( v13 == BugCheckParameter2 + 64 )
    {
      ++*(_DWORD *)(v13 + 32);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 4uLL);
      if ( a2 != BugCheckParameter2 + 64 )
        *(_QWORD *)(a2 + 24) = BugCheckParameter2;
      *(_QWORD *)(a2 + 16) = a4;
      *(_DWORD *)(a2 + 32) = 1;
      ExpAddFastOwnerEntryToThreadList2(a4, v13, 0LL, a2);
    }
    if ( v78 )
    {
      v12 = (__int64)KeGetCurrentPrcb();
      v21 = *(signed __int32 **)(v12 + 35000);
      if ( v21 )
      {
        _m_prefetchw(v21);
        v22 = *v21;
        do
        {
          v23 = v22;
          v22 = _InterlockedCompareExchange(v21, v22 & 0xFFDFFFFF, v22);
        }
        while ( v23 != v22 );
        if ( (v22 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
      _enable();
      v78 = 0;
    }
    if ( v85 )
    {
      if ( KiIrqlFlags )
      {
        v12 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)v12 <= 0xFu && CurrentIrql <= 0xFu && (unsigned __int8)v12 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v12 = (unsigned int)CurrentIrql + 1;
          v25 = v24->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v27 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
      __writecr8(CurrentIrql);
      v85 = 0;
    }
    if ( !v7 )
      goto LABEL_41;
    KeAbPostReleaseEx(BugCheckParameter2, v7);
LABEL_40:
    v7 = 0LL;
LABEL_41:
    v10 = 1;
LABEL_42:
    v28 = v79;
    v29 = v85;
    goto LABEL_43;
  }
  if ( (a5 & 8) == 0 )
    goto LABEL_42;
  v36 = 0;
  if ( v78 )
  {
    v37 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v37 <= 0xFu )
    {
      v38 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v37 == 2 )
        LODWORD(v39) = 4;
      else
        v39 = (-1LL << (v37 + 1)) & 4;
      v38[5] |= v39;
    }
    v40 = KeGetCurrentPrcb();
    v79 = v37;
    v41 = (signed __int32 *)v40->SchedulerAssist;
    if ( v41 )
    {
      _m_prefetchw(v41);
      v42 = *v41;
      do
      {
        v43 = v42;
        v42 = _InterlockedCompareExchange(v41, v42 & 0xFFDFFFFF, v42);
      }
      while ( v43 != v42 );
      if ( (v42 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v40);
    }
    _enable();
    v85 = 1;
    v78 = 0;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(BugCheckParameter2 + 48), &LockHandle);
  _m_prefetchw((const void *)BugCheckParameter2);
  v44 = *(_QWORD *)BugCheckParameter2;
  do
  {
    v45 = 0;
    if ( *(_QWORD *)(BugCheckParameter2 + 16) || *(_DWORD *)(BugCheckParameter2 + 56) )
      v46 = v44 | 2;
    else
      v46 = v44 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( ((v46 & 2) != 0 || (a5 & 2) == 0) && (a5 & 4) == 0 || (v46 & 1) != 0 )
    {
      v47 = v46 | 2;
    }
    else
    {
      v45 = 1;
      v47 = v46 + 4;
    }
    if ( v47 == v44 )
      break;
    v48 = v44;
    v44 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v47, v44);
  }
  while ( v48 != v44 );
  if ( v45 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v50 = 1;
    if ( (a5 & 0x10) != 0 )
      v50 = 13;
    v51 = v50 & 2;
    v52 = v50 & 4;
    v53 = v50 & 8;
    if ( a2 != BugCheckParameter2 + 64 )
      *(_QWORD *)(a2 + 24) = BugCheckParameter2;
    *(_DWORD *)(a2 + 32) = 1;
    v54 = a4;
    *(_QWORD *)(a2 + 16) = (unsigned __int64)a4 | (v52 != 0);
    if ( v7 )
    {
      v55 = 2 * *(_BYTE *)(v7 + 16);
      *(_BYTE *)(v7 + 18) = 1;
      *(_BYTE *)(a2 + 36) = v55 | 1;
    }
    if ( v51 )
      _disable();
    if ( v52 )
    {
      KxAcquireSpinLock(a4 + 209);
      LOBYTE(v56) = 1;
      ExpAddFastOwnerEntryToThreadList2(a4, v57, v56, a2);
      KeReleaseSpinLockFromDpcLevel(a4 + 209);
      v54 = a4;
    }
    else
    {
      ExpAddFastOwnerEntryToThreadList2(a4, v49, 0LL, a2);
    }
    if ( v51 )
    {
      v12 = (__int64)KeGetCurrentPrcb();
      v58 = *(signed __int32 **)(v12 + 35000);
      if ( v58 )
      {
        _m_prefetchw(v58);
        v59 = *v58;
        do
        {
          v60 = v59;
          v59 = _InterlockedCompareExchange(v58, v59 & 0xFFDFFFFF, v59);
        }
        while ( v60 != v59 );
        if ( (v59 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
      _enable();
    }
    if ( v52 )
    {
      if ( v53 && v7 )
        KeAbMarkCrossThreadReleasable(v12, (__int64 *)v7);
      ObfReferenceObject(v54);
    }
    goto LABEL_40;
  }
  ++*(_DWORD *)(BugCheckParameter2 + 56);
  if ( v7 )
    KeAbPreWait((__int64 *)v7);
  *((_QWORD *)&v80 + 1) = 0LL;
  *((_QWORD *)&v82 + 1) = &v82;
  *((_QWORD *)&v81 + 1) = 393217LL;
  *(_QWORD *)&v82 = &v82;
  *(_QWORD *)&v81 = a4;
  v83 = v7;
  RtlInsertHeadCircularList((__int64 *)(BugCheckParameter2 + 8), &v80);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (a5 & 0x10) != 0 )
    v36 = 4;
  v62 = v36;
  v63 = v36;
  v64 = v36 & 8;
  v65 = v62 & 2;
  v66 = v63 & 4;
  if ( a2 != BugCheckParameter2 + 64 )
    *(_QWORD *)(a2 + 24) = BugCheckParameter2;
  *(_DWORD *)(a2 + 32) = 1;
  *(_QWORD *)(a2 + 16) = (unsigned __int64)a4 | (v66 != 0);
  if ( v7 )
    *(_BYTE *)(a2 + 36) = (2 * *(_BYTE *)(v7 + 16)) | 1;
  if ( v65 )
    _disable();
  if ( v66 )
  {
    KxAcquireSpinLock(a4 + 209);
    LOBYTE(v68) = 1;
    ExpAddFastOwnerEntryToThreadList2(a4, v69, v68, a2);
    KeReleaseSpinLockFromDpcLevel(a4 + 209);
  }
  else
  {
    ExpAddFastOwnerEntryToThreadList2(a4, v61, 0LL, a2);
  }
  if ( v65 )
  {
    v67 = KeGetCurrentPrcb();
    v70 = (signed __int32 *)v67->SchedulerAssist;
    if ( v70 )
    {
      _m_prefetchw(v70);
      v71 = *v70;
      do
      {
        v72 = v71;
        v71 = _InterlockedCompareExchange(v70, v71 & 0xFFDFFFFF, v71);
      }
      while ( v72 != v71 );
      if ( (v71 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v67);
    }
    _enable();
  }
  if ( v66 )
  {
    if ( v64 && v7 )
      KeAbMarkCrossThreadReleasable((__int64)v67, (__int64 *)v7);
    ObfReferenceObject(a4);
  }
  *(_BYTE *)(a2 + 37) |= 4u;
  v28 = v79;
  if ( KiIrqlFlags )
  {
    v73 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v73 <= 0xFu && v79 <= 0xFu && v73 >= 2u )
    {
      v74 = KeGetCurrentPrcb();
      v75 = v74->SchedulerAssist;
      v76 = ~(unsigned __int16)(-1LL << (v79 + 1));
      v27 = (v76 & v75[5]) == 0;
      v75[5] &= v76;
      if ( v27 )
        KiRemoveSystemWorkPriorityKick(v74);
    }
  }
  __writecr8(v79);
  v29 = 0;
  ExpWaitForFastResource2(BugCheckParameter2, &v80, 66116LL);
  *(_BYTE *)(a2 + 37) &= ~4u;
  if ( v7 )
    KeAbPreAcquire(BugCheckParameter2, v7);
  v10 = 1;
LABEL_43:
  if ( v78 )
  {
    v12 = (__int64)KeGetCurrentPrcb();
    v30 = *(signed __int32 **)(v12 + 35000);
    if ( v30 )
    {
      _m_prefetchw(v30);
      v31 = *v30;
      do
      {
        v32 = v31;
        v31 = _InterlockedCompareExchange(v30, v31 & 0xFFDFFFFF, v31);
      }
      while ( v32 != v31 );
      if ( (v31 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v12);
    }
    _enable();
  }
  if ( v29 )
  {
    if ( KiIrqlFlags )
    {
      v12 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)v12 <= 0xFu && v28 <= 0xFu && (unsigned __int8)v12 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v12 = (unsigned int)v28 + 1;
        v34 = v33->SchedulerAssist;
        v35 = ~(unsigned __int16)(-1LL << (v28 + 1));
        v27 = (v35 & v34[5]) == 0;
        v34[5] &= v35;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
    __writecr8(v28);
  }
  if ( v7 )
  {
    if ( v10 )
      *(_BYTE *)(v7 + 18) = 1;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v7);
    if ( (a5 & 0x10) != 0 )
      KeAbMarkCrossThreadReleasable(v12, (__int64 *)v7);
  }
  return v10;
}
