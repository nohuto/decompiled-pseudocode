/*
 * XREFs of ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C008B300
 * Callers:
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C0085CD0 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C008A514 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?PageInPageTableOrDirectory@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGE_TABLE_BASE@@PEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU3@@Z @ 0x1C008A990 (-PageInPageTableOrDirectory@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGE_TABLE_BASE@@PEAUVIDMM_ALLOC@@_NPEA.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00E4970 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001414 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C0001754 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0015230 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0019B44 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E4FC (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pqt_EtwWriteTransfer @ 0x1C002F0B4 (McTemplateK0pqt_EtwWriteTransfer.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C002F1D8 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00338C4 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085DF0 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0086934 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00878CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C008D8B0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008DCA0 (-AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_.c)
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NI_K@Z @ 0x1C008DE1C (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008E1D0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0093E58 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C00B5874 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00E0E08 (-CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@PEAIPEA_K@Z @ 0x1C00E26AC (-EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@PEAIPEA_K@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00E2980 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E2B54 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C00E6338 (-NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00E8104 (-TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00E9E40 (-VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ?GetAllocationPriorityClassFromPriority@@YA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C00F14EC (-GetAllocationPriorityClassFromPriority@@YA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C00F19E8 (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 *     GetBucketIdForAllocationSizePow2 @ 0x1C00F4040 (GetBucketIdForAllocationSizePow2.c)
 *     ?GetBucketIdFromSize@VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_FREE_MEMORY@@CAI_K@Z @ 0x1C00F4070 (-GetBucketIdFromSize@VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_FREE_MEMORY@@CAI_K@Z.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00FE564 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C01002F0 (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInOneAllocation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        bool *a5,
        __int64 ***a6,
        int a7,
        __int64 a8)
{
  unsigned int v8; // r14d
  bool *v9; // r15
  int v10; // ebx
  __int64 **v11; // r12
  _QWORD *v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // r13
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // ebp
  _QWORD *v23; // rdi
  struct _VIDMM_GLOBAL_ALLOC *v24; // rbx
  VIDMM_GLOBAL *v25; // rcx
  unsigned __int8 v26; // r15
  __int64 v27; // rbp
  __int64 v28; // rcx
  __int64 v29; // r12
  __int64 v30; // rbx
  struct VIDMM_PARTITION_ADAPTER_INFO *v31; // r15
  __int64 v32; // rax
  _QWORD *v33; // rbp
  _QWORD *v34; // rbx
  VIDMM_GLOBAL **v35; // r13
  struct VIDMM_PARTITION_ADAPTER_INFO *v36; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v37; // rdi
  VIDMM_GLOBAL *v38; // rcx
  VIDMM_GLOBAL **v39; // rbx
  VIDMM_GLOBAL *v40; // rcx
  __int64 v41; // rax
  unsigned int i; // ebx
  VIDMM_GLOBAL *j; // rdi
  _QWORD *v44; // rbp
  __int64 v45; // rcx
  VIDMM_GLOBAL **v46; // rbx
  __int64 v47; // rcx
  VIDMM_GLOBAL **v48; // rax
  _QWORD **v49; // r15
  __int64 v50; // rax
  __int64 v51; // rbp
  LARGE_INTEGER PerformanceCounter; // rbx
  VIDMM_GLOBAL *v53; // rcx
  LARGE_INTEGER v54; // rax
  unsigned int BucketIdForAllocationSizePow2; // eax
  unsigned __int64 v56; // r8
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rcx
  VIDMM_GLOBAL *v61; // rcx
  VIDMM_GLOBAL *v62; // rcx
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rbx
  __int64 v65; // rdi
  unsigned int BucketIdFromSize; // eax
  unsigned int AllocationPriorityClassFromPriority; // eax
  _QWORD *v68; // rax
  __int64 *v69; // rax
  __int64 *v70; // rdi
  __int64 v71; // rcx
  char v72; // al
  int v73; // edx
  VIDMM_SEGMENT *v74; // rcx
  unsigned int v75; // r15d
  __int64 v76; // rbx
  __int64 v77; // rbx
  _QWORD *v78; // rax
  unsigned __int64 LogicalAddress; // rax
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // r12
  VIDMM_SEGMENT *v82; // rdi
  __int64 v83; // r8
  __int64 v84; // r9
  _QWORD *v85; // rdx
  struct _KTHREAD **v86; // r10
  struct _KTHREAD **v87; // rbx
  __int64 v88; // rcx
  __int64 v89; // r8
  int v90; // r9d
  unsigned int v91; // ebx
  __int64 *v92; // rax
  _QWORD *v93; // rdx
  int v94; // ecx
  __int64 *v95; // rdi
  unsigned int v96; // r12d
  __int64 v97; // r15
  int IsEnabledDeviceUsage; // eax
  __int64 v99; // rcx
  _DWORD *v100; // rax
  unsigned __int64 v101; // rax
  __int64 *v102; // rdi
  __int64 v103; // rbx
  VIDMM_PROCESS *v104; // r14
  unsigned int *v105; // rsi
  __int64 v106; // rax
  _QWORD *v107; // rcx
  __int64 v108; // rdx
  __int64 *v109; // r8
  __int64 v110; // rcx
  __int64 v111; // r8
  void *v113; // [rsp+20h] [rbp-108h]
  void *v114; // [rsp+20h] [rbp-108h]
  struct _VIDMM_GLOBAL_ALLOC *v115; // [rsp+28h] [rbp-100h]
  char v117; // [rsp+50h] [rbp-D8h]
  char v118; // [rsp+51h] [rbp-D7h]
  char v119; // [rsp+52h] [rbp-D6h]
  int v120; // [rsp+58h] [rbp-D0h]
  CVirtualAddressAllocator *v121; // [rsp+58h] [rbp-D0h]
  unsigned int v122; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD *v123; // [rsp+68h] [rbp-C0h]
  VIDMM_SEGMENT *v124; // [rsp+70h] [rbp-B8h]
  __int64 *v125; // [rsp+78h] [rbp-B0h]
  unsigned __int64 v126; // [rsp+80h] [rbp-A8h] BYREF
  bool *v127; // [rsp+88h] [rbp-A0h]
  int v128; // [rsp+90h] [rbp-98h] BYREF
  int v129; // [rsp+94h] [rbp-94h]
  unsigned __int64 v130; // [rsp+98h] [rbp-90h]
  __int64 ***v131; // [rsp+A0h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-80h] BYREF

  v8 = 0;
  v9 = a5;
  v10 = a3;
  v131 = a6;
  v11 = (__int64 **)a2;
  *a6 = 0LL;
  v120 = a3;
  v123 = (_QWORD *)a2;
  v127 = a5;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
  if ( (*((_DWORD *)v11 + 7) & 3) == 1 )
  {
    a2 = (__int64)v11[7];
    v13 = v11 + 7;
    if ( *(__int64 ***)(a2 + 8) != v11 + 7 || (v14 = v11[8], (_QWORD *)*v14 != v13) )
      __fastfail(3u);
    *v14 = a2;
    *(_QWORD *)(a2 + 8) = v14;
    *((_DWORD *)v11 + 7) &= 0xFFFFFFFC;
    v11[8] = 0LL;
    *v13 = 0LL;
  }
  v118 = 0;
  v15 = **v11;
  v125 = (__int64 *)v15;
  v16 = *(unsigned int *)(v15 + 68);
  if ( *(_WORD *)(*(_QWORD *)(v15 + 536) + 4LL) )
  {
    LODWORD(v16) = v16 & 0xFDFFFFFF;
    *(_DWORD *)(v15 + 68) = v16;
  }
  v17 = *(_DWORD *)(v15 + 112);
  if ( v17 )
  {
    if ( v17 == 1 && (v16 & 0x2000000) == 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v16) + 24) = v11;
      if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
        McTemplateK0pqt_EtwWriteTransfer(v16, a2, a3, v11, 1, 1);
      *(_QWORD *)(a1 + 7320) += *(_QWORD *)(v15 + 16);
      ++*(_DWORD *)(a1 + 7312);
      VIDMM_SEGMENT::ReclaimResource(*(VIDMM_LINEAR_POOL ***)(v15 + 120), (struct _VIDMM_GLOBAL_ALLOC *)v15);
      v118 = 1;
    }
    if ( (*(_DWORD *)(v15 + 68) & 0x2000000) == 0 )
    {
      LODWORD(v27) = 0;
      goto LABEL_110;
    }
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v16) + 24) = v11;
    if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
    {
      LODWORD(v115) = 1;
      LODWORD(v113) = 4;
      McTemplateK0pqt_EtwWriteTransfer(v16, a2, a3, v11, v113, v115);
    }
    *(_QWORD *)(a1 + 7336) += *(_QWORD *)(v15 + 16);
    ++*(_DWORD *)(a1 + 7328);
    *(_DWORD *)(v15 + 68) |= 0x4000000u;
    if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer(v16, &EventMigrateAllocation, a3, v15);
    VIDMM_GLOBAL::EvictAllocation((VIDMM_GLOBAL *)a1, (struct VIDMM_ALLOC *)v11);
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v16) + 24) = v11;
    if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
      McTemplateK0pqt_EtwWriteTransfer(v16, a2, a3, v11, 0, 1);
    *(_QWORD *)(a1 + 7384) += *(_QWORD *)(v15 + 16);
    ++*(_DWORD *)(a1 + 7376);
    v18 = *(_DWORD *)(v15 + 68);
    if ( (v18 & 0x2000000) != 0 )
      *(_DWORD *)(v15 + 68) = v18 | 0x4000000;
  }
  v19 = v15 + 504;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v19, 0LL);
    if ( !*(_QWORD *)(v15 + 200) )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v20);
      v22 = *(_DWORD *)(v15 + 68) & 0x3F;
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v20) + 24) = v120 != 0;
        v10 = v120;
      }
      if ( v10 )
        VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)a1, v22, 0, 0LL, 0LL, 0, 0);
      v23 = *(_QWORD **)(a1 + 3784);
      if ( v23 != (_QWORD *)(a1 + 3784) )
      {
        do
        {
          v24 = (struct _VIDMM_GLOBAL_ALLOC *)(v23 - 26);
          v23 = (_QWORD *)*v23;
          if ( (*((_DWORD *)v24 + 17) & 0x3F) == v22 )
          {
            if ( VIDMM_GLOBAL::IsPagingOperationPending((VIDMM_GLOBAL *)a1, v24, 0) )
            {
              if ( !v120 )
                break;
              VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)a1, v24);
            }
            if ( g_IsInternalReleaseOrDbg )
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v25) + 24) = v24;
            VIDMM_GLOBAL::EvictTemporaryAllocation(v25, v24);
          }
        }
        while ( v23 != (_QWORD *)(a1 + 3784) );
        v15 = (__int64)v125;
        v10 = v120;
      }
      *(_QWORD *)(a1 + 7104) = *(_QWORD *)(a1 + 4632);
      if ( *v131 )
        VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL *)a1, v10 != 0, *(_DWORD *)(***v131 + 68) & 0x3F);
      v26 = a4;
      LODWORD(v113) = a7;
      LODWORD(v27) = VIDMM_GLOBAL::FindResourcesForOneAllocation(a1, v11, (unsigned int)v10, a4, v113, a8);
      if ( (int)v27 < 0 )
      {
        v28 = *(_QWORD *)&g_IsInternalReleaseOrDbg;
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
        goto LABEL_94;
      }
    }
    v29 = **v11;
    v30 = *(_QWORD *)(v29 + 200);
    v31 = *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v29 + 512);
    v124 = (VIDMM_SEGMENT *)v30;
    if ( (*(_DWORD *)(v30 + 80) & 0x1001) != 0 && *(_QWORD *)(*(_QWORD *)v31 + 64LL) > *((_QWORD *)v31 + 2) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v32 = WdLogNewEntry5_WdTrace(*(_QWORD *)v31);
        *(_QWORD *)(v32 + 24) = *((_QWORD *)v31 + 2);
        *(_QWORD *)(v32 + 32) = *(_QWORD *)(*(_QWORD *)v31 + 64LL);
      }
      v33 = (_QWORD *)(v30 + 176);
      v34 = *(_QWORD **)(v30 + 176);
      if ( v34 != v33 )
      {
        v35 = (VIDMM_GLOBAL **)v124;
        do
        {
          v36 = (struct VIDMM_PARTITION_ADAPTER_INFO *)v34[13];
          v37 = (struct _VIDMM_GLOBAL_ALLOC *)(v34 - 51);
          v34 = (_QWORD *)*v34;
          if ( v36 == v31 )
          {
            (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, _QWORD))*v35 + 3))(
              v35,
              v37,
              *((_QWORD *)v37 + 17),
              *((_QWORD *)v37 + 2),
              *(_QWORD *)v36);
            VIDMM_GLOBAL::NotifyAllocationReclaimed(v35[1], v37, 0);
            if ( VIDMM_GLOBAL::VerifyGlobalResidentLimit(v38, v31) )
              break;
          }
        }
        while ( v34 != v33 );
        v15 = (__int64)v125;
      }
    }
    v39 = *(VIDMM_GLOBAL ***)(v29 + 512);
    v40 = *v39;
    if ( *((_QWORD *)*v39 + 8) > (unsigned __int64)v39[2] )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v41 = WdLogNewEntry5_WdTrace(v40);
        *(_QWORD *)(v41 + 24) = v39[2];
        v40 = *v39;
        *(_QWORD *)(v41 + 32) = *((_QWORD *)*v39 + 8);
      }
      for ( i = 0; i < *(_DWORD *)(a1 + 3704); ++i )
        VIDMM_SEGMENT::TrimResidentBytes(
          *(VIDMM_SEGMENT **)(*(_QWORD *)(a1 + 3712) + 8LL * i),
          *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v29 + 512));
    }
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v40);
    for ( j = *(VIDMM_GLOBAL **)(a1 + 3736); j != (VIDMM_GLOBAL *)(a1 + 3736); v44[44] = 0LL )
    {
      v44 = (_QWORD *)((char *)j - 344);
      v45 = *((_QWORD *)j - 28);
      v46 = (VIDMM_GLOBAL **)j;
      j = *(VIDMM_GLOBAL **)j;
      LOBYTE(v21) = 1;
      LOBYTE(v113) = 0;
      (*(void (__fastcall **)(__int64, _QWORD *, __int64, _QWORD, void *, _QWORD))(*(_QWORD *)v45 + 48LL))(
        v45,
        v44,
        v21,
        0LL,
        v113,
        0LL);
      if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
        McTemplateK0p_EtwWriteTransfer(v47, &EventEvictAllocation, v21, v44);
      v40 = *v46;
      if ( *((VIDMM_GLOBAL ***)*v46 + 1) != v46 || (v48 = (VIDMM_GLOBAL **)v46[1], *v48 != (VIDMM_GLOBAL *)v46) )
        __fastfail(3u);
      *v48 = v40;
      *((_QWORD *)v40 + 1) = v48;
      *v46 = 0LL;
    }
    v49 = (_QWORD **)v123;
    if ( *(_QWORD *)(a1 + 3752) != a1 + 3752 )
    {
      v50 = v123[1];
      v122 = 0;
      v126 = 0LL;
      v51 = *(_QWORD *)(v50 + 16);
      if ( v51 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        VIDMM_GLOBAL::EvictAllAllocationInList(v53, (struct _LIST_ENTRY *)(a1 + 3752), &v122, &v126);
        v54 = KeQueryPerformanceCounter(0LL);
        BucketIdForAllocationSizePow2 = GetBucketIdForAllocationSizePow2(
                                          *(unsigned int *)(**v49 + 16LL),
                                          **v49,
                                          v54.QuadPart - PerformanceCounter.QuadPart);
        _InterlockedIncrement((volatile signed __int32 *)(v51 + 4LL * BucketIdForAllocationSizePow2 + 1216));
        _InterlockedExchangeAdd((volatile signed __int32 *)(v51 + 4LL * BucketIdForAllocationSizePow2 + 1304), v122);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v51 + 8LL * BucketIdForAllocationSizePow2 + 1392), v126);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v51 + 8LL * BucketIdForAllocationSizePow2 + 1568), v56);
        *(_BYTE *)(v51 + 1744) = 1;
      }
      else
      {
        VIDMM_GLOBAL::EvictAllAllocationInList(v40, (struct _LIST_ENTRY *)(a1 + 3752), &v122, &v126);
      }
    }
    if ( (*(_DWORD *)(344LL * *((unsigned int *)v124 + 95) + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 2808LL) + 16) & 4) != 0 )
      VIDMM_SEGMENT::ProcessPendingMoves(v124);
    v57 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v29 + 200) + 40LL))(*(_QWORD *)(v29 + 200), v29);
    v27 = v57;
    if ( v57 >= 0 )
      break;
    if ( g_IsInternalReleaseOrDbg )
    {
      v58 = WdLogNewEntry5_WdTrace(v28);
      *(_QWORD *)(v58 + 24) = v29;
      *(_QWORD *)(v58 + 32) = v27;
      WdLogNewEntry5_WdTrace(v59);
    }
    v26 = a4;
    v10 = v120;
    v11 = (__int64 **)v123;
LABEL_94:
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v28) + 24) = v11;
    v60 = *(_QWORD *)(v15 + 200);
    if ( v60 )
    {
      if ( *(_DWORD *)(v15 + 496) != -1 )
        VIDMM_CPU_HOST_APERTURE::ReleaseRange(
          *(VIDMM_CPU_HOST_APERTURE **)(v60 + 504),
          (struct _VIDMM_GLOBAL_ALLOC *)v15);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(v15 + 200) + 24LL))(
        *(_QWORD *)(v15 + 200),
        v15,
        *(_QWORD *)(v15 + 184),
        *(_QWORD *)(v15 + 16),
        **(_QWORD **)(v15 + 512));
      *(_QWORD *)(v15 + 200) = 0LL;
      *(_QWORD *)(v15 + 184) = 0LL;
    }
    v19 = v15 + 504;
    ExReleasePushLockExclusiveEx(v15 + 504, 0LL);
    KeLeaveCriticalRegion();
    VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v61, (struct _LIST_ENTRY *)(a1 + 3736));
    VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v62, (struct _LIST_ENTRY *)(a1 + 3752));
    WdLogSingleEntry2(3LL, v11, v10);
    if ( v10 || (*(_DWORD *)(v15 + 68) & 0x40) == 0 || v26 )
      goto LABEL_109;
    v10 = 2;
    v120 = 2;
    VIDMM_GLOBAL::TrimMarkedForEvictionAllocations(
      (VIDMM_GLOBAL *)a1,
      *(_QWORD *)(v15 + 16) + (*(_QWORD *)(v15 + 16) >> 2));
  }
  VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)a1, *(_DWORD *)(v29 + 68) & 0x3F, 0, 0LL, 0LL, 0, 0);
  LODWORD(v27) = 0;
  v63 = *(_QWORD *)(a1 + 44752) - *(_QWORD *)(a1 + 44760);
  if ( *(_QWORD *)(v15 + 16) < v63
    && (*(_DWORD *)(*(_QWORD *)(v15 + 120) + 80LL) & 0x1001) != 0
    && (*(_DWORD *)(v15 + 68) & 0x400) == 0 )
  {
    v64 = *(_QWORD *)(v29 + 16);
    v65 = v49[1][2];
    BucketIdFromSize = VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_FREE_MEMORY::GetBucketIdFromSize(v63);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v65 + 8LL * BucketIdFromSize + 800), v64);
    _InterlockedIncrement((volatile signed __int32 *)(v65 + 4LL * BucketIdFromSize + 1032));
    *(_BYTE *)(v65 + 1148) = 1;
    AllocationPriorityClassFromPriority = GetAllocationPriorityClassFromPriority(*(unsigned int *)(v29 + 400));
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(v65 + 8LL * AllocationPriorityClassFromPriority + 1152),
      *(_QWORD *)(v29 + 16));
    _InterlockedIncrement((volatile signed __int32 *)(v65 + 4LL * AllocationPriorityClassFromPriority + 1192));
    *(_BYTE *)(v65 + 1212) = 1;
  }
  v118 = 1;
  ExReleasePushLockExclusiveEx(v15 + 504, 0LL);
  KeLeaveCriticalRegion();
  v16 = *(_QWORD *)a1;
  v11 = (__int64 **)v123;
  *(_QWORD *)(*(_QWORD *)a1 + 288LL) += *(_QWORD *)(v15 + 16);
LABEL_109:
  v9 = v127;
LABEL_110:
  if ( (*(_DWORD *)(v15 + 68) & 0x200000) != 0 )
  {
    LODWORD(v27) = -1071775466;
    *v9 = 0;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_210;
    v68 = (_QWORD *)WdLogNewEntry5_WdTrace(v16);
    v68[5] = 18401LL;
LABEL_209:
    v68[4] = v15;
    v68[3] = v11;
    goto LABEL_210;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 2870LL) || *(_BYTE *)(*(_QWORD *)(a1 + 16) + 1025LL) )
  {
    LODWORD(v27) = -1073741130;
    *v9 = 0;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_210;
    v68 = (_QWORD *)WdLogNewEntry5_WdTrace(v16);
    v68[5] = 18409LL;
    goto LABEL_209;
  }
  if ( (int)v27 < 0 )
  {
LABEL_205:
    *v127 = (int)v27 < 0;
    if ( (int)v27 < 0 )
      *v131 = v11;
    return (unsigned int)v27;
  }
  if ( !*((_BYTE *)v11 + 26) )
  {
    v16 = *(unsigned int *)(v15 + 72);
    if ( (v16 & 0x400) == 0 )
    {
      if ( v11[18] )
      {
        if ( (*(_BYTE *)(a1 + 40936) & 0x20) != 0 )
        {
          if ( (v16 & 0x80u) == 0LL || (v16 = **(unsigned int **)(v15 + 536), (v16 & 8) != 0) || (v16 & 0x20000000) != 0 )
          {
            v69 = *v11;
            memset(&ApcState, 0, sizeof(ApcState));
            KeStackAttachProcess(*(PRKPROCESS *)v69[1], &ApcState);
            v70 = v11[18];
            v27 = (int)VidMmiEnsureVirtualAddressRangeValid(v70, *(_QWORD *)(v15 + 8));
            KeUnstackDetachProcess(&ApcState);
            if ( (int)v27 < 0 )
            {
              WdLogSingleEntry2(1LL, v70, v27);
              DxgkLogInternalTriageEvent(v71, 0x40000LL);
              *v9 = 0;
              goto LABEL_210;
            }
          }
        }
      }
      *((_BYTE *)v11 + 26) = 1;
    }
  }
  v72 = *(_BYTE *)(a1 + 40936);
  if ( (v72 & 4) == 0
    || (v72 & 0x40) != 0 && (*(_DWORD *)(v15 + 68) & 0x100) != 0
    || (v73 = *(_DWORD *)(v15 + 72), (v73 & 0x400) != 0) )
  {
LABEL_195:
    if ( (*((_DWORD *)v11 + 7) & 3) != 2 )
    {
      v102 = v11[1];
      v103 = **v11;
      v104 = (VIDMM_PROCESS *)(*v11)[1];
      v105 = *(unsigned int **)(v103 + 120);
      if ( g_IsInternalReleaseOrDbg )
      {
        v106 = WdLogNewEntry5_WdTrace(v16);
        *(_QWORD *)(v106 + 24) = v11;
        *(_QWORD *)(v106 + 32) = v102;
      }
      v107 = v11 + 7;
      v108 = v102[5] + 56LL * v105[5];
      ++*(_DWORD *)v108;
      *(_QWORD *)(v108 + 8) += *(_QWORD *)(v103 + 16);
      *(_QWORD *)(v108 + 48) = v102;
      v109 = *(__int64 **)(v108 + 40);
      if ( *v109 != v108 + 32 )
        __fastfail(3u);
      *v107 = v108 + 32;
      v11[8] = v109;
      *v109 = (__int64)v107;
      *(_QWORD *)(v108 + 40) = v107;
      VIDMM_PROCESS::AddCommitment(
        v104,
        (struct _VIDMM_DEVICE_COMMITMENT_INFO *)v108,
        *(_DWORD *)(*(_QWORD *)(*v102 + 24) + 240LL),
        (struct VIDMM_SEGMENT *)v105,
        *(_DWORD *)v108 == 1,
        (struct _VIDMM_GLOBAL_ALLOC *)v103);
      *((_DWORD *)v11 + 7) = *((_DWORD *)v11 + 7) & 0xFFFFFFFC | 2;
      ++*(_DWORD *)(v103 + 144);
      *((_DWORD *)v11 + 7) |= 0x10u;
      if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
      {
        LODWORD(v114) = *(_DWORD *)(*(_QWORD *)(v15 + 120) + 16LL) + 1;
        McTemplateK0pqx_EtwWriteTransfer(
          (unsigned int)v114,
          &EventPageInAllocation,
          v111,
          v11,
          v114,
          *(_QWORD *)(v15 + 128));
      }
    }
    *(_BYTE *)(v15 + 83) = 1;
    goto LABEL_205;
  }
  v74 = *(VIDMM_SEGMENT **)(v15 + 120);
  if ( (*((_DWORD *)v74 + 20) & 0x1001) != 0 )
  {
    v76 = *(_QWORD *)(v15 + 96);
    v75 = 0;
    if ( !v76 )
    {
      if ( (v73 & 0xA000) != 0 )
      {
        v77 = *(_QWORD *)(v15 + 552);
        goto LABEL_140;
      }
      v78 = *(_QWORD **)(v15 + 88);
      if ( v78[3] )
      {
        v77 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v78[1] + 24LL) + 88LL))(*(_QWORD *)(v78[1] + 24LL));
        goto LABEL_140;
      }
      v76 = v78[10];
      if ( !v76 )
        goto LABEL_200;
    }
    v77 = *(_QWORD *)(v76 + 8);
LABEL_140:
    if ( v77 )
    {
      LogicalAddress = SysMmGetLogicalAddress(*(void *const *)(v15 + 528));
      v129 = 0;
      v128 = *(_DWORD *)(v77 + 40) >> 12;
      if ( LogicalAddress )
      {
        v129 = 1;
        v80 = LogicalAddress >> 12;
      }
      else
      {
        v80 = v77 + 48;
      }
      v130 = v80;
      goto LABEL_145;
    }
LABEL_200:
    WdLogSingleEntry1(1LL, v15);
    DxgkLogInternalTriageEvent(v110, 0x40000LL);
    LODWORD(v27) = -1073741801;
    goto LABEL_210;
  }
  v75 = VIDMM_SEGMENT::DriverId(v74);
  v128 = *(_DWORD *)(v15 + 16) >> 12;
  v130 = *(_QWORD *)(v15 + 128) >> 12;
  v129 = 1;
LABEL_145:
  v81 = -1LL;
  v82 = 0LL;
  v83 = *(_DWORD *)(v15 + 68) & 0x3F;
  v126 = -1LL;
  v124 = 0LL;
  v84 = *(_QWORD *)(*v123 + 8LL);
  v85 = *(_QWORD **)(*(_QWORD *)(v84 + 16) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 240LL));
  if ( v85 && *(_DWORD *)(*v85 + 40928LL) )
  {
    if ( (*(_DWORD *)(v84 + 96) & 2) != 0 )
      v86 = *(struct _KTHREAD ***)(*v85 + 8 * v83 + 40416);
    else
      v86 = (struct _KTHREAD **)v85[63];
  }
  else
  {
    v86 = 0LL;
  }
  v87 = v86 + 7;
  v121 = (CVirtualAddressAllocator *)v86;
  v117 = 0;
  if ( v86[8] != KeGetCurrentThread() )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v87, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v90 = *((_DWORD *)v87 + 6);
        if ( v90 != -1 && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v88, &EventBlockThread, v89, v90);
      }
      ExAcquirePushLockExclusiveEx(v87, 0LL);
    }
    v86 = (struct _KTHREAD **)v121;
    v87[1] = KeGetCurrentThread();
    v117 = 1;
  }
  v91 = 0;
  v16 = (__int64)(v123 + 16);
  v119 = 0;
  v92 = (__int64 *)v123[16];
  v125 = v92;
  if ( v92 == v123 + 16 )
  {
LABEL_187:
    if ( v117 )
    {
      *((_QWORD *)v121 + 8) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v121 + 56, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v119 && v91 )
    {
      do
      {
        if ( (v91 & 1) != 0 )
          CVirtualAddressAllocator::FlushGpuVaTlb(v121, v8, v81, (unsigned __int64)v82);
        ++v8;
        v91 >>= 1;
      }
      while ( v91 );
    }
    v11 = (__int64 **)v123;
    goto LABEL_195;
  }
  v93 = v123;
  while ( 1 )
  {
    v94 = *((_DWORD *)v92 + 10);
    v95 = v92 - 3;
    if ( (v94 & 0x400) == 0 )
    {
      if ( (*(_BYTE *)(a1 + 40936) & 2) != 0 )
        goto LABEL_166;
      v92 = v125;
    }
    if ( (v94 & 0x800) != 0 )
      goto LABEL_171;
    if ( (*(_BYTE *)(a1 + 40936) & 8) == 0 )
      goto LABEL_170;
LABEL_166:
    v96 = v75;
    LODWORD(v27) = CVirtualAddressAllocator::CommitVirtualAddressRange(
                     v86,
                     v95,
                     *(_DWORD *)(v15 + 68) & 0x3F,
                     v75,
                     v95[9],
                     &v128,
                     0,
                     v131,
                     0LL);
    if ( (int)v27 < 0 )
      break;
    v97 = (*((_DWORD *)v95 + 16) >> 4) & 0x3F;
    IsEnabledDeviceUsage = Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage();
    v122 = v96;
    if ( IsEnabledDeviceUsage && (*(_BYTE *)(*(_QWORD *)(a1 + 40224) + 1616 * v97 + 444) & 1) == 0 )
    {
      v93 = v123;
      v75 = v96;
      v81 = v126;
LABEL_170:
      v92 = v125;
LABEL_171:
      v82 = v124;
      goto LABEL_172;
    }
    v99 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1264LL);
    if ( v99 )
      v100 = (_DWORD *)(v99 + 144 * v97);
    else
      v100 = 0LL;
    v81 = v126;
    v75 = v122;
    v93 = v123;
    if ( (*v100 & 0x400) != 0 )
      goto LABEL_170;
    v119 = 1;
    v91 |= 1 << ((*((_DWORD *)v95 + 16) >> 4) & 0x3F);
    if ( v126 >= v95[12] )
      v81 = v95[12];
    v101 = v95[13];
    v82 = v124;
    v126 = v81;
    if ( (unsigned __int64)v124 <= v101 )
      v82 = (VIDMM_SEGMENT *)v101;
    v92 = v125;
    v124 = v82;
LABEL_172:
    v92 = (__int64 *)*v92;
    v16 = (__int64)(v93 + 16);
    v125 = v92;
    if ( v92 == v93 + 16 )
      goto LABEL_187;
    v86 = (struct _KTHREAD **)v121;
  }
  WdLogSingleEntry2(3LL, v123, 18515LL);
  if ( v117 )
  {
    *((_QWORD *)v121 + 8) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v121 + 56, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (_DWORD)v27 == -1073741267 )
    *v127 = 1;
LABEL_210:
  if ( v118 )
    VIDMM_SEGMENT::MarkResourcesForEviction(*(VIDMM_SEGMENT **)(v15 + 120), (struct _VIDMM_GLOBAL_ALLOC *)v15, 0LL, 0LL);
  return (unsigned int)v27;
}
