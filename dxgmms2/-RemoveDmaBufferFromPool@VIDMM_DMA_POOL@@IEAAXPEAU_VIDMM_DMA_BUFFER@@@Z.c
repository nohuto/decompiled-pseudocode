/*
 * XREFs of ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00B0F30
 * Callers:
 *     ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1C00B0E88 (--1VIDMM_DMA_POOL@@QEAA@XZ.c)
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C00B22D8 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z @ 0x1C00F0324 (-ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z.c)
 *     ?TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z @ 0x1C00F04E0 (-TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     McTemplateK0pppxxxp_EtwWriteTransfer @ 0x1C002FAB0 (McTemplateK0pppxxxp_EtwWriteTransfer.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0094640 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00A25B0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C00B1F2C (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00E3AD4 (-FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C00F05A8 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 */

void __fastcall VIDMM_DMA_POOL::RemoveDmaBufferFromPool(struct VIDMM_DEVICE **this, struct _VIDMM_DMA_BUFFER *a2)
{
  struct _VIDMM_DMA_BUFFER *v4; // rcx
  struct _VIDMM_DMA_BUFFER **v5; // rax
  struct VIDMM_DEVICE *v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    v8 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v8 + 24) = a2;
    *(_QWORD *)(v8 + 32) = this;
  }
  if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
    McTemplateK0pppxxxp_EtwWriteTransfer(
      *((unsigned int *)a2 + 13),
      *((unsigned int *)a2 + 12),
      (__int64)*this,
      this[3],
      *((_QWORD *)*this + 3),
      a2,
      *((_QWORD *)a2 + 5),
      *((unsigned int *)a2 + 12),
      *((unsigned int *)a2 + 13),
      *((_QWORD *)a2 + 7));
  if ( *((_BYTE *)a2 + 24) )
    VIDMM_DMA_POOL::WaitDmaBufferNotBusy((VIDMM_DMA_POOL *)this, a2, 0, 0LL);
  --*((_DWORD *)this + 23);
  VIDMM_DMA_POOL::LockAllPoolForAddRemove(0);
  v4 = *(struct _VIDMM_DMA_BUFFER **)a2;
  if ( *(struct _VIDMM_DMA_BUFFER **)(*(_QWORD *)a2 + 8LL) != a2
    || (v5 = (struct _VIDMM_DMA_BUFFER **)*((_QWORD *)a2 + 1), *v5 != a2) )
  {
    __fastfail(3u);
  }
  *v5 = v4;
  *((_QWORD *)v4 + 1) = v5;
  ExReleaseResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
  operator delete(*((void **)a2 + 22));
  operator delete(*((void **)a2 + 16));
  operator delete(*((void **)a2 + 15));
  operator delete(*((void **)a2 + 14));
  operator delete(*((void **)a2 + 13));
  if ( *((_DWORD *)this + 9) )
  {
    if ( ((_BYTE)this[4] & 1) != 0 )
      VIDMM_GLOBAL::FreePagingBufferResources(*this, *((struct VIDMM_ALLOC **)a2 + 8));
    VIDMM_GLOBAL::CloseOneAllocation(
      *this,
      *((struct _KEVENT **)a2 + 8),
      0LL,
      0,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1,
      0LL);
    VIDMM_GLOBAL::DestroyOneAllocation((struct _KTHREAD **)*this, this[2], *((struct _VIDMM_GLOBAL_ALLOC **)a2 + 7), 0);
  }
  else
  {
    MmFreeContiguousMemorySpecifyCache(*((PVOID *)a2 + 9), *((_QWORD *)a2 + 5), *((MEMORY_CACHING_TYPE *)a2 + 20));
  }
  if ( *((_DWORD *)this + 23) == 2
    && this[5] == this[6]
    && *((_DWORD *)this + 16) == *((_DWORD *)this + 17)
    && *((_DWORD *)this + 19) == *((_DWORD *)this + 20) )
  {
    *((_DWORD *)this + 8) |= 8u;
  }
  *((_DWORD *)this + 32) -= *((_DWORD *)a2 + 10);
  v6 = this[2];
  *((_DWORD *)this + 33) += -24 * *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 34) += -24 * *((_DWORD *)a2 + 13);
  if ( v6 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL)
                   + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v6 + 24LL) + 240LL));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v7 + 440, 0LL);
    *(_QWORD *)(v7 + 456) -= *((_QWORD *)a2 + 5);
    --*(_DWORD *)(v7 + 448);
    *(_DWORD *)(v7 + 464) += -24 * *((_DWORD *)a2 + 12);
    *(_DWORD *)(v7 + 468) += -24 * *((_DWORD *)a2 + 13);
    ExReleasePushLockExclusiveEx(v7 + 440, 0LL);
    KeLeaveCriticalRegion();
  }
  _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalDmaBufferBytes, -*((_QWORD *)a2 + 5));
  _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalAllocationListBytes, -24LL * *((unsigned int *)a2 + 12));
  _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalPatchLocationListBytes, -24LL * *((unsigned int *)a2 + 13));
  operator delete(a2);
}
