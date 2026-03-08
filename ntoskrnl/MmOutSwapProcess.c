/*
 * XREFs of MmOutSwapProcess @ 0x1402C00EC
 * Callers:
 *     KiOutSwapProcesses @ 0x1402BFE74 (KiOutSwapProcesses.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140210114 (MiLockAndDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeIsEmptyAffinityEx @ 0x140237C30 (KeIsEmptyAffinityEx.c)
 *     MiEmptyPageAccessLog @ 0x14028C160 (MiEmptyPageAccessLog.c)
 *     KeWaitForGate @ 0x1402931D8 (KeWaitForGate.c)
 *     KeFlushProcessTb @ 0x1402A566C (KeFlushProcessTb.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiDecrementShareCount @ 0x14032AE40 (MiDecrementShareCount.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseCommitForResetPages @ 0x140616CA8 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140616E38 (MiReleaseOutSwappedProcessCommit.c)
 */

__int64 __fastcall MmOutSwapProcess(struct _EPROCESS *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _MMSUPPORT_FULL *p_Vm; // r14
  __int64 SharedVm; // rax
  __int64 v7; // rdi
  __int64 result; // rax
  char v9; // cl
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  _LIST_ENTRY *p_WorkingSetExpansionLinks; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v18; // rbx
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v22; // eax
  unsigned __int64 *v23; // rcx
  unsigned __int64 v24; // rbx
  __int64 v25; // r15
  __int64 *v26; // r13
  __int64 v27; // rax
  unsigned __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // ecx
  bool v34; // zf
  unsigned __int64 v35; // rbx
  bool v36; // cc
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  __int16 v40; // [rsp+38h] [rbp-20h] BYREF
  char v41; // [rsp+3Ah] [rbp-1Eh]
  char v42; // [rsp+3Bh] [rbp-1Dh]
  int v43; // [rsp+3Ch] [rbp-1Ch]
  _QWORD v44[3]; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int8 v45; // [rsp+A0h] [rbp+48h] BYREF
  int v46; // [rsp+A8h] [rbp+50h]
  int v47; // [rsp+B0h] [rbp+58h] BYREF
  int v48; // [rsp+B8h] [rbp+60h] BYREF

  p_Vm = &a1->Vm;
  v42 = 0;
  v45 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedVm = MiGetSharedVm(&a1->Vm, a2, a3, a4);
  v7 = SharedVm;
  _InterlockedOr((volatile signed __int32 *)&a1->1124, 0x40u);
  if ( (p_Vm->Instance.Flags.u2 & 0x60) == 0x20 )
  {
    MiReleaseOutSwappedProcessCommit(a1);
  }
  else if ( (p_Vm->Instance.Flags.u2 & 0x60) == 0x40 && *(_QWORD *)(*(_QWORD *)(SharedVm + 32) + 40LL) )
  {
    MiReleaseCommitForResetPages(a1);
  }
  result = p_Vm->Instance.WorkingSetSize;
  if ( result != 1 || (p_Vm->Instance.Flags.u2 & 2) != 0 )
    return result;
  v40 = 263;
  v44[1] = v44;
  v41 = 6;
  v44[0] = v44;
  v43 = 0;
  KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
  while ( 1 )
  {
    v9 = *((_BYTE *)&p_Vm->Instance.Flags.0 + 1) >> 4;
    if ( (*((_BYTE *)&p_Vm->Instance.Flags.0 + 1) & 6) == 0 )
      break;
    if ( v9 )
      goto LABEL_56;
    p_Vm->Instance.ExitOutswapGate = (_KGATE *)&v40;
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v34 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    KeWaitForGate((__int64)&v40, 18LL, 0);
    KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
    p_Vm->Instance.ExitOutswapGate = 0LL;
  }
  if ( v9 )
  {
LABEL_56:
    result = KxReleaseQueuedSpinLock(&LockHandle);
    v35 = LockHandle.OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_64;
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0 || (unsigned __int8)result > 0xFu )
      goto LABEL_64;
    v36 = LockHandle.OldIrql <= 0xFu;
    goto LABEL_60;
  }
  _InterlockedOr((volatile signed __int32 *)&a1->1124, 0x80u);
  p_WorkingSetExpansionLinks = &p_Vm->Instance.WorkingSetExpansionLinks;
  Flink = p_Vm->Instance.WorkingSetExpansionLinks.Flink;
  Blink = p_Vm->Instance.WorkingSetExpansionLinks.Blink;
  if ( Flink->Blink != &p_Vm->Instance.WorkingSetExpansionLinks || Blink->Flink != p_WorkingSetExpansionLinks )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  p_WorkingSetExpansionLinks->Flink = 0LL;
  KxReleaseQueuedSpinLock(&LockHandle);
  v18 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v19 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && LockHandle.OldIrql <= 0xFu && v19 >= 2u )
    {
      v20 = KeGetCurrentPrcb();
      v21 = v20->SchedulerAssist;
      v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v34 = (v22 & v21[5]) == 0;
      v21[5] &= v22;
      if ( v34 )
        KiRemoveSystemWorkPriorityKick(v20);
    }
  }
  __writecr8(v18);
  v23 = *(unsigned __int64 **)(v7 + 40);
  if ( v23 )
  {
    MiEmptyPageAccessLog(v23);
    *(_QWORD *)(v7 + 40) = 0LL;
  }
  v47 = 0;
  while ( !(unsigned int)KeIsEmptyAffinityEx(&a1->Pcb.ActiveProcessors.Count) )
    KeYieldProcessorEx(&v47);
  KeFlushProcessTb(a1->Pcb.DirectoryTableBase);
  if ( a1->Vm.Shared.ShadowMapping )
    KeFlushProcessTb(a1->Pcb.UserDirectoryTableBase);
  v24 = a1->Pcb.DirectoryTableBase >> 12;
  v25 = 48 * v24 - 0x220000000000LL;
  v26 = (__int64 *)(MiMapPageInHyperSpaceWorker(v24, &v45, 0x80000000) + 8LL * ((*(_DWORD *)(v25 + 8) >> 3) & 0x1FF));
  v27 = MiSwizzleInvalidPte(((v24 & 0xFFFFFFFFFFLL) << 12) | 0x880);
  v46 = 0;
  v28 = v27;
  v29 = v27;
  if ( (unsigned int)MiPteInShadowRange(v26) )
  {
    if ( (unsigned int)MiPteHasShadow(v31, v30, v32) )
    {
      v33 = 1;
      if ( !HIBYTE(word_140C6697C) )
      {
        v34 = (v28 & 1) == 0;
        goto LABEL_41;
      }
    }
    else
    {
      v33 = v46;
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v34 = (v28 & 1) == 0;
LABEL_41:
        if ( !v34 )
          v29 |= 0x8000000000000000uLL;
      }
    }
  }
  else
  {
    v33 = v46;
  }
  *v26 = v29;
  if ( v33 )
    MiWritePteShadow(v26, v29);
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v26, v45);
  MiLockAndDecrementShareCount(v25, 0);
  KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
  v48 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v48);
    while ( *(__int64 *)(v25 + 24) < 0 );
  }
  *(_QWORD *)(v25 + 8) = &a1->PageDirectoryPte;
  a1->PageDirectoryPte = v28;
  p_Vm->Instance.WorkingSetLeafSize = 0LL;
  p_Vm->Instance.WorkingSetLeafPrivateSize = 0LL;
  p_Vm->Instance.WorkingSetSize = 0LL;
  p_Vm->Instance.WorkingSetPrivateSize = 0LL;
  MiDecrementShareCount(v25);
  _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = KxReleaseQueuedSpinLock(&LockHandle);
  v35 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)result <= 0xFu )
    {
      v36 = LockHandle.OldIrql <= 0xFu;
LABEL_60:
      if ( v36 && (unsigned __int8)result >= 2u )
      {
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v34 = ((unsigned int)result & v38[5]) == 0;
        v38[5] &= result;
        if ( v34 )
          result = KiRemoveSystemWorkPriorityKick(v37);
      }
    }
  }
LABEL_64:
  __writecr8(v35);
  return result;
}
