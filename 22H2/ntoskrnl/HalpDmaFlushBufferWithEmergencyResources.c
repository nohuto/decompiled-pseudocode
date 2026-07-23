/*
 * XREFs of HalpDmaFlushBufferWithEmergencyResources @ 0x1404C76D0
 * Callers:
 *     HalpDmaFlushBuffer @ 0x1404C749C (HalpDmaFlushBuffer.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeFlushIoBuffers @ 0x1403007D0 (KeFlushIoBuffers.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403C8440 (MmMapLockedPagesWithReservedMapping.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MmUnmapReservedMapping @ 0x140531BD0 (MmUnmapReservedMapping.c)
 */

__int64 __fastcall HalpDmaFlushBufferWithEmergencyResources(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        char a6)
{
  ULONG v9; // r15d
  int v10; // ecx
  struct _MDL **v11; // r12
  PMDL v12; // rbx
  MEMORY_CACHING_TYPE v13; // edi
  __int64 v14; // r9
  PVOID v15; // r14
  unsigned int v16; // edi
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v21; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140CF2798, &LockHandle);
  v9 = a3 & 0xFFF;
  v10 = 4096 - v9;
  v11 = (struct _MDL **)(a2 + 48 + 8LL * (unsigned int)((unsigned __int64)(a3 - *(_QWORD *)(a2 + 32)) >> 12));
  v12 = MemoryDescriptorList;
  MemoryDescriptorList->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
  for ( v12->ByteOffset = v9; ; v12->ByteOffset = a3 & 0xFFF )
  {
    v12->ByteCount = v10;
    if ( !a4 )
      break;
    v13 = MmNonCached;
    v12[1].Next = *v11;
    while ( 1 )
    {
      v15 = MmMapLockedPagesWithReservedMapping(MappingAddress, 0x206C6148u, v12, v13);
      if ( v15 )
        break;
      if ( ++v13 >= MmMaximumCacheType )
        KeBugCheckEx(0xACu, 0x1000uLL, 0xEF01uLL, 0LL, 0LL);
    }
    v16 = a4;
    if ( a4 >= 4096 - v9 )
      v16 = 4096 - v9;
    if ( !a6 )
      KeFlushIoBuffers((ULONG_PTR)v12, a5 == 0, 1, v14);
    MmUnmapReservedMapping(v15, 0x206C6148u, v12);
    a4 -= v16;
    a3 += v16;
    ++v11;
    v9 = 0;
    v10 = a4;
    if ( a4 > 0x1000 )
      v10 = 4096;
    v12->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v21 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v21 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
