/*
 * XREFs of FsRtlFastUnlockSingleShared @ 0x1402C1F78
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x1402C1D10 (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateRemoveLock @ 0x14053B568 (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402C19B4 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x1402C272C (FsRtlFindFirstOverlappingSharedNode.c)
 *     RtlDelete @ 0x1402C2940 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x1402C2FA0 (FsRtlPrivateResetLowestLockOffset.c)
 *     FsRtlSplitLocks @ 0x1402C31DC (FsRtlSplitLocks.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall FsRtlFastUnlockSingleShared(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        char a9)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // r15
  KIRQL v13; // al
  __int64 v14; // rcx
  unsigned int v15; // edi
  unsigned __int64 v16; // rbp
  __int64 FirstOverlappingSharedNode; // rax
  RTL_SPLAY_LINKS *v18; // r9
  _QWORD *v19; // rsi
  unsigned __int64 v20; // rax
  _QWORD *v21; // r14
  _QWORD *v22; // r12
  _QWORD *v23; // r8
  unsigned __int64 v25; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  bool v30; // zf
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  unsigned __int64 v39; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+90h] [rbp+8h] BYREF
  __int64 v41; // [rsp+98h] [rbp+10h]
  __int64 v42; // [rsp+A0h] [rbp+18h] BYREF
  _QWORD *v43; // [rsp+A8h] [rbp+20h]

  v43 = a4;
  v41 = a2;
  v9 = *a3;
  v10 = a1 + 24;
  v39 = *a3;
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 24));
  v14 = *(_QWORD *)(v10 + 8);
  v15 = 0;
  v16 = v13;
  if ( !v14 )
    goto LABEL_27;
  v42 = *a4 + v9 - 1;
  FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(v14, (unsigned int)&v39, (unsigned int)&v42, 0, 0LL);
  v18 = (RTL_SPLAY_LINKS *)FirstOverlappingSharedNode;
  if ( !FirstOverlappingSharedNode )
    goto LABEL_27;
  v19 = (_QWORD *)(FirstOverlappingSharedNode - 24);
  v20 = 0LL;
  v21 = (_QWORD *)*v19;
  v22 = v19;
  v40 = 0LL;
  if ( v21 )
  {
    while ( 1 )
    {
      if ( v21[4] == v41 && v21[5] == a5 && *((_DWORD *)v21 + 7) == a6 )
      {
        v23 = v21 + 1;
        if ( v21[1] == v9 && v21[2] == *v43 )
          break;
      }
      if ( v21[1] <= v9 )
      {
        v25 = v21[6];
        v22 = v21;
        v21 = (_QWORD *)*v21;
        if ( v20 < v25 )
          v20 = v25;
        v40 = v20;
        if ( v21 )
          continue;
      }
      goto LABEL_27;
    }
    if ( *(_QWORD **)(v41 + 120) == v23 )
      *(_QWORD *)(v41 + 120) = 0LL;
    if ( *v22 == v19[6] )
      v19[6] = v22;
    *v22 = *v21;
    if ( v22 == v19 )
    {
      if ( !*v19 )
      {
        *(_QWORD *)(v10 + 8) = RtlDelete(v18);
        ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, v19);
        v23 = v21 + 1;
        v19 = 0LL;
      }
      if ( *(_QWORD *)a1 == *v23 )
        FsRtlPrivateResetLowestLockOffset(a1);
    }
    if ( v19 )
      FsRtlSplitLocks(v19, v22, v21 + 6, &v40);
    if ( !a8 && *(_QWORD *)(a1 + 16) )
    {
      KxReleaseSpinLock((volatile signed __int64 *)v10);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
          v30 = (v29 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v29;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v16);
      (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 16))(a7, v21 + 1);
      LOBYTE(v16) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v10);
    }
    ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v21);
    if ( a9 && *(_QWORD *)(v10 + 24) )
      FsRtlPrivateCheckWaitingLocks(a1, v10, v16);
    KxReleaseSpinLock((volatile signed __int64 *)v10);
    if ( KiIrqlFlags )
    {
      v31 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v31 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v31 >= 2u )
      {
        v32 = KeGetCurrentPrcb();
        v33 = v32->SchedulerAssist;
        v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v30 = (v34 & v33[5]) == 0;
        v33[5] &= v34;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(v32);
      }
    }
  }
  else
  {
LABEL_27:
    KxReleaseSpinLock((volatile signed __int64 *)v10);
    if ( KiIrqlFlags )
    {
      v35 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v35 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v30 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(v36);
      }
    }
    v15 = -1073741698;
  }
  __writecr8((unsigned __int8)v16);
  return v15;
}
