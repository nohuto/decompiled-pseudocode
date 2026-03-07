__int64 __fastcall FsRtlPrivateFastUnlockAll(
        __int64 a1,
        _RTL_SPLAY_LINKS *a2,
        struct _KPROCESS *a3,
        int a4,
        char a5,
        __int64 a6)
{
  __int64 v6; // r13
  _RTL_SPLAY_LINKS *v7; // rdi
  __int64 v8; // rsi
  KIRQL v9; // al
  __int64 v10; // r8
  RTL_SPLAY_LINKS *v11; // r15
  KIRQL v12; // bp
  _RTL_SPLAY_LINKS *i; // rax
  PRTL_SPLAY_LINKS v14; // rax
  RTL_SPLAY_LINKS *v15; // rcx
  _RTL_SPLAY_LINKS *Parent; // r14
  _RTL_SPLAY_LINKS *v17; // rbx
  PRTL_SPLAY_LINKS v18; // r13
  RTL_SPLAY_LINKS *v19; // r10
  RTL_SPLAY_LINKS *v20; // rdx
  PRTL_SPLAY_LINKS v21; // rbx
  void *v22; // rdi
  void **v23; // r15
  unsigned int v24; // ebx
  _RTL_SPLAY_LINKS *v26; // rax
  _RTL_SPLAY_LINKS *v27; // rax
  _RTL_SPLAY_LINKS *k; // rax
  PRTL_SPLAY_LINKS v29; // rdi
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  bool v34; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v38; // eax
  PVOID v39; // rbx
  _RTL_SPLAY_LINKS *j; // rax
  unsigned __int8 v41; // cl
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  KIRQL v45; // al
  _RTL_SPLAY_LINKS *m; // rax
  __int64 v47; // r14
  __int64 v48; // r13
  KIRQL v49; // dl
  unsigned __int8 v50; // cl
  struct _KPRCB *v51; // r8
  _DWORD *v52; // r10
  int v53; // eax
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r9
  _DWORD *v56; // r8
  int v57; // eax
  int v58; // [rsp+30h] [rbp-88h] BYREF
  __int64 v59; // [rsp+38h] [rbp-80h]
  RTL_SPLAY_LINKS *v60; // [rsp+40h] [rbp-78h]
  _RTL_SPLAY_LINKS *v61; // [rsp+48h] [rbp-70h] BYREF
  _RTL_SPLAY_LINKS *v62; // [rsp+50h] [rbp-68h] BYREF
  PVOID Entry; // [rsp+58h] [rbp-60h]
  RTL_SPLAY_LINKS *v64; // [rsp+60h] [rbp-58h]
  char v65; // [rsp+C0h] [rbp+8h]

  v6 = *(_QWORD *)(a1 + 24);
  v7 = 0LL;
  v58 = 0;
  Entry = 0LL;
  v59 = v6;
  if ( !v6 )
    return 3221225598LL;
  v8 = v6 + 24;
  a2[5].Parent = 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 24));
  v11 = *(RTL_SPLAY_LINKS **)(v6 + 32);
  v12 = v9;
  if ( v11 )
  {
    for ( i = v11->LeftChild; i; i = i->LeftChild )
      v11 = i;
    v65 = 0;
    while ( 1 )
    {
      v14 = RtlRealSuccessor(v11);
      v15 = v11 - 1;
      v62 = 0LL;
      Parent = v11[-1].Parent;
      v17 = 0LL;
      v61 = 0LL;
      v18 = v14;
      v60 = v11 - 1;
      v19 = 0LL;
      v20 = v11 - 1;
      if ( !Parent )
      {
        v7 = 0LL;
        goto LABEL_15;
      }
      while ( 1 )
      {
        Entry = Parent;
        if ( Parent[1].LeftChild == a2
          && (struct _KPROCESS *)Parent[1].RightChild == a3
          && (!a5 || HIDWORD(Parent[1].Parent) == a4) )
        {
          break;
        }
        v20 = Parent;
        v60 = Parent;
LABEL_9:
        if ( !v19 )
        {
          if ( Parent[2].Parent > v17 )
            v17 = Parent[2].Parent;
          v61 = v17;
        }
        Parent = v20->Parent;
        if ( !v20->Parent )
          goto LABEL_14;
      }
      v26 = Parent[2].Parent;
      if ( !v19 )
        v19 = v20;
      v64 = v19;
      if ( v26 > v7 )
        v7 = v26;
      v27 = v15[2].Parent;
      v62 = v7;
      if ( v20->Parent == v27 )
        v15[2].Parent = v20;
      v20->Parent = Parent->Parent;
      if ( !*(_QWORD *)(v59 + 16) )
        break;
      v65 = 1;
LABEL_14:
      v7 = 0LL;
      if ( v19 )
      {
        if ( v15->Parent )
        {
          FsRtlSplitLocks(v15, v19, &v62, &v61);
        }
        else
        {
          *(_QWORD *)(v8 + 8) = RtlDelete(v11);
          ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, &v11[-1]);
        }
      }
LABEL_15:
      if ( v65 )
      {
        KxReleaseSpinLock((volatile signed __int64 *)v8);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v12 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v38 = ~(unsigned __int16)(-1LL << (v12 + 1));
            v34 = (v38 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v38;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v12);
        v39 = Entry;
        (*(void (__fastcall **)(__int64, char *))(v59 + 16))(a6, (char *)Entry + 8);
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8);
        ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v39);
        v18 = *(PRTL_SPLAY_LINKS *)(v8 + 8);
        v65 = 0;
        if ( v18 )
        {
          for ( j = v18->LeftChild; j; j = j->LeftChild )
            v18 = j;
        }
      }
      v11 = v18;
      if ( !v18 )
      {
        v6 = v59;
        goto LABEL_18;
      }
    }
    ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, Parent);
    v20 = v60;
    v15 = v11 - 1;
    v19 = v64;
    goto LABEL_9;
  }
  if ( *(_QWORD *)(v6 + 40) )
  {
LABEL_18:
    v21 = *(PRTL_SPLAY_LINKS *)(v8 + 16);
    if ( v21 )
    {
      for ( k = v21->LeftChild; k; k = k->LeftChild )
        v21 = k;
      do
      {
        v29 = RtlRealSuccessor(v21);
        if ( v21[2].Parent == a2
          && (struct _KPROCESS *)v21[2].LeftChild == a3
          && (!a5 || HIDWORD(v21[1].RightChild) == a4) )
        {
          *(_QWORD *)(v8 + 16) = RtlDelete(v21);
          if ( *(_QWORD *)(v6 + 16) )
          {
            KxReleaseSpinLock((volatile signed __int64 *)v8);
            if ( KiIrqlFlags )
            {
              v41 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v41 <= 0xFu && v12 <= 0xFu && v41 >= 2u )
              {
                v42 = KeGetCurrentPrcb();
                v43 = v42->SchedulerAssist;
                v44 = ~(unsigned __int16)(-1LL << (v12 + 1));
                v34 = (v44 & v43[5]) == 0;
                v43[5] &= v44;
                if ( v34 )
                  KiRemoveSystemWorkPriorityKick(v42);
              }
            }
            __writecr8(v12);
            (*(void (__fastcall **)(__int64, PRTL_SPLAY_LINKS))(v6 + 16))(a6, v21 + 1);
            v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8);
            v29 = *(PRTL_SPLAY_LINKS *)(v8 + 16);
            v12 = v45;
            if ( v29 )
            {
              for ( m = v29->LeftChild; m; m = m->LeftChild )
                v29 = m;
            }
          }
          ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v21);
        }
        v21 = v29;
      }
      while ( v29 );
    }
    v22 = *(void **)(v8 + 24);
    v23 = (void **)(v8 + 24);
    if ( v22 )
    {
      do
      {
        v47 = *((_QWORD *)v22 + 3);
        v48 = *(_QWORD *)(v47 + 184);
        if ( a2 != *(_RTL_SPLAY_LINKS **)(v48 + 48)
          || a3 != IoGetRequestorProcess(*((PIRP *)v22 + 3))
          || a5 && a4 != *(_DWORD *)(v48 + 16) )
        {
          goto LABEL_102;
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
          *v23 = *(void **)v22;
          if ( v22 == *(void **)(v8 + 32) )
            *(_QWORD *)(v8 + 32) = v23;
          KxReleaseSpinLock((volatile signed __int64 *)v8);
          if ( KiIrqlFlags )
          {
            v50 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v50 <= 0xFu && v12 <= 0xFu && v50 >= 2u )
            {
              v51 = KeGetCurrentPrcb();
              v52 = v51->SchedulerAssist;
              v53 = ~(unsigned __int16)(-1LL << (v12 + 1));
              v34 = (v53 & v52[5]) == 0;
              v52[5] &= v53;
              if ( v34 )
                KiRemoveSystemWorkPriorityKick(v51);
            }
          }
          __writecr8(v12);
          ((void (__fastcall *)(_QWORD, _QWORD, __int64, __int64, int *, _QWORD))FsRtlCompleteLockIrpReal)(
            *(_QWORD *)(v59 + 8),
            *((_QWORD *)v22 + 2),
            v47,
            3221225598LL,
            &v58,
            0LL);
          v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8);
          v23 = (void **)(v8 + 24);
          ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v22);
        }
        else
        {
LABEL_102:
          v23 = (void **)v22;
        }
        v22 = *v23;
      }
      while ( *v23 );
    }
    LOBYTE(v10) = v12;
    FsRtlPrivateCheckWaitingLocks(v59, v8, v10);
    FsRtlPrivateResetLowestLockOffset(v59);
    KxReleaseSpinLock((volatile signed __int64 *)v8);
    if ( KiIrqlFlags )
    {
      v54 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v54 <= 0xFu && v12 <= 0xFu && v54 >= 2u )
      {
        v55 = KeGetCurrentPrcb();
        v56 = v55->SchedulerAssist;
        v57 = ~(unsigned __int16)(-1LL << (v12 + 1));
        v34 = (v57 & v56[5]) == 0;
        v56[5] &= v57;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(v55);
      }
    }
    v24 = 0;
  }
  else
  {
    KxReleaseSpinLock((volatile signed __int64 *)(v6 + 24));
    if ( KiIrqlFlags )
    {
      v30 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && v12 <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << (v12 + 1));
        v34 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
    v24 = -1073741698;
  }
  __writecr8(v12);
  return v24;
}
