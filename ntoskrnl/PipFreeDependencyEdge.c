/*
 * XREFs of PipFreeDependencyEdge @ 0x14055D7DC
 * Callers:
 *     PipDeleteAllDependencyRelations @ 0x1409514A0 (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x1409517A8 (PipMergeDependencyEdgeList.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PipDereferenceDependencyNode @ 0x140838B30 (PipDereferenceDependencyNode.c)
 *     PipNotifyDependenciesChanged @ 0x140838D1C (PipNotifyDependenciesChanged.c)
 *     PipFreeBindingRequestEntry @ 0x14095175C (PipFreeBindingRequestEntry.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeDependencyEdge(_DWORD *P, __int64 a2)
{
  __int64 **v3; // rdi
  __int64 *v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  _QWORD *v8; // r8
  PVOID *v9; // rdx
  _DWORD **v10; // r8
  PVOID *v11; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  v3 = (__int64 **)(P + 14);
  while ( 1 )
  {
    v5 = *v3;
    if ( *v3 == (__int64 *)v3 )
      break;
    v6 = *v5;
    if ( (__int64 **)v5[1] != v3 || *(__int64 **)(v6 + 8) != v5 )
      goto LABEL_20;
    *v3 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v3;
    PipFreeBindingRequestEntry(v5);
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
  if ( a2 )
    *(_DWORD *)(a2 + 48) |= P[12];
  v8 = *(_QWORD **)P;
  v9 = (PVOID *)*((_QWORD *)P + 1);
  if ( *(_DWORD **)(*(_QWORD *)P + 8LL) != P
    || *v9 != P
    || (*v9 = v8, v8[1] = v9, v10 = (_DWORD **)*((_QWORD *)P + 2), v11 = (PVOID *)*((_QWORD *)P + 3), v10[1] != P + 4)
    || *v11 != P + 4 )
  {
LABEL_20:
    __fastfail(3u);
  }
  *v11 = v10;
  v10[1] = v11;
  KxReleaseSpinLock((volatile signed __int64 *)&PiDependencyEdgeWriteLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  PipNotifyDependenciesChanged(*((_QWORD *)P + 5), *((_QWORD *)P + 4));
  PipDereferenceDependencyNode(*((_QWORD *)P + 4));
  PipDereferenceDependencyNode(*((_QWORD *)P + 5));
  ExFreePoolWithTag(P, 0x53706E50u);
}
