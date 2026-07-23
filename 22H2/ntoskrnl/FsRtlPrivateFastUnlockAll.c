/*
 * XREFs of FsRtlPrivateFastUnlockAll @ 0x1402F7DB4
 * Callers:
 *     FsRtlFastUnlockAll @ 0x1402F7D90 (FsRtlFastUnlockAll.c)
 *     FsRtlFastUnlockAllByKey @ 0x1404EF610 (FsRtlFastUnlockAllByKey.c)
 *     FsRtlProcessFileLock @ 0x1404EFC10 (FsRtlProcessFileLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140252644 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseQueuedSpinLock @ 0x140291250 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402912F0 (KeAcquireQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoGetRequestorProcess @ 0x1402D99A0 (IoGetRequestorProcess.c)
 *     RtlDelete @ 0x1402DA140 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x1402DA1E0 (FsRtlPrivateResetLowestLockOffset.c)
 *     RtlRealSuccessor @ 0x1402F80C0 (RtlRealSuccessor.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402F8104 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlSplitLocks @ 0x1402F8578 (FsRtlSplitLocks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     FsRtlCompleteLockIrpReal @ 0x1404EF5B0 (FsRtlCompleteLockIrpReal.c)
 */

__int64 __fastcall FsRtlPrivateFastUnlockAll(
        __int64 a1,
        _RTL_SPLAY_LINKS *a2,
        struct _KPROCESS *a3,
        int a4,
        char a5,
        __int64 a6)
{
  __int64 *v6; // r13
  _RTL_SPLAY_LINKS *v7; // rdi
  KSPIN_LOCK *v8; // rsi
  KIRQL v9; // al
  _RTL_SPLAY_LINKS *v10; // r8
  _RTL_SPLAY_LINKS *v11; // r14
  KIRQL v12; // bp
  unsigned int v13; // ebx
  _RTL_SPLAY_LINKS *i; // rax
  PRTL_SPLAY_LINKS v15; // rax
  _RTL_SPLAY_LINKS *v16; // rcx
  _RTL_SPLAY_LINKS *Parent; // r15
  _RTL_SPLAY_LINKS *v18; // rbx
  _RTL_SPLAY_LINKS *v19; // r13
  _RTL_SPLAY_LINKS *v20; // rdx
  _RTL_SPLAY_LINKS *v21; // r9
  _RTL_SPLAY_LINKS *v22; // rcx
  PRTL_SPLAY_LINKS v23; // rbx
  void *v24; // rdi
  void **v25; // r15
  _RTL_SPLAY_LINKS *j; // rax
  PRTL_SPLAY_LINKS v28; // rdi
  bool v29; // zf
  _RTL_SPLAY_LINKS *v30; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v34; // eax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  PVOID v39; // rbx
  _RTL_SPLAY_LINKS *LeftChild; // rax
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  KIRQL v45; // al
  _RTL_SPLAY_LINKS *k; // rax
  __int64 v47; // r14
  __int64 v48; // r13
  KIRQL v49; // dl
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r8
  _DWORD *v52; // r10
  int v53; // eax
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r9
  _DWORD *v56; // r8
  int v57; // eax
  int v58; // [rsp+30h] [rbp-88h] BYREF
  __int64 *v59; // [rsp+38h] [rbp-80h]
  _RTL_SPLAY_LINKS *v60; // [rsp+40h] [rbp-78h] BYREF
  PRTL_SPLAY_LINKS v61; // [rsp+48h] [rbp-70h]
  _RTL_SPLAY_LINKS *v62; // [rsp+50h] [rbp-68h]
  _RTL_SPLAY_LINKS *v63; // [rsp+58h] [rbp-60h] BYREF
  PVOID Entry; // [rsp+60h] [rbp-58h]
  char v65; // [rsp+C0h] [rbp+8h]

  v6 = *(__int64 **)(a1 + 24);
  v7 = 0LL;
  v58 = 0;
  v60 = 0LL;
  Entry = 0LL;
  v59 = v6;
  if ( !v6 )
    return 3221225598LL;
  v8 = (KSPIN_LOCK *)(v6 + 3);
  a2[5].Parent = 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 3);
  v11 = (_RTL_SPLAY_LINKS *)v6[4];
  v12 = v9;
  if ( !v11 && !v6[5] )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)v6 + 3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v12 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << (v12 + 1));
          v29 = (v34 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v34;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    v13 = -1073741698;
    goto LABEL_28;
  }
  if ( !v11 )
    goto LABEL_24;
  for ( i = v11->LeftChild; i; i = i->LeftChild )
    v11 = i;
  v65 = 0;
  do
  {
    v15 = RtlRealSuccessor(v11);
    v16 = v11 - 1;
    v61 = v15;
    Parent = v11[-1].Parent;
    v18 = 0LL;
    v63 = 0LL;
    v19 = 0LL;
    v60 = 0LL;
    v20 = v11 - 1;
    v62 = v11 - 1;
    if ( !Parent )
    {
      v7 = 0LL;
      goto LABEL_20;
    }
    v21 = a2;
    while ( 1 )
    {
      v10 = v19;
      Entry = Parent;
      if ( Parent[1].LeftChild == v21
        && (struct _KPROCESS *)Parent[1].RightChild == a3
        && (!a5 || HIDWORD(Parent[1].Parent) == a4) )
      {
        break;
      }
      v20 = Parent;
      v62 = Parent;
LABEL_14:
      if ( !v19 )
      {
        if ( Parent[2].Parent > v18 )
          v18 = Parent[2].Parent;
        v60 = v18;
      }
      Parent = v20->Parent;
      if ( !v20->Parent )
        goto LABEL_19;
    }
    v29 = v19 == 0LL;
    v19 = v20;
    if ( !v29 )
      v19 = v10;
    if ( Parent[2].Parent > v7 )
      v7 = Parent[2].Parent;
    v30 = v16[2].Parent;
    v63 = v7;
    if ( v20->Parent == v30 )
      v16[2].Parent = v20;
    v20->Parent = Parent->Parent;
    if ( !v59[2] )
    {
      ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, Parent);
      v20 = v62;
      v16 = v11 - 1;
      v21 = a2;
      goto LABEL_14;
    }
    v65 = 1;
LABEL_19:
    v7 = 0LL;
    if ( v19 )
    {
      if ( v16->Parent )
      {
        FsRtlSplitLocks(v16, v19, &v63, &v60);
      }
      else
      {
        v8[1] = (KSPIN_LOCK)RtlDelete(v11);
        ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, &v11[-1]);
      }
    }
LABEL_20:
    if ( !v65 )
    {
      v6 = v59;
      goto LABEL_22;
    }
    KxReleaseSpinLock(v8);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v35 = KeGetCurrentIrql();
        if ( v35 <= 0xFu && v12 <= 0xFu && v35 >= 2u )
        {
          v36 = KeGetCurrentPrcb();
          v37 = v36->SchedulerAssist;
          v38 = ~(unsigned __int16)(-1LL << (v12 + 1));
          v29 = (v38 & v37[5]) == 0;
          v37[5] &= v38;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(v36);
        }
      }
    }
    __writecr8(v12);
    v39 = Entry;
    v6 = v59;
    ((void (__fastcall *)(__int64, char *))v59[2])(a6, (char *)Entry + 8);
    v12 = KeAcquireSpinLockRaiseToDpc(v8);
    ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v39);
    v22 = (_RTL_SPLAY_LINKS *)v8[1];
    v65 = 0;
    if ( v22 )
    {
      LeftChild = v22->LeftChild;
      if ( LeftChild )
      {
        do
        {
          v61 = LeftChild;
          LeftChild = LeftChild->LeftChild;
        }
        while ( LeftChild );
LABEL_22:
        v22 = v61;
      }
    }
    v11 = v22;
  }
  while ( v22 );
LABEL_24:
  v23 = (PRTL_SPLAY_LINKS)v8[2];
  if ( v23 )
  {
    for ( j = v23->LeftChild; j; j = j->LeftChild )
      v23 = j;
    do
    {
      v28 = RtlRealSuccessor(v23);
      if ( v23[2].Parent == a2
        && (struct _KPROCESS *)v23[2].LeftChild == a3
        && (!a5 || HIDWORD(v23[1].RightChild) == a4) )
      {
        v8[2] = (KSPIN_LOCK)RtlDelete(v23);
        if ( v6[2] )
        {
          KxReleaseSpinLock(v8);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v41 = KeGetCurrentIrql();
              if ( v41 <= 0xFu && v12 <= 0xFu && v41 >= 2u )
              {
                v42 = KeGetCurrentPrcb();
                v43 = v42->SchedulerAssist;
                v44 = ~(unsigned __int16)(-1LL << (v12 + 1));
                v29 = (v44 & v43[5]) == 0;
                v43[5] &= v44;
                if ( v29 )
                  KiRemoveSystemWorkPriorityKick(v42);
              }
            }
          }
          __writecr8(v12);
          ((void (__fastcall *)(__int64, _RTL_SPLAY_LINKS *))v6[2])(a6, &v23[1]);
          v45 = KeAcquireSpinLockRaiseToDpc(v8);
          v28 = (PRTL_SPLAY_LINKS)v8[2];
          v12 = v45;
          if ( v28 )
          {
            for ( k = v28->LeftChild; k; k = k->LeftChild )
              v28 = k;
          }
        }
        ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v23);
      }
      v23 = v28;
    }
    while ( v28 );
  }
  v24 = (void *)v8[3];
  v25 = (void **)(v8 + 3);
  if ( v24 )
  {
    do
    {
      v47 = *((_QWORD *)v24 + 3);
      v48 = *(_QWORD *)(v47 + 184);
      if ( a2 != *(_RTL_SPLAY_LINKS **)(v48 + 48)
        || a3 != IoGetRequestorProcess(*((PIRP *)v24 + 3))
        || a5 && a4 != *(_DWORD *)(v48 + 16) )
      {
        goto LABEL_106;
      }
      *(_BYTE *)(v47 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v47 + 104), 0LL);
      v49 = *(_BYTE *)(v47 + 69);
      if ( *(_BYTE *)(v47 + 68) )
        v47 = 0LL;
      KeReleaseQueuedSpinLock(7uLL, v49);
      if ( v47 )
      {
        *(_QWORD *)(v47 + 56) = 0LL;
        *v25 = *(void **)v24;
        if ( v24 == (void *)v8[4] )
          v8[4] = (KSPIN_LOCK)v25;
        KxReleaseSpinLock(v8);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v50 = KeGetCurrentIrql();
            if ( v50 <= 0xFu && v12 <= 0xFu && v50 >= 2u )
            {
              v51 = KeGetCurrentPrcb();
              v52 = v51->SchedulerAssist;
              v53 = ~(unsigned __int16)(-1LL << (v12 + 1));
              v29 = (v53 & v52[5]) == 0;
              v52[5] &= v53;
              if ( v29 )
                KiRemoveSystemWorkPriorityKick(v51);
            }
          }
        }
        __writecr8(v12);
        FsRtlCompleteLockIrpReal(v59[1], *((_QWORD *)v24 + 2), v47, 3221225598LL, &v58, 0LL);
        v12 = KeAcquireSpinLockRaiseToDpc(v8);
        v25 = (void **)(v8 + 3);
        ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v24);
      }
      else
      {
LABEL_106:
        v25 = (void **)v24;
      }
      v24 = *v25;
    }
    while ( *v25 );
  }
  LOBYTE(v10) = v12;
  FsRtlPrivateCheckWaitingLocks(v59, v8, v10);
  FsRtlPrivateResetLowestLockOffset(v59);
  KxReleaseSpinLock(v8);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v54 = KeGetCurrentIrql();
      if ( v54 <= 0xFu && v12 <= 0xFu && v54 >= 2u )
      {
        v55 = KeGetCurrentPrcb();
        v56 = v55->SchedulerAssist;
        v57 = ~(unsigned __int16)(-1LL << (v12 + 1));
        v29 = (v57 & v56[5]) == 0;
        v56[5] &= v57;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick(v55);
      }
    }
  }
  v13 = 0;
LABEL_28:
  __writecr8(v12);
  return v13;
}
