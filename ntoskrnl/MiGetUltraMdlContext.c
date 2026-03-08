/*
 * XREFs of MiGetUltraMdlContext @ 0x14065F3EC
 * Callers:
 *     MmMapMdl @ 0x14062CC90 (MmMapMdl.c)
 * Callees:
 *     MiCreateUltraThreadContextHelper @ 0x1402445C4 (MiCreateUltraThreadContextHelper.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiInitializePageColorBase @ 0x14028B040 (MiInitializePageColorBase.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDeleteUltraMapContext @ 0x1403513B4 (MiDeleteUltraMapContext.c)
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY MiGetUltraMdlContext()
{
  unsigned int v0; // ebx
  unsigned int v1; // esi
  unsigned __int64 v2; // rdi
  PSLIST_ENTRY result; // rax
  PVOID Pool; // rdi
  int v5; // ebx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v12 = 0LL;
  v0 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v1 = 0;
  v2 = __rdtsc() >> 4;
  do
  {
    LODWORD(v2) = v2 & 7;
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(qword_140C681B8 + ((8LL * v0 + (unsigned int)v2) << 6)));
    if ( result )
      return result;
    LOBYTE(v2) = v2 + 1;
    ++v1;
  }
  while ( v1 < 8 );
  if ( (unsigned int)dword_140C681B0 >= 0x80 )
    return 0LL;
  Pool = MiAllocatePool(64, 0x28uLL, 0x6D55694Du);
  if ( !Pool )
    return 0LL;
  MiInitializePageColorBase(0LL, v0 + 1, (__int64)&v12);
  if ( !(unsigned int)MiCreateUltraThreadContextHelper((__int64)Pool + 8, 3u, (__int64)&v12, 0) )
  {
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  v5 = 0;
  KeAcquireInStackQueuedSpinLock(&qword_140C68170, &LockHandle);
  if ( (unsigned int)dword_140C681B0 >= 0x80 )
    v5 = 1;
  else
    ++dword_140C681B0;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( v5 )
  {
    MiDeleteUltraMapContext((__int64)Pool + 8, 3u);
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  return (PSLIST_ENTRY)Pool;
}
