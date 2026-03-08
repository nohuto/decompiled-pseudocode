/*
 * XREFs of ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C008D8B0
 * Callers:
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C0087BD0 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1C0087EE4 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?AddGlobalAllocReferenceToDmaBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008A140 (-AddGlobalAllocReferenceToDmaBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C008A1D0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?WaitForAllPagingOperations@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008B25C (-WaitForAllPagingOperations@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C008B300 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C008C470 (-Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C008CF40 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C008D8B0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C0090480 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C0091950 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C00A7A48 (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C00B5874 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C00E2EAC (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00E3514 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00E4D58 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C00E5604 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E5E34 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00E6A38 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00E8C04 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00FCF70 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00FE564 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001414 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     VidSchIsMonitoredFenceSignaled @ 0x1C00016D0 (VidSchIsMonitoredFenceSignaled.c)
 *     ?IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C0001910 (-IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C001742C (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00897A0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C008D8B0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0090130 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C00B22D8 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     VidSchSignalPagingFences @ 0x1C00B57E0 (VidSchSignalPagingFences.c)
 *     ?FlushAllTemporaryAllocation@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C00E3264 (-FlushAllTemporaryAllocation@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?GetOrGeneratePendingPagingBufferFence@VIDMM_GLOBAL@@IEAAXKPEA_K@Z @ 0x1C00E3D94 (-GetOrGeneratePendingPagingBufferFence@VIDMM_GLOBAL@@IEAAXKPEA_K@Z.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C00E7D9C (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 *     ?FlushPendingCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00EFBD4 (-FlushPendingCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER@@K@Z @ 0x1C00F2FE0 (-RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING.c)
 *     VidSchGetNodeOrdinal @ 0x1C0107AD4 (VidSchGetNodeOrdinal.c)
 *     VidSchSubmitPagingCommand @ 0x1C0108A08 (VidSchSubmitPagingCommand.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::FlushPagingBufferInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int8 a3,
        void (*a4)(void *),
        void *a5,
        unsigned __int8 a6,
        unsigned __int8 a7)
{
  unsigned int v7; // r10d
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v12; // r8
  __int64 v13; // r13
  __int64 v14; // r12
  unsigned __int8 v15; // dl
  unsigned __int64 v16; // rcx
  char v17; // r15
  _QWORD **v18; // rcx
  _QWORD *v19; // rbx
  VIDMM_GLOBAL *v20; // rsi
  _QWORD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  _QWORD *v24; // rcx
  struct VIDMM_VAD *v25; // rdx
  char *v26; // rbx
  __int64 v27; // r8
  _QWORD *v28; // r15
  VIDMM_GLOBAL *v29; // r14
  int v30; // eax
  VIDMM_GLOBAL **v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  struct _VIDMM_DMA_BUFFER **v34; // rcx
  unsigned int v35; // edx
  __int64 v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rbx
  unsigned int v41; // r15d
  __int64 v42; // rcx
  bool v43; // dl
  bool v44; // zf
  __int64 v45; // r9
  unsigned int v46; // r14d
  struct _VIDMM_DMA_BUFFER **v47; // r13
  __int64 v48; // rbx
  __int64 v49; // r9
  __int64 v50; // rdx
  struct _VIDSCH_SYNC_OBJECT *v51; // r8
  unsigned __int64 v52; // r13
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  int NodeOrdinal; // eax
  VIDMM_GLOBAL *v57; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v58; // [rsp+40h] [rbp-91h]
  struct VIDMM_VAD *v59; // [rsp+40h] [rbp-91h]
  unsigned int v60; // [rsp+40h] [rbp-91h]
  unsigned int v61; // [rsp+48h] [rbp-89h]
  unsigned __int64 v62; // [rsp+50h] [rbp-81h] BYREF
  CVirtualAddressAllocator *v63; // [rsp+58h] [rbp-79h]
  __int128 v64; // [rsp+60h] [rbp-71h] BYREF
  __int128 v65; // [rsp+70h] [rbp-61h]
  __int128 v66; // [rsp+80h] [rbp-51h]
  __int128 v67; // [rsp+90h] [rbp-41h]
  __int128 v68; // [rsp+A0h] [rbp-31h]
  __int64 v69; // [rsp+B0h] [rbp-21h]
  __int64 v70; // [rsp+C0h] [rbp-11h]
  unsigned __int64 v71; // [rsp+C8h] [rbp-9h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v72; // [rsp+D0h] [rbp-1h] BYREF
  unsigned __int8 v73; // [rsp+120h] [rbp+4Fh]
  unsigned int v74; // [rsp+128h] [rbp+57h] BYREF
  void (*v75)(void *); // [rsp+138h] [rbp+67h]

  v75 = a4;
  v74 = a2;
  v7 = a2;
  v8 = a2;
  v9 = 1616LL * a2;
  v64 = 0LL;
  v65 = 0LL;
  v69 = 0LL;
  v12 = *((_QWORD *)this + 5028);
  v73 = a3;
  v66 = 0LL;
  v13 = v9 + v12;
  v67 = 0LL;
  v68 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v7 = v74;
    a4 = v75;
    v21[3] = a3;
    v21[4] = *((unsigned int *)this + v8 + 414);
    v21[5] = *((unsigned int *)this + v8 + 478);
    v12 = *((_QWORD *)this + 5028);
  }
  v14 = v8 + 478;
  v15 = *((_BYTE *)this + 40937);
  if ( (v15 & 4) != 0 && a3 )
  {
    v15 |= 8u;
    *((_BYTE *)this + 40937) = v15;
  }
  v16 = v15;
  if ( (*(_BYTE *)(v9 + v12 + 444) & 1) != 0 && *((_QWORD *)this + v8 + 143) && *((_DWORD *)this + 2) && (v15 & 4) == 0 )
  {
    *((_BYTE *)this + 40937) = v15 | 4;
    v63 = (CVirtualAddressAllocator *)*((_QWORD *)this + v8 + 5052);
    while ( 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        v18 = (_QWORD **)(v9 + *((_QWORD *)this + 5028) + 472LL);
        v19 = *v18;
        if ( *v18 == v18 )
          break;
        v58 = (struct VIDMM_MAPPED_VA_RANGE *)(v19 - 3);
        if ( !VidSchIsMonitoredFenceSignaled(*((_QWORD *)this + v8 + 749), v19[2]) )
          break;
        v23 = *v19;
        if ( *(_QWORD **)(*v19 + 8LL) != v19 || (v24 = (_QWORD *)v19[1], (_QWORD *)*v24 != v19) )
LABEL_44:
          __fastfail(3u);
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        *v19 = 0LL;
        v19[1] = 0LL;
        if ( VIDMM_GLOBAL::_Config >= 0 )
        {
          v17 = 1;
          CVirtualAddressAllocator::UncommitVirtualAddressRange(
            *((CVirtualAddressAllocator **)this + v8 + 5052),
            v58,
            0LL,
            1u);
        }
        v25 = *(struct VIDMM_VAD **)v58;
        v59 = *(struct VIDMM_VAD **)v58;
        if ( *((struct _KTHREAD **)v63 + 8) == KeGetCurrentThread() )
        {
          CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(v63, v25, v22);
        }
        else
        {
          v26 = (char *)v63 + 56;
          DXGPUSHLOCK::AcquireExclusive((CVirtualAddressAllocator *)((char *)v63 + 56));
          CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(v63, v59, v27);
          *((_QWORD *)v63 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v26, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      if ( !v17 )
        break;
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v74, 0, 0LL, 0LL, 0, 0);
    }
    *((_BYTE *)this + 40937) &= ~4u;
    v16 = *((unsigned __int8 *)this + 40937);
    a3 = v73;
    v7 = v74;
    a4 = v75;
  }
  if ( (v16 & 4) == 0 )
  {
    if ( a6 )
    {
      if ( (v16 & 8) != 0 )
        a3 = 0;
      v73 = a3;
    }
    LOBYTE(v16) = v16 & 0xF7;
    *((_BYTE *)this + 40937) = v16;
  }
  if ( *((_DWORD *)this + v14) == *((_DWORD *)this + v8 + 414)
    && *((_DWORD *)this + v8 + 606) == *((_DWORD *)this + v8 + 542)
    && !a3 )
  {
    v20 = (VIDMM_GLOBAL *)*((_QWORD *)this + 471);
    while ( v20 != (VIDMM_GLOBAL *)((char *)this + 3768) )
    {
      v28 = (_QWORD *)((char *)v20 - 208);
      v29 = v20;
      v30 = *((_DWORD *)v20 - 35);
      v20 = *(VIDMM_GLOBAL **)v20;
      if ( (v30 & 0x3F) == v7 )
      {
        if ( *((VIDMM_GLOBAL **)v20 + 1) != v29 )
          goto LABEL_44;
        v31 = (VIDMM_GLOBAL **)*((_QWORD *)v29 + 1);
        if ( *v31 != v29 )
          goto LABEL_44;
        *v31 = v20;
        *((_QWORD *)v20 + 1) = v31;
        if ( g_IsInternalReleaseOrDbg )
        {
          v32 = WdLogNewEntry5_WdTrace(v16);
          v7 = v74;
          *(_QWORD *)(v32 + 24) = v28;
        }
        v16 = *((_QWORD *)this + 474);
        if ( *(VIDMM_GLOBAL **)v16 != (VIDMM_GLOBAL *)((char *)this + 3784) )
          goto LABEL_44;
        *(_QWORD *)v29 = (char *)this + 3784;
        *((_QWORD *)v29 + 1) = v16;
        *(_QWORD *)v16 = v29;
        *((_QWORD *)this + 474) = v29;
      }
    }
    *(_QWORD *)(v13 + 456) = 0LL;
  }
  else
  {
    if ( !*((_DWORD *)this + 2) )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 33LL, this, 0LL, 0LL);
      a4 = v75;
    }
    v33 = *((_QWORD *)this + v8 + 143);
    v34 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 8 * v8 + 1144);
    LODWORD(v63) = *(_DWORD *)(v33 + 172);
    v35 = *(_DWORD *)(v33 + 168);
    *(_DWORD *)(v33 + 172) = v35;
    v60 = v35;
    v36 = *((_QWORD *)*v34 + 7);
    if ( v36 )
    {
      v37 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v36 + 120));
      v40 = *(_QWORD *)(v39 + 128) + *(_QWORD *)(v38 + 24);
      v34 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 8 * v8 + 1144);
      v61 = v37;
    }
    else
    {
      v40 = *((_QWORD *)*v34 + 11);
      v61 = 0;
    }
    if ( a4 )
    {
      ((void (__fastcall *)(void *))a4)(a5);
      v34 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 8 * v8 + 1144);
    }
    VIDMM_DMA_POOL::FlushPendingCPUAccess(*((VIDMM_DMA_POOL **)*v34 + 17), *v34);
    if ( *(_DWORD *)(v13 + 32) )
    {
      v41 = 0;
      do
      {
        v42 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v41 + *(_DWORD *)(*((_QWORD *)this + 5028) + v9 + 28)));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 152LL))(v42);
        ++v41;
      }
      while ( v41 < *(_DWORD *)(v13 + 32) );
      a3 = v73;
    }
    v43 = *((_DWORD *)this + v8 + 414) == *((_DWORD *)this + v14)
       && *((_DWORD *)this + v8 + 542) == *((_DWORD *)this + v8 + 606);
    v44 = *((_DWORD *)this + v8 + 1177) == 0;
    v70 = v8 + 542;
    v45 = v8 + 606;
    if ( v44 && v43 )
    {
      v46 = v74;
      v47 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 8 * v8 + 1144);
      v48 = 4 * (v8 + 542);
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 5028) + v9 + 445) & 1) != 0 )
        WdLogSingleEntry1(3LL, v8);
      v46 = v74;
      v62 = 0LL;
      VIDMM_GLOBAL::GetOrGeneratePendingPagingBufferFence(this, v74, &v62);
      v50 = *((_QWORD *)this + 2);
      v51 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)this + v8 + 749);
      v52 = v62;
      LOBYTE(v74) = *(_BYTE *)(*(_QWORD *)(v50 + 744) + 55LL);
      v72 = v51;
      v71 = v62;
      if ( (_BYTE)v74 && !*(_BYTE *)(*(_QWORD *)(v50 + 744) + 58LL) )
      {
        VIDMM_GLOBAL::SignalMonitoredFence(this, v46, v51, v62, (bool *)&v74);
        v49 = v8 + 606;
      }
      *(_QWORD *)&v65 = v52;
      *(_QWORD *)&v64 = 0LL;
      v53 = *((_QWORD *)this + v8 + 749);
      v47 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 8 * v8 + 1144);
      LODWORD(v64) = 256;
      v54 = *(_QWORD *)(v53 + 64);
      *((_QWORD *)&v65 + 1) = *((_QWORD *)this + v8 + 813);
      *((_QWORD *)&v64 + 1) = *v47;
      *(_QWORD *)&v66 = v54;
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v64 + 1) + 32LL));
      LODWORD(v54) = *((_DWORD *)this + v14);
      *(_QWORD *)&v67 = __PAIR64__(v54, v61);
      LODWORD(v53) = *((_DWORD *)this + v8 + 414) - v54;
      LODWORD(v54) = *((_DWORD *)this + v49);
      *((_QWORD *)&v67 + 1) = __PAIR64__(v54, v53);
      *((_QWORD *)&v66 + 1) = v40;
      v48 = 4 * v70;
      LODWORD(v68) = *((_DWORD *)this + v70) - v54;
      *(_QWORD *)((char *)&v68 + 4) = __PAIR64__(v60, (unsigned int)v63);
      v55 = *(_QWORD *)(*((_QWORD *)this + 3) + 2808LL) + 344 * v8;
      if ( a7 )
      {
        NodeOrdinal = VidSchGetNodeOrdinal(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), v46, *(unsigned int *)(v55 + 20));
        LOBYTE(v69) = 1;
      }
      else
      {
        NodeOrdinal = VidSchGetNodeOrdinal(
                        *(_QWORD *)(*((_QWORD *)this + 2) + 744LL),
                        v46,
                        *(unsigned __int16 *)(v55 + 2));
        LOBYTE(v69) = 0;
      }
      v44 = (*((_BYTE *)this + 40936) & 2) == 0;
      HIDWORD(v68) = NodeOrdinal;
      if ( !v44 && VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
        VIDMM_GLOBAL::RecordVaPagingHistoryFlushPagingBuffer(
          v57,
          (struct VIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER *)&v64,
          v46);
      VidSchSubmitPagingCommand(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), &v64);
      if ( !(_BYTE)v74 )
        VidSchSignalPagingFences(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), &v72, &v71);
      v45 = v8 + 606;
      *((_QWORD *)this + v8 + 685) = v62;
    }
    *((_DWORD *)this + v14) = *((_DWORD *)this + v8 + 414);
    *((_DWORD *)this + v45) = *(_DWORD *)((char *)this + v48);
    VIDMM_GLOBAL::FlushAllTemporaryAllocation(this, v46);
    *((_DWORD *)this + v8 + 964) = 1;
    *((_DWORD *)this + v8 + 1177) = 0;
    if ( a3 )
    {
      VIDMM_DMA_POOL::ReleaseBuffer(*((VIDMM_DMA_POOL **)this + v8 + 79), *v47, 1);
      VIDMM_DMA_POOL::AcquireBuffer(*((VIDMM_DMA_POOL **)this + v8 + 79), v47, 0, 1u);
      *((_DWORD *)*v47 + 8) = 1;
      *((_DWORD *)this + v8 + 414) = 0;
      *((_DWORD *)this + v14) = 0;
      *(_DWORD *)((char *)this + v48) = 0;
      *((_DWORD *)this + v8 + 606) = 0;
    }
    *(_QWORD *)(*((_QWORD *)this + 5028) + 456LL) = 0LL;
  }
}
