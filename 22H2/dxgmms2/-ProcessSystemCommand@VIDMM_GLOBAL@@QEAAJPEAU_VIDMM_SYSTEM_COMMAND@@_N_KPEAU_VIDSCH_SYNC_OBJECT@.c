/*
 * XREFs of ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C008ACF0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B5730 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00ED808 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0004EE4 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007CC0 (VidSchSignalSyncObjectsFromGpu.c)
 *     __security_check_cookie @ 0x1C0019900 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199AC (DxgkLogInternalTriageEvent.c)
 *     Feature_DelayedForceEviction__private_ReportDeviceUsage @ 0x1C0019AA0 (Feature_DelayedForceEviction__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A820 (_guard_dispatch_icall_nop.c)
 *     ?SetDelayedEvictionTimerScheduled@VIDMM_GLOBAL@@QEAAXJ@Z @ 0x1C002E150 (-SetDelayedEvictionTimerScheduled@VIDMM_GLOBAL@@QEAAXJ@Z.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3CC (McTemplateK0p_EtwWriteTransfer.c)
 *     ?OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0033718 (-OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C0040830 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085ED8 (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidSchiResumeFlipQueues @ 0x1C0086E6C (VidSchiResumeFlipQueues.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C008789C (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0087C8C (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00889A0 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0088E2C (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0089554 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0089B4C (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C008BC90 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C008C670 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C008E9C8 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C0093270 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095820 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C009B7C0 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C009B968 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AB730 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C00ADDF0 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C00B4B44 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B5204 (-UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00B52A0 (-PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     VidSchSignalPagingFences @ 0x1C00B5360 (VidSchSignalPagingFences.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C00B53F4 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B5500 (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00B554C (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00C21EC (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00E17B4 (-DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00E1A08 (-EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E2838 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x1C00E5D08 (-MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00E7100 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00E7E10 (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00EA900 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00FD0F8 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00FD468 (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00FE51C (-ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANG.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z @ 0x1C00FE594 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@PEA_K@Z.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00FF77C (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C0102074 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 *     VidSchWaitForPagingFence @ 0x1C0108E0C (VidSchWaitForPagingFence.c)
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
  __int64 v58; // rdx
  __int64 v59; // r8
  unsigned __int8 v60; // r9
  struct VIDMM_DEVICE *v61; // rdx
  __int64 v62; // rdx
  __int64 **v63; // rbx
  __int64 k; // rbx
  __int64 v65; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v66; // rdx
  _QWORD *v67; // rbx
  __int64 v68; // rax
  _QWORD *v69; // rsi
  int v70; // eax
  __int64 v71; // r10
  __int64 v72; // r9
  _QWORD *v73; // rcx
  CVirtualAddressAllocator *v74; // rcx
  int *v75; // rax
  struct _KEVENT *v76; // r12
  __int64 v77; // r15
  __int64 v78; // rax
  unsigned int v79; // esi
  __int64 v80; // r14
  __int64 v81; // rcx
  _QWORD **v82; // r14
  _QWORD *v83; // rbx
  _QWORD *v84; // rax
  _QWORD *v85; // rsi
  _QWORD *v86; // rcx
  __int64 v87; // rdx
  KPRIORITY v88; // r8d
  _QWORD *v89; // r9
  _QWORD *v90; // rdx
  __int64 v91; // rcx
  unsigned int v92; // eax
  unsigned int v93; // ecx
  __int64 v95; // [rsp+20h] [rbp-91h]
  bool v96; // [rsp+50h] [rbp-61h] BYREF
  char v97; // [rsp+51h] [rbp-60h]
  struct _VIDSCH_SYNC_OBJECT *v98; // [rsp+58h] [rbp-59h] BYREF
  unsigned __int64 v99; // [rsp+60h] [rbp-51h] BYREF
  int v100; // [rsp+68h] [rbp-49h]
  __int64 v101; // [rsp+70h] [rbp-41h] BYREF
  __int64 v102; // [rsp+78h] [rbp-39h]
  __int64 v103; // [rsp+80h] [rbp-31h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v104; // [rsp+88h] [rbp-29h] BYREF
  unsigned __int64 v105; // [rsp+90h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-19h] BYREF

  inited = 0;
  v6 = *(int *)a2;
  v8 = *((int *)this + 2);
  v97 = a3;
  v105 = a4;
  v104 = a5;
  LODWORD(v99) = 0;
  LODWORD(v98) = 0;
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
    if ( (byte_1C0076981 & 1) != 0 )
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
    v71 = *((_QWORD *)a2 + 2);
    v72 = *(_QWORD *)(*(_QWORD *)v71 + 8LL);
    v73 = *(_QWORD **)(*(_QWORD *)(v72 + 16) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL));
    if ( v73 && *(_DWORD *)(*v73 + 40928LL) )
    {
      if ( (*(_DWORD *)(v72 + 96) & 2) != 0 )
        v74 = *(CVirtualAddressAllocator **)(*v73 + 8LL * (*(_DWORD *)(**(_QWORD **)v71 + 68LL) & 0x3F) + 40416);
      else
        v74 = (CVirtualAddressAllocator *)v73[63];
    }
    else
    {
      v74 = 0LL;
    }
    CVirtualAddressAllocator::FreeAllocMappedVaRangeList(v74, *((struct VIDMM_ALLOC **)a2 + 2));
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
      v100 = 0;
      if ( !*((_DWORD *)this + 926) )
        goto LABEL_53;
      break;
    case 103:
      VIDMM_GLOBAL::CleanupPrimaryAllocation((VIDMM_GLOBAL *)v8, *((struct _VIDMM_GLOBAL_ALLOC **)a2 + 5));
      goto LABEL_155;
    case 104:
      v62 = *((_QWORD *)a2 + 2);
      v96 = 0;
      v98 = 0LL;
      inited = VIDMM_GLOBAL::PageInOneAllocation(this, v62, 4LL, 0LL, &v96, &v98, 0, -1LL);
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
        LOBYTE(v95) = 0;
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, _QWORD))(**(_QWORD **)(v48 + 120) + 48LL))(
          *(_QWORD *)(v48 + 120),
          v48,
          0LL,
          0LL,
          v95,
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
      v98 = 0LL;
      inited = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
                 (VIDMM_GLOBAL *)v8,
                 (struct _VIDMM_SYSTEM_COMMAND *)((char *)a2 + 40),
                 &v98);
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
          CVirtualAddressAllocator::DestroyVaAllocator(v56, v58, v59, v60);
          KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          CVirtualAddressAllocator::DestroyVaAllocator(
            *(CVirtualAddressAllocator **)(v55 + 504),
            v11,
            0x1C0000000LL,
            a4);
        }
        *(_QWORD *)(*((_QWORD *)a2 + 6) + 504LL) = 0LL;
      }
      goto LABEL_155;
    case 116:
      v61 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 3);
      v96 = 0;
      v98 = 0LL;
      inited = VIDMM_GLOBAL::PageInDeviceInternal(this, v61, 0, &v96, &v98);
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
        WdLogSingleEntry1(1LL, 10482LL);
        v95 = 10482LL;
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
      v63 = (__int64 **)*((_QWORD *)a2 + 5);
      if ( *((_BYTE *)a2 + 48) )
      {
        VIDMM_DEVICE::IndefinitelySuspend(v63, *((_BYTE *)a2 + 49));
        VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v63);
      }
      else
      {
        VIDMM_DEVICE::EnsureSchedulable((VIDMM_DEVICE *)v63, 0);
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
      v65 = *((_QWORD *)a2 + 5);
      if ( *((_DWORD *)a2 + 12) )
        VIDMM_SEGMENT::FreeVPRReserve((VIDMM_SEGMENT *)v65);
      else
        VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
          *(VIDMM_LINEAR_POOL **)(v65 + 152),
          *(void **)(v65 + 456),
          *(_QWORD *)(v65 + 424) - *(_QWORD *)(v65 + 464),
          *(_QWORD *)(v65 + 424));
      goto LABEL_155;
    case 129:
      v66 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 5);
      v8 = *((_QWORD *)v66 + 15);
      if ( v8 && *((_QWORD *)v66 + 59) )
        VIDMM_CPU_HOST_APERTURE::OfferRange(*(VIDMM_CPU_HOST_APERTURE **)(v8 + 504), v66);
      goto LABEL_155;
    case 130:
      inited = VIDMM_GLOBAL::EnableIoMmuIsolation(this);
      goto LABEL_155;
    case 131:
      VIDMM_GLOBAL::DisableIoMmuIsolation(this);
      goto LABEL_155;
    case 132:
      v67 = (_QWORD *)*((_QWORD *)this + 464);
      v8 = *((unsigned int *)this + 926);
      v68 = *((unsigned int *)a2 + 10);
      v69 = &v67[v8];
      if ( (_DWORD)v68 == -1 )
        goto LABEL_143;
      if ( (unsigned int)v68 < (unsigned int)v8 )
      {
        v67 += v68;
        v69 = v67 + 1;
LABEL_143:
        while ( v67 != v69 )
        {
          if ( inited < 0 )
            break;
          v70 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v67 + 192LL))(*v67);
          ++v67;
          inited = v70;
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
    v102 = 8 * v8;
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
    v22 = *(_QWORD *)(v102 + *((_QWORD *)this + 464));
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
    v24 = v102;
    v25 = *(_QWORD *)(v102 + *((_QWORD *)this + 464));
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
        v103 = 0LL;
        VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(v25, v13, &v103);
        **((_QWORD **)a2 + 7) += v103;
      }
LABEL_50:
      v14 = (_QWORD *)((char *)this + 3712);
      goto LABEL_51;
    }
    if ( v27 && (v13 & 0x80u) != 0 )
      goto LABEL_50;
    v34 = *((_QWORD *)a2 + 6);
    v101 = 0LL;
    VIDMM_SEGMENT::PurgeContent(v25, v13, v34, &v101);
    v14 = (_QWORD *)((char *)this + 3712);
    v35 = (_QWORD *)*((_QWORD *)a2 + 7);
    if ( (*(_DWORD *)(*(_QWORD *)(v24 + *((_QWORD *)this + 464)) + 80LL) & 0x1001) != 0 )
      v35[1] += v101;
    else
      *v35 += v101;
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
    v8 = (unsigned int)(v100 + 1);
    v100 = v8;
  }
  while ( (unsigned int)v8 < *((_DWORD *)this + 926) );
  inited = (int)v98;
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
    LODWORD(v99) = 1;
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
      inited = (int)v98;
    }
  }
LABEL_155:
  v75 = (int *)*((_QWORD *)a2 + 4);
  if ( v75 )
    *v75 = inited;
  if ( !(_DWORD)v99 )
  {
    v76 = (struct _KEVENT *)*((_QWORD *)a2 + 1);
    v77 = 0LL;
    v98 = v104;
    v99 = v105;
    *((_QWORD *)this + 466) = (char *)this + 3720;
    for ( *((_QWORD *)this + 465) = (char *)this + 3720;
          (unsigned int)v77 < *((_DWORD *)this + 1754);
          v77 = (unsigned int)(v77 + 1) )
    {
      v78 = *((_QWORD *)this + 5028);
      v79 = 0;
      v80 = 1616LL * (unsigned int)v77;
      if ( *(_DWORD *)(v80 + v78 + 32) )
      {
        do
        {
          v81 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v79 + *(_DWORD *)(v78 + v80 + 28)));
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 152LL))(v81);
          v78 = *((_QWORD *)this + 5028);
          ++v79;
        }
        while ( v79 < *(_DWORD *)(v80 + v78 + 32) );
      }
      if ( (byte_1C0076981 & 1) != 0 )
        McTemplateK0p_EtwWriteTransfer(v8, &EventPagingEndPreparation, v12, *((_QWORD *)this + v77 + 143));
      if ( *((_DWORD *)this + v77 + 414) != *((_DWORD *)this + v77 + 478)
        || *((_DWORD *)this + v77 + 542) != *((_DWORD *)this + v77 + 606) )
      {
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v77, 0, 0LL, 0LL, 0, 0);
      }
      v8 = *((_QWORD *)this + (unsigned int)v77 + 143);
      if ( v8 )
        *(_DWORD *)(v8 + 172) = *(_DWORD *)(v8 + 168);
    }
    v82 = (_QWORD **)((char *)this + 44712);
    if ( *v82 != v82 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
      v83 = *v82;
      while ( v83 != v82 )
      {
        v84 = (_QWORD *)*v83;
        v85 = v83 - 38;
        if ( *(_QWORD **)(*v83 + 8LL) != v83 || (v86 = (_QWORD *)v83[1], (_QWORD *)*v86 != v83) )
          __fastfail(3u);
        *v86 = v84;
        v84[1] = v86;
        *v83 = 0LL;
        v83 = v84;
        if ( (*((_DWORD *)v85 + 15) & 7) != 0 )
        {
          v87 = v85[4];
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 63LL, v85, v87, 0LL);
        }
        VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v85);
      }
    }
    if ( *((_BYTE *)this + 44728) )
    {
      VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), -1);
      *((_BYTE *)this + 44728) = 0;
    }
    if ( !v97 )
    {
      if ( v76 )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
        KeSetEvent(v76, 0, 0);
      }
      goto LABEL_194;
    }
    v88 = 0;
    v89 = 0LL;
    v90 = 0LL;
    v91 = *(_QWORD *)(*((_QWORD *)this + 2) + 744LL);
    v92 = 0;
    if ( *(_BYTE *)(v91 + 55) )
    {
      v90 = *(_QWORD **)(v91 + 280);
      if ( !*v90 )
      {
        VidSchSignalSyncObjectsFromCpu(1u, &v98, 0, (char *)&v99);
        goto LABEL_190;
      }
      v92 = *(_DWORD *)(v91 + 76);
    }
    else
    {
      v88 = *(_DWORD *)(v91 + 76);
      v89 = *(_QWORD **)(v91 + 264);
    }
    VidSchSignalSyncObjectsFromGpu(v92, (__int64)v90, v88, v89, 1u, (__int64)&v98, 0, &v99, 0);
LABEL_190:
    v93 = *((_DWORD *)this + 1754);
    if ( v93 > 1 )
      VidSchWaitForPagingFence(
        *(_QWORD *)(*((_QWORD *)this + 2) + 744LL),
        v98,
        v99,
        (unsigned int)((1 << v93) - 1),
        v95);
LABEL_194:
    *((_QWORD *)this + 879) = 0LL;
    *((_QWORD *)this + 880) = 0LL;
    *((_DWORD *)this + 2) = 0;
    return (unsigned int)inited;
  }
  VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
  VIDMM_GLOBAL::UnmapAllPagingBuffers(this);
  if ( v97 )
    VidSchSignalPagingFences(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), &v104, &v105);
  else
    KeSetEvent(*((PRKEVENT *)a2 + 1), 0, 0);
  return (unsigned int)inited;
}
