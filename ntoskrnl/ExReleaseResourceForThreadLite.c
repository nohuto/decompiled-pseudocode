/*
 * XREFs of ExReleaseResourceForThreadLite @ 0x14033A350
 * Callers:
 *     DifExReleaseResourceForThreadLiteWrapper @ 0x1405D77C0 (DifExReleaseResourceForThreadLiteWrapper.c)
 *     CcUnpinDataForThread @ 0x140933CB0 (CcUnpinDataForThread.c)
 * Callees:
 *     ExpFindCurrentThread @ 0x14033A7F0 (ExpFindCurrentThread.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     ExpPrepareToWakeResourceShared @ 0x14033A9D0 (ExpPrepareToWakeResourceShared.c)
 *     ExpFreeOwnerEntry @ 0x14033B150 (ExpFreeOwnerEntry.c)
 *     ExpCommitWakeResourceShared @ 0x14033B220 (ExpCommitWakeResourceShared.c)
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14033B5E0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpFastResourceLegacyRelease @ 0x1403C5290 (ExpFastResourceLegacyRelease.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PerfLogExecutiveResourceRelease @ 0x1405FE480 (PerfLogExecutiveResourceRelease.c)
 */

void __stdcall ExReleaseResourceForThreadLite(PERESOURCE Resource, ERESOURCE_THREAD ResourceThreadId)
{
  USHORT Flag; // cx
  __int16 v5; // ax
  unsigned __int8 v6; // al
  struct _KTHREAD *v7; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v10; // r8
  _DWORD *SchedulerAssist; // r11
  __int64 v12; // rdx
  struct _KTHREAD *v13; // r8
  USHORT v14; // cx
  int v15; // eax
  int v16; // r15d
  __int64 v17; // rax
  unsigned int v18; // esi
  ULONG ContentionCount; // r13d
  unsigned int v20; // r14d
  unsigned int v21; // esi
  unsigned __int64 v22; // rdi
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  bool v27; // zf
  ERESOURCE_THREAD v28; // rsi
  int WaiterPriority; // r12d
  ULONG v30; // eax
  _DWORD *v31; // r8
  unsigned __int64 v32; // r14
  unsigned __int8 v33; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v35; // eax
  __int64 v36; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v37[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v38; // [rsp+48h] [rbp-18h]
  int v39; // [rsp+A0h] [rbp+40h] BYREF
  ERESOURCE_THREAD v40; // [rsp+A8h] [rbp+48h] BYREF

  Flag = Resource->Flag;
  v5 = Flag & 0x41;
  if ( !FeatureFastResource2 )
  {
    if ( v5 != 1 )
    {
      if ( (Flag & 1) == 0 )
        goto LABEL_18;
      CurrentIrql = KeGetCurrentIrql();
      CurrentThread = KeGetCurrentThread();
      if ( CurrentIrql > 2u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
      if ( CurrentIrql || (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->WaitBlock[3].SpareLong )
        goto LABEL_9;
LABEL_68:
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
LABEL_66:
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  }
  if ( v5 == 1 )
    goto LABEL_66;
  if ( (Flag & 1) == 0 )
    goto LABEL_18;
  v6 = KeGetCurrentIrql();
  v7 = KeGetCurrentThread();
  if ( v6 > 2u )
    KeBugCheckEx(0x1C6u, 0LL, v6, 2uLL, 0LL);
  if ( !v6 && (v7->MiscFlags & 0x400) == 0 && !v7->WaitBlock[3].SpareLong )
    goto LABEL_68;
  if ( (Flag & 1) != 0 )
  {
LABEL_9:
    if ( (struct _KTHREAD *)ResourceThreadId != KeGetCurrentThread() )
      KeBugCheckEx(0x1C6u, 0x11uLL, (ULONG_PTR)Resource, ResourceThreadId, 0LL);
    ExpFastResourceLegacyRelease((ULONG_PTR)Resource);
    return;
  }
LABEL_18:
  v38 = 0LL;
  v37[0] = 0LL;
  v37[1] = &Resource->SpinLock;
  v10 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v10 <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v10 == 2 )
      LODWORD(v12) = 4;
    else
      v12 = (-1LL << (v10 + 1)) & 4;
    SchedulerAssist[5] |= v12;
  }
  LOBYTE(v38) = v10;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v37, &Resource->SpinLock);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)v37) )
  {
    KxWaitForLockOwnerShip(v37);
  }
  v13 = KeGetCurrentThread();
  v14 = Resource->Flag;
  if ( ((v14 & 1) != 0 || ExpResourceEnforceOwnerTransfer)
    && (ResourceThreadId & 3) != 3
    && (struct _KTHREAD *)ResourceThreadId != v13 )
  {
    KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)v13, ResourceThreadId, 0LL);
  }
  if ( (v14 & 0x80u) == 0 )
  {
    v15 = 0;
    v16 = DWORD1(PerfGlobalGroupMask) & 0x20000;
    v36 = 0LL;
    v40 = 0LL;
    v39 = 0;
    if ( (ResourceThreadId & 3) == 0 )
      v15 = *(unsigned __int8 *)(ResourceThreadId + 1120);
    v17 = ExpFindCurrentThread((_DWORD)Resource, ResourceThreadId, (unsigned int)v37, 0, 0, v15);
    if ( !v17 )
      KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, ResourceThreadId, (ULONG_PTR)Resource->OwnerTable, 2uLL);
    v18 = *(_DWORD *)(v17 + 8) & 7 | (8 * (*(_DWORD *)(v17 + 8) >> 3) - 8);
    *(_DWORD *)(v17 + 8) = v18;
    if ( v18 < 8 )
    {
      ExpFreeOwnerEntry(v17);
      ContentionCount = Resource->ContentionCount;
      ExpPrepareToWakeResourceShared(Resource, &v36, &v40, &v39);
      if ( !Resource->NumberOfExclusiveWaiters && !Resource->NumberOfSharedWaiters )
        Resource->Flag &= 0xF9u;
      v28 = v40;
      WaiterPriority = Resource->WaiterPriority;
      if ( v40 )
      {
        v30 = Resource->OwnerEntry.TableSize & 7;
        Resource->OwnerEntry.OwnerThread = v40;
        Resource->OwnerEntry.TableSize = v30 | 8;
      }
      KxReleaseQueuedSpinLock(v37);
      v32 = (unsigned __int8)v38;
      if ( KiIrqlFlags )
      {
        v33 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && (unsigned __int8)v38 <= 0xFu && v33 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v31 = CurrentPrcb->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
          v27 = (v35 & v31[5]) == 0;
          v31[5] &= v35;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v28 = v40;
        }
      }
      __writecr8(v32);
      ExpCommitWakeResourceShared(1, (unsigned int)&v36, (_DWORD)v31, WaiterPriority, v28 != 0);
      v20 = 65602;
      v21 = 0;
    }
    else
    {
      ContentionCount = Resource->ContentionCount;
      v20 = 65618;
      v21 = v18 >> 3;
      KxReleaseQueuedSpinLock(v37);
      v22 = (unsigned __int8)v38;
      if ( KiIrqlFlags )
      {
        v23 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && (unsigned __int8)v38 <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
          v27 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
      __writecr8(v22);
    }
    __incgsdword(0x8A70u);
    if ( v16 )
      PerfLogExecutiveResourceRelease(v20, Resource, v21, ContentionCount);
  }
  else
  {
    ExpReleaseResourceExclusiveForThreadLite((ULONG_PTR)Resource, ResourceThreadId);
  }
}
