/*
 * XREFs of HalpDmaSyncMapBuffersWithEmergencyResources @ 0x14050F0B4
 * Callers:
 *     HalpDmaSyncMapBuffers @ 0x1404544F2 (HalpDmaSyncMapBuffers.c)
 * Callees:
 *     KeFlushIoBuffers @ 0x1402DCDE0 (KeFlushIoBuffers.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403A1EB0 (MmMapLockedPagesWithReservedMapping.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x1403B44EC (HalpDmaGetAdapterCacheAlignment.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MmUnmapReservedMapping @ 0x14061C4D0 (MmUnmapReservedMapping.c)
 */

__int64 __fastcall HalpDmaSyncMapBuffersWithEmergencyResources(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned int a5,
        char a6,
        char a7,
        char a8)
{
  _QWORD *v8; // rbp
  PMDL v11; // r14
  PMDL v12; // rdi
  ULONG v13; // r12d
  unsigned __int64 v15; // r9
  struct _MDL **v16; // r9
  PVOID v17; // rcx
  unsigned __int64 v18; // rbx
  char v19; // r13
  MEMORY_CACHING_TYPE v20; // esi
  PVOID v21; // rbp
  unsigned int v22; // esi
  int v23; // r8d
  int v24; // edx
  __int16 v25; // r8
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  int v28; // eax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v33; // zf
  struct _MDL **v34; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-60h] BYREF
  unsigned int AdapterCacheAlignment; // [rsp+A8h] [rbp+10h]
  __int64 v38; // [rsp+B0h] [rbp+18h]
  _QWORD *v39; // [rsp+B8h] [rbp+20h]

  v39 = a4;
  v38 = a3;
  v8 = a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  AdapterCacheAlignment = HalpDmaGetAdapterCacheAlignment(a1, a2);
  KeAcquireInStackQueuedSpinLock(&qword_140D12B98, &LockHandle);
  v11 = MemoryDescriptorList;
  v12 = qword_140C70828;
  v13 = a3 & 0xFFF;
  v15 = (unsigned __int64)(a3 - *(_QWORD *)(a2 + 32)) >> 12;
  MemoryDescriptorList->ByteOffset = v13;
  v11->ByteCount = 4096 - v13;
  v11->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
  v12->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
  v16 = (struct _MDL **)(a2 + 8 * ((unsigned int)v15 + 6LL));
  v12->ByteOffset = v13;
  for ( v12->ByteCount = 4096 - v13; ; v12->ByteCount = v24 )
  {
    v34 = v16;
    if ( !a5 )
      break;
    if ( (v8[6] & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      v18 = v13 + (v8[6] & 0xFFFFFFFFFFFFF000uLL);
      v19 = 0;
    }
    else
    {
      v17 = qword_140C70840;
      v12[1].Next = (struct _MDL *)(*v8 >> 12);
      v18 = (unsigned __int64)MmMapLockedPagesWithReservedMapping(v17, 0x446C6148u, v12, MmCached);
      if ( !v18 )
        KeBugCheckEx(0xACu, 0x1000uLL, 0xEF00uLL, 0LL, 0LL);
      v16 = v34;
      v19 = 1;
    }
    v20 = MmNonCached;
    v11[1].Next = *v16;
    while ( 1 )
    {
      v21 = MmMapLockedPagesWithReservedMapping(MappingAddress, 0x446C6148u, v11, v20);
      if ( v21 )
        break;
      if ( ++v20 >= MmMaximumCacheType )
        KeBugCheckEx(0xACu, 0x1000uLL, 0xEF01uLL, 0LL, 0LL);
    }
    v22 = a5;
    if ( a5 >= 4096 - v13 )
      v22 = 4096 - v13;
    v13 = 0;
    if ( a6 )
    {
      if ( !a7 )
        ((void (__fastcall *)(unsigned __int64, PVOID, _QWORD))HalpMoveMemory[0])(v18, v21, v22);
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 445) )
      {
        v23 = ~(AdapterCacheAlignment - 1);
        v12->ByteOffset = v23 & v18 & 0xFFF;
        v12->StartVa = (PVOID)((v18 - ((unsigned int)v18 - (v23 & (unsigned int)v18))) & 0xFFFFFFFFFFFFF000uLL);
        v12->ByteCount = v23 & (v22 + AdapterCacheAlignment + v18 - (v23 & v18) - 1);
        if ( !a8 )
          KeFlushIoBuffers((ULONG_PTR)v12, 1, 1, AdapterCacheAlignment);
      }
      if ( !a7 )
        memmove(v21, (const void *)v18, v22);
    }
    MmUnmapReservedMapping(v21, 0x446C6148u, v11);
    if ( v19 )
      MmUnmapReservedMapping((PVOID)v18, 0x446C6148u, v12);
    a5 -= v22;
    v24 = a5;
    v16 = v34 + 1;
    v25 = v22 + v38;
    v8 = (_QWORD *)v39[1];
    v26 = v22 + v38;
    v39 = v8;
    if ( a5 > 0x1000 )
      v24 = 4096;
    v38 += v22;
    v27 = v26 & 0xFFFFFFFFFFFFF000uLL;
    v11->ByteCount = v24;
    v11->StartVa = (PVOID)v27;
    v28 = v25 & 0xFFF;
    v11->ByteOffset = v28;
    v12->StartVa = (PVOID)v27;
    v12->ByteOffset = v28;
  }
  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v33 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v33 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
