/*
 * XREFs of HalpDmaAllocateMapRegisters @ 0x14045399E
 * Callers:
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A9AD0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalAllocateAdapterChannelV2 @ 0x140454AE8 (HalAllocateAdapterChannelV2.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x1404551EE (HalpDmaProcessMapRegisterQueueV2.c)
 *     IoFreeAdapterChannelV2 @ 0x1404552D0 (IoFreeAdapterChannelV2.c)
 *     HalpAllocateDmaResourcesInternal @ 0x140512A4C (HalpAllocateDmaResourcesInternal.c)
 *     HalpAllocateMapRegisters @ 0x1409307C0 (HalpAllocateMapRegisters.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14039839C (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaGetTranslationEntries @ 0x14039860C (HalpDmaGetTranslationEntries.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     MmFreeContiguousMemory @ 0x1403BD6E0 (MmFreeContiguousMemory.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x140452D5A (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x140452DAE (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     HalpDmaPrependTranslations @ 0x1404541B6 (HalpDmaPrependTranslations.c)
 *     HalpDmaReturnPageToOwner @ 0x140454296 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPool @ 0x1404FF03C (HalpDmaAllocateScatterPagesFromContiguousPool.c)
 *     HalpDmaAllocateContiguousMemory @ 0x14050DFA0 (HalpDmaAllocateContiguousMemory.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpDmaAllocateMapRegisters(__int64 a1, unsigned int a2)
{
  __int64 v2; // r15
  unsigned int v3; // ebx
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 ScatterPagesFromScatterPool; // rax
  int v10; // ecx
  __int64 v11; // rax
  __int64 ScatterPagesFromContiguousPool; // rax
  __int64 v13; // rax
  unsigned int ContiguousMemory; // eax
  PVOID v15; // rdi
  PMDL v16; // rbx
  unsigned int v17; // r14d
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r12
  _QWORD *v22; // r13
  void *v23; // rax
  __int64 TranslationEntries; // rax
  __int64 *v25; // r14
  __int64 v26; // r14
  __int64 v27; // rbx
  __int64 v28; // r15
  _QWORD *v29; // rdi
  PVOID *v30; // rbx
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v39; // eax
  bool v40; // zf
  PVOID BaseAddress; // [rsp+30h] [rbp-30h] BYREF
  PMDL MemoryDescriptorList; // [rsp+38h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v44; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v45; // [rsp+B0h] [rbp+50h] BYREF
  unsigned __int64 v46; // [rsp+B8h] [rbp+58h] BYREF

  LODWORD(v2) = 0;
  v3 = 0;
  v44 = 0;
  v45 = 0;
  v6 = 0LL;
  BaseAddress = 0LL;
  v46 = 0LL;
  MemoryDescriptorList = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !*(_BYTE *)(a1 + 345) )
  {
    if ( *(_BYTE *)(a1 + 442) )
    {
      result = HalpDmaAllocateScatterPagesFromScatterPool(a1, a1, a2, 0LL, 0, (__int64)&v44);
      v3 = v44;
      v6 = result;
      if ( v44 == a2 )
        return result;
    }
    else
    {
      result = HalpDmaAllocateContiguousPagesFromContiguousPool(a1);
      v6 = result;
      if ( result )
        return result;
      v3 = v44;
    }
  }
  if ( *(_BYTE *)(a1 + 442) )
  {
    ScatterPagesFromScatterPool = HalpDmaAllocateScatterPagesFromScatterPool(
                                    a1,
                                    *(_QWORD *)(a1 + 160),
                                    a2 - v3,
                                    0LL,
                                    0,
                                    (__int64)&v45);
    if ( ScatterPagesFromScatterPool )
    {
      v11 = HalpDmaPrependTranslations(ScatterPagesFromScatterPool, v45, v6);
      v3 += v45;
      v6 = v11;
      v44 = v3;
    }
    if ( v3 == a2 )
      return v6;
    ScatterPagesFromContiguousPool = HalpDmaAllocateScatterPagesFromContiguousPool(
                                       v10,
                                       *(_QWORD *)(a1 + 160),
                                       a2 - v3,
                                       0,
                                       0,
                                       (__int64)&v45);
    if ( ScatterPagesFromContiguousPool )
    {
      v13 = HalpDmaPrependTranslations(ScatterPagesFromContiguousPool, v45, v6);
      v3 += v45;
      v6 = v13;
      v44 = v3;
    }
    if ( v3 == a2 )
      return v6;
  }
  else
  {
    result = HalpDmaAllocateContiguousPagesFromContiguousPool(a1);
    v6 = result;
    if ( result )
      return result;
    v3 = v44;
  }
  if ( !*(_BYTE *)(a1 + 442) )
  {
    ContiguousMemory = HalpDmaAllocateContiguousMemory(
                         a1,
                         a2,
                         (unsigned int)&BaseAddress,
                         (unsigned int)&v46,
                         (__int64)&MemoryDescriptorList);
    v44 = ContiguousMemory;
    if ( ContiguousMemory )
    {
      v15 = BaseAddress;
      if ( HalpDmaCommitContiguousMapBuffers(*(_QWORD *)(a1 + 160), (__int64)BaseAddress, v46, ContiguousMemory) )
      {
        result = HalpDmaAllocateContiguousPagesFromContiguousPool(a1);
        if ( result )
          return result;
      }
      else
      {
        v16 = MemoryDescriptorList;
        if ( MemoryDescriptorList )
        {
          if ( v15 )
            MmUnmapLockedPages(v15, MemoryDescriptorList);
          MiFreePagesFromMdl((ULONG_PTR)v16, 0);
          ExFreePoolWithTag(v16, 0);
        }
        else
        {
          MmFreeContiguousMemory(v15);
        }
      }
    }
    return 0LL;
  }
  v17 = a2 - v3;
  v18 = v17;
  v19 = HalpMmAllocCtxAlloc(v8, 8LL * v17);
  v21 = v19;
  if ( !v19 )
  {
LABEL_38:
    if ( v3 )
    {
      v26 = v3;
      do
      {
        v27 = *(_QWORD *)(v6 + 8);
        HalpDmaReturnPageToOwner(a1, *(_QWORD *)(a1 + 160), v6);
        v6 = v27;
        --v26;
      }
      while ( v26 );
    }
    return 0LL;
  }
  if ( v17 )
  {
    v22 = (_QWORD *)v19;
    while ( 1 )
    {
      v23 = (void *)HalpMmAllocCtxAlloc(v20, 4096LL);
      *v22 = v23;
      if ( !v23 || MmGetPhysicalAddress(v23).HighPart )
        goto LABEL_34;
      LODWORD(v2) = v2 + 1;
      ++v22;
      if ( (unsigned int)v2 >= v17 )
      {
        v18 = v17;
        break;
      }
    }
  }
  TranslationEntries = HalpDmaGetTranslationEntries(*(_QWORD *)(a1 + 160), 1, v17);
  if ( !TranslationEntries )
  {
LABEL_34:
    if ( (_DWORD)v2 )
    {
      v25 = (__int64 *)v21;
      v2 = (unsigned int)v2;
      do
      {
        HalpMmAllocCtxFree(v20, *v25++);
        --v2;
      }
      while ( v2 );
    }
    HalpMmAllocCtxFree(v20, v21);
    goto LABEL_38;
  }
  v28 = HalpDmaPrependTranslations(TranslationEntries, v17, v6);
  v29 = (_QWORD *)v28;
  if ( v17 )
  {
    v30 = (PVOID *)v21;
    do
    {
      *v29 = MmGetPhysicalAddress(*v30).LowPart;
      v31 = 1LL;
      v32 = (unsigned __int64)*v30;
      v33 = 2LL;
      do
      {
        v32 |= v31++;
        --v33;
      }
      while ( v33 );
      ++v30;
      v29[6] = v32 | 0xC;
      v29 = (_QWORD *)v29[1];
      --v18;
    }
    while ( v18 );
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 160) + 128LL), &LockHandle);
  *(_DWORD *)(*(_QWORD *)(a1 + 160) + 216LL) += v17;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v34 = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v34 = (unsigned int)LockHandle.OldIrql + 1;
      v39 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v40 = (v39 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v39;
      if ( v40 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  HalpMmAllocCtxFree(v34, v21);
  return v28;
}
