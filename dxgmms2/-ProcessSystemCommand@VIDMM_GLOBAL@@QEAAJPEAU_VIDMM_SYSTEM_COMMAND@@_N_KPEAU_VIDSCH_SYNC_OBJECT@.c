/*
 * XREFs of ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B7F80 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00EDB78 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001414 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00040E0 (VidSchSignalSyncObjectsFromGpu.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     Feature_DelayedForceEviction__private_ReportDeviceUsage @ 0x1C0019AE0 (Feature_DelayedForceEviction__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?SetDelayedEvictionTimerScheduled@VIDMM_GLOBAL@@QEAAXJ@Z @ 0x1C002E280 (-SetDelayedEvictionTimerScheduled@VIDMM_GLOBAL@@QEAAXJ@Z.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E4FC (McTemplateK0p_EtwWriteTransfer.c)
 *     ?OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0033878 (-OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C0040990 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0086358 (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C0086FD4 (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0087B88 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0089160 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0089B40 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C008B300 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C008D8B0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0093850 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00939F8 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A2C90 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C00A5350 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C00A62CC (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00A7930 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A7CA8 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A83EC (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C00A8CDC (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiResumeFlipQueues @ 0x1C00B42DC (VidSchiResumeFlipQueues.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C00B4FC4 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B5684 (-UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00B5720 (-PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     VidSchSignalPagingFences @ 0x1C00B57E0 (VidSchSignalPagingFences.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C00B5874 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B5980 (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00B59CC (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00C26EC (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00E1AD0 (-DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00E1D24 (-EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E2B54 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x1C00E6064 (-MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00E7460 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00E8170 (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00EAC60 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00FD558 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00FD8C8 (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00FE97C (-ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANG.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z @ 0x1C00FE9F4 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00FFBDC (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C01024D4 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 *     VidSchWaitForPagingFence @ 0x1C010919C (VidSchWaitForPagingFence.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::ProcessSystemCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        __int64 a3,
        __int64 a4,
        struct _VIDSCH_SYNC_OBJECT *a5)
{
  int inited; // r13d
  __int64 v6; // rbx
  __int64 v8; // rcx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // ebx
  _QWORD *v14; // r12
  __int64 v15; // rax
  int v16; // r14d
  __int64 v17; // r8
  _DWORD *v18; // rsi
  char *v19; // rcx
  char v20; // r12
  char v21; // r13
  __int64 v22; // rdx
  int v23; // ecx
  __int64 v24; // rsi
  __int64 v25; // r10
  int v26; // eax
  int v27; // eax
  unsigned int v28; // esi
  _QWORD *v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rbx
  unsigned int *v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  _QWORD *v35; // rcx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 i; // rbx
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  unsigned int j; // eax
  __int64 v43; // rcx
  char v44; // r8
  int v45; // ebx
  __int64 v46; // rsi
  int v47; // eax
  __int64 v48; // rbx
  VIDMM_GLOBAL *v49; // rcx
  PRKPROCESS *v50; // rcx
  VIDMM_GLOBAL *v51; // rcx
  int updated; // eax
  __int64 v53; // rcx
  PRKPROCESS *v54; // rcx
  __int64 v55; // rax
  CVirtualAddressAllocator *v56; // rbx
  PRKPROCESS *v57; // rcx
  struct VIDMM_DEVICE *v58; // rdx
  __int64 v59; // rdx
  VIDMM_DEVICE *v60; // rbx
  __int64 k; // rbx
  __int64 v62; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v63; // rdx
  _QWORD *v64; // rbx
  __int64 v65; // rax
  _QWORD *v66; // rsi
  int v67; // eax
  __int64 v68; // r10
  __int64 v69; // r9
  _QWORD *v70; // rcx
  CVirtualAddressAllocator *v71; // rcx
  int *v72; // rax
  struct _KEVENT *v73; // r12
  __int64 v74; // r15
  __int64 v75; // rax
  unsigned int v76; // esi
  __int64 v77; // r14
  __int64 v78; // rcx
  _QWORD **v79; // r14
  _QWORD *v80; // rbx
  _QWORD *v81; // rax
  _QWORD *v82; // rsi
  _QWORD *v83; // rcx
  __int64 v84; // rdx
  KPRIORITY v85; // r8d
  _QWORD *v86; // r9
  _QWORD *v87; // rdx
  __int64 v88; // rcx
  unsigned int v89; // eax
  unsigned int v90; // ecx
  __int64 v92; // [rsp+20h] [rbp-91h]
  bool v93; // [rsp+50h] [rbp-61h] BYREF
  char v94; // [rsp+51h] [rbp-60h]
  struct _VIDSCH_SYNC_OBJECT *v95; // [rsp+58h] [rbp-59h] BYREF
  unsigned __int64 v96; // [rsp+60h] [rbp-51h] BYREF
  int v97; // [rsp+68h] [rbp-49h]
  __int64 v98; // [rsp+70h] [rbp-41h] BYREF
  __int64 v99; // [rsp+78h] [rbp-39h]
  __int64 v100; // [rsp+80h] [rbp-31h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v101; // [rsp+88h] [rbp-29h] BYREF
  unsigned __int64 v102; // [rsp+90h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-19h] BYREF

  inited = 0;
  v6 = *(int *)a2;
  v8 = *((int *)this + 2);
  v94 = a3;
  v102 = a4;
  v101 = a5;
  LODWORD(v96) = 0;
  LODWORD(v95) = 0;
  if ( (_DWORD)v8 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 64LL, this, v8, v6);
  }
  ++*((_QWORD *)this + 578);
  v10 = 0LL;
  *((_DWORD *)this + 2) = v6;
  *((_DWORD *)this + 12) = -1;
  *((_QWORD *)this + 879) = 0LL;
  for ( *((_QWORD *)this + 880) = 0LL; (unsigned int)v10 < *((_DWORD *)this + 1754); v10 = (unsigned int)(v10 + 1) )
  {
    if ( (byte_1C00769C1 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer(v8, &EventPagingStartPreparation, a3, *((_QWORD *)this + v10 + 143));
    if ( *((_DWORD *)this + v10 + 414) != *((_DWORD *)this + v10 + 478)
      || *((_DWORD *)this + v10 + 542) != *((_DWORD *)this + v10 + 606) )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 33LL, this, 0LL, 0LL);
    }
    *((_DWORD *)this + v10 + 1028) = *((_DWORD *)this + v10 + 414);
    *((_DWORD *)this + v10 + 1092) = *((_DWORD *)this + v10 + 542);
    *((_DWORD *)this + v10 + 964) = 0;
  }
  v11 = *(int *)a2;
  if ( (_DWORD)v11 == 121 )
  {
    v68 = *((_QWORD *)a2 + 2);
    v69 = *(_QWORD *)(*(_QWORD *)v68 + 8LL);
    v70 = *(_QWORD **)(*(_QWORD *)(v69 + 16) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL));
    if ( v70 && *(_DWORD *)(*v70 + 40928LL) )
    {
      if ( (*(_DWORD *)(v69 + 96) & 2) != 0 )
        v71 = *(CVirtualAddressAllocator **)(*v70 + 8LL * (*(_DWORD *)(**(_QWORD **)v68 + 68LL) & 0x3F) + 40416);
      else
        v71 = (CVirtualAddressAllocator *)v70[63];
    }
    else
    {
      v71 = 0LL;
    }
    CVirtualAddressAllocator::FreeAllocMappedVaRangeList(v71, *((struct VIDMM_ALLOC **)a2 + 2));
    goto LABEL_155;
  }
  v12 = 0x1C0000000uLL;
  switch ( (int)v11 )
  {
    case 101:
      Feature_DelayedForceEviction__private_ReportDeviceUsage();
      if ( *((_DWORD *)this + 11212) && KeCancelTimer((PKTIMER)((char *)this + 44784)) )
        VIDMM_GLOBAL::SetDelayedEvictionTimerScheduled(this);
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 926); i = (unsigned int)(i + 1) )
      {
        v40 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * i);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 144LL))(v40);
      }
      v41 = 0LL;
      for ( j = 0; j < *((_DWORD *)this + 1754); ++j )
      {
        v43 = *((_QWORD *)this + 5028) + 1616LL * j;
        v44 = *(_BYTE *)(v43 + 444);
        if ( (v44 & 0x40) != 0 )
        {
          v41 |= 1LL << j;
          *(_BYTE *)(v43 + 444) = v44 & 0xBF;
        }
      }
      VIDMM_GLOBAL::RecommitGpuVirtualAddresses(this, v41);
      goto LABEL_155;
    case 102:
      v13 = *((_DWORD *)a2 + 10);
      v14 = (_QWORD *)((char *)this + 3712);
      v8 = 0LL;
      v97 = 0;
      if ( !*((_DWORD *)this + 926) )
        goto LABEL_53;
      break;
    case 103:
      VIDMM_GLOBAL::CleanupPrimaryAllocation((VIDMM_GLOBAL *)v8, *((struct _VIDMM_GLOBAL_ALLOC **)a2 + 5));
      goto LABEL_155;
    case 104:
      v59 = *((_QWORD *)a2 + 2);
      v93 = 0;
      v95 = 0LL;
      inited = VIDMM_GLOBAL::PageInOneAllocation(this, v59, 4LL, 0LL, &v93, &v95, 0, -1LL);
      goto LABEL_155;
    case 105:
      VIDMM_GLOBAL::EvictOneAllocation(this, *((struct VIDMM_ALLOC **)a2 + 2), 0);
      goto LABEL_155;
    case 106:
      VIDMM_GLOBAL::ReportVidMmStateWorker(this);
      goto LABEL_155;
    case 110:
      v45 = 0;
      if ( *((int *)this + 926) > 0 )
      {
        v46 = 0LL;
        do
        {
          v8 = *(_QWORD *)(v46 + *((_QWORD *)this + 464));
          v47 = *(_DWORD *)(v8 + 80);
          if ( (v47 & 0x1001) == 0 && (v47 & 4) != 0 )
          {
            inited = VIDMM_SEGMENT::SuspendCpuAccess((VIDMM_SEGMENT *)v8);
            if ( inited < 0 )
              break;
          }
          ++v45;
          v46 += 8LL;
        }
        while ( v45 < *((_DWORD *)this + 926) );
      }
      goto LABEL_155;
    case 112:
      v48 = *((_QWORD *)a2 + 5);
      if ( *(_QWORD *)(v48 + 120) )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
        LOBYTE(v92) = 0;
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, _QWORD))(**(_QWORD **)(v48 + 120) + 48LL))(
          *(_QWORD *)(v48 + 120),
          v48,
          0LL,
          0LL,
          v92,
          0LL);
      }
      if ( *(_QWORD *)(v48 + 240) )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v8);
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v48 + 68) & 0x3F, 0, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::EvictTemporaryAllocation(v49, (struct _VIDMM_GLOBAL_ALLOC *)v48);
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v48 + 68) & 0x3F, 0, 0LL, 0LL, 0, 0);
      }
      goto LABEL_155;
    case 113:
      v95 = 0LL;
      inited = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
                 (VIDMM_GLOBAL *)v8,
                 (struct _VIDMM_SYSTEM_COMMAND *)((char *)a2 + 40),
                 &v95);
      goto LABEL_155;
    case 114:
      v50 = (PRKPROCESS *)*((_QWORD *)this + 5048);
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(*v50, &ApcState);
      updated = VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(v51, a2);
      goto LABEL_110;
    case 115:
      v55 = *((_QWORD *)a2 + 6);
      v56 = *(CVirtualAddressAllocator **)(v55 + 504);
      if ( v56 )
      {
        if ( *((_QWORD *)a2 + 5) )
        {
          v57 = (PRKPROCESS *)*((_QWORD *)this + 5048);
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(*v57, &ApcState);
          CVirtualAddressAllocator::DestroyVaAllocator(v56);
          KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          CVirtualAddressAllocator::DestroyVaAllocator(*(CVirtualAddressAllocator **)(v55 + 504));
        }
        *(_QWORD *)(*((_QWORD *)a2 + 6) + 504LL) = 0LL;
      }
      goto LABEL_155;
    case 116:
      v58 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 3);
      v93 = 0;
      v95 = 0LL;
      inited = VIDMM_GLOBAL::PageInDeviceInternal(this, v58, 0, &v93, &v95);
      goto LABEL_155;
    case 117:
      v54 = (PRKPROCESS *)*((_QWORD *)this + 5048);
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(*v54, &ApcState);
      updated = VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(
                  this,
                  *((const struct _DXGKARGCB_UPDATECONTEXTALLOCATION **)a2 + 5),
                  1u);
LABEL_110:
      inited = updated;
      KeUnstackDetachProcess(&ApcState);
      goto LABEL_155;
    case 118:
      inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, *((_DWORD *)a2 + 1), 0);
      if ( inited < 0 )
      {
        WdLogSingleEntry1(1LL, 10517LL);
        v92 = 10517LL;
        DxgkLogInternalTriageEvent(v53, 0x40000LL);
      }
      goto LABEL_155;
    case 120:
      inited = VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
                 this,
                 *((struct _KTHREAD ***)a2 + 5),
                 *((_QWORD *)a2 + 6),
                 a4,
                 *((_BYTE *)a2 + 64));
      goto LABEL_155;
    case 123:
      v60 = (VIDMM_DEVICE *)*((_QWORD *)a2 + 5);
      if ( *((_BYTE *)a2 + 48) )
      {
        VIDMM_DEVICE::IndefinitelySuspend(v60, *((_BYTE *)a2 + 49));
        VIDMM_DEVICE::FaultAllAllocations(v60);
      }
      else
      {
        VIDMM_DEVICE::EnsureSchedulable(v60, 0);
      }
      goto LABEL_155;
    case 124:
      VIDMM_GLOBAL::TrimOfferCommitmentInternal(
        this,
        *((struct VIDMM_PROCESS **)a2 + 5),
        *((struct DXGDECOMMITITERATOR **)a2 + 6),
        *(union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS *)((char *)a2 + 56),
        *((_QWORD *)a2 + 8),
        *((unsigned __int64 **)a2 + 9));
      goto LABEL_155;
    case 126:
      VIDMM_GLOBAL::MoveResourcesSysCommandHelper(
        this,
        *((unsigned int *)a2 + 1),
        *((unsigned int *)a2 + 10),
        *((unsigned int *)a2 + 11));
      goto LABEL_155;
    case 127:
      for ( k = 0LL; (unsigned int)k < *((_DWORD *)this + 926); k = (unsigned int)(k + 1) )
        VIDMM_SEGMENT::InvalidateAllVirtualAddress(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8 * k));
      goto LABEL_155;
    case 128:
      v62 = *((_QWORD *)a2 + 5);
      if ( *((_DWORD *)a2 + 12) )
        VIDMM_SEGMENT::FreeVPRReserve((VIDMM_SEGMENT *)v62);
      else
        VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
          *(VIDMM_LINEAR_POOL **)(v62 + 152),
          *(void **)(v62 + 456),
          *(_QWORD *)(v62 + 424) - *(_QWORD *)(v62 + 464),
          *(_QWORD *)(v62 + 424));
      goto LABEL_155;
    case 129:
      v63 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 5);
      v8 = *((_QWORD *)v63 + 15);
      if ( v8 && *((_QWORD *)v63 + 59) )
        VIDMM_CPU_HOST_APERTURE::OfferRange(*(VIDMM_CPU_HOST_APERTURE **)(v8 + 504), v63);
      goto LABEL_155;
    case 130:
      inited = VIDMM_GLOBAL::EnableIoMmuIsolation(this);
      goto LABEL_155;
    case 131:
      VIDMM_GLOBAL::DisableIoMmuIsolation(this);
      goto LABEL_155;
    case 132:
      v64 = (_QWORD *)*((_QWORD *)this + 464);
      v8 = *((unsigned int *)this + 926);
      v65 = *((unsigned int *)a2 + 10);
      v66 = &v64[v8];
      if ( (_DWORD)v65 == -1 )
        goto LABEL_143;
      if ( (unsigned int)v65 < (unsigned int)v8 )
      {
        v64 += v65;
        v66 = v64 + 1;
LABEL_143:
        while ( v64 != v66 )
        {
          if ( inited < 0 )
            break;
          v67 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v64 + 192LL))(*v64);
          ++v64;
          inited = v67;
        }
      }
      goto LABEL_155;
    case 205:
      VIDMM_GLOBAL::EvictOneAllocation(this, *((struct VIDMM_ALLOC **)a2 + 2), 1);
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)a2 + 2) + 164LL));
      goto LABEL_155;
    case 216:
      VIDMM_SEGMENT::ProcessUnblockMemoryRanges(
        *((_QWORD *)a2 + 5),
        *((unsigned __int8 *)a2 + 48),
        0x1C0000000uLL,
        (char *)a2 + 56);
      goto LABEL_155;
    default:
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 23LL, -1073741811LL, this, v11);
      goto LABEL_155;
  }
  do
  {
    v15 = *((_QWORD *)this + 3);
    v99 = 8 * v8;
    v16 = *(_DWORD *)(v15 + 2284) & 0x20000;
    v17 = *(_QWORD *)(8 * v8 + *v14);
    if ( (*(_DWORD *)(v17 + 80) & 0x1001) != 0 )
    {
      v19 = (char *)this + 40184;
    }
    else
    {
      v18 = (_DWORD *)((char *)this + 40184);
      if ( *((_DWORD *)this + 10046) == -1 )
      {
        v19 = (char *)this + 40184;
      }
      else if ( (v13 & 0x40) == 0
             || (v19 = (char *)this + 40184, *(_QWORD *)(v17 + 232) <= (unsigned __int64)qword_1C0076558) )
      {
        v19 = (char *)this + 40184;
        if ( !v16 )
        {
          v20 = 0;
          goto LABEL_22;
        }
      }
    }
    v18 = v19;
    v20 = 1;
    if ( (*(_DWORD *)(v17 + 80) & 0x1001) != 0 )
      goto LABEL_26;
LABEL_22:
    if ( *v18 == -1 || *(_QWORD *)(v17 + 232) > (unsigned __int64)qword_1C0076558 || v16 )
    {
LABEL_26:
      v21 = 1;
      goto LABEL_27;
    }
    v21 = 0;
LABEL_27:
    Feature_DelayedForceEviction__private_ReportDeviceUsage();
    v22 = *(_QWORD *)(v99 + *((_QWORD *)this + 464));
    v23 = *(_DWORD *)(v22 + 80);
    if ( (v23 & 0x1001) == 0
      && (v23 & 0x200000) == 0
      && *v18 != -1
      && (v13 & 0x80u) == 0
      && *(_QWORD *)(v22 + 232) > (unsigned __int64)qword_1C0076558
      && !v16
      && (v23 & 0x80u) != 0
      && (v13 & 0x20) != 0
      && !_InterlockedCompareExchange((volatile signed __int32 *)this + 11212, 1, 0) )
    {
      KeSetTimer((PKTIMER)((char *)this + 44784), (LARGE_INTEGER)-qword_1C0076600, (PKDPC)((char *)this + 44856));
    }
    v24 = v99;
    v25 = *(_QWORD *)(v99 + *((_QWORD *)this + 464));
    v26 = *(_DWORD *)(v25 + 80);
    if ( (v26 & 0x80) != 0 && (v13 & 2) != 0 && v20 )
      goto LABEL_50;
    if ( (v26 & 0x100) != 0 && (v13 & 4) != 0 )
      goto LABEL_50;
    v27 = v26 & 0x1001;
    if ( !v27 && (v13 & 0x10) != 0 )
      goto LABEL_50;
    if ( (*(_DWORD *)(v25 + 80) & 0x80) != 0 && (v13 & 0x20) != 0 && v21 && (v13 & 0x80u) == 0 )
    {
      if ( !v27 )
      {
        v100 = 0LL;
        VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(v25, v13, &v100);
        **((_QWORD **)a2 + 7) += v100;
      }
LABEL_50:
      v14 = (_QWORD *)((char *)this + 3712);
      goto LABEL_51;
    }
    if ( v27 && (v13 & 0x80u) != 0 )
      goto LABEL_50;
    v34 = *((_QWORD *)a2 + 6);
    v98 = 0LL;
    VIDMM_SEGMENT::PurgeContent(v25, v13, v34, &v98);
    v14 = (_QWORD *)((char *)this + 3712);
    v35 = (_QWORD *)*((_QWORD *)a2 + 7);
    if ( (*(_DWORD *)(*(_QWORD *)(v24 + *((_QWORD *)this + 464)) + 80LL) & 0x1001) != 0 )
      v35[1] += v98;
    else
      *v35 += v98;
    if ( (v13 & 8) == 0 )
    {
      v36 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v24 + *v14));
      if ( v36 == *(_DWORD *)(v37 + 64) || v36 == *(_DWORD *)(v37 + 48) )
        *(_BYTE *)(v37 + 445) |= 2u;
      if ( v36 == *(_DWORD *)(v37 + 72) || v36 == *(_DWORD *)(v37 + 56) )
        *(_BYTE *)(v37 + 445) |= 4u;
    }
    v38 = *(unsigned int *)(*(_QWORD *)(v24 + *v14) + 368LL);
    if ( (_DWORD)v38 != -1 )
      (*((void (__fastcall **)(_QWORD, __int64, _QWORD))this + 5018))(*((_QWORD *)this + 5019), v38, 0LL);
LABEL_51:
    v8 = (unsigned int)(v97 + 1);
    v97 = v8;
  }
  while ( (unsigned int)v8 < *((_DWORD *)this + 926) );
  inited = (int)v95;
LABEL_53:
  v28 = 0;
  v29 = v14;
  if ( *((_DWORD *)this + 1754) )
  {
    do
      VIDMM_GLOBAL::EvictTemporaryAllocations(this, 1u, v28++);
    while ( v28 < *((_DWORD *)this + 1754) );
    v29 = (_QWORD *)((char *)this + 3712);
  }
  if ( (v13 & 8) == 0 )
  {
    VIDMM_GLOBAL::PurgePageTables(this, v13);
    LODWORD(v96) = 1;
    VIDMM_GLOBAL::DoDeferredUnlock(this);
    v29 = v14;
  }
  if ( (v13 & 0x20) != 0 )
  {
    v30 = 0LL;
    if ( *((_DWORD *)this + 926) )
    {
      do
      {
        v31 = *(_QWORD *)(*v29 + 8 * v30);
        if ( (*(_DWORD *)(v31 + 80) & 0x1001) == 0 )
        {
          v8 = *(unsigned int *)(v31 + 512);
          if ( (_DWORD)v8 )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 59LL, v31, v8, 0LL);
          }
          v32 = *(unsigned int **)(v31 + 504);
          if ( v32 )
          {
            v33 = v32[15];
            v12 = v32[14];
            v8 = (unsigned int)v33 + v32[17];
            if ( (_DWORD)v12 != (_DWORD)v8 )
            {
              g_DxgMmsBugcheckExportIndex = 1;
              WdLogSingleEntry5(0LL, 270LL, 60LL, v32, v12, v33);
            }
          }
        }
        v30 = (unsigned int)(v30 + 1);
      }
      while ( (unsigned int)v30 < *((_DWORD *)this + 926) );
      inited = (int)v95;
    }
  }
LABEL_155:
  v72 = (int *)*((_QWORD *)a2 + 4);
  if ( v72 )
    *v72 = inited;
  if ( !(_DWORD)v96 )
  {
    v73 = (struct _KEVENT *)*((_QWORD *)a2 + 1);
    v74 = 0LL;
    v95 = v101;
    v96 = v102;
    *((_QWORD *)this + 466) = (char *)this + 3720;
    for ( *((_QWORD *)this + 465) = (char *)this + 3720;
          (unsigned int)v74 < *((_DWORD *)this + 1754);
          v74 = (unsigned int)(v74 + 1) )
    {
      v75 = *((_QWORD *)this + 5028);
      v76 = 0;
      v77 = 1616LL * (unsigned int)v74;
      if ( *(_DWORD *)(v77 + v75 + 32) )
      {
        do
        {
          v78 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v76 + *(_DWORD *)(v75 + v77 + 28)));
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 152LL))(v78);
          v75 = *((_QWORD *)this + 5028);
          ++v76;
        }
        while ( v76 < *(_DWORD *)(v77 + v75 + 32) );
      }
      if ( (byte_1C00769C1 & 1) != 0 )
        McTemplateK0p_EtwWriteTransfer(v8, &EventPagingEndPreparation, v12, *((_QWORD *)this + v74 + 143));
      if ( *((_DWORD *)this + v74 + 414) != *((_DWORD *)this + v74 + 478)
        || *((_DWORD *)this + v74 + 542) != *((_DWORD *)this + v74 + 606) )
      {
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v74, 0, 0LL, 0LL, 0, 0);
      }
      v8 = *((_QWORD *)this + (unsigned int)v74 + 143);
      if ( v8 )
        *(_DWORD *)(v8 + 172) = *(_DWORD *)(v8 + 168);
    }
    v79 = (_QWORD **)((char *)this + 44712);
    if ( *v79 != v79 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
      v80 = *v79;
      while ( v80 != v79 )
      {
        v81 = (_QWORD *)*v80;
        v82 = v80 - 38;
        if ( *(_QWORD **)(*v80 + 8LL) != v80 || (v83 = (_QWORD *)v80[1], (_QWORD *)*v83 != v80) )
          __fastfail(3u);
        *v83 = v81;
        v81[1] = v83;
        *v80 = 0LL;
        v80 = v81;
        if ( (*((_DWORD *)v82 + 15) & 7) != 0 )
        {
          v84 = v82[4];
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 63LL, v82, v84, 0LL);
        }
        VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v82);
      }
    }
    if ( *((_BYTE *)this + 44728) )
    {
      VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), 0xFFFFFFFFLL);
      *((_BYTE *)this + 44728) = 0;
    }
    if ( !v94 )
    {
      if ( v73 )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
        KeSetEvent(v73, 0, 0);
      }
      goto LABEL_194;
    }
    v85 = 0;
    v86 = 0LL;
    v87 = 0LL;
    v88 = *(_QWORD *)(*((_QWORD *)this + 2) + 744LL);
    v89 = 0;
    if ( *(_BYTE *)(v88 + 55) )
    {
      v87 = *(_QWORD **)(v88 + 280);
      if ( !*v87 )
      {
        VidSchSignalSyncObjectsFromCpu(1u, &v95, 0, (char *)&v96);
        goto LABEL_190;
      }
      v89 = *(_DWORD *)(v88 + 76);
    }
    else
    {
      v85 = *(_DWORD *)(v88 + 76);
      v86 = *(_QWORD **)(v88 + 264);
    }
    VidSchSignalSyncObjectsFromGpu(v89, (__int64)v87, v85, v86, 1u, (__int64)&v95, 0, &v96, 0);
LABEL_190:
    v90 = *((_DWORD *)this + 1754);
    if ( v90 > 1 )
      VidSchWaitForPagingFence(
        *(_QWORD *)(*((_QWORD *)this + 2) + 744LL),
        v95,
        v96,
        (unsigned int)((1 << v90) - 1),
        v92);
LABEL_194:
    *((_QWORD *)this + 879) = 0LL;
    *((_QWORD *)this + 880) = 0LL;
    *((_DWORD *)this + 2) = 0;
    return (unsigned int)inited;
  }
  VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
  VIDMM_GLOBAL::UnmapAllPagingBuffers(this);
  if ( v94 )
    VidSchSignalPagingFences(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), &v101, &v102);
  else
    KeSetEvent(*((PRKEVENT *)a2 + 1), 0, 0);
  return (unsigned int)inited;
}
