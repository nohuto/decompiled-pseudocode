/*
 * XREFs of ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C006DDC0
 * Callers:
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C0060034 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0063984 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?AddGlobalAllocReferenceToDmaBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0063DA4 (-AddGlobalAllocReferenceToDmaBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0067080 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0067150 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C0067E64 (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1C006BAE0 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006C260 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C006DDC0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006E840 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C0070F20 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C0071370 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C0074148 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C00887A4 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00896C8 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0089908 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C008A0EC (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B037C (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00B1074 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B39A8 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00C53B0 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C6784 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     VidSchIsMonitoredFenceSignaled @ 0x1C0001730 (VidSchIsMonitoredFenceSignaled.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001B54 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007C30 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0015520 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C0035700 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C006863C (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C006DDC0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchSubmitPagingCommand @ 0x1C006E44C (VidSchSubmitPagingCommand.c)
 *     VidSchGetNodeOrdinal @ 0x1C006E568 (VidSchGetNodeOrdinal.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C006FBAC (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0080610 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C00B2794 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 *     ?RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER@@K@Z @ 0x1C00BC870 (-RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING.c)
 */

void __fastcall VIDMM_GLOBAL::FlushPagingBufferInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int8 a3,
        void (*a4)(void *),
        void *a5,
        char a6,
        char a7)
{
  __int64 v7; // r13
  __int64 v9; // rbx
  void (*v10)(void *); // r14
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r10
  __int64 v14; // r15
  __int64 v15; // r12
  unsigned __int8 v16; // al
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  struct _KTHREAD **v19; // r13
  char v20; // r14
  _QWORD **v21; // rcx
  _QWORD *v22; // rbx
  VIDMM_GLOBAL *v23; // rsi
  char *v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // ecx
  int v27; // r13d
  _QWORD *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rbx
  unsigned int i; // r14d
  __int64 v33; // rcx
  __int64 v34; // rcx
  bool v35; // al
  __int64 v36; // rdx
  struct _VIDSCH_SYNC_OBJECT *v37; // r8
  __int64 v38; // rdx
  struct _VIDSCH_SYNC_OBJECT *v39; // r9
  unsigned __int64 v40; // r14
  unsigned int v41; // r15d
  struct _VIDMM_DMA_BUFFER **v42; // r12
  unsigned int v43; // ecx
  unsigned int v44; // eax
  unsigned int v45; // ecx
  __int64 v46; // rax
  char v47; // bl
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r8
  _QWORD *v51; // r9
  unsigned int v52; // r10d
  _QWORD *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rax
  VIDMM_GLOBAL *v56; // r14
  unsigned __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  _QWORD *v61; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v62; // rbx
  struct VIDMM_VAD *v63; // rax
  char v64; // bl
  __int64 v65; // rcx
  _QWORD *v66; // r13
  VIDMM_GLOBAL *v67; // r15
  int v68; // eax
  VIDMM_GLOBAL **v69; // rax
  VIDMM_GLOBAL **v70; // rcx
  _QWORD *v71; // rax
  _QWORD *v72; // r15
  VIDMM_GLOBAL *v73; // r14
  int v74; // eax
  VIDMM_GLOBAL **v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rax
  int v78; // [rsp+40h] [rbp-81h]
  unsigned int v79; // [rsp+48h] [rbp-79h]
  struct VIDMM_VAD *v80; // [rsp+48h] [rbp-79h]
  unsigned __int64 v81; // [rsp+50h] [rbp-71h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v82; // [rsp+58h] [rbp-69h] BYREF
  _QWORD v83[20]; // [rsp+60h] [rbp-61h] BYREF
  struct VIDMM_MAPPED_VA_RANGE *v84; // [rsp+110h] [rbp+4Fh] BYREF
  unsigned int v85; // [rsp+118h] [rbp+57h]
  unsigned __int8 v86; // [rsp+120h] [rbp+5Fh]
  void (*v87)(void *); // [rsp+128h] [rbp+67h]

  v87 = a4;
  v86 = a3;
  v85 = a2;
  v7 = a2;
  v9 = a3;
  v10 = a4;
  memset(v83, 0, 0x58uLL);
  v12 = (unsigned int)v7;
  v13 = *((_QWORD *)this + 5027);
  v14 = 1584 * v7;
  v15 = v13 + 1584 * v7;
  if ( g_IsInternalReleaseOrDbg )
  {
    v71 = (_QWORD *)WdLogNewEntry5_WdTrace(v11);
    v71[3] = v9;
    v71[4] = *((unsigned int *)this + v7 + 414);
    v71[5] = *((unsigned int *)this + v7 + 478);
    v13 = *((_QWORD *)this + 5027);
  }
  v16 = *((_BYTE *)this + 40937);
  v17 = v16;
  if ( (v16 & 1) != 0 && (_BYTE)v9 )
  {
    LOBYTE(v17) = v16 | 2;
    *((_BYTE *)this + 40937) = v16 | 2;
  }
  v18 = (unsigned __int8)v17;
  if ( (*(_BYTE *)(v13 + v14 + 436) & 1) != 0 && *((_QWORD *)this + v7 + 143) && *((_DWORD *)this + 2) && (v17 & 1) == 0 )
  {
    LOBYTE(v17) = v17 | 1;
    *((_BYTE *)this + 40937) = v17;
    v19 = (struct _KTHREAD **)*((_QWORD *)this + v7 + 5052);
    while ( 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        v21 = (_QWORD **)(v14 + *((_QWORD *)this + 5027) + 464LL);
        v22 = *v21;
        if ( *v21 == v21 )
          break;
        v57 = v22[2];
        v58 = *((_QWORD *)this + v12 + 747);
        v84 = (struct VIDMM_MAPPED_VA_RANGE *)(v22 - 3);
        if ( !VidSchIsMonitoredFenceSignaled(v58, v57) )
          break;
        v60 = *v22;
        if ( *(_QWORD **)(*v22 + 8LL) != v22 || (v61 = (_QWORD *)v22[1], (_QWORD *)*v61 != v22) )
LABEL_86:
          __fastfail(3u);
        *v61 = v60;
        *(_QWORD *)(v60 + 8) = v61;
        *v22 = 0LL;
        v22[1] = 0LL;
        v62 = v84;
        if ( VIDMM_GLOBAL::_Config >= 0 )
        {
          v20 = 1;
          CVirtualAddressAllocator::UncommitVirtualAddressRange(
            *((CVirtualAddressAllocator **)this + v12 + 5052),
            v84,
            0LL,
            1u);
        }
        v63 = *(struct VIDMM_VAD **)v62;
        v64 = 0;
        v80 = v63;
        if ( v19[8] != KeGetCurrentThread() )
        {
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v19 + 7));
          v64 = 1;
        }
        CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)v19, v80, v59);
        if ( v64 )
        {
          v19[8] = 0LL;
          ExReleasePushLockExclusiveEx(v19 + 7, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      if ( !v20 )
        break;
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v85, 0, 0LL, 0LL, 0, 0);
    }
    *((_BYTE *)this + 40937) &= ~1u;
    v18 = *((unsigned __int8 *)this + 40937);
    v10 = v87;
    LODWORD(v7) = v85;
    LOBYTE(v9) = v86;
  }
  if ( (v18 & 1) == 0 )
  {
    if ( a6 && (v18 & 2) != 0 )
    {
      LOBYTE(v9) = 0;
      v86 = 0;
    }
    LOBYTE(v18) = v18 & 0xFD;
    *((_BYTE *)this + 40937) = v18;
  }
  if ( *((_DWORD *)this + v12 + 478) == *((_DWORD *)this + v12 + 414)
    && *((_DWORD *)this + v12 + 606) == *((_DWORD *)this + v12 + 542)
    && !(_BYTE)v9 )
  {
    v23 = (VIDMM_GLOBAL *)*((_QWORD *)this + 471);
    if ( v23 != (VIDMM_GLOBAL *)((char *)this + 3768) )
    {
      while ( 1 )
      {
        v72 = (_QWORD *)((char *)v23 - 224);
        v73 = v23;
        v74 = *((_DWORD *)v23 - 37);
        v23 = *(VIDMM_GLOBAL **)v23;
        if ( (v74 & 0x3F) == (_DWORD)v7 )
        {
          if ( *((VIDMM_GLOBAL **)v23 + 1) != v73 )
            goto LABEL_86;
          v75 = (VIDMM_GLOBAL **)*((_QWORD *)v73 + 1);
          if ( *v75 != v73 )
            goto LABEL_86;
          *v75 = v23;
          *((_QWORD *)v23 + 1) = v75;
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v18) + 24) = v72;
          v18 = *((_QWORD *)this + 474);
          if ( *(VIDMM_GLOBAL **)v18 != (VIDMM_GLOBAL *)((char *)this + 3784) )
            goto LABEL_86;
          *(_QWORD *)v73 = (char *)this + 3784;
          *((_QWORD *)v73 + 1) = v18;
          *(_QWORD *)v18 = v73;
          *((_QWORD *)this + 474) = v73;
        }
        if ( v23 == (VIDMM_GLOBAL *)((char *)this + 3768) )
          return;
      }
    }
    return;
  }
  if ( !*((_DWORD *)this + 2) )
  {
    v76 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17);
    v76[3] = 270LL;
    v76[4] = 33LL;
    v76[5] = this;
    v76[6] = 0LL;
    v76[7] = 0LL;
    WdLogEvent5_WdCriticalError(v76);
  }
  v24 = (char *)this + 8 * v12;
  v25 = *((_QWORD *)v24 + 143);
  v26 = *(_DWORD *)(v25 + 172);
  v27 = *(_DWORD *)(v25 + 168);
  *(_DWORD *)(v25 + 172) = v27;
  v28 = (_QWORD *)*((_QWORD *)v24 + 143);
  v79 = v26;
  v29 = v28[7];
  if ( v29 )
  {
    v30 = *(_QWORD *)(v29 + 128);
    if ( (*(_DWORD *)(v30 + 80) & 0x1000) != 0 )
      v78 = 0;
    else
      v78 = *(_DWORD *)(v30 + 16) + 1;
    v31 = *(_QWORD *)(v29 + 136) + *(_QWORD *)(v30 + 24);
  }
  else
  {
    v31 = v28[11];
    v78 = 0;
  }
  if ( v10 )
  {
    ((void (__fastcall *)(void *))v10)(a5);
    v28 = (_QWORD *)*((_QWORD *)this + v12 + 143);
  }
  if ( *(_DWORD *)(v28[17] + 36LL) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v28[7] + 128LL) + 56LL))(*(_QWORD *)(v28[7] + 128LL));
  for ( i = 0; i < *(_DWORD *)(v15 + 24); ++i )
  {
    v33 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (i + *(_DWORD *)(*((_QWORD *)this + 5027) + v14 + 20)));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 160LL))(v33);
  }
  v34 = *((unsigned int *)this + v12 + 414);
  v35 = (_DWORD)v34 == *((_DWORD *)this + v12 + 478) && *((_DWORD *)this + v12 + 542) == *((_DWORD *)this + v12 + 606);
  v36 = *((unsigned int *)this + v12 + 1173);
  if ( !(_DWORD)v36 && v35 )
  {
    v42 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 8 * v12 + 1144);
    goto LABEL_54;
  }
  if ( (*(_BYTE *)(*((_QWORD *)this + 5027) + v14 + 436) & 0x40) != 0 )
  {
    v77 = WdLogNewEntry5_WdWarning(v34, v36);
    *(_QWORD *)(v77 + 24) = v12;
    WdLogEvent5_WdWarning(v77);
    LODWORD(v36) = *((_DWORD *)this + v12 + 1173);
  }
  if ( !(_DWORD)v36 )
  {
    *((_DWORD *)this + v12 + 1173) = 1;
    ++*((_QWORD *)this + v12 + 619);
  }
  v37 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)this + v12 + 747);
  v38 = *((_QWORD *)this + 2);
  v39 = v37;
  v40 = *((_QWORD *)this + v12 + 619);
  v41 = v85;
  LOBYTE(v84) = *(_BYTE *)(*(_QWORD *)(v38 + 624) + 55LL);
  v82 = v37;
  v81 = v40;
  if ( (_BYTE)v84 && !*(_BYTE *)(*(_QWORD *)(v38 + 624) + 58LL) )
  {
    VIDMM_GLOBAL::SignalMonitoredFence(this, v85, v37, v40, (bool *)&v84);
    v39 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)this + v12 + 747);
  }
  v83[4] = *((_QWORD *)v39 + 8);
  v42 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 8 * v12 + 1144);
  v83[3] = *((_QWORD *)this + v12 + 811);
  v83[1] = *v42;
  LODWORD(v83[0]) = 256;
  v83[2] = v40;
  _InterlockedIncrement((volatile signed __int32 *)(v83[1] + 32LL));
  v43 = *((_DWORD *)this + v12 + 478);
  v83[6] = __PAIR64__(v43, v78);
  v44 = *((_DWORD *)this + v12 + 414) - v43;
  v45 = *((_DWORD *)this + v12 + 606);
  v83[7] = __PAIR64__(v45, v44);
  v83[8] = __PAIR64__(v79, *((_DWORD *)this + v12 + 542) - v45);
  v46 = *((_QWORD *)this + 3);
  v83[5] = v31;
  v47 = a7;
  LODWORD(v83[9]) = v27;
  v48 = *(_QWORD *)(v46 + 2584) + 360 * v12;
  if ( a7 )
    v49 = *(unsigned int *)(v48 + 20);
  else
    v49 = *(unsigned __int16 *)(v48 + 2);
  HIDWORD(v83[9]) = VidSchGetNodeOrdinal(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL), v41, v49);
  LOBYTE(v83[10]) = v47 != 0;
  if ( (*((_BYTE *)this + 40936) & 2) != 0 && *((_QWORD *)this + 5123) )
    VIDMM_GLOBAL::RecordVaPagingHistoryFlushPagingBuffer(
      this,
      (struct VIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER *)v83,
      v41);
  VidSchSubmitPagingCommand(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL), v83);
  if ( !(_BYTE)v84 )
  {
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0;
    v53 = 0LL;
    v54 = *(_QWORD *)(*((_QWORD *)this + 2) + 624LL);
    if ( *(_BYTE *)(v54 + 55) )
    {
      v53 = *(_QWORD **)(v54 + 272);
      if ( !*v53 )
      {
        VidSchSignalSyncObjectsFromCpu(1LL, &v82, 0LL, (char *)&v81);
        goto LABEL_53;
      }
      if ( v41 == -1 )
      {
        v52 = *(_DWORD *)(v54 + 68);
      }
      else
      {
        v52 = 1;
        v53 += v12;
      }
    }
    else if ( v41 == -1 )
    {
      v50 = *(unsigned int *)(v54 + 68);
      if ( v47 )
        v51 = *(_QWORD **)(v54 + 280);
      else
        v51 = *(_QWORD **)(v54 + 256);
    }
    else
    {
      v50 = 1LL;
      if ( v47 )
        v55 = *(_QWORD *)(v54 + 280);
      else
        v55 = *(_QWORD *)(v54 + 256);
      v51 = (_QWORD *)(v55 + 8 * v12);
    }
    VidSchSignalSyncObjectsFromGpu(v52, (__int64)v53, v50, v51, 1u, (__int64)&v82, 0, &v81);
  }
LABEL_53:
  *((_QWORD *)this + v12 + 683) = v40;
  LODWORD(v34) = *((_DWORD *)this + v12 + 414);
LABEL_54:
  *((_DWORD *)this + v12 + 606) = *((_DWORD *)this + v12 + 542);
  *((_DWORD *)this + v12 + 478) = v34;
  v56 = (VIDMM_GLOBAL *)*((_QWORD *)this + 471);
  if ( v56 != (VIDMM_GLOBAL *)((char *)this + 3768) )
  {
    v65 = v85;
    do
    {
      v66 = (_QWORD *)((char *)v56 - 224);
      v67 = v56;
      v68 = *((_DWORD *)v56 - 37);
      v56 = *(VIDMM_GLOBAL **)v56;
      if ( (v68 & 0x3F) == (_DWORD)v65 )
      {
        if ( *((VIDMM_GLOBAL **)v56 + 1) != v67 )
          goto LABEL_86;
        v69 = (VIDMM_GLOBAL **)*((_QWORD *)v67 + 1);
        if ( *v69 != v67 )
          goto LABEL_86;
        *v69 = v56;
        *((_QWORD *)v56 + 1) = v69;
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v65) + 24) = v66;
        v70 = (VIDMM_GLOBAL **)*((_QWORD *)this + 474);
        if ( *v70 != (VIDMM_GLOBAL *)((char *)this + 3784) )
          goto LABEL_86;
        *((_QWORD *)v67 + 1) = v70;
        *(_QWORD *)v67 = (char *)this + 3784;
        *v70 = v67;
        v65 = v85;
        *((_QWORD *)this + 474) = v67;
      }
    }
    while ( v56 != (VIDMM_GLOBAL *)((char *)this + 3768) );
  }
  *((_DWORD *)this + v12 + 960) = 1;
  *((_DWORD *)this + v12 + 1173) = 0;
  if ( v86 )
  {
    VIDMM_DMA_POOL::ReleaseBuffer(*((VIDMM_DMA_POOL **)this + v12 + 79), *v42, 1);
    VIDMM_DMA_POOL::AcquireBuffer(*((VIDMM_DMA_POOL **)this + v12 + 79), v42, 0, 1u);
    *((_DWORD *)*v42 + 8) = 1;
    *((_DWORD *)this + v12 + 414) = 0;
    *((_DWORD *)this + v12 + 478) = 0;
    *((_DWORD *)this + v12 + 542) = 0;
    *((_DWORD *)this + v12 + 606) = 0;
  }
  *(_QWORD *)(*((_QWORD *)this + 5027) + 448LL) = 0LL;
}
