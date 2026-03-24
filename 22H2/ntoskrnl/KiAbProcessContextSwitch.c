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
  __int64 LockedHeadEntry; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  _QWORD *v19; // rcx
  _QWORD *v20; // rcx
  __int64 v21; // rax
  char v22; // r9
  char v23; // r12
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // r10d
  char CpuPriorityKey; // r13
  char v28; // al
  char v29; // r9
  __int64 v30; // r8
  char v31; // cl
  _DWORD *v32; // rdi
  __int64 ExtensionTable; // rax
  volatile signed __int16 *v35; // rdi
  signed __int32 v36[8]; // [rsp+0h] [rbp-69h] BYREF
  _QWORD *v37; // [rsp+40h] [rbp-29h] BYREF
  _QWORD *v38; // [rsp+48h] [rbp-21h] BYREF
  _SINGLE_LIST_ENTRY *v39; // [rsp+50h] [rbp-19h]
  struct _KPRCB *v40; // [rsp+58h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-1h] BYREF
  int v42; // [rsp+D0h] [rbp+67h] BYREF
  int v43; // [rsp+D8h] [rbp+6Fh]
  int v44; // [rsp+E0h] [rbp+77h] BYREF
  int v45; // [rsp+E8h] [rbp+7Fh]

  v43 = a2;
  i = a2;
  if ( (*(char *)(a1 + 792) | *(char *)(a1 + 870)) == 0x3F )
    return;
  v3 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *(unsigned __int8 *)(a1 + 792);
  v6 = v5 | *(_BYTE *)(a1 + 870);
  v37 = 0LL;
  v38 = 0LL;
  p_AbSelfIoBoostsList = (__int64)&CurrentPrcb->AbSelfIoBoostsList;
  v39 = &CurrentPrcb->AbSelfIoBoostsList;
  v40 = CurrentPrcb;
  v45 = 0;
  if ( v6 == 63 )
  {
    v20 = v37;
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
      v42 = v3;
      v44 = v3;
      v14 = v3;
      memset(&LockHandle, 0, sizeof(LockHandle));
      LockedHeadEntry = KiAbEntryGetLockedHeadEntry(v12, 1, &LockHandle);
      v18 = LockedHeadEntry;
      if ( !LockedHeadEntry )
        goto LABEL_15;
      if ( (*(_BYTE *)(v12 + 25) & 1) == 0 )
      {
        if ( v12 != LockedHeadEntry )
          KiAbEntryUpdateOwnerTreePosition(v12, LockedHeadEntry, v16);
        KiAbDetermineMaxWaiterPriority(v18, (__int64)&v42);
        if ( !v42 )
          goto LABEL_14;
        if ( (unsigned int)KiAbSetMinimumThreadPriority(
                             v12,
                             (__int64)&v42,
                             (__int64)&v37,
                             (__int64)&v38,
                             p_AbSelfIoBoostsList,
                             &v44)
          && v12 != v18 )
        {
          KiAbEntryUpdateOwnerTreePosition(v12, v18, v30);
        }
        v14 = v44;
        goto LABEL_37;
      }
      if ( v12 != LockedHeadEntry )
        KiAbEntryUpdateWaiterTreePosition(v12, LockedHeadEntry, v16, v17);
      v21 = *(_QWORD *)(v18 + 56);
      if ( v21 )
        v22 = *(_BYTE *)(v21 + 48);
      else
        v22 = 15;
      v23 = v22;
      if ( (*(_BYTE *)(v18 + 25) & 1) == 0 )
      {
        v28 = KiAbOwnerComputeCpuPriorityKey(v18);
        if ( v28 < v29 )
          v23 = v28;
      }
      KiAbTryIncrementIoWaiterCounts((unsigned __int8 *)v12, v18);
      CpuPriorityKey = KiAbEntryGetCpuPriorityKey((unsigned __int8 *)v12, v24, v25);
      if ( v23 < CpuPriorityKey )
      {
        if ( !v26 )
        {
          p_AbSelfIoBoostsList = (__int64)v39;
          goto LABEL_36;
        }
      }
      else if ( !v26 )
      {
        p_AbSelfIoBoostsList = (__int64)v39;
LABEL_14:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        goto LABEL_15;
      }
      p_AbSelfIoBoostsList = (__int64)v39;
      KiAbIoBoostOwners(v18, v26, (int)&v37, (int)&v38, (__int64)v39);
LABEL_36:
      KiAbCpuBoostOwners(v18, CpuPriorityKey, (int)&v37, (int)&v38, p_AbSelfIoBoostsList);
LABEL_37:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( v14 )
      {
        v32 = (_DWORD *)(v12 - 16LL * *(unsigned __int8 *)(v12 + 24));
        if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v32, 1953261124LL) )
        {
          if ( (v14 & 1) != 0 )
            IoBoostThreadIoPriority(v32, 2LL, 0x80000000LL);
          if ( (v14 & 2) != 0 )
          {
            if ( v32[342] )
            {
              ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
              if ( ExtensionTable )
              {
                (*(void (__fastcall **)(_DWORD *))(ExtensionTable + 16))(v32);
                ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
              }
            }
          }
          ObDereferenceObjectDeferDeleteWithTag(v32, 0x746C6644u);
        }
      }
      goto LABEL_15;
    }
    v31 = *(_BYTE *)(v12 - 16LL * *(unsigned __int8 *)(v12 + 24) + 195);
    if ( v31 > 15 )
      v31 = 15;
    if ( v31 != *(_BYTE *)(v12 + 48) )
      goto LABEL_9;
LABEL_15:
    v10 = !_BitScanForward((unsigned int *)&a1, v9);
    v3 = 0LL;
    v45 = a1;
  }
  while ( !v10 );
  v19 = v38;
  for ( i = v43; v38; v19 = v38 )
  {
    v35 = (volatile signed __int16 *)(v19 - 101);
    v38 = (_QWORD *)*v19;
    *v19 = 1LL;
    _InterlockedOr(v36, 0);
    if ( *((_BYTE *)v19 - 15) )
      KiAbProcessThreadLocks((__int64)(v19 - 101), 0, 1, 0, (__int64)&v37, (__int64)&v38, p_AbSelfIoBoostsList);
    _InterlockedDecrement16(v35 + 434);
  }
  CurrentPrcb = v40;
LABEL_18:
  v20 = v37;
  if ( v37 )
    v37 = (_QWORD *)*v37;
LABEL_20:
  if ( v20 )
  {
    while ( 1 )
    {
      KiDeferredReadySingleThread((__int64)CurrentPrcb, (ULONG_PTR)(v20 - 27), (__int64)&v37, v3);
      v20 = v37;
      if ( !v37 )
        break;
      v37 = (_QWORD *)*v37;
    }
  }
  if ( i )
  {
    LOBYTE(v5) = 2;
    KiCheckForThreadDispatch(CurrentPrcb, v5);
  }
}
