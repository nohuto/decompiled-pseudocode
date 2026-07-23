/*
 * XREFs of FsRtlFastUnlockSingleShared @ 0x1402D99E8
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x1402D9660 (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateRemoveLock @ 0x1404EFBC0 (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140252644 (ExFreeToNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x1402D9C10 (FsRtlFindFirstOverlappingSharedNode.c)
 *     RtlDelete @ 0x1402DA140 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x1402DA1E0 (FsRtlPrivateResetLowestLockOffset.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402F8104 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlSplitLocks @ 0x1402F8578 (FsRtlSplitLocks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
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
  KSPIN_LOCK *v10; // r15
  KIRQL v13; // al
  KSPIN_LOCK v14; // rcx
  unsigned int v15; // edi
  unsigned __int64 v16; // rbp
  __int64 FirstOverlappingSharedNode; // rax
  _RTL_SPLAY_LINKS *v18; // r9
  _QWORD *v19; // rsi
  unsigned __int64 v20; // rax
  _QWORD *v21; // r14
  _QWORD *v22; // r12
  bool v23; // cc
  __int64 v24; // r8
  unsigned __int64 v26; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  bool v31; // zf
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  int v39; // eax
  unsigned __int64 v40; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v41; // [rsp+90h] [rbp+8h] BYREF
  __int64 v42; // [rsp+98h] [rbp+10h]
  __int64 v43; // [rsp+A0h] [rbp+18h] BYREF
  _QWORD *v44; // [rsp+A8h] [rbp+20h]

  v44 = a4;
  v42 = a2;
  v9 = *a3;
  v10 = (KSPIN_LOCK *)(a1 + 24);
  v40 = *a3;
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 24));
  v14 = v10[1];
  v15 = 0;
  v16 = v13;
  if ( v14 )
  {
    v43 = *a4 + v9 - 1;
    FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(
                                   v14,
                                   (unsigned int)&v40,
                                   (unsigned int)&v43,
                                   0,
                                   0LL);
    v18 = (_RTL_SPLAY_LINKS *)FirstOverlappingSharedNode;
    if ( FirstOverlappingSharedNode )
    {
      v19 = (_QWORD *)(FirstOverlappingSharedNode - 24);
      v20 = 0LL;
      v21 = (_QWORD *)*v19;
      v22 = v19;
      v41 = 0LL;
      if ( v21 )
      {
        while ( 1 )
        {
          if ( v21[4] == v42 && v21[5] == a5 && *((_DWORD *)v21 + 7) == a6 )
          {
            v23 = v21[1] <= v9;
            if ( v21[1] != v9 )
              goto LABEL_28;
            if ( v21[2] == *v44 )
            {
              if ( *(_QWORD **)(v42 + 120) == v21 + 1 )
                *(_QWORD *)(v42 + 120) = 0LL;
              if ( *v22 == v19[6] )
                v19[6] = v22;
              *v22 = *v21;
              if ( v22 == v19 )
              {
                if ( !*v19 )
                {
                  v10[1] = (KSPIN_LOCK)RtlDelete(v18);
                  ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, v19);
                  v19 = 0LL;
                }
                if ( *(_QWORD *)a1 == v21[1] )
                  FsRtlPrivateResetLowestLockOffset(a1);
              }
              if ( v19 )
                FsRtlSplitLocks(v19, v22, v21 + 6, &v41);
              if ( !a8 && *(_QWORD *)(a1 + 16) )
              {
                KxReleaseSpinLock(v10);
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    CurrentIrql = KeGetCurrentIrql();
                    if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      SchedulerAssist = CurrentPrcb->SchedulerAssist;
                      v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
                      v31 = (v30 & SchedulerAssist[5]) == 0;
                      SchedulerAssist[5] &= v30;
                      if ( v31 )
                        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                    }
                  }
                }
                __writecr8(v16);
                (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 16))(a7, v21 + 1);
                LOBYTE(v16) = KeAcquireSpinLockRaiseToDpc(v10);
              }
              ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v21);
              if ( a9 && v10[3] )
              {
                LOBYTE(v24) = v16;
                FsRtlPrivateCheckWaitingLocks(a1, v10, v24);
              }
              KxReleaseSpinLock(v10);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v32 = KeGetCurrentIrql();
                  if ( v32 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v32 >= 2u )
                  {
                    v33 = KeGetCurrentPrcb();
                    v34 = v33->SchedulerAssist;
                    v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
                    v31 = (v35 & v34[5]) == 0;
                    v34[5] &= v35;
                    if ( v31 )
                      KiRemoveSystemWorkPriorityKick(v33);
                  }
                }
              }
              goto LABEL_26;
            }
          }
          v23 = v21[1] <= v9;
LABEL_28:
          if ( v23 )
          {
            v26 = v21[6];
            v22 = v21;
            v21 = (_QWORD *)*v21;
            if ( v20 < v26 )
              v20 = v26;
            v41 = v20;
            if ( v21 )
              continue;
          }
          break;
        }
      }
    }
  }
  KxReleaseSpinLock(v10);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v36 = KeGetCurrentIrql();
      if ( v36 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v36 >= 2u )
      {
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v31 = (v39 & v38[5]) == 0;
        v38[5] &= v39;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick(v37);
      }
    }
  }
  v15 = -1073741698;
LABEL_26:
  __writecr8((unsigned __int8)v16);
  return v15;
}
