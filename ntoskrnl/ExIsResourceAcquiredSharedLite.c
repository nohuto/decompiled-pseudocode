/*
 * XREFs of ExIsResourceAcquiredSharedLite @ 0x140336990
 * Callers:
 *     CmpIsRegistryLockAcquired @ 0x1402630C0 (CmpIsRegistryLockAcquired.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14075EFA8 (FsRtlAcquireFileForCcFlushEx.c)
 *     CmpDoReOpenTransKey @ 0x140A27F24 (CmpDoReOpenTransKey.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140336C10 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpFastResourceLegacyIsAcquiredShared @ 0x1406081A8 (ExpFastResourceLegacyIsAcquiredShared.c)
 */

ULONG __stdcall ExIsResourceAcquiredSharedLite(PERESOURCE Resource)
{
  USHORT Flag; // ax
  __int16 v3; // cx
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v5; // cl
  struct _KTHREAD *CurrentThread; // rsi
  ULONG v8; // ebx
  __int64 ResourceIndex; // rbp
  unsigned __int8 v10; // r8
  _DWORD *SchedulerAssist; // r10
  __int64 v12; // rdx
  POWNER_ENTRY OwnerTable; // rcx
  unsigned int TableSize; // edx
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v15; // ebx
  int v16; // eax
  bool v17; // zf
  unsigned __int64 v18; // rdi
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v21; // r8
  int v22; // eax
  __int128 v23; // [rsp+30h] [rbp-28h] BYREF
  __int64 v24; // [rsp+40h] [rbp-18h]

  Flag = Resource->Flag;
  v3 = Flag & 0x41;
  if ( FeatureFastResource2 )
  {
    if ( v3 != 1 )
    {
      if ( (Flag & 1) == 0 )
        goto LABEL_11;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql > 2u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
      goto LABEL_9;
    }
LABEL_43:
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  }
  if ( v3 == 1 )
    goto LABEL_43;
  if ( (Flag & 1) == 0 )
    goto LABEL_11;
  v5 = KeGetCurrentIrql();
  if ( v5 > 2u )
    KeBugCheckEx(0x1C6u, 0LL, v5, 2uLL, 0LL);
LABEL_9:
  if ( (Flag & 1) != 0 )
    return ExpFastResourceLegacyIsAcquiredShared(Resource);
LABEL_11:
  v23 = 0LL;
  v24 = 0LL;
  if ( !Resource->ActiveEntries )
    return 0;
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
    return Resource->OwnerEntry.TableSize >> 3;
  v8 = 0;
  if ( (Flag & 0x80u) == 0 )
  {
    ResourceIndex = CurrentThread->ResourceIndex;
    *((_QWORD *)&v23 + 1) = &Resource->SpinLock;
    *(_QWORD *)&v23 = 0LL;
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
    LOBYTE(v24) = v10;
    KxAcquireQueuedSpinLock(&v23, &Resource->SpinLock);
    OwnerTable = Resource->OwnerTable;
    if ( !OwnerTable )
      goto LABEL_33;
    TableSize = OwnerTable->TableSize;
    if ( (unsigned int)ResourceIndex < TableSize
      && (struct _KTHREAD *)OwnerTable[ResourceIndex].OwnerThread == CurrentThread )
    {
      v15 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable[ResourceIndex].TableSize;
    }
    else
    {
      v16 = 1;
      if ( TableSize <= 1 )
        goto LABEL_33;
      while ( 1 )
      {
        v17 = OwnerTable[1].OwnerThread == (_QWORD)CurrentThread;
        ++OwnerTable;
        if ( v17 )
          break;
        if ( ++v16 >= TableSize )
          goto LABEL_33;
      }
      v15 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable->TableSize;
    }
    v8 = *(unsigned int *)&v15 >> 3;
LABEL_33:
    KxReleaseQueuedSpinLock(&v23);
    v18 = (unsigned __int8)v24;
    if ( KiIrqlFlags )
    {
      v19 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v19 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v21 = CurrentPrcb->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
        v17 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v18);
  }
  return v8;
}
