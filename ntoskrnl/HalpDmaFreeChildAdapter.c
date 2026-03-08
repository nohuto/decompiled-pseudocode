/*
 * XREFs of HalpDmaFreeChildAdapter @ 0x14050ED00
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     MmFreeContiguousMemory @ 0x1403BD6E0 (MmFreeContiguousMemory.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpDmaReturnPageToSource @ 0x14050F064 (HalpDmaReturnPageToSource.c)
 *     HalpLeaveDmaDomain @ 0x1405108E4 (HalpLeaveDmaDomain.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall HalpDmaFreeChildAdapter(__int64 a1)
{
  struct _MDL *v2; // rcx
  __int64 *v3; // rbx
  KIRQL v4; // al
  __int64 **v5; // rdx
  unsigned __int64 v6; // rsi
  __int64 *v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  void *v17; // rbx
  void *v18; // rcx
  unsigned int i; // ebx
  __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rbx
  void *v26; // rbx
  void *v27; // rcx
  __int64 v28; // rdx

  v2 = *(struct _MDL **)(a1 + 304);
  if ( v2 )
  {
    IoFreeMdl(v2);
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  v3 = (__int64 *)(a1 + 464);
  if ( *(_QWORD *)(a1 + 464) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&HalpDmaAdapterListLock);
    v5 = *(__int64 ***)(a1 + 472);
    v6 = v4;
    v7 = (__int64 *)*v3;
    if ( *(__int64 **)(*v3 + 8) != v3 || *v5 != v3 )
      __fastfail(3u);
    *v5 = v7;
    v7[1] = (__int64)v5;
    KxReleaseSpinLock((volatile signed __int64 *)&HalpDmaAdapterListLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v6);
  }
  if ( *(_QWORD *)(a1 + 512) )
  {
    *(_BYTE *)(a1 + 524) = 0;
    HalpLeaveDmaDomain(a1);
  }
  v13 = *(_QWORD *)(a1 + 544);
  if ( v13 )
  {
    (*(void (**)(void))(HalpDmaIommuInterfaceFcnTable + 168))();
    *(_QWORD *)(a1 + 544) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 440) && !*(_BYTE *)(a1 + 345) )
  {
    if ( !*(_BYTE *)(a1 + 442) )
    {
      v14 = *(_QWORD *)(a1 + 48);
      v15 = *(_QWORD *)(v14 + 16);
      if ( (*(_BYTE *)(v15 + 48) & 1) != 0 )
      {
        do
        {
          for ( i = 0; i < *(_DWORD *)(v14 + 8); ++i )
            HalpDmaReturnPageToSource(a1);
          v20 = *(_QWORD *)v14;
          HalpMmAllocCtxFree(v13, v14);
          v14 = v20;
        }
        while ( v20 );
      }
      else
      {
        HalpMmAllocCtxFree(v13, v15);
        HalpMmAllocCtxFree(v16, v14);
        v17 = *(void **)(a1 + 328);
        if ( *(_BYTE *)(a1 + 344) )
        {
          if ( v17 )
          {
            v18 = *(void **)(a1 + 336);
            if ( v18 )
              MmUnmapLockedPages(v18, *(PMDL *)(a1 + 328));
            MiFreePagesFromMdl((ULONG_PTR)v17, 0);
            ExFreePoolWithTag(v17, 0);
          }
        }
        else
        {
          MmFreeContiguousMemory(*(PVOID *)(a1 + 328));
        }
      }
      v21 = *(_QWORD *)(a1 + 24);
      goto LABEL_42;
    }
    v22 = *(_DWORD *)(a1 + 40);
    v23 = *(_QWORD *)(a1 + 32);
    if ( v22 )
    {
      v24 = v22;
      do
      {
        v25 = *(_QWORD *)(v23 + 8);
        HalpDmaReturnPageToSource(a1);
        v23 = v25;
        --v24;
      }
      while ( v24 );
    }
    v26 = *(void **)(a1 + 328);
    if ( v26 )
    {
      v27 = *(void **)(a1 + 336);
      if ( v27 )
        MmUnmapLockedPages(v27, *(PMDL *)(a1 + 328));
      MiFreePagesFromMdl((ULONG_PTR)v26, 0);
      ExFreePoolWithTag(v26, 0);
    }
    v28 = *(_QWORD *)(a1 + 56);
    if ( v28 )
    {
      HalpMmAllocCtxFree(v13, *(_QWORD *)(v28 + 16));
      v21 = *(_QWORD *)(a1 + 56);
LABEL_42:
      HalpMmAllocCtxFree(v13, v21);
    }
  }
}
