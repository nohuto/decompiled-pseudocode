/*
 * XREFs of KiAbProcessContextSwitch @ 0x1402C82E0
 * Callers:
 *     KeRemoveQueueEx @ 0x140204790 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x14021BC50 (PsImpersonateContainerOfThread.c)
 *     KiProcessDeferredReadyList @ 0x140230540 (KiProcessDeferredReadyList.c)
 *     KiReadyOutSwappedThreads @ 0x140247DD0 (KiReadyOutSwappedThreads.c)
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x140257550 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x1402586C0 (KeSetBasePriorityThread.c)
 *     KiExitDispatcher @ 0x1402C4150 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x1402C6D60 (KiSwapThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402DE278 (KeSetSchedulingGroupRankBias.c)
 *     KeYieldExecution @ 0x1402F64D0 (KeYieldExecution.c)
 *     KiCheckForThreadDispatch @ 0x1403413C4 (KiCheckForThreadDispatch.c)
 *     KiSchedulerApc @ 0x140342C10 (KiSchedulerApc.c)
 *     KeBoostPriorityThread @ 0x140353A70 (KeBoostPriorityThread.c)
 *     KeSetLegacyAffinityThread @ 0x14035E050 (KeSetLegacyAffinityThread.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14035EACC (KiAbThreadUnboostCpuPriority.c)
 *     KeCpuSetReportParkedProcessors @ 0x14035EDA0 (KeCpuSetReportParkedProcessors.c)
 *     KiAbForceProcessLockEntry @ 0x14038F384 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x140398CCC (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C5984 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C5AAC (KeUpdateThreadCpuSets.c)
 *     KxDispatchInterrupt @ 0x140405C60 (KxDispatchInterrupt.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051C878 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051CB20 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14051E508 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x1405202A4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiAbDetermineMaxWaiterPriority @ 0x14026FB60 (KiAbDetermineMaxWaiterPriority.c)
 *     KiAbIoBoostOwners @ 0x1402713E0 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x1402714E4 (KiAbCpuBoostOwners.c)
 *     KiAbProcessThreadLocks @ 0x140271744 (KiAbProcessThreadLocks.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140272350 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbSetMinimumThreadPriority @ 0x140272404 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402726C0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140272C9C (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140272D70 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x140272DB8 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140272EAC (KiAbOwnerComputeCpuPriorityKey.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402C2A00 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiDeferredReadySingleThread @ 0x1402C4550 (KiDeferredReadySingleThread.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C9130 (ObReferenceObjectSafeWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IoBoostThreadIoPriority @ 0x1402D8E10 (IoBoostThreadIoPriority.c)
 *     ExGetExtensionTable @ 0x1402F7618 (ExGetExtensionTable.c)
 *     KiCheckForThreadDispatch @ 0x1403413C4 (KiCheckForThreadDispatch.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

void __fastcall KiAbProcessContextSwitch(__int64 a1, int a2)
{
  int i; // ebx
  __int64 v3; // r9
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v5; // rdx
  char v6; // al
  __int64 p_AbSelfIoBoostsList; // r12
  __int64 v8; // rax
  unsigned int v9; // esi
  bool v10; // zf
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // r15d
  char *LockedHeadEntry; // rax
  __int64 v16; // r8
  __int64 v17; // r14
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx
  __int64 v20; // rax
  char v21; // r9
  char v22; // r12
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // r10d
  char CpuPriorityKey; // r13
  char v27; // al
  char v28; // r9
  __int64 v29; // r8
  char v30; // cl
  _DWORD *v31; // rdi
  __int64 ExtensionTable; // rax
  volatile signed __int16 *v34; // rdi
  signed __int32 v35[8]; // [rsp+0h] [rbp-69h] BYREF
  _QWORD *v36; // [rsp+40h] [rbp-29h] BYREF
  _QWORD *v37; // [rsp+48h] [rbp-21h] BYREF
  _SINGLE_LIST_ENTRY *v38; // [rsp+50h] [rbp-19h]
  struct _KPRCB *v39; // [rsp+58h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-1h] BYREF
  int v41; // [rsp+D0h] [rbp+67h] BYREF
  int v42; // [rsp+D8h] [rbp+6Fh]
  int v43; // [rsp+E0h] [rbp+77h] BYREF
  int v44; // [rsp+E8h] [rbp+7Fh]

  v42 = a2;
  i = a2;
  if ( (*(char *)(a1 + 792) | *(char *)(a1 + 870)) == 0x3F )
    return;
  v3 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *(unsigned __int8 *)(a1 + 792);
  v6 = v5 | *(_BYTE *)(a1 + 870);
  v36 = 0LL;
  v37 = 0LL;
  p_AbSelfIoBoostsList = (__int64)&CurrentPrcb->AbSelfIoBoostsList;
  v38 = &CurrentPrcb->AbSelfIoBoostsList;
  v39 = CurrentPrcb;
  v44 = 0;
  if ( v6 == 63 )
  {
    v19 = v36;
    goto LABEL_20;
  }
  v5 = (unsigned int)*(char *)(a1 + 792);
  v8 = *(_QWORD *)(a1 + 800);
  v9 = (v5 | *(char *)(a1 + 870)) ^ 0x3F;
  v10 = !_BitScanForward((unsigned int *)&a1, v9);
  if ( v10 )
    goto LABEL_18;
  v11 = v8;
  do
  {
    v9 &= v9 - 1;
    v12 = v11 + 96 * a1;
    v13 = *(_QWORD *)(v12 + 32);
    if ( !v13 || (v13 & 2) != 0 || (v13 & 1) != 0 )
      goto LABEL_15;
    if ( v13 >= 0 )
      goto LABEL_9;
    if ( (*(_BYTE *)(v12 + 27) & 1) != 0 )
      goto LABEL_15;
    if ( (*(_BYTE *)(v12 + 25) & 1) == 0 )
    {
      if ( KiAbOwnerComputeCpuPriorityKey(v11 + 96 * a1) == *(_BYTE *)(v12 + 48) )
        goto LABEL_15;
LABEL_9:
      v41 = v3;
      v43 = v3;
      v14 = v3;
      memset(&LockHandle, 0, sizeof(LockHandle));
      LockedHeadEntry = KiAbEntryGetLockedHeadEntry((char *)v12, 1, &LockHandle);
      v17 = (__int64)LockedHeadEntry;
      if ( !LockedHeadEntry )
        goto LABEL_15;
      if ( (*(_BYTE *)(v12 + 25) & 1) == 0 )
      {
        if ( (char *)v12 != LockedHeadEntry )
          KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v12, (__int64)LockedHeadEntry, v16);
        KiAbDetermineMaxWaiterPriority(v17, (__int64)&v41);
        if ( !v41 )
          goto LABEL_14;
        if ( (unsigned int)KiAbSetMinimumThreadPriority(
                             v12,
                             (__int64)&v41,
                             (__int64)&v36,
                             (__int64)&v37,
                             p_AbSelfIoBoostsList,
                             &v43)
          && v12 != v17 )
        {
          KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v12, v17, v29);
        }
        v14 = v43;
        goto LABEL_37;
      }
      if ( (char *)v12 != LockedHeadEntry )
        KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)v12, (_RTL_RB_TREE *)LockedHeadEntry);
      v20 = *(_QWORD *)(v17 + 56);
      if ( v20 )
        v21 = *(_BYTE *)(v20 + 48);
      else
        v21 = 15;
      v22 = v21;
      if ( (*(_BYTE *)(v17 + 25) & 1) == 0 )
      {
        v27 = KiAbOwnerComputeCpuPriorityKey(v17);
        if ( v27 < v28 )
          v22 = v27;
      }
      KiAbTryIncrementIoWaiterCounts((unsigned __int8 *)v12, v17);
      CpuPriorityKey = KiAbEntryGetCpuPriorityKey((unsigned __int8 *)v12, v23, v24);
      if ( v22 < CpuPriorityKey )
      {
        if ( !v25 )
        {
          p_AbSelfIoBoostsList = (__int64)v38;
          goto LABEL_36;
        }
      }
      else if ( !v25 )
      {
        p_AbSelfIoBoostsList = (__int64)v38;
LABEL_14:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        goto LABEL_15;
      }
      p_AbSelfIoBoostsList = (__int64)v38;
      KiAbIoBoostOwners(v17, v25, (int)&v36, (int)&v37, (__int64)v38);
LABEL_36:
      KiAbCpuBoostOwners(v17, CpuPriorityKey, (int)&v36, (int)&v37, p_AbSelfIoBoostsList);
LABEL_37:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( v14 )
      {
        v31 = (_DWORD *)(v12 - 16LL * *(unsigned __int8 *)(v12 + 24));
        if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v31, 1953261124LL) )
        {
          if ( (v14 & 1) != 0 )
            IoBoostThreadIoPriority(v31, 2LL, 0x80000000LL);
          if ( (v14 & 2) != 0 )
          {
            if ( v31[342] )
            {
              ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
              if ( ExtensionTable )
              {
                (*(void (__fastcall **)(_DWORD *))(ExtensionTable + 16))(v31);
                ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
              }
            }
          }
          ObDereferenceObjectDeferDeleteWithTag(v31, 0x746C6644u);
        }
      }
      goto LABEL_15;
    }
    v30 = *(_BYTE *)(v12 - 16LL * *(unsigned __int8 *)(v12 + 24) + 195);
    if ( v30 > 15 )
      v30 = 15;
    if ( v30 != *(_BYTE *)(v12 + 48) )
      goto LABEL_9;
LABEL_15:
    v10 = !_BitScanForward((unsigned int *)&a1, v9);
    v3 = 0LL;
    v44 = a1;
  }
  while ( !v10 );
  v18 = v37;
  for ( i = v42; v37; v18 = v37 )
  {
    v34 = (volatile signed __int16 *)(v18 - 101);
    v37 = (_QWORD *)*v18;
    *v18 = 1LL;
    _InterlockedOr(v35, 0);
    if ( *((_BYTE *)v18 - 15) )
      KiAbProcessThreadLocks((__int64)(v18 - 101), 0, 1, 0, (__int64)&v36, (__int64)&v37, p_AbSelfIoBoostsList);
    _InterlockedDecrement16(v34 + 434);
  }
  CurrentPrcb = v39;
LABEL_18:
  v19 = v36;
  if ( v36 )
    v36 = (_QWORD *)*v36;
LABEL_20:
  if ( v19 )
  {
    while ( 1 )
    {
      KiDeferredReadySingleThread((__int64)CurrentPrcb, (ULONG_PTR)(v19 - 27), (__int64)&v36, v3);
      v19 = v36;
      if ( !v36 )
        break;
      v36 = (_QWORD *)*v36;
    }
  }
  if ( i )
  {
    LOBYTE(v5) = 2;
    KiCheckForThreadDispatch(CurrentPrcb, v5);
  }
}
