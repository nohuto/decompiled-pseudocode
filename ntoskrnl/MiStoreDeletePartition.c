/*
 * XREFs of MiStoreDeletePartition @ 0x140659A64
 * Callers:
 *     MiDeletePartitionResources @ 0x140656EBC (MiDeletePartitionResources.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     RtlpInterlockedFlushSList @ 0x1404204E0 (RtlpInterlockedFlushSList.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140639018 (MiQueueSyncModifiedWriterApc.c)
 *     MmStoreFlushOutstandingEvictions @ 0x14065AA54 (MmStoreFlushOutstandingEvictions.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreDeletePartition(__int64 a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf
  void *v8; // rcx
  PSLIST_ENTRY v9; // rbx
  PSLIST_ENTRY v10; // rcx
  __int64 Object; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-41h] BYREF
  __int64 v13; // [rsp+50h] [rbp-31h] BYREF
  _QWORD v14[4]; // [rsp+58h] [rbp-29h] BYREF
  int v15[24]; // [rsp+78h] [rbp-9h] BYREF

  memset(v15, 0, 0x58uLL);
  if ( *(_DWORD *)(a1 + 1192) )
  {
    Object = 393216LL;
    v12[1] = v12;
    v13 = 393216LL;
    v12[0] = v12;
    v14[2] = a1;
    v14[1] = v14;
    v14[0] = v14;
    MiQueueSyncModifiedWriterApc(a1, (__int64)v15, (__int64)MiStoreRundownWritesApc, (__int64)&Object, &v13);
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    MmStoreFlushOutstandingEvictions(*(_QWORD *)(a1 + 200));
    v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1352));
    KeSetEvent((PRKEVENT)(a1 + 1264), 0, 0);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1352));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = (v6 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v6;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v2);
    KeWaitForSingleObject(*(PVOID *)(a1 + 1232), WrKernel, 0, 0, 0LL);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 1232), 0x746C6644u);
    v8 = *(void **)(a1 + 1336);
    *(_QWORD *)(a1 + 1232) = 0LL;
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(a1 + 1336) = 0LL;
    v9 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 1296));
    while ( v9 )
    {
      v10 = v9;
      v9 = v9->Next;
      ExFreePoolWithTag(v10, 0);
    }
  }
}
