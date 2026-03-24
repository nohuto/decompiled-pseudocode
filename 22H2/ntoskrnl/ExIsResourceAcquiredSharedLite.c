/*
 * XREFs of ExIsResourceAcquiredSharedLite @ 0x1402D0610
 * Callers:
 *     CmpDoQueryKeyName @ 0x140347BE0 (CmpDoQueryKeyName.c)
 *     NtSetInformationKey @ 0x1405F3A00 (NtSetInformationKey.c)
 *     NtEnumerateKey @ 0x1405F3E50 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1405F48F0 (NtEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x140645200 (NtQueryValueKey.c)
 *     CmPostCallbackNotificationEx @ 0x140645BA0 (CmPostCallbackNotificationEx.c)
 *     NtQueryKey @ 0x140645C90 (NtQueryKey.c)
 *     CmpParseKey @ 0x140646330 (CmpParseKey.c)
 *     CmUnloadKey @ 0x14066C6BC (CmUnloadKey.c)
 *     NtQueryMultipleValueKey @ 0x140686BA0 (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x140696C00 (NtFlushKey.c)
 *     PpDevNodeLockTree @ 0x1406B2A34 (PpDevNodeLockTree.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1406BFFC4 (FsRtlAcquireFileForCcFlushEx.c)
 *     NtSetValueKey @ 0x1406DCBB0 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x1406DDF10 (CmpSecurityMethod.c)
 *     CmpDeleteKeyObject @ 0x1406E03B0 (CmpDeleteKeyObject.c)
 *     CmPostCallbackNotification @ 0x1406E05C0 (CmPostCallbackNotification.c)
 *     NtDeleteValueKey @ 0x1406E1EF0 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1406E5000 (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x1406E737C (CmLoadDifferencingKey.c)
 *     NtSaveKeyEx @ 0x140729810 (NtSaveKeyEx.c)
 *     NtRenameKey @ 0x140868C80 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140869190 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140869520 (NtRestoreKey.c)
 *     CmpDoReOpenTransKey @ 0x140882300 (CmpDoReOpenTransKey.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ExpFastResourceLegacyIsAcquiredShared @ 0x1405B48B0 (ExpFastResourceLegacyIsAcquiredShared.c)
 */

ULONG __stdcall ExIsResourceAcquiredSharedLite(PERESOURCE Resource)
{
  __int64 v1; // r8
  USHORT Flag; // cx
  ULONG v4; // esi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 ResourceIndex; // rbp
  unsigned __int8 v8; // r11
  POWNER_ENTRY OwnerTable; // rax
  unsigned int TableSize; // edx
  int v11; // ecx
  bool v12; // zf
  unsigned __int64 OldIrql; // rbx
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v14; // esi
  unsigned __int8 CurrentIrql; // dl
  _DWORD *SchedulerAssist; // r10
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  }
  if ( (Flag & 1) == 0 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( !Resource->ActiveEntries )
      return 0;
    CurrentThread = KeGetCurrentThread();
    if ( (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
      return Resource->OwnerEntry.TableSize >> 3;
    v4 = 0;
    if ( (Flag & 0x80u) != 0 )
      return v4;
    ResourceIndex = CurrentThread->ResourceIndex;
    LockHandle.LockQueue.Lock = &Resource->SpinLock;
    LockHandle.LockQueue.Next = 0LL;
    v8 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v8 <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v1 = (-1LL << (v8 + 1)) & 4;
      SchedulerAssist[5] |= v1;
    }
    LockHandle.OldIrql = v8;
    KxAcquireQueuedSpinLock(&LockHandle, &Resource->SpinLock, v1);
    OwnerTable = Resource->OwnerTable;
    if ( OwnerTable )
    {
      TableSize = OwnerTable->TableSize;
      if ( (unsigned int)ResourceIndex < TableSize
        && (struct _KTHREAD *)OwnerTable[ResourceIndex].OwnerThread == CurrentThread )
      {
        v14 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable[ResourceIndex].TableSize;
      }
      else
      {
        v11 = 1;
        if ( TableSize <= 1 )
          goto LABEL_18;
        while ( 1 )
        {
          v12 = OwnerTable[1].OwnerThread == (_QWORD)CurrentThread;
          ++OwnerTable;
          if ( v12 )
            break;
          if ( ++v11 >= TableSize )
            goto LABEL_18;
        }
        v14 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable->TableSize;
      }
      v4 = *(unsigned int *)&v14 >> 3;
    }
LABEL_18:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && LockHandle.OldIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v12 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    return v4;
  }
  return ExpFastResourceLegacyIsAcquiredShared(Resource);
}
