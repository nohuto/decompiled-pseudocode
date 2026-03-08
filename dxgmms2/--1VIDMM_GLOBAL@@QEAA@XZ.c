/*
 * XREFs of ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00E0158
 * Callers:
 *     ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C002C774 (--_GVIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C0001910 (-IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0012530 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C0016EDC (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C001742C (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?ResetAdapter@VIDMM_PARTITION@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C00310C0 (-ResetAdapter@VIDMM_PARTITION@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C004298C (-VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ??1DXGK_LOG@@QEAA@XZ @ 0x1C004CC88 (--1DXGK_LOG@@QEAA@XZ.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C00ABBB0 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z @ 0x1C00B4048 (-RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B5980 (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00E1A38 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00E4D1C (-LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RemoveFromAdapterList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00E725C (-RemoveFromAdapterList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00F20F8 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::~VIDMM_GLOBAL(VIDMM_GLOBAL *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rbx
  unsigned int i; // esi
  __int64 v7; // r8
  unsigned int v8; // r10d
  __int64 v9; // rax
  struct _VIDSCH_NODE **v10; // rcx
  unsigned int j; // esi
  struct _VIDMM_DMA_BUFFER *v12; // rdx
  VIDMM_DMA_POOL *v13; // rcx
  __int64 v14; // rbx
  struct _RTL_BALANCED_NODE *v15; // rax
  VIDMM_PARTITION *k; // rbx
  VIDMM_PARTITION **v17; // rax
  VIDMM_PARTITION *v18; // rcx
  VIDMM_PARTITION *v19; // rcx
  unsigned int m; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct _PCW_INSTANCE *v23; // rcx
  _QWORD *v24; // rcx
  unsigned int n; // ebx
  void (__fastcall ***v26)(_QWORD, __int64); // r8
  void *v27; // rcx
  char *v28; // rcx
  char *v29; // rbx
  unsigned int ii; // ebx
  struct _PCW_INSTANCE *v31; // rcx
  char *v32; // rcx
  char *v33; // rbx

  VIDMM_GLOBAL::LogTeardownTelemetry(this);
  if ( *((_QWORD *)this + 5596) )
    VIDMM_GLOBAL::RemoveFromAdapterList(this);
  *((_BYTE *)this + 7088) = 1;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v3) + 24) = this;
  VIDMM_GLOBAL::DoDeferredUnlock(this, v2, v4);
  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 744LL);
  if ( *(int *)(*(_QWORD *)(v5 + 16) + 2820LL) >= 2500 )
  {
    for ( i = 0; i < *(_DWORD *)(v5 + 80); ++i )
    {
      v7 = *(_QWORD *)(v5 + 632);
      v8 = *(_DWORD *)(v5 + 704);
      v9 = v7 + 8LL * i;
      if ( i >= v8 )
        v9 = *(_QWORD *)(v5 + 632);
      if ( (*(_DWORD *)(*(_QWORD *)v9 + 12LL) & 2) != 0 )
      {
        v10 = (struct _VIDSCH_NODE **)(v7 + 8LL * i);
        if ( i >= v8 )
          v10 = *(struct _VIDSCH_NODE ***)(v5 + 632);
        VidSchiDestroyNodeSchedulingLog(*v10);
      }
    }
  }
  VIDMM_GLOBAL::DestroyPagingFenceObjects(this);
  for ( j = 0; j < *((_DWORD *)this + 1754); ++j )
  {
    v12 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + j + 143);
    if ( v12 )
    {
      VIDMM_DMA_POOL::ReleaseBuffer(*((VIDMM_DMA_POOL **)this + j + 79), v12, 1);
      *((_QWORD *)this + j + 143) = 0LL;
    }
    v13 = (VIDMM_DMA_POOL *)*((_QWORD *)this + j + 79);
    if ( v13 )
      VIDMM_DMA_POOL::`scalar deleting destructor'(v13);
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)this + 40384));
  if ( *((char *)this + 40936) < 0 )
    VIDMM_PROCESS::CloseAdapter((struct _KTHREAD **)g_pVidMmSystemProcess, this);
  v14 = *(_QWORD *)this;
  *((_QWORD *)this + 5548) = 0LL;
  if ( v14 )
  {
    ObfReferenceObject(*(PVOID *)(v14 + 8));
    VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(v14, 2, 1);
    KeWaitForSingleObject(*(PVOID *)(v14 + 8), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(v14 + 8));
    operator delete(*(void **)(v14 + 176));
    *(_QWORD *)(v14 + 176) = 0LL;
    if ( *(_QWORD *)this )
      operator delete(*(void **)this);
    *(_QWORD *)this = 0LL;
  }
  ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v15 = VIDMM_PARTITION::_PartitionTree;
  k = 0LL;
  while ( v15 )
  {
    k = (VIDMM_PARTITION *)v15;
    v15 = v15->Children[0];
  }
  while ( k )
  {
    VIDMM_PARTITION::ResetAdapter(k, this);
    v17 = (VIDMM_PARTITION **)*((_QWORD *)k + 1);
    v18 = k;
    if ( v17 )
    {
      v19 = *v17;
      for ( k = (VIDMM_PARTITION *)*((_QWORD *)k + 1); v19; v19 = *(VIDMM_PARTITION **)v19 )
        k = v19;
    }
    else
    {
      while ( 1 )
      {
        k = (VIDMM_PARTITION *)(*((_QWORD *)k + 2) & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !k || *(VIDMM_PARTITION **)k == v18 )
          break;
        v18 = k;
      }
    }
  }
  ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  for ( m = 0; m < *((_DWORD *)this + 1754); ++m )
  {
    v21 = *((_QWORD *)this + 5028);
    v22 = 1616LL * m;
    if ( (*(_BYTE *)(v22 + v21 + 520) & 1) == 0 )
    {
      v23 = *(struct _PCW_INSTANCE **)(v22 + v21 + 888);
      if ( v23 )
        PcwCloseInstance(v23);
    }
  }
  v24 = (_QWORD *)*((_QWORD *)this + 464);
  if ( v24 )
  {
    for ( n = 0; n < *((_DWORD *)this + 926); ++n )
    {
      v26 = (void (__fastcall ***)(_QWORD, __int64))v24[n];
      if ( v26 )
      {
        (**v26)(v24[n], 1LL);
        v24 = (_QWORD *)*((_QWORD *)this + 464);
      }
    }
    operator delete(v24);
    *((_QWORD *)this + 464) = 0LL;
  }
  operator delete(*((void **)this + 878));
  v27 = (void *)*((_QWORD *)this + 985);
  if ( v27 )
  {
    operator delete(v27);
    *((_OWORD *)this + 492) = 0LL;
    *((_QWORD *)this + 986) = 0LL;
  }
  if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
  {
    v28 = (char *)*((_QWORD *)this + 5123);
    if ( v28 )
    {
      v29 = v28 - 8;
      `vector destructor iterator'(
        v28,
        24LL,
        *((_QWORD *)v28 - 1),
        (void (__fastcall *)(char *))VIDMM_PAGING_HISTORY_ENTRY::~VIDMM_PAGING_HISTORY_ENTRY);
      operator delete(v29);
    }
  }
  operator delete(*((void **)this + 5132));
  for ( ii = 0; ii < *((_DWORD *)this + 1754); ++ii )
  {
    v31 = *(struct _PCW_INSTANCE **)(1616LL * ii + *((_QWORD *)this + 5028) + 1608);
    if ( v31 )
      PcwCloseInstance(v31);
  }
  v32 = (char *)*((_QWORD *)this + 5028);
  if ( v32 )
  {
    v33 = v32 - 8;
    `vector destructor iterator'(
      v32,
      1616LL,
      *((_QWORD *)v32 - 1),
      (void (__fastcall *)(char *))VIDSCH_VSYNC_SMOOTHER::OnReset);
    operator delete(v33);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 40256));
  DXGK_LOG::~DXGK_LOG((void **)this + 5128);
}
