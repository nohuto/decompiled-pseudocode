NTSTATUS __stdcall ExDeleteResourceLite(PERESOURCE Resource)
{
  __int16 v2; // ax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v5; // rdx
  LONG i; // ecx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int8 v9; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  ERESOURCE_THREAD OwnerThread; // rbx
  POWNER_ENTRY OwnerTable; // rcx
  unsigned int v16; // ebp
  __int64 *j; // rbx
  struct _KTHREAD *v18; // rdi
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v21; // [rsp+58h] [rbp+10h] BYREF

  v2 = Resource->Flag & 1;
  if ( !FeatureFastResource2 )
  {
    if ( !v2 )
      goto LABEL_3;
LABEL_61:
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  }
  if ( v2 )
    goto LABEL_61;
LABEL_3:
  __incgsdword(0x8A60u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v5) = 4;
    else
      v5 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v5;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock, CurrentIrql);
  }
  else
  {
    v21 = 0;
    if ( _interlockedbittestandset(&ExpResourceSpinLock, 0x1Fu) )
      v21 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpResourceSpinLock);
    for ( i = ExpResourceSpinLock; (ExpResourceSpinLock & 0xBFFFFFFF) != 0x80000000; i = ExpResourceSpinLock )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(&ExpResourceSpinLock, 0x40000000u);
      KeYieldProcessorEx(&v21);
    }
  }
  Flink = Resource->SystemResourcesList.Flink;
  Blink = Resource->SystemResourcesList.Blink;
  if ( (PERESOURCE)Resource->SystemResourcesList.Flink->Blink != Resource || (PERESOURCE)Blink->Flink != Resource )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  else
    ExpResourceSpinLock = 0;
  if ( KiIrqlFlags )
  {
    v9 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v13 = (v12 & v11[5]) == 0;
      v11[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  Resource->SystemResourcesList.Flink = 0LL;
  Resource->SystemResourcesList.Blink = 0LL;
  OwnerThread = Resource->OwnerEntry.OwnerThread;
  if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
  {
    OwnerThread &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (OwnerThread & 3) != 0 )
  {
    goto LABEL_45;
  }
  if ( OwnerThread )
  {
    if ( ExpResourceEnforcesOwnershipTransfer((__int64)Resource)
      && (Resource->OwnerEntry.TableSize & 2) == 0
      && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 1uLL);
    }
    if ( (Resource->OwnerEntry.TableSize & 1) != 0 )
      PsBoostThreadIoEx(OwnerThread, 1, 0, 0LL);
    if ( (Resource->OwnerEntry.TableSize & 4) != 0 )
      PsBoostThreadIoQoS(OwnerThread, 1);
    if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)OwnerThread, 0x746C6644u);
  }
LABEL_45:
  OwnerTable = Resource->OwnerTable;
  if ( OwnerTable )
  {
    v16 = 1;
    for ( j = (__int64 *)&OwnerTable->0; v16 < OwnerTable->TableSize; ++v16 )
    {
      j += 2;
      v18 = (struct _KTHREAD *)ExpOwnerEntryToThread(j - 1);
      if ( v18 )
      {
        if ( ExpResourceEnforcesOwnershipTransfer((__int64)Resource)
          && (*(_DWORD *)j & 2) == 0
          && v18 != KeGetCurrentThread() )
        {
          KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v18, 2uLL);
        }
        if ( (*(_DWORD *)j & 1) != 0 )
          PsBoostThreadIoEx((__int64)v18, 1, 0, 0LL);
        if ( (*(_DWORD *)j & 4) != 0 )
          PsBoostThreadIoQoS((__int64)v18, 1);
        if ( (*(_DWORD *)j & 2) != 0 )
          ObDereferenceObjectDeferDeleteWithTag(v18, 0x746C6644u);
      }
      OwnerTable = Resource->OwnerTable;
    }
    ExFreePoolWithTag(OwnerTable, 0);
  }
  return 0;
}
