__int64 __fastcall HalpDmaFlushBufferWithEmergencyResources(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        char a6)
{
  ULONG v9; // r15d
  struct _MDL **v10; // r12
  PMDL v11; // rbx
  MEMORY_CACHING_TYPE v12; // edi
  __int64 v13; // r9
  PVOID v14; // r14
  unsigned int v15; // edi
  int v16; // ecx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v21; // zf
  struct _KLOCK_QUEUE_HANDLE v22; // [rsp+30h] [rbp-38h] BYREF

  memset(&v22, 0, sizeof(v22));
  KeAcquireInStackQueuedSpinLock(&qword_140D12B98, &v22);
  v9 = a3 & 0xFFF;
  v10 = (struct _MDL **)(a2 + 48 + 8LL * (unsigned int)((unsigned __int64)(a3 - *(_QWORD *)(a2 + 32)) >> 12));
  v11 = MemoryDescriptorList;
  MemoryDescriptorList->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
  v11->ByteOffset = v9;
  v11->ByteCount = 4096 - v9;
  while ( a4 )
  {
    v12 = MmNonCached;
    v11[1].Next = *v10;
    while ( 1 )
    {
      v14 = MmMapLockedPagesWithReservedMapping(MappingAddress, 0x446C6148u, v11, v12);
      if ( v14 )
        break;
      if ( ++v12 >= MmMaximumCacheType )
        KeBugCheckEx(0xACu, 0x1000uLL, 0xEF01uLL, 0LL, 0LL);
    }
    v15 = a4;
    if ( a4 >= 4096 - v9 )
      v15 = 4096 - v9;
    if ( !a6 )
      KeFlushIoBuffers((ULONG_PTR)v11, a5 == 0, 1, v13);
    MmUnmapReservedMapping(v14, 0x446C6148u, v11);
    a4 -= v15;
    a3 += v15;
    ++v10;
    v9 = 0;
    v16 = a4;
    if ( a4 > 0x1000 )
      v16 = 4096;
    v11->ByteCount = v16;
    v11->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
    v11->ByteOffset = a3 & 0xFFF;
  }
  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&v22);
  OldIrql = v22.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && v22.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (v22.OldIrql + 1));
      v21 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v21 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
