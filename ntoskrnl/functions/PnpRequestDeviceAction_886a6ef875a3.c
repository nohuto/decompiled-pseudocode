__int64 __fastcall PnpRequestDeviceAction(
        PVOID Object,
        int a2,
        char a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 Pool2; // rdi
  char v12; // al
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r12
  __int64 v17; // r8
  unsigned __int64 v18; // r12
  __int64 *v19; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // edx
  bool v25; // zf
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // rdx
  _DWORD *v32; // r9
  int v33; // eax
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  _DWORD *v36; // r8
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // edx
  unsigned int v42; // [rsp+28h] [rbp-50h]
  GUID v43; // [rsp+40h] [rbp-38h]

  v43 = NullGuid;
  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  Pool2 = ExAllocatePool2(64LL, 96LL, 846229072LL);
  if ( !Pool2 )
    return 3221225626LL;
  if ( !Object )
    Object = (PVOID)*((_QWORD *)IopRootDeviceNode + 4);
  ObfReferenceObjectWithTag(Object, 0x746C6644u);
  *(_QWORD *)(Pool2 + 16) = Object;
  *(_DWORD *)(Pool2 + 24) = a2;
  *(_BYTE *)(Pool2 + 28) = a3;
  if ( a4 )
    *(_QWORD *)(Pool2 + 32) = *a4;
  *(_QWORD *)(Pool2 + 40) = a5;
  *(_QWORD *)(Pool2 + 48) = a6;
  *(_DWORD *)(Pool2 + 72) = 1;
  *(_BYTE *)(Pool2 + 76) = 0;
  *(_BYTE *)(Pool2 + 88) = 0;
  *(_QWORD *)(Pool2 + 80) = 0LL;
  if ( !a2 )
    goto LABEL_42;
  if ( a2 != 6 && a2 != 9 && a2 != 10 && a2 != 14 )
  {
    if ( (unsigned int)(a2 - 17) >= 2 )
    {
      v12 = 1;
LABEL_14:
      if ( v12 && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        Flink = KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
        if ( Flink )
        {
          v43 = (GUID)*Flink;
        }
        else if ( PnpIsSafeToExamineUserModeTeb()
               && KeGetPcr()->NtTib.$5C14B8504E5BBEA9C78932444904D36F::$B3978927B1617B2B8454E8E478E76600::Self )
        {
          v43 = *(GUID *)&KeGetPcr()->NtTib.$5C14B8504E5BBEA9C78932444904D36F::$B3978927B1617B2B8454E8E478E76600::Self[105].SubSystemTib;
        }
      }
      goto LABEL_18;
    }
LABEL_42:
    v12 = 0;
    goto LABEL_14;
  }
LABEL_18:
  *(GUID *)(Pool2 + 56) = v43;
  if ( Object )
    v14 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v14 = 0LL;
  PnpLogActionQueueEvent(v14, a2, 0LL, 0);
  v42 = *(_DWORD *)(Pool2 + 24);
  v15 = KeAcquireSpinLockRaiseToDpc(&qword_140C3EFA8);
  if ( ++dword_140C3EFB0 == 1 )
    PopDirectedDripsSetDisengageReason(4);
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C3EFA8);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
      v25 = (v24 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v24;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v15);
  v16 = KeAcquireSpinLockRaiseToDpc(&qword_140C38AD0);
  v17 = MEMORY[0xFFFFF78000000008];
  ++dword_140C38AD8;
  ++*((_DWORD *)&PopDirectedDripsDiagSessionContext + v42 + 16);
  if ( byte_140C38B50 )
  {
    ++*((_DWORD *)&PopDirectedDripsDiagSessionContext + v42 + 108);
    if ( dword_140C38AD8 == 1 )
      qword_140C38B60 = v17;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C38AD0);
  if ( KiIrqlFlags )
  {
    v26 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v26 >= 2u )
    {
      v27 = KeGetCurrentPrcb();
      v28 = v27->SchedulerAssist;
      v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
      v25 = (v29 & v28[5]) == 0;
      v28[5] &= v29;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(v27);
    }
  }
  __writecr8(v16);
  v18 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v19 = (__int64 *)qword_140C5B0D8;
  if ( *(__int64 **)qword_140C5B0D8 != &PnpEnumerationRequestList )
    __fastfail(3u);
  *(_QWORD *)Pool2 = &PnpEnumerationRequestList;
  *(_QWORD *)(Pool2 + 8) = v19;
  *v19 = Pool2;
  qword_140C5B0D8 = Pool2;
  if ( a7 )
  {
    ++*(_DWORD *)(Pool2 + 72);
    *a7 = Pool2;
  }
  if ( a2 == 7 || a2 == 10 )
  {
    PnpEnumerationInProgress = 1;
    KeResetEvent(&PnpEnumerationLock);
    KxReleaseSpinLock((volatile signed __int64 *)&PnpSpinLock);
    if ( KiIrqlFlags )
    {
      v38 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v38 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = v39->SchedulerAssist;
        v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
        v25 = (v41 & v40[5]) == 0;
        v40[5] &= v41;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v39);
      }
    }
    __writecr8(v18);
    PnpDeviceActionWorker();
  }
  else if ( PnpEnumerationInProgress || !PnPBootDriversLoaded )
  {
    KxReleaseSpinLock((volatile signed __int64 *)&PnpSpinLock);
    if ( KiIrqlFlags )
    {
      v34 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v34 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v34 >= 2u )
      {
        v35 = KeGetCurrentPrcb();
        v36 = v35->SchedulerAssist;
        v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
        v25 = (v37 & v36[5]) == 0;
        v36[5] &= v37;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v35);
      }
    }
    __writecr8(v18);
  }
  else
  {
    PnpEnumerationInProgress = 1;
    KeResetEvent(&PnpEnumerationLock);
    KxReleaseSpinLock((volatile signed __int64 *)&PnpSpinLock);
    if ( KiIrqlFlags )
    {
      v30 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
        v25 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
    __writecr8(v18);
    PnpDeviceEnumerationWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceActionWorker;
    PnpDeviceEnumerationWorkItem.Parameter = 0LL;
    PnpDeviceEnumerationWorkItem.List.Flink = 0LL;
    ExQueueWorkItem(&PnpDeviceEnumerationWorkItem, DelayedWorkQueue);
  }
  return 0LL;
}
