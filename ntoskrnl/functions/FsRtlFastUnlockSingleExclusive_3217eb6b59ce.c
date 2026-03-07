__int64 __fastcall FsRtlFastUnlockSingleExclusive(
        __int64 a1,
        _RTL_SPLAY_LINKS *a2,
        _RTL_SPLAY_LINKS **a3,
        _RTL_SPLAY_LINKS **a4,
        _RTL_SPLAY_LINKS *a5,
        int a6,
        __int64 a7,
        char a8,
        char a9)
{
  _RTL_SPLAY_LINKS *v9; // rbx
  __int64 v10; // r15
  KIRQL v14; // al
  __int64 v15; // rcx
  unsigned int v16; // edi
  unsigned __int64 v17; // r14
  PRTL_SPLAY_LINKS i; // rax
  PRTL_SPLAY_LINKS v20; // rbp
  RTL_SPLAY_LINKS *v21; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  bool v26; // zf
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  __int64 v35; // [rsp+70h] [rbp+8h] BYREF
  _RTL_SPLAY_LINKS *v36; // [rsp+80h] [rbp+18h] BYREF
  _RTL_SPLAY_LINKS **v37; // [rsp+88h] [rbp+20h]

  v37 = a4;
  v9 = *a3;
  v10 = a1 + 24;
  v36 = *a3;
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 24));
  v15 = *(_QWORD *)(v10 + 16);
  v16 = 0;
  v17 = v14;
  if ( v15 )
  {
    v35 = (__int64)v9 + (_QWORD)*a4 - 1;
    for ( i = (PRTL_SPLAY_LINKS)FsRtlFindFirstOverlappingExclusiveNode(
                                  v15,
                                  (unsigned int)&v36,
                                  (unsigned int)&v35,
                                  0,
                                  0LL); ; i = RtlRealSuccessor(i) )
    {
      v20 = i;
      if ( !i )
        break;
      if ( i[2].Parent == a2 && i[2].LeftChild == a5 && HIDWORD(i[1].RightChild) == a6 )
      {
        v21 = i + 1;
        if ( i[1].Parent == v9 && i[1].LeftChild == *v37 )
        {
          if ( a2[5].Parent == v21 )
            a2[5].Parent = 0LL;
          *(_QWORD *)(v10 + 16) = RtlDelete(i);
          if ( *(_RTL_SPLAY_LINKS **)a1 == v21->Parent )
            FsRtlPrivateResetLowestLockOffset(a1);
          if ( !a8 && *(_QWORD *)(a1 + 16) )
          {
            KxReleaseSpinLock((volatile signed __int64 *)v10);
            if ( KiIrqlFlags )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
                v26 = (v25 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v25;
                if ( v26 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            __writecr8(v17);
            (*(void (__fastcall **)(__int64, PRTL_SPLAY_LINKS))(a1 + 16))(a7, v20 + 1);
            LOBYTE(v17) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v10);
          }
          ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v20);
          if ( a9 && *(_QWORD *)(v10 + 24) )
            FsRtlPrivateCheckWaitingLocks(a1, v10, v17);
          KxReleaseSpinLock((volatile signed __int64 *)v10);
          if ( KiIrqlFlags )
          {
            v27 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v27 >= 2u )
            {
              v28 = KeGetCurrentPrcb();
              v29 = v28->SchedulerAssist;
              v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
              v26 = (v30 & v29[5]) == 0;
              v29[5] &= v30;
              if ( v26 )
                KiRemoveSystemWorkPriorityKick(v28);
            }
          }
          goto LABEL_4;
        }
      }
      if ( i[1].Parent > v9 )
        break;
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)v10);
  if ( KiIrqlFlags )
  {
    v31 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v31 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v31 >= 2u )
    {
      v32 = KeGetCurrentPrcb();
      v33 = v32->SchedulerAssist;
      v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
      v26 = (v34 & v33[5]) == 0;
      v33[5] &= v34;
      if ( v26 )
        KiRemoveSystemWorkPriorityKick(v32);
    }
  }
  v16 = -1073741698;
LABEL_4:
  __writecr8((unsigned __int8)v17);
  return v16;
}
