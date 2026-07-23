/*
 * XREFs of ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14026782C
 * Callers:
 *     ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14032BE70 (-SmStWorkerThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14022FF20 (KeSetActualBasePriorityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     KeWaitForMultipleObjects @ 0x14024B500 (KeWaitForMultipleObjects.c)
 *     IoSetThreadHardErrorMode @ 0x14024FB60 (IoSetThreadHardErrorMode.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140253F54 (KiQueryUnbiasedInterruptTime.c)
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     MiChargeResident @ 0x140259EB8 (MiChargeResident.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x140266D70 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1402680B8 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402682C8 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140268360 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     SmSetThreadPagePriority @ 0x1403135D0 (SmSetThreadPagePriority.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14032939C (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     MmSetHardFaultBehavior @ 0x14032AAE8 (MmSetHardFaultBehavior.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14034F67C (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14059CEA0 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorker(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // r13d
  __int64 v4; // rax
  int v5; // edx
  int v6; // edi
  struct _KTHREAD *v7; // rdi
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD *v11; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v13; // r12
  unsigned int v14; // r8d
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  _SLIST_ENTRY *v20; // r15
  NTSTATUS v21; // eax
  NTSTATUS v22; // ecx
  __int64 v23; // rax
  struct _KTHREAD *v24; // rdi
  unsigned int v25; // edx
  unsigned __int8 v26; // r15
  unsigned int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 UnbiasedInterruptTime; // rax
  struct _KTHREAD *v33; // rdi
  unsigned int v34; // edx
  unsigned __int8 v35; // r15
  unsigned int v36; // r8d
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 result; // rax
  _DWORD v42[4]; // [rsp+40h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-28h] BYREF
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-20h] BYREF
  PVOID Object[3]; // [rsp+60h] [rbp-18h] BYREF
  NTSTATUS v46; // [rsp+C0h] [rbp+48h] BYREF
  int v47; // [rsp+C8h] [rbp+50h]
  int v48; // [rsp+D0h] [rbp+58h]
  int v49; // [rsp+D8h] [rbp+60h]

  v1 = *(_QWORD *)a1;
  v42[0] = 0;
  Interval.QuadPart = 0LL;
  v3 = 0;
  IoSetThreadHardErrorMode(0);
  CurrentThread = KeGetCurrentThread();
  v4 = *(unsigned __int8 *)(v1 + 6022);
  if ( (_DWORD)v4 == 4 )
    v5 = *(_DWORD *)(v1 + 6728);
  else
    v5 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition + v4);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v5);
  v6 = 0;
  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
  {
    SmSetThreadPagePriority(&CurrentThread, 0LL);
    v7 = KeGetCurrentThread();
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, 0x1AuLL, 1024LL, v8) )
    {
      --v7->SpecialApcDisable;
      LOBYTE(v7[1].Queue) |= 4u;
      v3 = 1;
      v6 = 0;
    }
    else
    {
      v6 = -1073741670;
    }
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  }
  *(_DWORD *)(a1 + 32) = v6;
  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( v6 >= 0 )
  {
    Object[0] = (PVOID)(v1 + 6128);
    v9 = v1 + 6600;
    Object[1] = (PVOID)(v1 + 6152);
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = KeWaitForMultipleObjects(
                2u,
                Object,
                WaitAny,
                Executive,
                0,
                0,
                (PLARGE_INTEGER)(v9 & -(__int64)(*(_QWORD *)v9 != 0LL)),
                0LL);
        v46 = v21;
        v22 = v21;
        if ( v21 >= 2 )
          break;
LABEL_37:
        if ( v22 )
        {
          if ( v22 == 1 )
            goto LABEL_89;
LABEL_35:
          v9 = v1 + 6600;
        }
        else
        {
          KeResetEvent((PRKEVENT)Object[0]);
          v23 = SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, v42);
          v9 = v1 + 6600;
          v20 = (_SLIST_ENTRY *)v23;
          if ( v23 )
          {
            while ( 1 )
            {
              SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
              LOBYTE(v10) = *(_BYTE *)(v1 + 6021);
              if ( (v10 & 1) == 0 || v42[0] )
              {
                if ( (v10 & 2) != 0 && ((__int64)v20->Next & 7) == 0 )
                {
                  v46 = -1073741058;
LABEL_12:
                  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
                  {
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock(v1 + 6024);
                    v48 = 0;
                    v11 = KeGetCurrentThread();
                    if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
                      SessionId = MmGetSessionIdEx(v11->ApcState.Process);
                    else
                      SessionId = -1;
                    --v11->SpecialApcDisable;
                    v13 = ++v11->AbAllocationRegionCount;
                    v14 = ((char)v11->AbEntrySummary | (char)v11->AbOrphanedEntrySummary) ^ 0x3F;
                    while ( 1 )
                    {
                      v15 = !_BitScanReverse((unsigned int *)&v16, v14);
                      v42[2] = v16;
                      if ( v15 )
                        break;
                      v17 = (__int64)&v11->LockEntries[v16];
                      v14 &= ~(1 << v16);
                      if ( (*(_BYTE *)(v17 + 26) & 1) != 0
                        && (*(_DWORD *)(v17 + 32) & 1) == 0
                        && (*(_QWORD *)(v17 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
                        && *(_DWORD *)(v17 + 40) == SessionId )
                      {
                        *(_BYTE *)(v17 + 26) &= ~1u;
                        if ( *(_QWORD *)(v17 + 32) )
                        {
                          if ( v17 )
                          {
                            *(_BYTE *)(v17 + 32) |= 2u;
                            if ( *(__int64 *)(v17 + 32) < 0 )
                              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v17);
                            v48 = 0;
                            v48 = *(_DWORD *)(v17 + 88) & 0x1FFFF;
                            *(_DWORD *)(v17 + 88) &= 0xFFFE0000;
                            *(_BYTE *)(v17 + 25) &= ~1u;
                            *(_QWORD *)(v17 + 32) = 0LL;
                            v18 = (signed __int64)(v17 - (unsigned __int64)v11->LockEntries) / 96;
                            if ( v13 == 1 )
                              v11->AbEntrySummary |= 1 << v18;
                            else
                              _InterlockedOr8((volatile signed __int8 *)&v11->AbOrphanedEntrySummary, 1 << v18);
                            goto LABEL_29;
                          }
                          break;
                        }
                      }
                    }
                    if ( (*((_DWORD *)&v11->0 + 1) & 0x10000) == 0 )
                      KeBugCheckEx(0x162u, (ULONG_PTR)v11, v1 + 6024, SessionId, 0LL);
LABEL_29:
                    --v11->AbAllocationRegionCount;
                    KiAbThreadRemoveBoosts((ULONG_PTR)v11);
                    v15 = v11->SpecialApcDisable++ == -1;
                    if ( v15 && ($C459BD0D405E8E46662177FB3D0A143F *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
                      KiCheckForKernelApcDelivery(v19);
                    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
                  }
                  SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(v10, v1, v20, (unsigned int *)&v46);
                  goto LABEL_34;
                }
                v46 = ST_STORE<SM_TRAITS>::StWorkItemProcess(v1, v20);
                if ( v46 != 259 )
                  goto LABEL_12;
              }
              else
              {
                v46 = -1073741058;
                ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(v1, v20);
              }
              if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v1 + 6024);
                v49 = 0;
                v24 = KeGetCurrentThread();
                if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
                  v25 = MmGetSessionIdEx(v24->ApcState.Process);
                else
                  v25 = -1;
                --v24->SpecialApcDisable;
                v26 = ++v24->AbAllocationRegionCount;
                v27 = ((char)v24->AbEntrySummary | (char)v24->AbOrphanedEntrySummary) ^ 0x3F;
                while ( 1 )
                {
                  v15 = !_BitScanReverse((unsigned int *)&v28, v27);
                  v42[3] = v28;
                  if ( v15 )
                    break;
                  v29 = (__int64)&v24->LockEntries[v28];
                  v27 &= ~(1 << v28);
                  if ( (*(_BYTE *)(v29 + 26) & 1) != 0
                    && (*(_DWORD *)(v29 + 32) & 1) == 0
                    && (*(_QWORD *)(v29 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
                    && *(_DWORD *)(v29 + 40) == v25 )
                  {
                    *(_BYTE *)(v29 + 26) &= ~1u;
                    if ( *(_QWORD *)(v29 + 32) )
                    {
                      if ( v29 )
                      {
                        *(_BYTE *)(v29 + 32) |= 2u;
                        if ( *(__int64 *)(v29 + 32) < 0 )
                          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v29);
                        v49 = 0;
                        v49 = *(_DWORD *)(v29 + 88) & 0x1FFFF;
                        *(_DWORD *)(v29 + 88) &= 0xFFFE0000;
                        *(_BYTE *)(v29 + 25) &= ~1u;
                        *(_QWORD *)(v29 + 32) = 0LL;
                        v30 = (signed __int64)(v29 - (unsigned __int64)v24->LockEntries) / 96;
                        if ( v26 == 1 )
                          v24->AbEntrySummary |= 1 << v30;
                        else
                          _InterlockedOr8((volatile signed __int8 *)&v24->AbOrphanedEntrySummary, 1 << v30);
                        goto LABEL_59;
                      }
                      break;
                    }
                  }
                }
                if ( (*((_DWORD *)&v24->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v24, v1 + 6024, v25, 0LL);
LABEL_59:
                --v24->AbAllocationRegionCount;
                KiAbThreadRemoveBoosts((ULONG_PTR)v24);
                v15 = v24->SpecialApcDisable++ == -1;
                if ( v15 && ($C459BD0D405E8E46662177FB3D0A143F *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
                  KiCheckForKernelApcDelivery(v31);
                KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
              }
LABEL_34:
              v20 = (_SLIST_ENTRY *)SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, v42);
              if ( !v20 )
                goto LABEL_35;
            }
          }
        }
      }
      v9 = v1 + 6600;
      if ( v21 == 258 )
      {
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
        ST_STORE<SM_TRAITS>::StDrainReadContextList(v1);
        *(_QWORD *)(v1 + 5928) += *(_QWORD *)(v1 + 5920);
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
        ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(v1 + 5744, UnbiasedInterruptTime);
        if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v1 + 6024);
          v47 = 0;
          v33 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v1 + 6024) == 1 )
            v34 = MmGetSessionIdEx(v33->ApcState.Process);
          else
            v34 = -1;
          --v33->SpecialApcDisable;
          v35 = ++v33->AbAllocationRegionCount;
          v36 = ((char)v33->AbEntrySummary | (char)v33->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v15 = !_BitScanReverse((unsigned int *)&v37, v36);
            v42[1] = v37;
            if ( v15 )
              break;
            v38 = (__int64)&v33->LockEntries[v37];
            v36 &= ~(1 << v37);
            if ( (*(_BYTE *)(v38 + 26) & 1) != 0
              && (*(_DWORD *)(v38 + 32) & 1) == 0
              && (*(_QWORD *)(v38 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((v1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v38 + 40) == v34 )
            {
              *(_BYTE *)(v38 + 26) &= ~1u;
              if ( *(_QWORD *)(v38 + 32) )
              {
                if ( v38 )
                {
                  *(_BYTE *)(v38 + 32) |= 2u;
                  if ( *(__int64 *)(v38 + 32) < 0 )
                    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v38);
                  v47 = 0;
                  v47 = *(_DWORD *)(v38 + 88) & 0x1FFFF;
                  *(_DWORD *)(v38 + 88) &= 0xFFFE0000;
                  *(_BYTE *)(v38 + 25) &= ~1u;
                  *(_QWORD *)(v38 + 32) = 0LL;
                  v39 = (signed __int64)(v38 - (unsigned __int64)v33->LockEntries) / 96;
                  if ( v35 == 1 )
                    v33->AbEntrySummary |= 1 << v39;
                  else
                    _InterlockedOr8((volatile signed __int8 *)&v33->AbOrphanedEntrySummary, 1 << v39);
                  goto LABEL_83;
                }
                break;
              }
            }
          }
          if ( (*((_DWORD *)&v33->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v33, v1 + 6024, v34, 0LL);
LABEL_83:
          --v33->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v33);
          v15 = v33->SpecialApcDisable++ == -1;
          if ( v15 && ($C459BD0D405E8E46662177FB3D0A143F *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
            KiCheckForKernelApcDelivery(v40);
          KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        }
        v22 = 0;
        goto LABEL_37;
      }
    }
  }
LABEL_89:
  if ( v3 )
    MmSetHardFaultBehavior(KeGetCurrentThread(), 0LL);
  Interval.QuadPart = -150000LL;
  while ( 1 )
  {
    result = *(unsigned int *)(v1 + 6732);
    if ( !(_DWORD)result )
      break;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
