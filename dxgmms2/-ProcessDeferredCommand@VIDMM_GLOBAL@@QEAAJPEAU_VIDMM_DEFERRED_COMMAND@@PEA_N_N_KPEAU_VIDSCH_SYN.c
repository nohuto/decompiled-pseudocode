/*
 * XREFs of ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B7F80 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAA_N_NPEA_N@Z @ 0x1C00EDAA4 (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAA_N_NPEA_N@Z.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00EDB78 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00040E0 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0011AEC (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0011BCC (-InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     VidSchMarkDeviceAsError @ 0x1C0014AF0 (VidSchMarkDeviceAsError.c)
 *     ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0017408 (-NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E4FC (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0xxpqhu_EtwWriteTransfer @ 0x1C002F9F8 (McTemplateK0xxpqhu_EtwWriteTransfer.c)
 *     VidSchCancelDeviceCommand @ 0x1C003E330 (VidSchCancelDeviceCommand.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C0040990 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085DF0 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0087B88 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C0087CAC (-TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0089D40 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0089F2C (-FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C008A514 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C008A6F4 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C008B300 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C008CD80 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C008D8B0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C009215C (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C00921C0 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0093850 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00939F8 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0093A84 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0093CC0 (-RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPE.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A2C90 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00A7930 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A83EC (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A85F4 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A8734 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A90C4 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AF5B8 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C00AF5E8 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_.c)
 *     ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z @ 0x1C00B0924 (-MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C00B2444 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00B3F58 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_A.c)
 *     VidSchiResumeFlipQueues @ 0x1C00B42DC (VidSchiResumeFlipQueues.c)
 *     ?TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C00B4948 (-TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     AcquireAllResidencyLocksForAllocation @ 0x1C00E054C (AcquireAllResidencyLocksForAllocation.c)
 *     ?CalculateLockData@VIDMM_GLOBAL@@IEAA?AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00E0D1C (-CalculateLockData@VIDMM_GLOBAL@@IEAA-AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z @ 0x1C00E0F5C (-CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E14D0 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00E2878 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00E2980 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x1C00E2A98 (-EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E2B54 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ForceUncommitVirtualAddress@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00E38C0 (-ForceUncommitVirtualAddress@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C00E3CC8 (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00E6408 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C00E65F8 (-PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 *     ReleaseAllResidencyLocksForAllocation @ 0x1C00E7124 (ReleaseAllResidencyLocksForAllocation.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C00E8580 (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00E8C04 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C00E9D10 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C00E9E94 (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00EBFD0 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00EDCE8 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidSchWaitForPagingFence @ 0x1C010919C (VidSchWaitForPagingFence.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::ProcessDeferredCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_DEFERRED_COMMAND *a2,
        bool *a3,
        char a4,
        unsigned __int64 a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        unsigned __int8 a7,
        struct VIDMM_ALLOC **a8)
{
  struct VIDMM_ALLOC **v8; // r10
  bool *v9; // r11
  bool v10; // r15
  __int64 v11; // r8
  struct _VIDSCH_SYNC_OBJECT *v12; // r9
  struct _VIDMM_DEFERRED_COMMAND *v13; // r13
  VIDMM_GLOBAL *QuadPart; // rsi
  struct VIDMM_DEVICE *v15; // r14
  __int64 v16; // r12
  struct VIDMM_DEVICE *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  unsigned int v20; // edi
  bool v21; // zf
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  int v28; // r9d
  unsigned int v29; // eax
  __int64 v30; // rcx
  bool *v31; // r12
  _DWORD *v32; // rax
  unsigned int v33; // r12d
  __int64 v34; // rax
  unsigned int v35; // ebx
  __int64 v36; // r15
  __int64 v37; // rcx
  _QWORD **v38; // rbx
  KPRIORITY v39; // r8d
  _QWORD *v40; // r9
  _QWORD *v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // eax
  struct _KEVENT *v44; // rcx
  __int64 result; // rax
  int v46; // eax
  __int64 v47; // rbx
  __int64 *v48; // rax
  struct VIDMM_DEVICE *v49; // r10
  VIDMM_PROCESS_ADAPTER_INFO *v50; // r11
  __int64 v51; // rdi
  struct VIDMM_SEGMENT *v52; // r9
  __int64 v53; // r8
  __int64 v54; // rax
  _QWORD *v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rdx
  _QWORD *v58; // rax
  _DWORD *v59; // rcx
  __int64 v60; // rdi
  _QWORD **v61; // rax
  struct VIDMM_ALLOC **v62; // r9
  unsigned __int64 v63; // rcx
  _QWORD *v64; // r11
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // r10
  struct VIDMM_DEVICE *v68; // r8
  unsigned __int64 v69; // rcx
  __int64 v70; // rcx
  _QWORD *v71; // rax
  __int64 v72; // rdx
  _QWORD *v73; // rcx
  __int64 v74; // rdi
  _QWORD *v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rbx
  __int64 v78; // rbx
  __int64 v79; // rcx
  __int64 v80; // r8
  struct VIDMM_DEVICE *v81; // rbx
  _QWORD *v82; // r8
  unsigned int k; // edx
  __int64 v84; // rax
  _QWORD *v85; // rcx
  __int64 v86; // rdi
  unsigned __int64 v87; // r8
  unsigned int v88; // r8d
  VIDMM_PROCESS_ADAPTER_INFO *v89; // rcx
  unsigned int v90; // r8d
  struct VIDMM_ALLOC **v91; // rdx
  __int64 v92; // rax
  struct VIDMM_DEVICE *v93; // rax
  unsigned __int64 v94; // rdx
  __int64 v95; // rax
  char *v96; // rdi
  unsigned __int64 v97; // r9
  struct VIDMM_DEVICE **v98; // rdx
  struct VIDMM_DEVICE *v99; // rax
  struct VIDMM_DEVICE **v100; // rcx
  struct VIDMM_DEVICE **v101; // rdx
  VIDMM_PROCESS_ADAPTER_INFO *v102; // rax
  __int64 v103; // rax
  unsigned int v104; // r13d
  unsigned int v105; // edi
  _QWORD *v106; // rbx
  unsigned __int64 *v107; // rcx
  unsigned int *v108; // rax
  struct VIDMM_ALLOC **v109; // rbx
  char v110; // di
  VIDMM_GLOBAL *v111; // rcx
  VIDMM_GLOBAL *v112; // rcx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 *v115; // rdi
  struct _VIDMM_LOCAL_ALLOC *v116; // rbx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 *v119; // r12
  __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // r8
  _QWORD *v123; // rax
  _QWORD *v124; // rcx
  __int64 v125; // rbx
  unsigned int v126; // eax
  struct _VIDMM_LOCAL_ALLOC *v127; // r8
  _QWORD *v128; // rcx
  __int64 v129; // rdx
  struct VIDMM_DEVICE *v130; // rax
  struct _VIDMM_LOCAL_ALLOC *v131; // rdi
  unsigned int inited; // eax
  __int64 **v133; // rcx
  unsigned int v134; // eax
  int v135; // r9d
  int v136; // r9d
  int *v137; // rcx
  int v138; // eax
  unsigned int v139; // edx
  int v140; // ecx
  int v141; // eax
  _QWORD *v142; // rdi
  VIDMM_GLOBAL *v143; // rcx
  __int64 v144; // rdx
  __int64 v145; // rax
  __int64 **v146; // rcx
  int v147; // r9d
  VIDMM_GLOBAL *v148; // rcx
  VIDMM_GLOBAL *v149; // rcx
  char v150; // r15
  __int64 v151; // rcx
  VIDMM_GLOBAL *v152; // rcx
  __int64 v153; // rax
  VIDMM_LINEAR_POOL ****v154; // rax
  VIDMM_DEVICE **v155; // r15
  VIDMM_LINEAR_POOL ***v156; // rcx
  int v157; // eax
  _QWORD **v158; // r12
  _QWORD *i; // rbx
  __int64 *j; // rdi
  __int64 v161; // r15
  VIDMM_GLOBAL *v162; // rcx
  struct VIDMM_ALLOC **v163; // rbx
  int v164; // r15d
  unsigned int v165; // r8d
  __int64 v166; // rbx
  unsigned int v167; // edx
  struct _D3DDDI_SEGMENTPREFERENCE v168; // edi
  struct VIDMM_DEVICE *v169; // r9
  unsigned int v170; // eax
  __int64 v171; // r8
  __int64 v172; // rbx
  unsigned __int8 v173; // r15
  __int64 v174; // rcx
  unsigned int v175; // edx
  int v176; // ecx
  int v177; // eax
  int v178; // edx
  int v179; // ebx
  VIDMM_SEGMENT *v180; // r10
  char v181; // bl
  VIDMM_SEGMENT *v182; // r9
  int v183; // eax
  unsigned int v184; // edx
  char v185; // r8
  unsigned __int64 v186; // rcx
  char v187; // r9
  unsigned __int64 v188; // rbx
  int v189; // eax
  __int64 v190; // rcx
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  __int64 v192; // rcx
  int v193; // eax
  _QWORD *v194; // r15
  __int64 v195; // rax
  __int64 v196; // rdi
  unsigned __int64 v197; // r8
  unsigned int v198; // r9d
  VIDMM_PROCESS_ADAPTER_INFO *v199; // r11
  __int64 v200; // rdx
  _QWORD *v201; // r10
  unsigned __int64 *v202; // rcx
  __int64 v203; // rax
  unsigned __int64 v204; // r10
  _QWORD *v205; // rax
  __int64 v206; // rcx
  struct VIDMM_DEVICE *v207; // rcx
  unsigned __int64 *v208; // rax
  __int64 v209; // rcx
  __int64 v210; // rax
  unsigned int v211; // eax
  struct _VIDMM_GLOBAL_ALLOC *v212; // rbx
  __int64 v213; // rax
  __int64 v214; // rcx
  __int64 v215; // rax
  __int64 v216; // rcx
  __int64 v217; // rcx
  __int64 v218; // rcx
  __int64 v219; // rcx
  __int64 v220; // rcx
  __int64 v221; // rcx
  __int64 v222; // rcx
  __int64 v223; // rcx
  _QWORD *v224; // rdi
  _QWORD *v225; // rax
  _QWORD *v226; // r15
  _QWORD *v227; // rcx
  __int64 v228; // rcx
  __int64 v229; // [rsp+20h] [rbp-E0h]
  unsigned int updated; // [rsp+50h] [rbp-B0h]
  bool v231; // [rsp+54h] [rbp-ACh]
  unsigned __int64 v233; // [rsp+60h] [rbp-A0h] BYREF
  struct VIDMM_DEVICE *v234; // [rsp+68h] [rbp-98h]
  struct VIDMM_DEVICE *v235; // [rsp+70h] [rbp-90h]
  struct VIDMM_ALLOC **NewAllocOwner; // [rsp+78h] [rbp-88h]
  char v237; // [rsp+80h] [rbp-80h]
  unsigned int v238; // [rsp+84h] [rbp-7Ch]
  __int64 v239; // [rsp+88h] [rbp-78h]
  unsigned int v240[2]; // [rsp+90h] [rbp-70h]
  struct _VIDMM_LOCAL_ALLOC *v241; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 *v242; // [rsp+A0h] [rbp-60h]
  bool v243; // [rsp+A8h] [rbp-58h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v244; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD *v245; // [rsp+B8h] [rbp-48h]
  struct _VIDMM_DEFERRED_COMMAND *v246; // [rsp+C0h] [rbp-40h]
  union _LARGE_INTEGER Interval; // [rsp+C8h] [rbp-38h] BYREF
  char v248[8]; // [rsp+D0h] [rbp-30h] BYREF
  DXGPUSHLOCK *v249; // [rsp+D8h] [rbp-28h]
  int v250; // [rsp+E0h] [rbp-20h]
  char v251[8]; // [rsp+E8h] [rbp-18h] BYREF
  DXGPUSHLOCK *v252; // [rsp+F0h] [rbp-10h]
  int v253; // [rsp+F8h] [rbp-8h]
  char v254[8]; // [rsp+100h] [rbp+0h] BYREF
  DXGPUSHLOCK *v255; // [rsp+108h] [rbp+8h]
  int v256; // [rsp+110h] [rbp+10h]
  char v257[8]; // [rsp+118h] [rbp+18h] BYREF
  DXGPUSHLOCK *v258; // [rsp+120h] [rbp+20h]
  int v259; // [rsp+128h] [rbp+28h]
  char v260[16]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v261[2]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v262; // [rsp+150h] [rbp+50h]
  __int64 v263; // [rsp+160h] [rbp+60h]
  __int64 v264; // [rsp+168h] [rbp+68h]
  struct VIDMM_DEVICE *v265; // [rsp+170h] [rbp+70h]
  __int64 v266; // [rsp+178h] [rbp+78h]
  __int128 v267; // [rsp+180h] [rbp+80h]
  struct _KAPC_STATE ApcState; // [rsp+190h] [rbp+90h] BYREF

  v8 = a8;
  v9 = a3;
  v10 = 0;
  v11 = 0LL;
  v237 = a4;
  v12 = a6;
  v13 = a2;
  *a8 = 0LL;
  QuadPart = this;
  v15 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 2);
  v16 = 0LL;
  v246 = a2;
  Interval.QuadPart = (LONGLONG)this;
  v233 = (unsigned __int64)a6;
  NewAllocOwner = a8;
  v235 = v15;
  *(_QWORD *)v240 = 0LL;
  v241 = 0LL;
  if ( v15 )
  {
    *(_QWORD *)v240 = *(_QWORD *)v15;
    v16 = **(_QWORD **)v240;
    v10 = (*(_DWORD *)(**(_QWORD **)v240 + 68LL) & 0x40000000) != 0;
    v241 = *(struct _VIDMM_LOCAL_ALLOC **)(**(_QWORD **)v240 + 88LL);
  }
  v17 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 1);
  v231 = 0;
  updated = 0;
  v234 = v17;
  if ( !v17 )
  {
    v17 = (struct VIDMM_DEVICE *)*((_QWORD *)v15 + 1);
    v234 = v17;
  }
  *v9 = 0;
  v18 = *((int *)this + 2);
  v19 = *(int *)v13;
  if ( (_DWORD)v18 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 64LL, QuadPart, v18, v19);
    v17 = v234;
    v11 = 0LL;
    v8 = NewAllocOwner;
    v9 = a3;
    v12 = (struct _VIDSCH_SYNC_OBJECT *)v233;
  }
  ++*((_QWORD *)QuadPart + 578);
  v20 = 0;
  v21 = *((_DWORD *)QuadPart + 1754) == 0;
  *((_DWORD *)QuadPart + 2) = v19;
  *((_DWORD *)QuadPart + 12) = -1;
  *((_QWORD *)QuadPart + 879) = v17;
  *((_QWORD *)QuadPart + 880) = v15;
  if ( !v21 )
  {
    while ( 1 )
    {
      v22 = v20;
      if ( (byte_1C00769C1 & 1) != 0 )
        McTemplateK0p_EtwWriteTransfer(v18, &EventPagingStartPreparation, v11, *((_QWORD *)QuadPart + v20 + 143));
      v23 = *((_DWORD *)QuadPart + v20 + 478);
      v18 = v20 + 542LL;
      v244 = (struct _VIDSCH_SYNC_OBJECT *)v18;
      if ( *((_DWORD *)QuadPart + v20 + 414) != v23 )
        break;
      if ( *((_DWORD *)QuadPart + v18) != *((_DWORD *)QuadPart + v20 + 606) )
        goto LABEL_264;
LABEL_12:
      ++v20;
      *((_DWORD *)QuadPart + v22 + 1028) = *((_DWORD *)QuadPart + v22 + 414);
      *((_DWORD *)QuadPart + v22 + 1092) = *((_DWORD *)QuadPart + v18);
      *((_DWORD *)QuadPart + v22 + 964) = 0;
      if ( v20 >= *((_DWORD *)QuadPart + 1754) )
      {
        v15 = v235;
        v17 = v234;
        v8 = NewAllocOwner;
        v9 = a3;
        v12 = (struct _VIDSCH_SYNC_OBJECT *)v233;
        goto LABEL_14;
      }
    }
    v244 = (struct _VIDSCH_SYNC_OBJECT *)(v20 + 542LL);
LABEL_264:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 33LL, QuadPart, 0LL, 0LL);
    v18 = (__int64)v244;
    goto LABEL_12;
  }
LABEL_14:
  v24 = *((_QWORD *)v17 + 4);
  if ( *(_BYTE *)(v24 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 200), 0, 0)
    || *(_BYTE *)(*((_QWORD *)QuadPart + 3) + 2870LL)
    || *(_BYTE *)(*((_QWORD *)QuadPart + 2) + 1025LL) )
  {
    *((_DWORD *)v13 + 21) = -1071775232;
    *((_BYTE *)v13 + 80) = 1;
  }
  v25 = -1LL;
  if ( *((_BYTE *)v13 + 80) )
  {
    if ( *(_DWORD *)v13 == 113 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v251, (struct _KTHREAD **)(*((_QWORD *)v13 + 4) + 56LL), 0);
      DXGPUSHLOCK::AcquireExclusive(v252);
      v253 = 2;
      VIDMM_GLOBAL::CleanupVadReference(v148, (struct _VIDMM_DEFERRED_COMMAND *)((char *)v13 + 32));
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v251);
      v17 = v234;
      v25 = -1LL;
      v8 = NewAllocOwner;
      v9 = a3;
      v12 = (struct _VIDSCH_SYNC_OBJECT *)v233;
    }
    if ( *(_DWORD *)v13 == 113
      || (v126 = *(_DWORD *)v13 - 203, v126 <= 0xB) && (v24 = 2281LL, _bittest((const int *)&v24, v126)) )
    {
      v30 = *((unsigned int *)v13 + 21);
      updated = *((_DWORD *)v13 + 21);
      goto LABEL_30;
    }
  }
  v26 = *(int *)v13;
  if ( (_DWORD)v26 == 113 )
  {
    updated = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
                (VIDMM_GLOBAL *)v24,
                (struct _VIDMM_DEFERRED_COMMAND *)((char *)v13 + 32),
                (DXGK_MULTIPLANE_OVERLAY_PLANE3 **)v8);
    v30 = updated;
    if ( updated == -1073741267 )
    {
      *a3 = 1;
      goto LABEL_287;
    }
    goto LABEL_29;
  }
  if ( (_DWORD)v26 != 206 )
  {
    if ( (_DWORD)v26 != 200 )
    {
      switch ( (int)v26 )
      {
        case 119:
          v31 = a3;
          updated = VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
                      QuadPart,
                      *((struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **)v13 + 4),
                      v8);
          v30 = updated;
          if ( updated != -1073741267 )
            goto LABEL_372;
          *a3 = 1;
          goto LABEL_287;
        case 203:
          if ( g_IsInternalReleaseOrDbg )
          {
            v153 = WdLogNewEntry5_WdTrace(v24);
            v8 = NewAllocOwner;
            v9 = a3;
            *(_QWORD *)(v153 + 24) = v15;
          }
          if ( *(_BYTE *)(v16 + 81) )
          {
            v30 = 3223191814LL;
            updated = -1071775482;
          }
          else
          {
            if ( !*(_DWORD *)(*(_QWORD *)(v16 + 536) + 12LL) )
            {
              v137 = *(int **)(v16 + 536);
              if ( (*v137 & 0x20000) == 0 )
              {
                if ( g_IsInternalReleaseOrDbg )
                {
                  WdLogNewEntry5_WdTrace(v137);
                  v137 = *(int **)(v16 + 536);
                  v8 = NewAllocOwner;
                  v9 = a3;
                }
                if ( *(_QWORD *)(v16 + 120) )
                {
                  v138 = *v137;
                  if ( (*v137 & 0x40000000) == 0 && ((v138 & 0x20000000) == 0 || v138 >= 0) && (v138 & 0x80000) == 0 )
                  {
                    if ( g_IsInternalReleaseOrDbg )
                      WdLogNewEntry5_WdTrace(v137);
                    VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                      *(VIDMM_WORKER_THREAD **)QuadPart,
                      (struct _VIDMM_GLOBAL_ALLOC *)v16);
                    VIDMM_GLOBAL::EvictAllocation(QuadPart, v15);
                    VIDMM_GLOBAL::EvictAllReclaimedAllocation(QuadPart, v15);
                    v8 = NewAllocOwner;
                    v9 = a3;
                  }
                }
              }
            }
            v139 = 4;
            v140 = **(_DWORD **)(v16 + 536);
            if ( (v140 & 0x20000) != 0 )
            {
              v139 = *((_DWORD *)v13 + 8);
            }
            else if ( (v140 & 0x40000000) != 0 || v140 < 0 )
            {
              v139 = 3;
            }
            if ( *((_QWORD *)v13 + 5) != -1LL )
              *(_DWORD *)(v16 + 72) |= 0x800u;
            v141 = VIDMM_GLOBAL::PageInOneAllocation(
                     (__int64)QuadPart,
                     (__int64)v15,
                     v139,
                     a7,
                     v9,
                     (__int64 ***)v8,
                     *((_DWORD *)v13 + 9),
                     *((_QWORD *)v13 + 5));
            *(_DWORD *)(v16 + 72) &= ~0x800u;
            v30 = (unsigned int)v141;
            updated = v141;
            if ( v141 >= 0 )
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 536) + 12LL));
            v142 = (_QWORD *)*((_QWORD *)QuadPart + 465);
            if ( v142 != (_QWORD *)((char *)QuadPart + 3720) )
            {
              do
              {
                v154 = (VIDMM_LINEAR_POOL ****)*(v142 - 7);
                v155 = (VIDMM_DEVICE **)(v142 - 7);
                v142 = (_QWORD *)*v142;
                v156 = *v154;
                v157 = *((_DWORD *)*v154 + 28);
                if ( v157 )
                {
                  if ( v157 == 1 )
                    VIDMM_SEGMENT::ReclaimResource(v156[15], (struct _VIDMM_GLOBAL_ALLOC *)v156);
                  VIDMM_DEVICE::AddCommitment(v155[1], (struct VIDMM_ALLOC *)v155);
                }
              }
              while ( v142 != (_QWORD *)((char *)QuadPart + 3720) );
              v30 = updated;
            }
            *((_QWORD *)QuadPart + 466) = (char *)QuadPart + 3720;
            *((_QWORD *)QuadPart + 465) = (char *)QuadPart + 3720;
          }
          goto LABEL_29;
        case 207:
          if ( !*((_DWORD *)v15 + 38) && (*((_BYTE *)v15 + 25) & 1) == 0 )
          {
            LOBYTE(v25) = (*((_DWORD *)v13 + 8) & 1) != 0;
            VIDMM_GLOBAL::EvictOneAllocation(QuadPart, (__int64 **)v15, v25);
          }
          _InterlockedDecrement((volatile signed __int32 *)v15 + 41);
          goto LABEL_209;
        case 208:
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v24) + 24) = v16;
          KeEnterCriticalRegion();
          v161 = v16 + 504;
          ExAcquirePushLockExclusiveEx(v16 + 504, 0LL);
          if ( *(_QWORD *)(v16 + 240) )
          {
            VIDMM_GLOBAL::EvictTemporaryAllocation(v162, (struct _VIDMM_GLOBAL_ALLOC *)v16);
            VIDMM_GLOBAL::FlushPagingBufferInternal(QuadPart, *(_DWORD *)(v16 + 68) & 0x3F, 0, 0LL, 0LL, 0, 0);
          }
          if ( !*((_BYTE *)v13 + 52) )
          {
            *(_QWORD *)((char *)v13 + 44) = *(_QWORD *)VIDMM_GLOBAL::CalculateLockData(QuadPart, v260, v15);
            *((_BYTE *)v13 + 52) = 1;
          }
          if ( *((_DWORD *)v13 + 11) == 4 )
          {
            v163 = NewAllocOwner;
            v31 = a3;
          }
          else
          {
            memset(&ApcState, 0, sizeof(ApcState));
            KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)v240 + 8LL), &ApcState);
            v163 = NewAllocOwner;
            v31 = a3;
            updated = VIDMM_GLOBAL::LockInternal(
                        QuadPart,
                        (struct _VIDMM_DEFERRED_COMMAND *)((char *)v13 + 44),
                        v15,
                        *((void ***)v13 + 4),
                        *((_DWORD *)v13 + 10),
                        a3,
                        NewAllocOwner);
            KeUnstackDetachProcess(&ApcState);
          }
          if ( *((_DWORD *)v13 + 11) == 4 )
            updated = VIDMM_GLOBAL::LockInternal(
                        QuadPart,
                        (struct _VIDMM_DEFERRED_COMMAND *)((char *)v13 + 44),
                        v15,
                        *((void ***)v13 + 4),
                        *((_DWORD *)v13 + 10),
                        v31,
                        v163);
          ExReleasePushLockExclusiveEx(v161, 0LL);
          KeLeaveCriticalRegion();
          v30 = updated;
          v12 = (struct _VIDSCH_SYNC_OBJECT *)v233;
          goto LABEL_31;
        case 209:
          inited = VIDMM_GLOBAL::InitContextAllocation((ADAPTER_RENDER **)QuadPart, (__int64 **)v15, 1, v9, v8);
          v30 = inited;
          updated = inited;
          goto LABEL_29;
        case 210:
          if ( !(((*((_BYTE *)v15 + 25) & 1) != 0) | *((_DWORD *)v15 + 38))
            || *(_WORD *)(*(_QWORD *)(v16 + 536) + 4LL) >= 2u )
          {
            goto LABEL_262;
          }
          v134 = VIDMM_GLOBAL::PageInOneAllocation(
                   (__int64)QuadPart,
                   (__int64)v15,
                   0LL,
                   a7,
                   v9,
                   (__int64 ***)v8,
                   0,
                   -1LL);
          *(_DWORD *)(v16 + 72) &= ~0x40u;
          v30 = v134;
          v12 = (struct _VIDSCH_SYNC_OBJECT *)v233;
          updated = v134;
          goto LABEL_30;
        case 211:
          v158 = (_QWORD **)(*((_QWORD *)v13 + 4) + 272LL);
          for ( i = *v158; i != v158; i = (_QWORD *)*i )
          {
            for ( j = (__int64 *)*(i - 2); j != i - 2; j = (__int64 *)*j )
              VIDMM_GLOBAL::EvictOneAllocation(QuadPart, (__int64 **)j - 5, 0LL);
          }
          goto LABEL_209;
        case 212:
          VIDMM_GLOBAL::UpdateAllocationPriority(QuadPart, v15, *((_DWORD *)v13 + 8));
          goto LABEL_209;
        case 213:
          VIDMM_DEVICE::SuspendSchedulerDevice(v17);
          VIDMM_DEVICE::SuspendPagingQueues(v234);
          v150 = 0;
          if ( !*((_QWORD *)v234 + 24) )
          {
            v150 = 1;
            DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(
              (DXGAUTOPUSHLOCK *)v254,
              (struct _KTHREAD **)(*(_QWORD *)v234 + 44512LL),
              0);
            DXGPUSHLOCK::AcquireExclusive(v255);
            v151 = *(_QWORD *)v234;
            v256 = 2;
            VIDMM_GLOBAL::InsertToPenaltyBox(v151, (__int64)v234, 4);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v254);
          }
          if ( v15 )
          {
            if ( (*((_DWORD *)v15 + 7) & 3) == 2 )
              VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)v234, (VIDMM_DEVICE **)v15);
          }
          else
          {
            VIDMM_DEVICE::FaultAllAllocations(v234);
          }
          VIDMM_GLOBAL::EvictFromFaultedList(v149, v234);
          updated = VIDMM_GLOBAL::PageInFromFaultedList(QuadPart, v234);
          VIDMM_DEVICE::ResumeSchedulerDevice(v234);
          VIDMM_DEVICE::ResumePagingQueues(v234);
          if ( v150 )
          {
            DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(
              (DXGAUTOPUSHLOCK *)v257,
              (struct _KTHREAD **)(*(_QWORD *)v234 + 44512LL),
              0);
            DXGPUSHLOCK::AcquireExclusive(v258);
            v259 = 2;
            VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v152, (struct _LIST_ENTRY *)v234 + 12);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v257);
          }
          goto LABEL_209;
        case 214:
          v164 = *(_DWORD *)(v16 + 68);
          v165 = *((_DWORD *)v13 + 12);
          v166 = *((_QWORD *)QuadPart + 5028);
          v167 = *(_DWORD *)(v16 + 60);
          v168.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v16 + 64);
          v240[0] = v164 & 0x3F;
          v169 = (struct VIDMM_DEVICE *)(v164 & 0x3F);
          v170 = v165 >> 1;
          v171 = v165 >> 2;
          LOBYTE(v170) = v170 & 1;
          LOBYTE(v171) = v171 & 1;
          v172 = 1616LL * (_QWORD)v169 + v166;
          v235 = v169;
          v173 = (v164 & 0x80) != 0;
          v238 = v167;
          LODWORD(v242) = v170;
          LODWORD(v245) = v171;
          if ( (_BYTE)v170 )
          {
            v174 = *(_QWORD *)(v16 + 120);
            v175 = *((_DWORD *)v13 + 9);
            v238 = v175;
            if ( v174
              && *(_DWORD *)(v16 + 112)
              && !_bittest((const int *)&v175, (unsigned __int8)(*(_BYTE *)(v174 + 20) - *(_BYTE *)(v172 + 28))) )
            {
              VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                *(VIDMM_WORKER_THREAD **)QuadPart,
                (struct _VIDMM_GLOBAL_ALLOC *)v16);
              VIDMM_GLOBAL::EvictAllocation(QuadPart, v15);
              VIDMM_GLOBAL::EvictAllReclaimedAllocation(QuadPart, v15);
              v169 = v235;
              v171 = (unsigned int)v245;
              v175 = v238;
            }
            *(_DWORD *)(v16 + 60) = v175;
            v176 = *(_DWORD *)(v16 + 68) ^ (*(_DWORD *)(v16 + 68) ^ (*((unsigned __int8 *)v13 + 53) << 6)) & 0x40;
            *(_DWORD *)(v16 + 68) = v176;
            v173 = *((_BYTE *)v13 + 52);
            *(_DWORD *)(v16 + 68) = v176 ^ ((unsigned __int8)v176 ^ (unsigned __int8)(v173 << 7)) & 0x80;
          }
          v177 = *((_DWORD *)v13 + 12);
          LOBYTE(v8) = 0;
          LODWORD(v234) = (_DWORD)v8;
          if ( (v177 & 1) != 0 )
          {
            v178 = **((_DWORD **)v15 + 12);
            if ( (v178 & 0x8000) == 0 )
            {
              v179 = 1 << (*(_WORD *)(v172 + 36) - *(_BYTE *)(v172 + 28));
              if ( (*((_DWORD *)v13 + 11) & 1) != 0 )
              {
                if ( *(_DWORD *)(v16 + 112) )
                {
                  if ( (*(_DWORD *)(*(_QWORD *)(v16 + 120) + 80LL) & 0x1000) != 0 )
                  {
                    VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                      *(VIDMM_WORKER_THREAD **)QuadPart,
                      (struct _VIDMM_GLOBAL_ALLOC *)v16);
                    VIDMM_GLOBAL::EvictAllocation(QuadPart, v15);
                    VIDMM_GLOBAL::EvictAllReclaimedAllocation(QuadPart, v15);
                    v169 = v235;
                    v171 = (unsigned int)v245;
                  }
                  else
                  {
                    LODWORD(v234) = (v178 & 0x10000) != 0;
                  }
                }
                if ( (*(_DWORD *)(v16 + 68) & 0x40) != 0 )
                  *(_DWORD *)(v16 + 60) &= ~v179;
                **((_DWORD **)v15 + 12) |= 0x8000u;
              }
            }
          }
          if ( (_BYTE)v171 )
          {
            v168.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)*((_DWORD *)v13 + 10);
            v171 = 0LL;
            v180 = 0LL;
            if ( v168.0 )
            {
              if ( (*(_BYTE *)&v168.0 & 0x1F) != 0 )
              {
                v171 = *(_QWORD *)(*((_QWORD *)QuadPart + 464)
                                 + 8LL
                                 * ((*((_DWORD *)v13 + 10) & 0x1Fu)
                                  + *(_DWORD *)(*((_QWORD *)QuadPart + 5028) + 1616LL * (_QWORD)v169 + 28)
                                  - 1));
                v173 = *(_BYTE *)(v171 + 80) & 1;
              }
              if ( ((v168.Value >> 6) & 0x1F) != 0 )
                v180 = *(VIDMM_SEGMENT **)(*((_QWORD *)QuadPart + 464)
                                         + 8LL
                                         * (((v168.Value >> 6) & 0x1F)
                                          + *(_DWORD *)(*((_QWORD *)QuadPart + 5028) + 1616LL * (_QWORD)v169 + 28)
                                          - 1));
            }
            v181 = 0;
            if ( *(_DWORD *)(v16 + 112) )
            {
              v182 = *(VIDMM_SEGMENT **)(v16 + 120);
              if ( (VIDMM_SEGMENT *)v171 == v182 || v180 == v182 )
              {
                if ( *(_DWORD *)(v16 + 64) != v168.0 )
                {
                  v171 = *(_QWORD *)(v16 + 88);
                  if ( v171 )
                  {
                    if ( *(_QWORD *)(v171 + 8) )
                    {
                      v181 = 1;
                      VidMmRecordAlloc((__int64)QuadPart, v16, v171, v182, *(_QWORD *)(v16 + 16), 1);
                    }
                  }
                }
              }
              else
              {
                VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                  *(VIDMM_WORKER_THREAD **)QuadPart,
                  (struct _VIDMM_GLOBAL_ALLOC *)v16);
                VIDMM_GLOBAL::EvictAllocation(QuadPart, v15);
                VIDMM_GLOBAL::EvictAllReclaimedAllocation(QuadPart, v15);
              }
            }
            v183 = (*(_DWORD *)(v16 + 68) ^ (v173 << 10)) & 0x400;
            *(struct _D3DDDI_SEGMENTPREFERENCE *)(v16 + 64) = v168;
            *(_DWORD *)(v16 + 68) ^= v183;
            if ( v181 )
              VidMmRecordAlloc(
                (__int64)QuadPart,
                v16,
                *(_QWORD *)(v16 + 88),
                *(VIDMM_SEGMENT **)(v16 + 120),
                *(_QWORD *)(v16 + 16),
                0);
          }
          if ( (*((_DWORD *)v13 + 12) & 8) != 0 )
            *(_DWORD *)(v16 + 72) ^= (*(_DWORD *)(v16 + 72) ^ (*((_DWORD *)v13 + 11) << 20)) & 0x200000;
          AcquireAllResidencyLocksForAllocation(QuadPart, v16, v171);
          v184 = *(_DWORD *)(v16 + 68);
          v185 = (char)v245;
          v186 = v184;
          v187 = (char)v242;
          v188 = (unsigned __int8)(v184 >> 13);
          if ( (_BYTE)v245 && (_BYTE)v242 )
          {
            v189 = v184 ^ (v184 ^ (*((_DWORD *)v13 + 8) << 13)) & 0x1E0000;
            *(_DWORD *)(v16 + 68) = v189;
            v186 = v189 ^ (v189 ^ (*((_DWORD *)v13 + 8) << 13)) & 0x1E000u;
            *(_DWORD *)(v16 + 68) = v186;
          }
          if ( v185 != v187 )
          {
            if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(
                    (VIDMM_GLOBAL *)v186,
                    *(struct _D3DDDI_SEGMENTPREFERENCE *)(v16 + 64),
                    v238) )
            {
              WdLogSingleEntry1(1LL, 11905LL);
              DxgkLogInternalTriageEvent(v190, 0x40000LL);
              VidSchMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)v15 + 1) + 32LL));
            }
            MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(QuadPart, v240[0], v168, &v243);
            LODWORD(v241) = 0;
            if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
                    QuadPart,
                    v240[0],
                    v238,
                    MostPreferredSegment,
                    (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v241) )
            {
              WdLogSingleEntry1(1LL, 11917LL);
              v229 = 11917LL;
              DxgkLogInternalTriageEvent(v192, 0x40000LL);
              VidSchMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)v15 + 1) + 32LL));
            }
            v193 = *(_DWORD *)(v16 + 68) ^ (*(_DWORD *)(v16 + 68) ^ ((_DWORD)v241 << 13)) & 0x1E0000;
            LODWORD(v186) = v193 ^ (v193 ^ ((_DWORD)v241 << 13)) & 0x1E000;
            *(_DWORD *)(v16 + 68) = v186;
          }
          v238 = (unsigned int)v188 >> 4;
          if ( (unsigned int)v188 >> 4 != (((unsigned int)v186 >> 17) & 0xF)
            || (((unsigned __int8)v188 ^ (unsigned __int8)((unsigned int)v186 >> 13)) & 0xF) != 0 )
          {
            v194 = *(_QWORD **)(v16 + 272);
            if ( v194 != (_QWORD *)(v16 + 272) )
            {
              do
              {
                v195 = *(_DWORD *)(v16 + 68) & 0x3F;
                v239 = *(_QWORD *)(*(_QWORD *)(*(v194 - 6) + 16LL)
                                 + 8LL * *(unsigned int *)(*((_QWORD *)QuadPart + 3) + 240LL));
                v196 = *(_QWORD *)(v239 + 48) + 296 * v195;
                VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange((VIDMM_PROCESS_ADAPTER_INFO *)v239);
                v200 = *(v194 - 2);
                v201 = v194 - 2;
                *(_QWORD *)v240 = v200;
                if ( (_QWORD *)v200 != v194 - 2 )
                {
                  do
                  {
                    if ( *(_BYTE *)(v200 - 15) & 1 | *(_DWORD *)(v200 + 112) )
                    {
                      v197 = v188;
                      if ( (((unsigned __int8)v188 ^ (unsigned __int8)(*(_DWORD *)(v16 + 68) >> 13)) & 0xF) != 0 )
                      {
                        v202 = *(unsigned __int64 **)(v16 + 16);
                        v242 = v202;
                        v203 = (v188 & 0xF) + 17;
                        v204 = *(_QWORD *)(v196 + 8 * v203);
                        v205 = (_QWORD *)(v196 + 8 * v203);
                        v245 = v205;
                        if ( (unsigned __int64)v202 > v204 )
                        {
                          g_DxgMmsBugcheckExportIndex = 1;
                          WdLogSingleEntry5(0LL, 270LL, 68LL, v196, v204, v202);
                          v200 = *(_QWORD *)v240;
                          v197 = v188;
                          v202 = v242;
                          v198 = v238;
                          v205 = v245;
                        }
                        *v205 -= v202;
                        v201 = v194 - 2;
                        v206 = (*(_DWORD *)(v16 + 68) >> 13) & 0xF;
                        *(_QWORD *)(v196 + 8 * v206 + 136) += *(_QWORD *)(v16 + 16);
                      }
                      if ( v198 != ((*(_DWORD *)(v16 + 68) >> 17) & 0xF) )
                      {
                        v207 = *(struct VIDMM_DEVICE **)(v16 + 16);
                        v235 = v207;
                        v208 = (unsigned __int64 *)(v196 + 8 * ((v197 >> 4) + 9));
                        v197 = *v208;
                        v242 = v208;
                        if ( (unsigned __int64)v207 > v197 )
                        {
                          g_DxgMmsBugcheckExportIndex = 1;
                          WdLogSingleEntry5(0LL, 270LL, 68LL, v196, v197, v207);
                          v200 = *(_QWORD *)v240;
                          v201 = v194 - 2;
                          v207 = v235;
                          v208 = v242;
                          v198 = v238;
                        }
                        *v208 -= (unsigned __int64)v207;
                        v209 = (*(_DWORD *)(v16 + 68) >> 17) & 0xF;
                        *(_QWORD *)(v196 + 8 * v209 + 72) += *(_QWORD *)(v16 + 16);
                      }
                    }
                    v200 = *(_QWORD *)v200;
                    *(_QWORD *)v240 = v200;
                  }
                  while ( (_QWORD *)v200 != v201 );
                  QuadPart = (VIDMM_GLOBAL *)Interval.QuadPart;
                  v199 = (VIDMM_PROCESS_ADAPTER_INFO *)v239;
                }
                VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(v199, v200, v197);
                v194 = (_QWORD *)*v194;
              }
              while ( v194 != (_QWORD *)(v16 + 272) );
              v13 = v246;
            }
          }
          ReleaseAllResidencyLocksForAllocation(QuadPart, v16);
          *((_DWORD *)v13 + 12) &= 0xFFFFFFF0;
          if ( (_BYTE)v234 && *(_QWORD *)(v16 + 120) )
            VIDMM_GLOBAL::NotifyResidency(QuadPart, (struct _VIDMM_GLOBAL_ALLOC *)v16, 1u);
          if ( !(*((_BYTE *)v15 + 25) & 1 | *((_DWORD *)v15 + 38)) )
            goto LABEL_181;
          v210 = *(_QWORD *)(v16 + 536);
          v31 = a3;
          if ( *(_WORD *)(v210 + 4) >= 2u )
          {
            v30 = 0LL;
            v12 = (struct _VIDSCH_SYNC_OBJECT *)v233;
          }
          else
          {
            v211 = VIDMM_GLOBAL::PageInOneAllocation(
                     (__int64)QuadPart,
                     (__int64)v15,
                     0LL,
                     a7,
                     a3,
                     (__int64 ***)NewAllocOwner,
                     0,
                     -1LL);
            v30 = v211;
            updated = v211;
LABEL_372:
            v12 = (struct _VIDSCH_SYNC_OBJECT *)v233;
          }
          goto LABEL_31;
        case 215:
          v212 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v13 + 4);
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v248, (struct _KTHREAD **)QuadPart + 4997, 0);
          DXGPUSHLOCK::AcquireExclusive(v249);
          v21 = *((_QWORD *)v212 + 55) == 0LL;
          v250 = 2;
          if ( v21 )
          {
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v248);
          }
          else
          {
            VIDMM_GLOBAL::RemoveAllocationFromDecommitList(QuadPart, v212);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v248);
            VIDMM_GLOBAL::DecommitGlobalAllocation(QuadPart, v212);
          }
          v12 = (struct _VIDSCH_SYNC_OBJECT *)v233;
          v30 = 0LL;
          updated = 0;
          goto LABEL_30;
        case 217:
          Interval.QuadPart = -10000LL * *((unsigned int *)v13 + 8);
          KeDelayExecutionThread(0, 0, &Interval);
LABEL_209:
          v30 = updated;
          goto LABEL_29;
        default:
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 5LL, v26, -1073741811LL, 0LL);
          goto LABEL_262;
      }
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v213 = WdLogNewEntry5_WdTrace(v24);
      v17 = v234;
      *(_QWORD *)(v213 + 24) = v15;
    }
    if ( *((_DWORD *)v15 + 26) || *((_DWORD *)v15 + 39) )
    {
      v214 = *((int *)v15 + 26);
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 42LL, QuadPart, v15, v214);
      v17 = v234;
    }
    if ( (*((_BYTE *)v15 + 25) & 1) != 0 )
    {
      VIDMM_GLOBAL::UnpinOneAllocation(QuadPart, v15, 3LL);
      v17 = v234;
    }
    v46 = *((_DWORD *)v15 + 7) & 3;
    if ( v46 == 2 )
    {
      v47 = **(_QWORD **)v15;
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v24) + 24) = v15;
      v48 = *(__int64 **)v15;
      v49 = (struct VIDMM_DEVICE *)*((_QWORD *)v15 + 1);
      v235 = v49;
      v50 = (VIDMM_PROCESS_ADAPTER_INFO *)v48[1];
      v51 = *v48;
      v239 = (__int64)v50;
      if ( g_IsInternalReleaseOrDbg )
      {
        v215 = WdLogNewEntry5_WdTrace(v24);
        v49 = v235;
        v50 = (VIDMM_PROCESS_ADAPTER_INFO *)v239;
        *(_QWORD *)(v215 + 24) = v15;
        *(_QWORD *)(v215 + 32) = v49;
      }
      if ( (*(_DWORD *)(v51 + 68) & 0x40000000) != 0 )
      {
        v53 = *(_DWORD *)(v51 + 72) & 0x1F;
        v52 = *(struct VIDMM_SEGMENT **)(*(_QWORD *)(*(_QWORD *)v49 + 3712LL) + 8 * v53);
      }
      else
      {
        v52 = *(struct VIDMM_SEGMENT **)(v51 + 120);
        LODWORD(v53) = *((_DWORD *)v52 + 5);
      }
      v54 = (unsigned int)v53;
      v55 = (_QWORD *)((char *)v15 + 56);
      v56 = *((_QWORD *)v15 + 7);
      v57 = *((_QWORD *)v49 + 5) + 56 * v54;
      if ( *(struct VIDMM_DEVICE **)(v56 + 8) != (struct VIDMM_DEVICE *)((char *)v15 + 56) )
        goto LABEL_402;
      v58 = (_QWORD *)*((_QWORD *)v15 + 8);
      if ( (_QWORD *)*v58 != v55 )
        goto LABEL_402;
      *v58 = v56;
      *(_QWORD *)(v56 + 8) = v58;
      --*(_DWORD *)v57;
      *(_QWORD *)(v57 + 8) -= *(_QWORD *)(v51 + 16);
      *v55 = 0LL;
      *((_QWORD *)v15 + 8) = 0LL;
      VIDMM_PROCESS::RemoveCommitment(
        v50,
        (struct _VIDMM_DEVICE_COMMITMENT_INFO *)v57,
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v49 + 24LL) + 240LL),
        v52,
        *(_DWORD *)v57 == 0,
        (struct _VIDMM_GLOBAL_ALLOC *)v51);
      --*(_DWORD *)(v51 + 144);
      *((_DWORD *)v15 + 7) &= 0xFFFFFFEC;
      if ( dword_1C0076534 )
        VIDMM_GLOBAL::ForceUncommitVirtualAddress(*(VIDMM_GLOBAL **)v235, v235, v15);
      if ( !*(_DWORD *)(v47 + 144) )
      {
        v59 = *(_DWORD **)(v47 + 536);
        if ( (*v59 & 0x40000000) == 0
          && !v59[3]
          && (**(_DWORD **)(v47 + 536) & 0x20000) == 0
          && (*(_DWORD *)(v47 + 68) & 0x40000000) == 0 )
        {
          v60 = *(_QWORD *)(v47 + 120);
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v59) + 24) = v47;
          if ( (*(_DWORD *)(v60 + 80) & 0x1000) == 0 )
            VIDMM_LINEAR_POOL::MarkBlockForEviction(
              *(VIDMM_LINEAR_POOL **)(v60 + 152),
              *(struct _VIDMM_POOL_BLOCK **)(v47 + 136),
              0LL,
              0LL);
          v61 = *(_QWORD ***)(v47 + 512);
          v62 = *(struct VIDMM_ALLOC ***)(v47 + 16);
          *(_DWORD *)(v47 + 112) = 1;
          v63 = *(_QWORD *)(v60 + 216);
          v64 = *v61;
          NewAllocOwner = v62;
          v239 = (__int64)v64;
          if ( v63 < v63 - (unsigned __int64)v62 )
          {
            WdLogSingleEntry1(1LL, 301LL);
            v229 = 301LL;
            DxgkLogInternalTriageEvent(v216, 0x40000LL);
            v62 = NewAllocOwner;
            v64 = (_QWORD *)v239;
          }
          *(_QWORD *)(v60 + 216) -= v62;
          v65 = *(unsigned int *)(v60 + 380);
          v66 = *(_QWORD *)(v60 + 8);
          v67 = *(int *)(v60 + 476);
          v235 = *(struct VIDMM_DEVICE **)(v66 + 40224);
          v239 = 1616 * v65;
          if ( (*((_BYTE *)v235 + 1616 * v65 + 24 * v67 + 520) & 1) != 0 )
            v68 = (struct VIDMM_DEVICE *)(*(_QWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(v66 + 24) + 240LL)
                                                    + v64[5]
                                                    + 24)
                                        + 344 * v65);
          else
            v68 = (struct VIDMM_DEVICE *)((char *)v235 + 344 * v67 + v239 + 552);
          v69 = *((_QWORD *)v68 + 15);
          v235 = v68;
          if ( v69 < v69 - (unsigned __int64)v62 )
          {
            WdLogSingleEntry1(1LL, 311LL);
            v229 = 311LL;
            DxgkLogInternalTriageEvent(v217, 0x40000LL);
            v68 = v235;
            v62 = NewAllocOwner;
          }
          *((_QWORD *)v68 + 15) -= v62;
          --*(_DWORD *)(v60 + 320);
          if ( (*(_DWORD *)(v60 + 80) & 0x1001) != 0 )
          {
            v70 = *(_QWORD *)(v47 + 520);
            if ( (!v70 || _InterlockedExchangeAdd((volatile signed __int32 *)(v70 + 44), 0xFFFFFFFF) == 1)
              && (unsigned __int64)_InterlockedExchangeAdd64(
                                     (volatile signed __int64 *)(**(_QWORD **)(v47 + 512) + 56LL),
                                     -*(_QWORD *)(v47 + 16)) < *(_QWORD *)(v47 + 16) )
            {
              WdLogSingleEntry1(1LL, 2343LL);
              v229 = 2343LL;
              DxgkLogInternalTriageEvent(v218, 0x40000LL);
            }
          }
          v71 = (_QWORD *)(v47 + 408);
          v72 = *(_QWORD *)(v47 + 408);
          if ( *(_QWORD *)(v72 + 8) != v47 + 408 )
            goto LABEL_402;
          v73 = *(_QWORD **)(v47 + 416);
          if ( (_QWORD *)*v73 != v71 )
            goto LABEL_402;
          *v73 = v72;
          v74 = v60 + 176;
          *(_QWORD *)(v72 + 8) = v73;
          v75 = *(_QWORD **)(v74 + 8);
          if ( *v75 != v74 )
            goto LABEL_402;
          v21 = bTracingEnabled == 0;
          *v71 = v74;
          *(_QWORD *)(v47 + 416) = v75;
          *v75 = v71;
          *(_QWORD *)(v74 + 8) = v71;
          if ( !v21 && (byte_1C00769C1 & 1) != 0 )
            McTemplateK0p_EtwWriteTransfer((__int64)v75, &EventMarkAllocation, (__int64)v68, v15);
          v76 = *(_QWORD *)(v47 + 16);
          ++*((_DWORD *)QuadPart + 1816);
          *((_QWORD *)QuadPart + 909) += v76;
        }
      }
      v17 = v234;
    }
    else if ( v46 == 1 )
    {
      v122 = *((_QWORD *)v15 + 7);
      v123 = (_QWORD *)((char *)v15 + 56);
      if ( *(struct VIDMM_DEVICE **)(v122 + 8) != (struct VIDMM_DEVICE *)((char *)v15 + 56) )
        goto LABEL_402;
      v124 = (_QWORD *)*((_QWORD *)v15 + 8);
      if ( (_QWORD *)*v124 != v123 )
        goto LABEL_402;
      *v124 = v122;
      *(_QWORD *)(v122 + 8) = v124;
      *((_DWORD *)v15 + 7) &= 0xFFFFFFFC;
      *((_QWORD *)v15 + 8) = 0LL;
      *v123 = 0LL;
    }
    if ( (*((_DWORD *)v15 + 7) & 0x10) != 0 && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      v17 = v234;
    }
    if ( v15 == *((struct VIDMM_DEVICE **)v17 + 32) )
      *((_QWORD *)v17 + 32) = 0LL;
    v77 = *((_QWORD *)v17 + 2);
    v21 = v77 == -360;
    v78 = v77 + 360;
    v242 = (unsigned __int64 *)v78;
    if ( !v21 && *(struct _KTHREAD **)(v78 + 8) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1453LL);
      v229 = 1453LL;
      DxgkLogInternalTriageEvent(v219, 262146LL);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v78, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v147 = *(_DWORD *)(v78 + 24);
        if ( v147 != -1 && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v79, &EventBlockThread, v80, v147);
      }
      ExAcquirePushLockExclusiveEx(v78, 0LL);
    }
    *(_QWORD *)(v78 + 8) = KeGetCurrentThread();
    v81 = v234;
    if ( ((*((_BYTE *)v15 + 25) & 1) != 0) | *((_DWORD *)v15 + 38) )
    {
      v82 = (_QWORD *)*((_QWORD *)v234 + 2);
      if ( bTracingEnabled )
      {
        for ( k = 0; k < *(_DWORD *)(*v82 + 7016LL); v85[22] = v85[19] )
        {
          v84 = k++;
          v85 = (_QWORD *)(v82[6] + 296 * v84);
          v85[20] = v85[17];
          v85[21] = v85[18];
        }
      }
      v86 = **(_QWORD **)v15;
      v87 = *(unsigned int *)(v86 + 68);
      if ( (v87 & 0x40) == 0 || *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 1) + 8LL) + 288LL) == **(_QWORD **)(v86 + 512) )
      {
        v88 = (unsigned int)v87 >> 17;
        v89 = (VIDMM_PROCESS_ADAPTER_INFO *)(*(_QWORD *)(*((_QWORD *)v81 + 2) + 48LL)
                                           + 296LL * (*(_DWORD *)(v86 + 68) & 0x3F));
        v21 = (*((_BYTE *)v15 + 36) & 1) == 0;
        v239 = (__int64)v89;
        if ( v21 || (v88 & 0xF) != 2 )
          v90 = v88 & 0xF;
        else
          v90 = 0;
        v91 = *(struct VIDMM_ALLOC ***)(v86 + 16);
        v92 = v90 + 9LL;
        NewAllocOwner = v91;
        v87 = *((_QWORD *)v89 + v92);
        v93 = (VIDMM_PROCESS_ADAPTER_INFO *)((char *)v89 + 8 * v92);
        v235 = v93;
        if ( (unsigned __int64)v91 > v87 )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 68LL, v89, v87, v91);
          v89 = (VIDMM_PROCESS_ADAPTER_INFO *)v239;
          v93 = v235;
          v91 = NewAllocOwner;
        }
        *(_QWORD *)v93 -= v91;
        v94 = *(_QWORD *)(v86 + 16);
        v95 = (*(_DWORD *)(v86 + 68) >> 13) & 0xF;
        v239 = v94;
        v96 = (char *)v89 + 8 * v95;
        v97 = *((_QWORD *)v96 + 17);
        if ( v94 > v97 )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 68LL, v89, v97, v94);
          v94 = v239;
        }
        *((_QWORD *)v96 + 17) -= v94;
      }
      v98 = (struct VIDMM_DEVICE **)*((_QWORD *)v15 + 14);
      v99 = (struct VIDMM_DEVICE *)((char *)v15 + 112);
      if ( v98[1] != (struct VIDMM_DEVICE *)((char *)v15 + 112) )
        goto LABEL_402;
      v100 = (struct VIDMM_DEVICE **)*((_QWORD *)v15 + 15);
      if ( *v100 != v99 )
        goto LABEL_402;
      *v100 = (struct VIDMM_DEVICE *)v98;
      v98[1] = (struct VIDMM_DEVICE *)v100;
      v101 = (struct VIDMM_DEVICE **)*((_QWORD *)v81 + 23);
      if ( *v101 != (struct VIDMM_DEVICE *)((char *)v81 + 176) )
        goto LABEL_402;
      v21 = bTracingEnabled == 0;
      *(_QWORD *)v99 = (char *)v81 + 176;
      *((_QWORD *)v15 + 15) = v101;
      *v101 = v99;
      *((_QWORD *)v81 + 23) = v99;
      v102 = (VIDMM_PROCESS_ADAPTER_INFO *)*((_QWORD *)v81 + 2);
      v239 = (__int64)v102;
      if ( !v21 )
      {
        v103 = *(_QWORD *)v102;
        v240[0] = 0;
        if ( *(_DWORD *)(v103 + 7016) )
        {
          v104 = 0;
          do
          {
            v105 = 0;
            v106 = (_QWORD *)(*(_QWORD *)(v239 + 48) + 296LL * v104 + 136);
            do
            {
              if ( v106[3] != *v106 && (byte_1C00769C1 & 0x10) != 0 )
              {
                v229 = v106[3];
                McTemplateK0xxpqhu_EtwWriteTransfer(*(_QWORD *)v239, &EventVidMmProcessUsageChange, v87);
              }
              ++v105;
              ++v106;
            }
            while ( v105 < 3 );
            ++v104;
          }
          while ( v104 < *(_DWORD *)(*(_QWORD *)v239 + 7016LL) );
          QuadPart = (VIDMM_GLOBAL *)Interval.QuadPart;
          v13 = v246;
          v81 = v234;
        }
      }
    }
    v107 = v242;
    *((_DWORD *)v15 + 38) = 0;
    v107[1] = 0LL;
    ExReleasePushLockExclusiveEx(v107, 0LL);
    KeLeaveCriticalRegion();
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v16 + 296));
    if ( *(int *)(*((_QWORD *)v15 + 12) + 8LL) > 0 )
    {
      v220 = *((_QWORD *)v81 + 4);
      v264 = 3LL;
      v261[0] = 0LL;
      v261[1] = 0LL;
      v262 = 0LL;
      v263 = 0LL;
      v266 = 0LL;
      v267 = 0LL;
      v265 = v15;
      VidSchCancelDeviceCommand(v220, (__int64)v261, 1, 0);
    }
    v108 = *(unsigned int **)(v16 + 536);
    v109 = 0LL;
    v110 = 0;
    NewAllocOwner = 0LL;
    v111 = (VIDMM_GLOBAL *)*v108;
    if ( ((unsigned int)v111 & 0x20000000) != 0 )
    {
      v127 = *(struct _VIDMM_LOCAL_ALLOC **)v15;
      v128 = *(_QWORD **)(*(_QWORD *)v15 + 40LL);
      v129 = *(_QWORD *)v15 + 40LL;
      while ( v128 != (_QWORD *)v129 )
      {
        v130 = (struct VIDMM_DEVICE *)(v128 - 5);
        v128 = (_QWORD *)*v128;
        if ( v130 != v15 && (*((_DWORD *)v130 + 7) & 4) == 0 )
          goto LABEL_146;
      }
      if ( v127 != v241 )
      {
        *((_BYTE *)v127 + 32) |= 2u;
LABEL_146:
        if ( *(struct _KTHREAD **)(v16 + 320) != KeGetCurrentThread() )
          WdLogSingleEntry5(0LL, 275LL, 4LL, v16 + 296, 0LL, 0LL);
        if ( *(int *)(v16 + 328) <= 0 )
        {
          WdLogSingleEntry1(1LL, 535LL);
          v229 = 535LL;
          DxgkLogInternalTriageEvent(v221, 262146LL);
        }
        v21 = (*(_DWORD *)(v16 + 328))-- == 1;
        if ( v21 )
        {
          *(_QWORD *)(v16 + 320) = 0LL;
          ExReleasePushLockExclusiveEx(v16 + 304, 0LL);
        }
        KeLeaveCriticalRegion();
        if ( v110 )
        {
          if ( QuadPart != (VIDMM_GLOBAL *)-39976LL && *((struct _KTHREAD **)QuadPart + 4998) == KeGetCurrentThread() )
          {
            WdLogSingleEntry1(1LL, 1453LL);
            v229 = 1453LL;
            DxgkLogInternalTriageEvent(v222, 262146LL);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)QuadPart + 39976, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v136 = *((_DWORD *)QuadPart + 10000);
              if ( v136 != -1 && (byte_1C00769C1 & 1) != 0 )
                McTemplateK0q_EtwWriteTransfer(v113, &EventBlockThread, v114, v136);
            }
            ExAcquirePushLockExclusiveEx((char *)QuadPart + 39976, 0LL);
          }
          v115 = (__int64 *)(v16 + 440);
          *((_QWORD *)QuadPart + 4998) = KeGetCurrentThread();
          if ( *(_QWORD *)(v16 + 440) )
          {
            v143 = (VIDMM_GLOBAL *)*(unsigned int *)(*((_QWORD *)QuadPart + 3) + 240LL);
            VIDMM_GLOBAL::RemoveAllocationFromDecommitList(
              v143,
              (struct _VIDMM_GLOBAL_ALLOC *)v16,
              *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*((_QWORD *)v241 + 1) + 16LL) + 8LL * (_QWORD)v143));
            if ( NewAllocOwner )
            {
              v144 = *(unsigned int *)(*((_QWORD *)QuadPart + 3) + 240LL);
              v145 = *(_QWORD *)(*((_QWORD *)NewAllocOwner[1] + 2) + 8 * v144) + 424LL;
              v146 = *(__int64 ***)(*(_QWORD *)(*((_QWORD *)NewAllocOwner[1] + 2) + 8 * v144) + 432LL);
              if ( *v146 != (__int64 *)v145 )
                goto LABEL_402;
              *v115 = v145;
              *(_QWORD *)(v16 + 448) = v146;
              *v146 = v115;
              *(_QWORD *)(v145 + 8) = v115;
            }
          }
          *((_QWORD *)QuadPart + 4998) = 0LL;
          ExReleasePushLockExclusiveEx((char *)QuadPart + 39976, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v231 && !v10 )
        {
          if ( *(_QWORD *)(v16 + 120) )
          {
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(v112);
            v116 = v241;
            LOBYTE(v229) = 1;
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, struct _VIDMM_LOCAL_ALLOC *))(**(_QWORD **)(v16 + 120) + 48LL))(
              *(_QWORD *)(v16 + 120),
              v16,
              0LL,
              0LL,
              v229,
              v241);
            VIDMM_GLOBAL::FlushPagingBufferInternal(QuadPart, *(_DWORD *)(v16 + 68) & 0x3F, 0, 0LL, 0LL, 0, 0);
          }
          else
          {
            v116 = v241;
          }
          if ( *(_QWORD *)(v16 + 240) )
            VIDMM_GLOBAL::EvictTemporaryAllocation(v112, (struct _VIDMM_GLOBAL_ALLOC *)v16);
          DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v16 + 296));
          if ( (*(_DWORD *)(v16 + 76) & 2) != 0 )
          {
            VIDMM_SEGMENT::UnlockAllocationBackingStore(QuadPart, (struct _VIDMM_GLOBAL_ALLOC *)v16, v116);
            v125 = *(_QWORD *)(v16 + 8);
            ExAcquirePushLockExclusiveEx((char *)QuadPart + 7096, 0LL);
            *((_QWORD *)QuadPart + 892) -= v125;
            ExReleasePushLockExclusiveEx((char *)QuadPart + 7096, 0LL);
            *(_DWORD *)(v16 + 76) &= ~2u;
          }
          if ( *(struct _KTHREAD **)(v16 + 320) != KeGetCurrentThread() )
            WdLogSingleEntry5(0LL, 275LL, 4LL, v16 + 296, 0LL, 0LL);
          if ( *(int *)(v16 + 328) <= 0 )
          {
            WdLogSingleEntry1(1LL, 535LL);
            v229 = 535LL;
            DxgkLogInternalTriageEvent(v223, 262146LL);
          }
          v21 = (*(_DWORD *)(v16 + 328))-- == 1;
          if ( v21 )
          {
            *(_QWORD *)(v16 + 320) = 0LL;
            ExReleasePushLockExclusiveEx(v16 + 304, 0LL);
          }
          KeLeaveCriticalRegion();
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)QuadPart + 39976, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v135 = *((_DWORD *)QuadPart + 10000);
              if ( v135 != -1 && (byte_1C00769C1 & 1) != 0 )
                McTemplateK0q_EtwWriteTransfer(v117, &EventBlockThread, v118, v135);
            }
            ExAcquirePushLockExclusiveEx((char *)QuadPart + 39976, 0LL);
          }
          v119 = (__int64 *)(v16 + 424);
          *((_QWORD *)QuadPart + 4998) = KeGetCurrentThread();
          v120 = *v119;
          if ( *v119 )
          {
            if ( *(__int64 **)(v120 + 8) != v119 )
              goto LABEL_402;
            v133 = (__int64 **)v119[1];
            if ( *v133 != v119 )
              goto LABEL_402;
            *v133 = (__int64 *)v120;
            *(_QWORD *)(v120 + 8) = v133;
            *v119 = 0LL;
          }
          *((_QWORD *)QuadPart + 4998) = 0LL;
          ExReleasePushLockExclusiveEx((char *)QuadPart + 39976, 0LL);
          KeLeaveCriticalRegion();
        }
        *((_DWORD *)v15 + 7) |= 4u;
        v121 = *((_QWORD *)v15 + 24);
        if ( v121 && _InterlockedExchangeAdd((volatile signed __int32 *)(v121 + 32), 0xFFFFFFFF) == 1 )
          ADAPTER_RENDER::NotifyDeferredDestructionComplete(
            *((ADAPTER_RENDER **)QuadPart + 2),
            *((struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 **)v15 + 24));
LABEL_181:
        v30 = 0LL;
        v12 = (struct _VIDSCH_SYNC_OBJECT *)v233;
        goto LABEL_30;
      }
      WdLogSingleEntry2(4LL, v16, v15);
      v131 = v241;
      *((_BYTE *)v241 + 32) |= 2u;
      NewAllocOwner = (struct VIDMM_ALLOC **)VIDMM_GLOBAL::FindNewAllocOwner(
                                               QuadPart,
                                               (struct _VIDMM_GLOBAL_ALLOC *)v16);
      v109 = NewAllocOwner;
      VIDMM_GLOBAL::EvictTemporaryResourceForCleanup(QuadPart, (struct _VIDMM_GLOBAL_ALLOC *)v16, v131);
      v231 = !VIDMM_GLOBAL::TransferAllocationOwnership(
                QuadPart,
                (struct _VIDMM_GLOBAL_ALLOC ***)v15,
                v131,
                (struct _VIDMM_LOCAL_ALLOC *)NewAllocOwner);
      if ( (*(_DWORD *)(v16 + 76) & 4) != 0 )
      {
        v109 = *(struct VIDMM_ALLOC ***)(v16 + 88);
        NewAllocOwner = v109;
      }
      WdLogSingleEntry1(4LL, *(_QWORD *)(v16 + 88));
    }
    else
    {
      v231 = 1;
    }
    v110 = 1;
    if ( (*(_BYTE *)(v16 + 76) & 0x60) == 0x60 )
      VIDMM_GLOBAL::TransferAllocationDecommit(
        v111,
        (struct _VIDMM_GLOBAL_ALLOC *)v16,
        v241,
        (struct _VIDMM_LOCAL_ALLOC *)v109);
    goto LABEL_146;
  }
  v27 = **(_QWORD **)v15;
  if ( *(int *)(v27 + 360) > 0 )
  {
    v28 = *(_DWORD *)(v27 + 68);
    if ( (v28 & 0x1E0000) == 0 || (*(_DWORD *)(v27 + 68) & 0x1E0000) == 0x40000 )
    {
      if ( (*(_BYTE *)(1616LL * (v28 & 0x3F) + *((_QWORD *)QuadPart + 5028) + 446) & 1) != 0 && (v28 & 0x40) == 0 )
      {
        WdLogSingleEntry1(3LL, v27);
        v30 = 3221225473LL;
        updated = -1073741823;
LABEL_29:
        v12 = (struct _VIDSCH_SYNC_OBJECT *)v233;
        goto LABEL_30;
      }
      v25 = -1LL;
    }
  }
  if ( ((*((_BYTE *)v15 + 25) & 1) != 0) | *((_DWORD *)v15 + 38) && *(_WORD *)(*(_QWORD *)(v27 + 536) + 4LL) < 2u )
  {
    v29 = VIDMM_GLOBAL::PageInOneAllocation((__int64)QuadPart, (__int64)v15, 0LL, a7, v9, (__int64 ***)v8, 0, -1LL);
    v12 = (struct _VIDSCH_SYNC_OBJECT *)v233;
    v30 = v29;
    updated = v29;
  }
  else
  {
LABEL_262:
    v12 = (struct _VIDSCH_SYNC_OBJECT *)v233;
    v30 = 0LL;
  }
LABEL_30:
  v31 = a3;
LABEL_31:
  if ( !*v31 )
  {
    v32 = (_DWORD *)*((_QWORD *)v13 + 3);
    if ( v32 )
      *v32 = v30;
    v33 = 0;
    v233 = a5;
    *((_QWORD *)QuadPart + 466) = (char *)QuadPart + 3720;
    *((_QWORD *)QuadPart + 465) = (char *)QuadPart + 3720;
    v21 = *((_DWORD *)QuadPart + 1754) == 0;
    v244 = v12;
    if ( !v21 )
    {
      do
      {
        v34 = *((_QWORD *)QuadPart + 5028);
        v35 = 0;
        v36 = 1616LL * v33;
        if ( *(_DWORD *)(v34 + v36 + 32) )
        {
          do
          {
            v37 = *(_QWORD *)(*((_QWORD *)QuadPart + 464) + 8LL * (v35 + *(_DWORD *)(v36 + v34 + 28)));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 152LL))(v37);
            v34 = *((_QWORD *)QuadPart + 5028);
            ++v35;
          }
          while ( v35 < *(_DWORD *)(v34 + v36 + 32) );
        }
        if ( (byte_1C00769C1 & 1) != 0 )
          McTemplateK0p_EtwWriteTransfer(v30, &EventPagingEndPreparation, v25, *((_QWORD *)QuadPart + v33 + 143));
        if ( *((_DWORD *)QuadPart + v33 + 414) != *((_DWORD *)QuadPart + v33 + 478)
          || *((_DWORD *)QuadPart + v33 + 542) != *((_DWORD *)QuadPart + v33 + 606) )
        {
          VIDMM_GLOBAL::FlushPagingBufferInternal(QuadPart, v33, 0, 0LL, 0LL, 0, 0);
        }
        v30 = *((_QWORD *)QuadPart + v33 + 143);
        if ( v30 )
          *(_DWORD *)(v30 + 172) = *(_DWORD *)(v30 + 168);
        ++v33;
      }
      while ( v33 < *((_DWORD *)QuadPart + 1754) );
      v13 = v246;
    }
    v38 = (_QWORD **)((char *)QuadPart + 44712);
    if ( *v38 != v38 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(QuadPart, 0xFFFFFFFF);
      v224 = *v38;
      if ( *v38 != v38 )
      {
        while ( 1 )
        {
          v225 = (_QWORD *)*v224;
          v226 = v224 - 38;
          if ( *(_QWORD **)(*v224 + 8LL) != v224 )
            break;
          v227 = (_QWORD *)v224[1];
          if ( (_QWORD *)*v227 != v224 )
            break;
          *v227 = v225;
          v225[1] = v227;
          *v224 = 0LL;
          v224 = v225;
          if ( (*((_DWORD *)v226 + 15) & 7) != 0 )
          {
            v228 = v226[4];
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 63LL, v226, v228, 0LL);
          }
          VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v226);
          if ( v224 == v38 )
            goto LABEL_46;
        }
LABEL_402:
        __fastfail(3u);
      }
    }
LABEL_46:
    if ( *((_BYTE *)QuadPart + 44728) )
    {
      VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)QuadPart + 2) + 744LL), 0xFFFFFFFFLL);
      *((_BYTE *)QuadPart + 44728) = 0;
    }
    if ( !v237 )
      goto LABEL_54;
    v39 = 0;
    v40 = 0LL;
    v41 = 0LL;
    v42 = *(_QWORD *)(*((_QWORD *)QuadPart + 2) + 744LL);
    v43 = 0;
    if ( *(_BYTE *)(v42 + 55) )
    {
      v41 = *(_QWORD **)(v42 + 280);
      if ( !*v41 )
      {
        VidSchSignalSyncObjectsFromCpu(1u, &v244, 0, (char *)&v233);
LABEL_52:
        v30 = *((unsigned int *)QuadPart + 1754);
        if ( (unsigned int)v30 > 1 )
          VidSchWaitForPagingFence(
            *(_QWORD *)(*((_QWORD *)QuadPart + 2) + 744LL),
            v244,
            v233,
            (unsigned int)((1 << v30) - 1),
            v229);
LABEL_54:
        *((_QWORD *)QuadPart + 879) = 0LL;
        *((_QWORD *)QuadPart + 880) = 0LL;
        *((_DWORD *)QuadPart + 2) = 0;
        goto LABEL_55;
      }
      v43 = *(_DWORD *)(v42 + 76);
    }
    else
    {
      v39 = *(_DWORD *)(v42 + 76);
      v40 = *(_QWORD **)(v42 + 264);
    }
    VidSchSignalSyncObjectsFromGpu(v43, (__int64)v41, v39, v40, 1u, (__int64)&v244, 0, &v233, 0);
    goto LABEL_52;
  }
LABEL_287:
  VIDMM_GLOBAL::EndPreparation(QuadPart, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
LABEL_55:
  if ( *(_DWORD *)v13 == 200 )
  {
    v44 = (struct _KEVENT *)(*((_QWORD *)v13 + 2) + 72LL);
LABEL_62:
    KeSetEvent(v44, 0, 0);
    goto LABEL_63;
  }
  if ( !*a3 && v15 && _InterlockedExchangeAdd((volatile signed __int32 *)v15 + 40, 0xFFFFFFFF) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v30) + 24) = v15;
    v44 = (struct _KEVENT *)((char *)v15 + 168);
    goto LABEL_62;
  }
LABEL_63:
  result = updated;
  *((_DWORD *)v13 + 21) = updated;
  return result;
}
