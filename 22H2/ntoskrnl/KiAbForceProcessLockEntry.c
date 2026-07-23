/*
 * XREFs of KiAbForceProcessLockEntry @ 0x14038F384
 * Callers:
 *     KeAbMarkCrossThreadReleasable @ 0x14038F2E4 (KeAbMarkCrossThreadReleasable.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022D9F0 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x1402306D0 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x14024A0C0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     KiAbIoBoostOwners @ 0x1402713E0 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x1402714E4 (KiAbCpuBoostOwners.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402726C0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140272C9C (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140272D70 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x140272DB8 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140272EAC (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbProcessContextSwitch @ 0x1402C82E0 (KiAbProcessContextSwitch.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRequestSoftwareInterrupt @ 0x14035E984 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140405AF0 (KiSwapContext.c)
 */

unsigned __int8 __fastcall KiAbForceProcessLockEntry(char *Node)
{
  unsigned __int8 CurrentIrql; // r13
  char v3; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  char *LockedHeadEntry; // rax
  __int64 v6; // rdi
  unsigned __int8 result; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rax
  char v10; // r15
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  char CpuPriorityKey; // si
  int v15; // r10d
  ULONG_PTR CurrentThread; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KPRCB *v20; // rdi
  _DWORD *v21; // rcx
  int v22; // eax
  _DWORD *v23; // rcx
  int v24; // eax
  _KTHREAD *NextThread; // rdi
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  bool v31; // zf
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  _QWORD *v35; // [rsp+30h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  int v37; // [rsp+A0h] [rbp+50h] BYREF
  int v38; // [rsp+A8h] [rbp+58h]

  v35 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = 15;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v38 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  LockedHeadEntry = KiAbEntryGetLockedHeadEntry(Node, 1, &LockHandle);
  v6 = (__int64)LockedHeadEntry;
  if ( LockedHeadEntry )
  {
    if ( (Node[25] & 1) == 0 )
    {
LABEL_4:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_5;
    }
    if ( Node != LockedHeadEntry )
      KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)Node, (_RTL_RB_TREE *)LockedHeadEntry);
    v9 = *(_QWORD *)(v6 + 56);
    if ( v9 )
      v3 = *(_BYTE *)(v9 + 48);
    v10 = v3;
    if ( (*(_BYTE *)(v6 + 25) & 1) == 0 )
    {
      v11 = KiAbOwnerComputeCpuPriorityKey(v6);
      if ( v11 < v3 )
        v10 = v11;
    }
    KiAbTryIncrementIoWaiterCounts((unsigned __int8 *)Node, v6);
    CpuPriorityKey = KiAbEntryGetCpuPriorityKey((unsigned __int8 *)Node, v12, v13);
    if ( v10 < CpuPriorityKey )
    {
      if ( !v15 )
      {
LABEL_25:
        KiAbCpuBoostOwners(v6, CpuPriorityKey, (int)&v35, 0, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
        goto LABEL_4;
      }
    }
    else if ( !v15 )
    {
      goto LABEL_4;
    }
    KiAbIoBoostOwners(v6, v15, (int)&v35, 0, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
    goto LABEL_25;
  }
LABEL_5:
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v35);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
        return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
    return result;
  }
  CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
    v20 = KeGetCurrentPrcb();
    v37 = 0;
    while ( 1 )
    {
      v21 = v20->SchedulerAssist;
      if ( v21 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v22 = v21[6];
          v21[6] = v22 + 1;
          if ( v22 == -1 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      v23 = v20->SchedulerAssist;
      if ( v23 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v24 = v23[6] - 1;
          v23[6] = v24;
          if ( !v24 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
      do
        KeYieldProcessorEx(&v37, v17, v18, v19);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
      NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(CurrentThread + 643) = 32;
    *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
    KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v26, v27);
    LOBYTE(v28) = CurrentIrql;
    if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v28) )
      goto LABEL_53;
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
      goto LABEL_52;
    goto LABEL_49;
  }
  if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
    goto LABEL_53;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
  {
LABEL_49:
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v29 = KeGetCurrentPrcb();
      v30 = v29->SchedulerAssist;
      v31 = (v30[5] & 0xFFFF0003) == 0;
      v30[5] &= 0xFFFF0003;
      if ( v31 )
        KiRemoveSystemWorkPriorityKick(v29);
    }
  }
LABEL_52:
  __writecr8(1uLL);
  *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
  KiDeliverApc(0, 0, 0LL);
LABEL_53:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v32 = KeGetCurrentPrcb();
      v33 = v32->SchedulerAssist;
      v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v31 = (v34 & v33[5]) == 0;
      v33[5] &= v34;
      if ( v31 )
        KiRemoveSystemWorkPriorityKick(v32);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
