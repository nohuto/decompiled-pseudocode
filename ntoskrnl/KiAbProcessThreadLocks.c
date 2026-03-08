/*
 * XREFs of KiAbProcessThreadLocks @ 0x140239A40
 * Callers:
 *     KiProcessDeferredReadyList @ 0x140226BD0 (KiProcessDeferredReadyList.c)
 *     KiAbDeferredProcessingWorker @ 0x1402391E0 (KiAbDeferredProcessingWorker.c)
 *     KiAbProcessContextSwitch @ 0x140239508 (KiAbProcessContextSwitch.c)
 *     KiAbPropagateBoosts @ 0x1402395C0 (KiAbPropagateBoosts.c)
 *     KiCheckForThreadDispatch @ 0x14023A168 (KiCheckForThreadDispatch.c)
 *     KiDispatchInterrupt @ 0x140255DA0 (KiDispatchInterrupt.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 *     KeSetUserAffinityThread @ 0x1402B0FA0 (KeSetUserAffinityThread.c)
 *     KiReadyOutSwappedThreads @ 0x1402C02E8 (KiReadyOutSwappedThreads.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402D9A60 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402F2018 (KeSetSchedulingGroupRankBias.c)
 *     KiSetLegacyAffinityThread @ 0x1402FDE2C (KiSetLegacyAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x140301184 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x140301A54 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeBoostPriorityThread @ 0x140359A88 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140369500 (KeSetBasePriorityThread.c)
 *     KeSetCpuSetsProcess @ 0x140398C34 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x140399998 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403A8A60 (KeSetUserGroupAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x1403C7578 (KiAbForceProcessLockEntry.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140572DE4 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140573640 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1405755E4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x140239E10 (KiAbDetermineMaxWaiterPriority.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14024CE30 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x140282B80 (KiAbTryIncrementIoWaiterCounts.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1402C57F0 (ExGetExtensionTable.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     IoBoostThreadIoPriority @ 0x140356FD0 (IoBoostThreadIoPriority.c)
 *     KiAbIoBoostOwners @ 0x140357CB0 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x140357DB4 (KiAbCpuBoostOwners.c)
 *     KiAbSetMinimumThreadPriority @ 0x140357EB4 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140358150 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14035822C (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14035827C (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140358338 (KiAbOwnerComputeCpuPriorityKey.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __fastcall KiAbProcessThreadLocks(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v7; // r12d
  int v8; // r13d
  char v9; // al
  __int64 v11; // r14
  unsigned int v12; // ebx
  bool i; // zf
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // r15d
  __int64 LockedHeadEntry; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  char v21; // r12
  int v22; // r10d
  char CpuPriorityKey; // r13
  _DWORD *v24; // rdi
  char v25; // al
  char v26; // cl
  __int64 ExtensionTable; // rax
  int v28; // [rsp+30h] [rbp-58h] BYREF
  __int128 v29; // [rsp+38h] [rbp-50h] BYREF
  __int64 v30; // [rsp+48h] [rbp-40h]
  int v31; // [rsp+90h] [rbp+8h] BYREF
  int v32; // [rsp+A0h] [rbp+18h]
  int v33; // [rsp+A8h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  v7 = a4;
  v8 = a3;
  v9 = *(_BYTE *)(a1 + 792) | *(_BYTE *)(a1 + 870);
  v31 = 0;
  v11 = a1;
  if ( v9 != 63 )
  {
    v12 = (*(unsigned __int8 *)(a1 + 792) | *(unsigned __int8 *)(a1 + 870)) ^ 0x3F;
    for ( i = !_BitScanForward((unsigned int *)&a1, v12); !i; i = !_BitScanForward((unsigned int *)&a1, v12) )
    {
      v12 &= v12 - 1;
      v14 = 96 * a1;
      v15 = v14 + v11 + 1696;
      v16 = *(_QWORD *)v15;
      if ( !*(_QWORD *)v15 || (v16 & 2) != 0 || a2 && (v16 & 1) != 0 )
        continue;
      if ( v16 < 0 )
      {
        if ( a2 )
        {
          if ( (*(_BYTE *)(v15 + 19) & 1) != 0 )
            continue;
          if ( *(_BYTE *)(v15 + 17) )
          {
            v26 = *(_BYTE *)(v15 - 96LL * *(unsigned __int8 *)(v15 + 16) - 1501);
            if ( v26 > 30 )
              v26 = 30;
            if ( v26 == *(_BYTE *)(v15 + 48) )
              continue;
          }
          else if ( (unsigned __int8)KiAbOwnerComputeCpuPriorityKey(v14 + v11 + 1696) == *(_BYTE *)(v15 + 48) )
          {
            continue;
          }
        }
        else if ( *(_BYTE *)(v15 + 17) )
        {
          if ( !v8 )
            continue;
        }
        else if ( !v7 )
        {
          continue;
        }
      }
      else if ( !a2 )
      {
        continue;
      }
      v30 = 0LL;
      v17 = 0;
      v31 = 0;
      v28 = 0;
      v29 = 0LL;
      LockedHeadEntry = KiAbEntryGetLockedHeadEntry(v15, a2, &v29);
      v19 = LockedHeadEntry;
      if ( LockedHeadEntry )
      {
        if ( *(_BYTE *)(v15 + 17) )
        {
          if ( !v8 )
            goto LABEL_41;
          if ( v15 != LockedHeadEntry )
            KiAbEntryUpdateWaiterTreePosition(v15, LockedHeadEntry);
          v20 = *(_QWORD *)(v19 + 56);
          if ( v20 )
            v21 = *(_BYTE *)(v20 + 24);
          else
            v21 = 30;
          if ( !*(_BYTE *)(v19 + 17) )
          {
            v25 = KiAbOwnerComputeCpuPriorityKey(v19);
            if ( v25 < v21 )
              v21 = v25;
          }
          KiAbTryIncrementIoWaiterCounts(v15, v19);
          CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v15);
          if ( v21 < CpuPriorityKey )
          {
            if ( v22 )
LABEL_52:
              KiAbIoBoostOwners(v19, v22, a5, a6, a7);
            KiAbCpuBoostOwners(v19, (unsigned __int8)CpuPriorityKey, a5, a6, a7);
            v7 = v33;
            v8 = v32;
LABEL_41:
            KxReleaseQueuedSpinLock(&v29);
            if ( v17 )
            {
              v24 = (_DWORD *)(v15 - 96LL * *(unsigned __int8 *)(v15 + 16) - 1696);
              if ( ObReferenceObjectSafeWithTag((__int64)v24) )
              {
                if ( (v17 & 1) != 0 )
                  IoBoostThreadIoPriority(v24, 2LL, 0x80000000LL);
                if ( (v17 & 2) != 0 && v24[362] )
                {
                  ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
                  if ( ExtensionTable )
                  {
                    (*(void (__fastcall **)(_DWORD *))(ExtensionTable + 16))(v24);
                    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                  }
                }
                ObDereferenceObjectDeferDeleteWithTag(v24, 0x746C6644u);
              }
            }
            continue;
          }
          if ( v22 )
            goto LABEL_52;
          v7 = v33;
          v8 = v32;
        }
        else
        {
          if ( !v7 )
            goto LABEL_41;
          if ( v15 != LockedHeadEntry )
            KiAbEntryUpdateOwnerTreePosition(v15, LockedHeadEntry);
          KiAbDetermineMaxWaiterPriority(v19, &v31);
          if ( v31 )
          {
            if ( (unsigned int)KiAbSetMinimumThreadPriority(v15, (unsigned int)&v31, a5, a6, a7, (__int64)&v28)
              && v15 != v19 )
            {
              KiAbEntryUpdateOwnerTreePosition(v15, v19);
            }
            v17 = v28;
            goto LABEL_41;
          }
        }
        KxReleaseQueuedSpinLock(&v29);
      }
    }
  }
}
