/*
 * XREFs of ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006C260
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008C500 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z @ 0x1C00B8308 (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B83D4 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001298 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00018C4 (-NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001B54 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0001BCC (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001D2C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007C30 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0012A28 (-InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0012AD8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     VidSchMarkDeviceAsError @ 0x1C0015D30 (VidSchMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C00178A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0023F2C (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024D70 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchCancelDeviceCommand @ 0x1C00339A4 (VidSchCancelDeviceCommand.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C0035700 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0060630 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060A40 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0062FB0 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0064888 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0064910 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C0064A40 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0066290 (-FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0066444 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C006BEB0 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C006DDC0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006E840 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0072874 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0073F00 (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0082E10 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0082FE0 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0083168 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0083320 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C0084EC0 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C0085590 (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C00857FC (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0085FF4 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C00861F4 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00868E8 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C0086968 (-TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z.c)
 *     ?NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0087094 (-NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C008743C (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_A.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C0087DFC (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?CalculateLockData@VIDMM_GLOBAL@@IEAA?AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z @ 0x1C0088C94 (-CalculateLockData@VIDMM_GLOBAL@@IEAA-AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C008AC88 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C008ADEC (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008B0B8 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AD428 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00AE298 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x1C00AE39C (-EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z.c)
 *     ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C00B094C (-PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 *     ?RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B1820 (-RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B1AA8 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C00B1AD8 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_.c)
 *     ?TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C00B2B08 (-TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C00B32B0 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C00B3440 (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B39A8 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B8578 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidSchiResumeFlipQueues @ 0x1C00CEEB0 (VidSchiResumeFlipQueues.c)
 *     VidSchWaitForPagingFence @ 0x1C00D1BF0 (VidSchWaitForPagingFence.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessDeferredCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_DEFERRED_COMMAND *a2,
        bool *a3,
        char a4,
        unsigned __int64 a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        bool a7,
        struct VIDMM_ALLOC **a8)
{
  __int64 *v9; // r13
  __int64 v10; // r14
  struct _VIDMM_GLOBAL_ALLOC ***v11; // r15
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rdi
  _QWORD *v15; // rax
  bool v16; // zf
  unsigned int v17; // edi
  __int64 v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  char v22; // r11
  struct _VIDMM_DEFERRED_COMMAND *v23; // r10
  int v24; // edx
  int inited; // ebx
  struct _VIDMM_DEFERRED_COMMAND *v26; // r13
  __int64 v27; // rbx
  unsigned __int64 v28; // rdx
  char v29; // di
  __int64 v30; // rcx
  VIDMM_GLOBAL *v31; // rcx
  VIDMM_GLOBAL *v32; // rcx
  __int64 v33; // rbx
  _QWORD *v34; // rax
  int v35; // eax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // r9d
  __int64 v43; // rbx
  VIDMM_DEVICE *v44; // rdx
  VIDMM_GLOBAL *v45; // rcx
  VIDMM_DEVICE *v46; // r8
  int v47; // eax
  __int64 v48; // rax
  int v49; // eax
  int v50; // r9d
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  struct _VIDMM_LOCAL_ALLOC *NewAllocOwner; // r13
  char v55; // di
  __int64 v56; // r9
  struct _VIDMM_GLOBAL_ALLOC ***v57; // rax
  char v58; // al
  struct _VIDMM_LOCAL_ALLOC *v59; // rbx
  __int64 v60; // rax
  bool v61; // al
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rbx
  _QWORD *v66; // rax
  int v67; // eax
  __int64 v68; // rax
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r8
  int v75; // r9d
  __int64 *v76; // rdi
  struct _VIDMM_LOCAL_ALLOC *v77; // r12
  VIDMM_GLOBAL *v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 **v81; // rcx
  VIDMM_GLOBAL *v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // r8
  int v85; // r9d
  __int64 *v86; // r14
  __int64 v87; // rax
  __int64 **v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rcx
  unsigned int v91; // ecx
  int v92; // edx
  __int64 v93; // rax
  int v94; // eax
  struct _VIDMM_GLOBAL_ALLOC *v95; // rbx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rax
  int updated; // eax
  struct _KEVENT *v100; // rcx
  unsigned int v101; // eax
  _QWORD **v102; // r12
  _QWORD *i; // r14
  _QWORD *j; // rbx
  __int64 v105; // rdi
  VIDMM_GLOBAL *v106; // rcx
  int v107; // eax
  PRKPROCESS *v108; // rcx
  struct VIDMM_ALLOC **v109; // r12
  bool *v110; // r14
  unsigned int v111; // edx
  __int64 v112; // rbx
  struct _D3DDDI_SEGMENTPREFERENCE v113; // edi
  __int64 v114; // r13
  int v115; // ecx
  int v116; // eax
  unsigned __int8 v117; // r12
  __int64 v118; // rcx
  unsigned int v119; // r8d
  unsigned int v120; // r9d
  int v121; // eax
  int v122; // r9d
  int v123; // ebx
  int v124; // eax
  char v125; // dl
  __int64 v126; // r8
  __int64 v127; // r10
  char v128; // bl
  __int64 v129; // r9
  __int64 v130; // r8
  int v131; // eax
  char v132; // r9
  unsigned __int64 v133; // rcx
  unsigned __int64 v134; // rbx
  int v135; // eax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // rax
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rax
  __int64 v144; // r13
  __int64 v145; // r12
  unsigned int v146; // r9d
  __int64 v147; // rcx
  __int64 v148; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v149; // rbx
  char v150; // di
  _QWORD *v151; // rax
  int *v152; // rax
  unsigned int v153; // r12d
  unsigned int v154; // ebx
  __int64 v155; // r14
  __int64 v156; // rcx
  _QWORD **v157; // r12
  __int64 v158; // rdx
  _QWORD *v159; // rdi
  _QWORD *v160; // rax
  _QWORD *v161; // r14
  _QWORD *v162; // rcx
  __int64 v163; // rbx
  _QWORD *v164; // rax
  __int64 v165; // r8
  _QWORD *v166; // r9
  _QWORD *v167; // rdx
  __int64 v168; // rcx
  unsigned int v169; // eax
  __int64 result; // rax
  int v171; // [rsp+20h] [rbp-E0h]
  unsigned int v172; // [rsp+40h] [rbp-C0h]
  bool v173; // [rsp+44h] [rbp-BCh]
  bool v174; // [rsp+44h] [rbp-BCh]
  bool v177; // [rsp+54h] [rbp-ACh]
  unsigned int v178; // [rsp+54h] [rbp-ACh]
  struct _VIDMM_LOCAL_ALLOC *v180; // [rsp+60h] [rbp-A0h]
  unsigned int v181; // [rsp+60h] [rbp-A0h]
  bool v182; // [rsp+70h] [rbp-90h] BYREF
  int v183; // [rsp+74h] [rbp-8Ch]
  int v184; // [rsp+78h] [rbp-88h]
  int v185; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned __int64 v186; // [rsp+80h] [rbp-80h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v187; // [rsp+88h] [rbp-78h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+90h] [rbp-70h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v189; // [rsp+98h] [rbp-68h]
  char v190[8]; // [rsp+A0h] [rbp-60h] BYREF
  DXGPUSHLOCK *v191; // [rsp+A8h] [rbp-58h]
  int v192; // [rsp+B0h] [rbp-50h]
  char v193[8]; // [rsp+B8h] [rbp-48h] BYREF
  DXGPUSHLOCK *v194; // [rsp+C0h] [rbp-40h]
  int v195; // [rsp+C8h] [rbp-38h]
  char v196[8]; // [rsp+D0h] [rbp-30h] BYREF
  DXGPUSHLOCK *v197; // [rsp+D8h] [rbp-28h]
  int v198; // [rsp+E0h] [rbp-20h]
  char v199[8]; // [rsp+E8h] [rbp-18h] BYREF
  DXGPUSHLOCK *v200; // [rsp+F0h] [rbp-10h]
  int v201; // [rsp+F8h] [rbp-8h]
  char v202[16]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v203[2]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v204; // [rsp+130h] [rbp+30h]
  __int128 v205; // [rsp+140h] [rbp+40h]
  __int128 v206; // [rsp+150h] [rbp+50h]
  __int128 v207; // [rsp+160h] [rbp+60h]
  __int128 v208; // [rsp+170h] [rbp+70h]
  __int128 v209; // [rsp+180h] [rbp+80h]
  __int64 v210; // [rsp+190h] [rbp+90h]
  struct _KAPC_STATE ApcState; // [rsp+1A0h] [rbp+A0h] BYREF

  v189 = a6;
  v9 = 0LL;
  v10 = 0LL;
  *a8 = 0LL;
  v11 = (struct _VIDMM_GLOBAL_ALLOC ***)*((_QWORD *)a2 + 2);
  v180 = 0LL;
  v177 = 0;
  if ( v11 )
  {
    v9 = (__int64 *)*v11;
    v10 = (__int64)**v11;
    v180 = *(struct _VIDMM_LOCAL_ALLOC **)(v10 + 96);
    v177 = (*(_DWORD *)(v10 + 76) & 0x20000000) != 0;
  }
  v12 = *((_QWORD *)a2 + 1);
  v173 = 0;
  v172 = 0;
  if ( !v12 )
    v12 = (__int64)v11[1];
  *a3 = 0;
  v13 = *((int *)this + 2);
  v14 = *(int *)a2;
  if ( (_DWORD)v13 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0LL, a2);
    v15[3] = 270LL;
    v15[4] = 64LL;
    v15[5] = this;
    v15[6] = v13;
    v15[7] = v14;
    WdLogEvent5_WdCriticalError(v15);
  }
  ++*((_QWORD *)this + 576);
  v16 = *((_DWORD *)this + 1750) == 0;
  *((_DWORD *)this + 2) = v14;
  v17 = 0;
  *((_DWORD *)this + 12) = -1;
  *((_QWORD *)this + 878) = v12;
  *((_QWORD *)this + 879) = v11;
  if ( !v16 )
  {
    do
    {
      v18 = v17;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0p_EtwWriteTransfer(0LL, &EventPagingStartPreparation, (__int64)a3, *((_QWORD *)this + v17 + 143));
      if ( *((_DWORD *)this + v17 + 414) != *((_DWORD *)this + v17 + 478)
        || *((_DWORD *)this + v17 + 542) != *((_DWORD *)this + v17 + 606) )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0LL, a2);
        v19[3] = 270LL;
        v19[4] = 33LL;
        v19[5] = this;
        v19[6] = 0LL;
        v19[7] = 0LL;
        WdLogEvent5_WdCriticalError(v19);
      }
      ++v17;
      *((_DWORD *)this + v18 + 1024) = *((_DWORD *)this + v18 + 414);
      *((_DWORD *)this + v18 + 1088) = *((_DWORD *)this + v18 + 542);
      *((_DWORD *)this + v18 + 960) = 0;
    }
    while ( v17 < *((_DWORD *)this + 1750) );
  }
  v20 = *(_QWORD *)(v12 + 32);
  v21 = -1LL;
  v22 = 1;
  if ( *(_BYTE *)(v20 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 200), 0, 0)
    || *(_BYTE *)(*((_QWORD *)this + 3) + 2646LL)
    || *(_BYTE *)(*((_QWORD *)this + 2) + 889LL) )
  {
    v23 = a2;
    *((_DWORD *)a2 + 19) = -1071775232;
    *((_BYTE *)a2 + 72) = 1;
    goto LABEL_21;
  }
  v23 = a2;
  if ( *((_BYTE *)a2 + 72) )
  {
LABEL_21:
    v20 = *(unsigned int *)v23;
    if ( (unsigned int)(v20 - 203) <= 0xB )
    {
      v24 = 2281;
      if ( _bittest(&v24, v20 - 203) )
      {
        inited = *((_DWORD *)v23 + 19);
        v172 = inited;
LABEL_24:
        v26 = a2;
        goto LABEL_279;
      }
    }
    if ( (_DWORD)v20 == 113 )
      *((_BYTE *)v23 + 64) = 0;
  }
  v27 = *(int *)v23;
  v28 = 0x1C0000000uLL;
  switch ( (int)v27 )
  {
    case 113:
      updated = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
                  (VIDMM_GLOBAL *)v20,
                  (struct _VIDMM_DEFERRED_COMMAND *)((char *)v23 + 32),
                  a8);
      goto LABEL_184;
    case 119:
      updated = VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
                  this,
                  *((struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **)v23 + 4),
                  a8);
LABEL_184:
      v172 = updated;
      inited = updated;
      if ( updated != -1073741267 )
        goto LABEL_24;
      *a3 = 1;
      goto LABEL_186;
    case 200:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v20) + 24) = v11;
      if ( *((_DWORD *)v11 + 26) || *((_DWORD *)v11 + 39) )
      {
        v33 = *((int *)v11 + 26);
        v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v28);
        v34[3] = 270LL;
        v34[4] = 42LL;
        v34[5] = this;
        v34[6] = v11;
        v34[7] = v33;
        WdLogEvent5_WdCriticalError(v34);
      }
      v35 = *((_DWORD *)v11 + 7) & 3;
      if ( v35 == 2 )
      {
        VIDMM_GLOBAL::NotifyAllocationEviction(this, (VIDMM_DEVICE **)v11, 0, 0LL, 0LL);
      }
      else if ( v35 == 1 )
      {
        v28 = (unsigned __int64)v11[7];
        v36 = v11 + 7;
        if ( *(struct _VIDMM_GLOBAL_ALLOC ****)(v28 + 8) != v11 + 7 )
          goto LABEL_307;
        v20 = (__int64)v11[8];
        if ( *(_QWORD **)v20 != v36 )
          goto LABEL_307;
        *(_QWORD *)v20 = v28;
        *(_QWORD *)(v28 + 8) = v20;
        *((_DWORD *)v11 + 7) &= 0xFFFFFFFC;
        v11[8] = 0LL;
        *v36 = 0LL;
      }
      if ( (*((_BYTE *)v11 + 25) & 1) != 0 )
        VIDMM_GLOBAL::UnpinOneAllocation(this, v11, 3LL);
      if ( (*((_DWORD *)v11 + 7) & 0x10) != 0 && g_IsInternalRelease )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v28);
        v37[3] = 270LL;
        v37[4] = 9LL;
        v37[5] = 0LL;
        v37[6] = 0LL;
        v37[7] = 0LL;
        WdLogEvent5_WdCriticalError(v37);
      }
      if ( v11 == *(struct _VIDMM_GLOBAL_ALLOC ****)(v12 + 248) )
        *(_QWORD *)(v12 + 248) = 0LL;
      v38 = *(_QWORD *)(v12 + 16) + 360LL;
      if ( *(_QWORD *)(v12 + 16) != -360LL
        && *(struct _KTHREAD **)(*(_QWORD *)(v12 + 16) + 368LL) == KeGetCurrentThread() )
      {
        v39 = WdLogNewEntry5_WdAssertion(v20, v28, v21);
        *(_QWORD *)(v39 + 24) = 1571LL;
        WdLogEvent5_WdAssertion(v39);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v38, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v42 = *(_DWORD *)(v38 + 24);
          if ( v42 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v40, (const EVENT_DESCRIPTOR *)"g", v41, v42);
        }
        ExAcquirePushLockExclusiveEx(v38, 0LL);
      }
      *(_QWORD *)(v38 + 8) = KeGetCurrentThread();
      if ( *((_BYTE *)v11 + 25) & 1 | *((_DWORD *)v11 + 38) )
      {
        VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v12 + 16));
        VIDMM_DEVICE::NotifyAllocationEvicted((VIDMM_DEVICE *)v12, (struct VIDMM_ALLOC *)v11);
        VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v12 + 16));
      }
      *((_DWORD *)v11 + 38) = 0;
      *(_QWORD *)(v38 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v38, 0LL);
      KeLeaveCriticalRegion();
      v43 = *(_QWORD *)(v10 + 312);
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v43 + 16) == KeGetCurrentThread() )
      {
        v47 = *(_DWORD *)(v43 + 24);
        if ( v47 <= 0 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v45, v44, v46);
          *(_QWORD *)(v48 + 24) = 661LL;
          WdLogEvent5_WdAssertion(v48);
          v47 = *(_DWORD *)(v43 + 24);
        }
        v49 = v47 + 1;
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v43, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v50 = *(_DWORD *)(v43 + 28);
            if ( v50 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer((__int64)v45, (const EVENT_DESCRIPTOR *)"g", (__int64)v46, v50);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v43 + 8));
          ExAcquirePushLockExclusiveEx(v43, 0LL);
        }
        if ( *(_QWORD *)(v43 + 16) )
        {
          v51 = WdLogNewEntry5_WdAssertion(v45, v44, v46);
          *(_QWORD *)(v51 + 24) = 685LL;
          WdLogEvent5_WdAssertion(v51);
        }
        if ( *(_DWORD *)(v43 + 24) )
        {
          v52 = WdLogNewEntry5_WdAssertion(v45, v44, v46);
          *(_QWORD *)(v52 + 24) = 686LL;
          WdLogEvent5_WdAssertion(v52);
        }
        *(_QWORD *)(v43 + 16) = KeGetCurrentThread();
        v49 = 1;
      }
      *(_DWORD *)(v43 + 24) = v49;
      if ( *((int *)v11[12] + 2) > 0 )
      {
        v53 = *(_QWORD *)(v12 + 32);
        v204 = 0LL;
        DWORD2(v204) = 3;
        v205 = (unsigned __int64)v11;
        memset(v203, 0, sizeof(v203));
        v210 = 0LL;
        v206 = 0LL;
        v207 = 0LL;
        v208 = 0LL;
        v209 = 0LL;
        VidSchCancelDeviceCommand(v53, (__int64)v203, 1, 0);
      }
      NewAllocOwner = 0LL;
      v55 = 0;
      if ( (**(_DWORD **)(v10 + 496) & 0x20000000) == 0 )
      {
        v59 = v180;
        v173 = 1;
LABEL_95:
        v55 = 1;
        if ( (*(_BYTE *)(v10 + 84) & 0xC0) == 0xC0 )
          VIDMM_GLOBAL::TransferAllocationDecommit(v45, (struct _VIDMM_GLOBAL_ALLOC *)v10, v59, NewAllocOwner);
        goto LABEL_97;
      }
      v44 = (VIDMM_DEVICE *)*v11;
      v45 = (*v11)[5];
      v56 = (__int64)(*v11 + 5);
      v46 = (VIDMM_DEVICE *)*v11;
      if ( v45 == (VIDMM_GLOBAL *)v56 )
      {
LABEL_86:
        v58 = 1;
      }
      else
      {
        while ( 1 )
        {
          v57 = (struct _VIDMM_GLOBAL_ALLOC ***)((char *)v45 - 40);
          v45 = *(VIDMM_GLOBAL **)v45;
          if ( v57 != v11 && (*((_DWORD *)v57 + 7) & 4) == 0 )
            break;
          v46 = (VIDMM_DEVICE *)*v11;
          if ( v45 == (VIDMM_GLOBAL *)v56 )
            goto LABEL_86;
        }
        v58 = 0;
      }
      if ( v58 )
      {
        v59 = v180;
        if ( v46 != v180 )
        {
          *((_BYTE *)v44 + 32) |= 2u;
          goto LABEL_97;
        }
        v60 = WdLogNewEntry5_WdEvent(v45, v44);
        *(_QWORD *)(v60 + 24) = v10;
        *(_QWORD *)(v60 + 32) = v11;
        WdLogEvent5_WdEvent(v60);
        *((_BYTE *)v180 + 32) |= 2u;
        NewAllocOwner = VIDMM_GLOBAL::FindNewAllocOwner(this, (struct _VIDMM_GLOBAL_ALLOC *)v10);
        VIDMM_GLOBAL::EvictTemporaryResourceForCleanup(this, (struct _VIDMM_GLOBAL_ALLOC *)v10, v180);
        v61 = VIDMM_GLOBAL::TransferAllocationOwnership(this, (struct VIDMM_ALLOC *)v11, v180, NewAllocOwner);
        v63 = *(unsigned int *)(v10 + 84);
        v173 = !v61;
        if ( (v63 & 4) != 0 )
          NewAllocOwner = *(struct _VIDMM_LOCAL_ALLOC **)(v10 + 96);
        v64 = WdLogNewEntry5_WdEvent(v63, v62);
        *(_QWORD *)(v64 + 24) = *(_QWORD *)(v10 + 96);
        WdLogEvent5_WdEvent(v64);
        goto LABEL_95;
      }
LABEL_97:
      v65 = *(_QWORD *)(v10 + 312);
      if ( *(struct _KTHREAD **)(v65 + 16) != KeGetCurrentThread() )
      {
        v66 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v45, v44);
        v66[4] = 4LL;
        v66[3] = 275LL;
        v66[5] = v65;
        v66[6] = 0LL;
        v66[7] = 0LL;
        WdLogEvent5_WdCriticalError(v66);
      }
      v67 = *(_DWORD *)(v65 + 24);
      if ( v67 <= 0 )
      {
        v68 = WdLogNewEntry5_WdAssertion(v45, v44, v46);
        *(_QWORD *)(v68 + 24) = 705LL;
        WdLogEvent5_WdAssertion(v68);
        v67 = *(_DWORD *)(v65 + 24);
      }
      v69 = v67 - 1;
      *(_DWORD *)(v65 + 24) = v69;
      if ( !v69 )
      {
        *(_QWORD *)(v65 + 16) = 0LL;
        ExReleasePushLockExclusiveEx(v65, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( v55 )
      {
        if ( this != (VIDMM_GLOBAL *)-39968LL && *((struct _KTHREAD **)this + 4997) == KeGetCurrentThread() )
        {
          v72 = WdLogNewEntry5_WdAssertion(v71, v70, v21);
          *(_QWORD *)(v72 + 24) = 1571LL;
          WdLogEvent5_WdAssertion(v72);
        }
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39968, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v75 = *((_DWORD *)this + 9998);
            if ( v75 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v73, (const EVENT_DESCRIPTOR *)"g", v74, v75);
          }
          ExAcquirePushLockExclusiveEx((char *)this + 39968, 0LL);
        }
        v76 = (__int64 *)(v10 + 408);
        v77 = v180;
        *((_QWORD *)this + 4997) = KeGetCurrentThread();
        if ( *(_QWORD *)(v10 + 408) )
        {
          v78 = (VIDMM_GLOBAL *)*(unsigned int *)(*((_QWORD *)this + 3) + 232LL);
          VIDMM_GLOBAL::RemoveAllocationFromDecommitList(
            v78,
            (struct _VIDMM_GLOBAL_ALLOC *)v10,
            *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*((_QWORD *)v180 + 1) + 16LL) + 8LL * (_QWORD)v78));
          if ( NewAllocOwner )
          {
            v79 = *(unsigned int *)(*((_QWORD *)this + 3) + 232LL);
            v80 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NewAllocOwner + 1) + 16LL) + 8 * v79) + 424LL;
            v81 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)NewAllocOwner + 1) + 16LL) + 8 * v79) + 432LL);
            if ( *v81 != (__int64 *)v80 )
              goto LABEL_307;
            *v76 = v80;
            *(_QWORD *)(v10 + 416) = v81;
            *v81 = v76;
            *(_QWORD *)(v80 + 8) = v76;
          }
        }
        *((_QWORD *)this + 4997) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 39968, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v77 = v180;
      }
      if ( v173 && !v177 )
      {
        v82 = *(VIDMM_GLOBAL **)(v10 + 128);
        if ( v82 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(v82);
            v82 = *(VIDMM_GLOBAL **)(v10 + 128);
          }
          LOBYTE(v171) = 1;
          (*(void (__fastcall **)(VIDMM_GLOBAL *, __int64, _QWORD, _QWORD, int, struct _VIDMM_LOCAL_ALLOC *))(*(_QWORD *)v82 + 48LL))(
            v82,
            v10,
            0LL,
            0LL,
            v171,
            v77);
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v10 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
        }
        if ( *(_QWORD *)(v10 + 256) )
          VIDMM_GLOBAL::EvictTemporaryAllocation(v82, (struct _VIDMM_GLOBAL_ALLOC *)v10);
        if ( (*(_DWORD *)(v10 + 84) & 2) != 0 )
        {
          VIDMM_SEGMENT::UnlockAllocationBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v10, v77);
          VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v10 + 8));
          *(_DWORD *)(v10 + 84) &= ~2u;
        }
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39968, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v85 = *((_DWORD *)this + 9998);
            if ( v85 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v83, (const EVENT_DESCRIPTOR *)"g", v84, v85);
          }
          ExAcquirePushLockExclusiveEx((char *)this + 39968, 0LL);
        }
        v86 = (__int64 *)(v10 + 392);
        *((_QWORD *)this + 4997) = KeGetCurrentThread();
        v87 = *v86;
        if ( *v86 )
        {
          if ( *(__int64 **)(v87 + 8) != v86 )
            goto LABEL_307;
          v88 = (__int64 **)v86[1];
          if ( *v88 != v86 )
            goto LABEL_307;
          *v88 = (__int64 *)v87;
          *(_QWORD *)(v87 + 8) = v88;
          *v86 = 0LL;
        }
        *((_QWORD *)this + 4997) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 39968, 0LL);
        KeLeaveCriticalRegion();
      }
      *((_DWORD *)v11 + 7) |= 4u;
      v20 = (__int64)v11[24];
      if ( v20 && _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 32), 0xFFFFFFFF) == 1 )
        ADAPTER_RENDER::NotifyDeferredDestructionComplete(
          *((ADAPTER_RENDER **)this + 2),
          (struct DXGTERMINATIONTRACKER *)v11[24]);
LABEL_277:
      v26 = a2;
LABEL_278:
      inited = v172;
LABEL_279:
      if ( *a3 )
      {
LABEL_186:
        VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
        v26 = a2;
        goto LABEL_187;
      }
      v152 = (int *)*((_QWORD *)v26 + 3);
      if ( v152 )
        *v152 = inited;
      v187 = v189;
      v153 = 0;
      v186 = a5;
      *((_QWORD *)this + 466) = (char *)this + 3720;
      *((_QWORD *)this + 465) = (char *)this + 3720;
      if ( *((_DWORD *)this + 1750) )
      {
        do
        {
          v154 = 0;
          v155 = 1584LL * v153;
          if ( *(_DWORD *)(*((_QWORD *)this + 5027) + v155 + 24) )
          {
            do
            {
              v156 = *(_QWORD *)(*((_QWORD *)this + 464)
                               + 8LL * (v154 + *(_DWORD *)(*((_QWORD *)this + 5027) + v155 + 20)));
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v156 + 160LL))(v156);
              ++v154;
            }
            while ( v154 < *(_DWORD *)(*((_QWORD *)this + 5027) + v155 + 24) );
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0p_EtwWriteTransfer(v20, &EventPagingEndPreparation, v21, *((_QWORD *)this + v153 + 143));
          if ( *((_DWORD *)this + v153 + 414) != *((_DWORD *)this + v153 + 478)
            || *((_DWORD *)this + v153 + 542) != *((_DWORD *)this + v153 + 606) )
          {
            VIDMM_GLOBAL::FlushPagingBufferInternal(this, v153, 0, 0LL, 0LL, 0, 0);
          }
          v20 = *((_QWORD *)this + v153 + 143);
          if ( v20 )
            *(_DWORD *)(v20 + 172) = *(_DWORD *)(v20 + 168);
          ++v153;
        }
        while ( v153 < *((_DWORD *)this + 1750) );
        v26 = a2;
      }
      v157 = (_QWORD **)((char *)this + 44672);
      if ( *v157 != v157 )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
        v159 = *v157;
        if ( *v157 != v157 )
        {
          while ( 1 )
          {
            v160 = (_QWORD *)*v159;
            v161 = v159 - 37;
            if ( *(_QWORD **)(*v159 + 8LL) != v159 )
              break;
            v162 = (_QWORD *)v159[1];
            if ( (_QWORD *)*v162 != v159 )
              break;
            *v162 = v160;
            v160[1] = v162;
            *v159 = 0LL;
            v159 = v160;
            if ( (*((_DWORD *)v161 + 13) & 7) != 0 )
            {
              v163 = v161[4];
              v164 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v162, v158);
              v164[6] = v163;
              v164[7] = 0LL;
              v164[3] = 270LL;
              v164[4] = 63LL;
              v164[5] = v161;
              WdLogEvent5_WdCriticalError(v164);
            }
            VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v161);
            if ( v159 == v157 )
              goto LABEL_301;
          }
LABEL_307:
          __fastfail(3u);
        }
      }
LABEL_301:
      if ( *((_BYTE *)this + 44688) )
      {
        VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL), 0xFFFFFFFFLL);
        *((_BYTE *)this + 44688) = 0;
      }
      if ( a4 )
      {
        v165 = 0LL;
        v166 = 0LL;
        v167 = 0LL;
        v168 = *(_QWORD *)(*((_QWORD *)this + 2) + 624LL);
        v169 = 0;
        if ( *(_BYTE *)(v168 + 55) )
        {
          v167 = *(_QWORD **)(v168 + 272);
          if ( !*v167 )
          {
            VidSchSignalSyncObjectsFromCpu(1LL, &v187, 0LL, (char *)&v186);
            goto LABEL_311;
          }
          v169 = *(_DWORD *)(v168 + 68);
        }
        else
        {
          v165 = *(unsigned int *)(v168 + 68);
          v166 = *(_QWORD **)(v168 + 256);
        }
        VidSchSignalSyncObjectsFromGpu(v169, (__int64)v167, v165, v166, 1u, (__int64)&v187, 0, &v186);
LABEL_311:
        v20 = *((unsigned int *)this + 1750);
        if ( (unsigned int)v20 > 1 )
          VidSchWaitForPagingFence(
            *(_QWORD *)(*((_QWORD *)this + 2) + 624LL),
            v187,
            v186,
            (unsigned int)((1 << v20) - 1));
      }
      *((_QWORD *)this + 878) = 0LL;
      *((_QWORD *)this + 879) = 0LL;
      *((_DWORD *)this + 2) = 0;
LABEL_187:
      if ( *(_DWORD *)v26 == 200 )
      {
        v100 = (struct _KEVENT *)(*((_QWORD *)v26 + 2) + 72LL);
LABEL_320:
        KeSetEvent(v100, 0, 0);
        goto LABEL_321;
      }
      if ( !*a3 && v11 && _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 40, 0xFFFFFFFF) == 1 )
      {
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v20) + 24) = v11;
        v100 = (struct _KEVENT *)(v11 + 21);
        goto LABEL_320;
      }
LABEL_321:
      result = v172;
      *((_DWORD *)v26 + 19) = v172;
      return result;
    case 203:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v20) + 24) = v11;
      if ( *(_BYTE *)(v10 + 88) )
      {
        v26 = a2;
        inited = -1071775482;
        v172 = -1071775482;
      }
      else
      {
        v89 = *(unsigned int *)(*(_QWORD *)(v10 + 496) + 12LL);
        if ( !(_DWORD)v89 && (**(_DWORD **)(v10 + 496) & 0x20000) == 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v89);
          if ( *(_QWORD *)(v10 + 128) )
          {
            v90 = **(unsigned int **)(v10 + 496);
            if ( (v90 & 0x40000000) == 0 && ((v90 & 0x20000000) == 0 || (int)v90 >= 0) && (v90 & 0x80000) == 0 )
            {
              if ( g_IsInternalReleaseOrDbg )
                WdLogNewEntry5_WdTrace(v90);
              VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                *(VIDMM_WORKER_THREAD **)this,
                (struct _VIDMM_GLOBAL_ALLOC *)v10);
              VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v11);
              VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
            }
          }
        }
        v91 = 4;
        v92 = **(_DWORD **)(v10 + 496);
        if ( (v92 & 0x20000) != 0 )
        {
          v26 = a2;
          v91 = *((_DWORD *)a2 + 8);
        }
        else
        {
          if ( (v92 & 0x40000000) != 0 || v92 < 0 )
            v91 = 3;
          v26 = a2;
        }
        v93 = *((_QWORD *)v26 + 5);
        if ( v93 != -1 )
        {
          *(_DWORD *)(v10 + 80) |= 0x800u;
          v93 = *((_QWORD *)v26 + 5);
        }
        v94 = VIDMM_GLOBAL::PageInOneAllocation(this, v11, v91, a7, a3, a8, *((_DWORD *)v26 + 9), v93);
        *(_DWORD *)(v10 + 80) &= ~0x800u;
        inited = v94;
        v172 = v94;
        if ( v94 >= 0 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 496) + 12LL));
        VIDMM_GLOBAL::RecommitTrimmedList(this);
      }
      goto LABEL_279;
    case 206:
      v95 = **v11;
      if ( !*((_DWORD *)v95 + 84) )
        goto LABEL_175;
      if ( VIDMM_GLOBAL::NeedsApertureForLock(this, **v11) && (*((_DWORD *)v95 + 19) & 0x40) == 0 )
      {
        v98 = WdLogNewEntry5_WdWarning(v97, v96);
        *(_QWORD *)(v98 + 24) = v95;
        WdLogEvent5_WdWarning(v98);
        v26 = a2;
        inited = -1073741823;
        v172 = -1073741823;
        goto LABEL_279;
      }
      v21 = -1LL;
LABEL_175:
      v20 = (unsigned __int8)(v22 & *((_BYTE *)v11 + 25));
      if ( !((unsigned int)v20 | *((_DWORD *)v11 + 38)) || *(_WORD *)(*((_QWORD *)v95 + 62) + 4LL) >= 2u )
        goto LABEL_277;
      v26 = a2;
      inited = VIDMM_GLOBAL::PageInOneAllocation(this, v11, 0LL, a7, a3, a8, 0, -1LL);
      v172 = inited;
      goto LABEL_279;
    case 207:
      if ( !*((_DWORD *)v11 + 38) && (*((_BYTE *)v11 + 25) & 1) == 0 )
        VIDMM_GLOBAL::EvictOneAllocation(
          (struct VIDMM_ALLOC **)this,
          (struct VIDMM_ALLOC *)v11,
          *((_BYTE *)v23 + 32) & 1);
      _InterlockedDecrement((volatile signed __int32 *)v11 + 41);
      goto LABEL_277;
    case 208:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v20) + 24) = v10;
      KeEnterCriticalRegion();
      v105 = v10 + 472;
      ExAcquirePushLockExclusiveEx(v10 + 472, 0LL);
      if ( *(_QWORD *)(v10 + 256) )
      {
        VIDMM_GLOBAL::EvictTemporaryAllocation(v106, (struct _VIDMM_GLOBAL_ALLOC *)v10);
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v10 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
      }
      if ( !*((_BYTE *)a2 + 52) )
      {
        *(_QWORD *)((char *)a2 + 44) = *(_QWORD *)VIDMM_GLOBAL::CalculateLockData(this, v202, v11);
        *((_BYTE *)a2 + 52) = 1;
      }
      v107 = *((_DWORD *)a2 + 11);
      if ( v107 == 4 )
      {
        v109 = a8;
        v26 = a2;
        v110 = a3;
      }
      else
      {
        v108 = (PRKPROCESS *)v9[1];
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(*v108, &ApcState);
        v109 = a8;
        v110 = a3;
        v26 = a2;
        v172 = VIDMM_GLOBAL::LockInternal(
                 this,
                 (struct _VIDMM_DEFERRED_COMMAND *)((char *)a2 + 44),
                 (__int64 **)v11,
                 *((void ***)a2 + 4),
                 *((_DWORD *)a2 + 10),
                 a3,
                 a8);
        KeUnstackDetachProcess(&ApcState);
        v107 = *((_DWORD *)a2 + 11);
      }
      if ( v107 == 4 )
      {
        inited = VIDMM_GLOBAL::LockInternal(
                   this,
                   (struct _VIDMM_DEFERRED_COMMAND *)((char *)a2 + 44),
                   (__int64 **)v11,
                   *((void ***)v26 + 4),
                   *((_DWORD *)v26 + 10),
                   v110,
                   v109);
        v172 = inited;
      }
      else
      {
        inited = v172;
      }
      ExReleasePushLockExclusiveEx(v105, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_279;
    case 209:
      v26 = a2;
      inited = VIDMM_GLOBAL::InitContextAllocation(this, (struct VIDMM_ALLOC *)v11, 1u, a3, a8);
      v172 = inited;
      goto LABEL_279;
    case 210:
      v20 = *((_BYTE *)v11 + 25) & 1;
      if ( !((unsigned int)v20 | *((_DWORD *)v11 + 38)) || *(_WORD *)(*(_QWORD *)(v10 + 496) + 4LL) >= 2u )
        goto LABEL_277;
      v101 = VIDMM_GLOBAL::PageInOneAllocation(this, v11, 0LL, a7, a3, a8, 0, -1LL);
      *(_DWORD *)(v10 + 80) &= ~0x40u;
      inited = v101;
      v26 = a2;
      v172 = v101;
      goto LABEL_279;
    case 211:
      v102 = (_QWORD **)(*((_QWORD *)v23 + 4) + 288LL);
      for ( i = *v102; i != v102; i = (_QWORD *)*i )
      {
        for ( j = (_QWORD *)*(i - 2); j != i - 2; j = (_QWORD *)*j )
          VIDMM_GLOBAL::EvictOneAllocation((struct VIDMM_ALLOC **)this, (struct VIDMM_ALLOC *)(j - 5), 0LL);
      }
      goto LABEL_277;
    case 212:
      VIDMM_GLOBAL::UpdateAllocationPriority(this, (struct VIDMM_ALLOC *)v11, *((_DWORD *)v23 + 8));
      goto LABEL_277;
    case 213:
      VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)v12);
      VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)v12);
      v29 = 0;
      if ( !*(_QWORD *)(v12 + 184) )
      {
        v29 = 1;
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v190, (struct _KTHREAD **)(*(_QWORD *)v12 + 44472LL), 0);
        DXGPUSHLOCK::AcquireExclusive(v191);
        v30 = *(_QWORD *)v12;
        v192 = 2;
        VIDMM_GLOBAL::InsertToPenaltyBox(v30, v12, 4);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v190);
      }
      if ( v11 )
        VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)v12, (VIDMM_DEVICE **)v11);
      else
        VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v12);
      VIDMM_GLOBAL::EvictFromFaultedList(v31, (struct VIDMM_DEVICE *)v12);
      v172 = VIDMM_GLOBAL::PageInFromFaultedList(this, (struct VIDMM_DEVICE *)v12);
      VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v12);
      VIDMM_DEVICE::ResumePagingQueues((VIDMM_DEVICE *)v12);
      if ( v29 )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v193, (struct _KTHREAD **)(*(_QWORD *)v12 + 44472LL), 0);
        DXGPUSHLOCK::AcquireExclusive(v194);
        v195 = 2;
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v32, (struct _LIST_ENTRY *)(v12 + 184));
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v193);
      }
      goto LABEL_277;
    case 214:
      v111 = *(_DWORD *)(v10 + 76);
      v112 = *((_QWORD *)this + 5027);
      v113.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v10 + 72);
      v114 = 1584LL * (v111 & 0x3F);
      v181 = v111 & 0x3F;
      v115 = *((_DWORD *)v23 + 12) >> 1;
      v116 = *((_DWORD *)v23 + 12) >> 2;
      LOBYTE(v115) = (*((_DWORD *)v23 + 12) & 2) != 0;
      LOBYTE(v116) = (*((_DWORD *)v23 + 12) & 4) != 0;
      v117 = (v111 & 0x80) != 0;
      v178 = *(_DWORD *)(v10 + 68);
      v184 = v115;
      v183 = v116;
      if ( (_BYTE)v115 )
      {
        v118 = *(_QWORD *)(v10 + 128);
        v119 = v111;
        v120 = *((_DWORD *)v23 + 9);
        v178 = v120;
        if ( v118
          && *(_DWORD *)(v10 + 120)
          && !_bittest((const int *)&v120, (unsigned __int8)(*(_BYTE *)(v118 + 20) - *(_BYTE *)(v112 + v114 + 20))) )
        {
          VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
            *(VIDMM_WORKER_THREAD **)this,
            (struct _VIDMM_GLOBAL_ALLOC *)v10);
          VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v11);
          VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
          v119 = *(_DWORD *)(v10 + 76);
          v120 = v178;
          v23 = a2;
        }
        *(_DWORD *)(v10 + 68) = v120;
        v121 = v119 ^ ((unsigned __int8)v119 ^ (unsigned __int8)(*((_BYTE *)v23 + 53) << 6)) & 0x40;
        *(_DWORD *)(v10 + 76) = v121;
        v117 = *((_BYTE *)v23 + 52);
        v111 = v121 ^ ((unsigned __int8)v121 ^ (unsigned __int8)(v117 << 7)) & 0x80;
        *(_DWORD *)(v10 + 76) = v111;
      }
      v21 = v111;
      v174 = 0;
      if ( (*((_DWORD *)v23 + 12) & 1) != 0 )
      {
        v122 = *(_DWORD *)v11[12];
        if ( (v122 & 0x8000) == 0 )
        {
          v123 = 1 << (*(_WORD *)(v112 + v114 + 28) - *(_BYTE *)(v112 + v114 + 20));
          if ( (*((_DWORD *)v23 + 11) & 1) != 0 )
          {
            LOBYTE(v124) = v111;
            if ( *(_DWORD *)(v10 + 120) )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(v10 + 128) + 80LL) & 0x1000) != 0 )
              {
                VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                  *(VIDMM_WORKER_THREAD **)this,
                  (struct _VIDMM_GLOBAL_ALLOC *)v10);
                VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v11);
                VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
                v124 = *(_DWORD *)(v10 + 76);
                v23 = a2;
              }
              else
              {
                LOBYTE(v124) = v111;
                v174 = (v122 & 0x10000) != 0;
              }
            }
            if ( (v124 & 0x40) != 0 )
              *(_DWORD *)(v10 + 68) &= ~v123;
            *(_DWORD *)v11[12] |= 0x8000u;
            v21 = *(unsigned int *)(v10 + 76);
          }
        }
      }
      v125 = v183;
      if ( (_BYTE)v183 )
      {
        v113.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)*((_DWORD *)v23 + 10);
        v126 = 0LL;
        v127 = 0LL;
        if ( v113.0 )
        {
          if ( (*(_BYTE *)&v113.0 & 0x1F) != 0 )
          {
            v126 = *(_QWORD *)(*((_QWORD *)this + 464)
                             + 8LL
                             * ((*(_BYTE *)&v113.0 & 0x1Fu) + *(_DWORD *)(*((_QWORD *)this + 5027) + v114 + 20) - 1));
            v117 = *(_BYTE *)(v126 + 80) & 1;
          }
          if ( ((v113.Value >> 6) & 0x1F) != 0 )
            v127 = *(_QWORD *)(*((_QWORD *)this + 464)
                             + 8LL
                             * (((v113.Value >> 6) & 0x1F) + *(_DWORD *)(*((_QWORD *)this + 5027) + v114 + 20) - 1));
        }
        v128 = 0;
        if ( *(_DWORD *)(v10 + 120) )
        {
          v129 = *(_QWORD *)(v10 + 128);
          if ( v126 == v129 || v127 == v129 )
          {
            if ( *(_DWORD *)(v10 + 72) != v113.0 )
            {
              v130 = *(_QWORD *)(v10 + 96);
              if ( v130 )
              {
                if ( *(_QWORD *)(v130 + 8) )
                {
                  v128 = 1;
                  VidMmRecordAlloc(this, v10, v130, v129, *(_QWORD *)(v10 + 16), 1);
                }
              }
            }
          }
          else
          {
            VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
              *(VIDMM_WORKER_THREAD **)this,
              (struct _VIDMM_GLOBAL_ALLOC *)v10);
            VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v11);
            VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
          }
        }
        v131 = (*(_DWORD *)(v10 + 76) ^ (v117 << 10)) & 0x400;
        *(struct _D3DDDI_SEGMENTPREFERENCE *)(v10 + 72) = v113;
        *(_DWORD *)(v10 + 76) ^= v131;
        v21 = *(unsigned int *)(v10 + 76);
        if ( v128 )
        {
          VidMmRecordAlloc(this, v10, *(_QWORD *)(v10 + 96), *(_QWORD *)(v10 + 128), *(_QWORD *)(v10 + 16), 0);
          v21 = *(unsigned int *)(v10 + 76);
        }
        v125 = v183;
      }
      v26 = a2;
      if ( (*((_DWORD *)a2 + 12) & 8) != 0 )
        *(_DWORD *)(v10 + 80) ^= (*(_DWORD *)(v10 + 80) ^ (*((_DWORD *)a2 + 11) << 19)) & 0x100000;
      v132 = v184;
      v133 = (unsigned int)v21;
      v134 = (unsigned __int8)((unsigned int)v21 >> 12);
      if ( v125 && (_BYTE)v184 )
      {
        v135 = v21 ^ (v21 ^ (*((_DWORD *)a2 + 8) << 12)) & 0xF0000;
        *(_DWORD *)(v10 + 76) = v135;
        v133 = v135 ^ ((unsigned __int16)v135 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)a2 + 8) << 12)) & 0xF000u;
        *(_DWORD *)(v10 + 76) = v133;
      }
      if ( v125 != v132 )
      {
        if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(
                (VIDMM_GLOBAL *)v133,
                *(struct _D3DDDI_SEGMENTPREFERENCE *)(v10 + 72),
                v178) )
        {
          v139 = WdLogNewEntry5_WdAssertion(v137, v136, v138);
          *(_QWORD *)(v139 + 24) = 11419LL;
          WdLogEvent5_WdAssertion(v139);
          VidSchMarkDeviceAsError((__int64)v11[1][4]);
        }
        MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(this, v181, v113, &v182);
        v185 = 0;
        if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
                this,
                v181,
                v178,
                MostPreferredSegment,
                (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v185) )
        {
          v143 = WdLogNewEntry5_WdAssertion(v142, v141, v21);
          *(_QWORD *)(v143 + 24) = 11431LL;
          WdLogEvent5_WdAssertion(v143);
          VidSchMarkDeviceAsError((__int64)v11[1][4]);
        }
        LODWORD(v133) = *(_DWORD *)(v10 + 76) ^ (*(_DWORD *)(v10 + 76) ^ (v185 << 12)) & 0xF0000 ^ (*(_WORD *)(v10 + 76) ^ (unsigned __int16)((_WORD)v185 << 12)) & 0xF000;
        *(_DWORD *)(v10 + 76) = v133;
      }
      if ( ((unsigned int)v134 >> 4 != (WORD1(v133) & 0xF)
         || (((unsigned __int8)v134 ^ (unsigned __int8)((unsigned int)v133 >> 12)) & 0xF) != 0)
        && *((_BYTE *)v11 + 25) & 1 | *((_DWORD *)v11 + 38) )
      {
        v144 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 96) + 8LL) + 16LL)
                         + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 232LL));
        v145 = *(_QWORD *)(v144 + 48) + 296LL * (*(_DWORD *)(v10 + 76) & 0x3F);
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v196, (struct _KTHREAD **)(v144 + 360), 0);
        DXGPUSHLOCK::AcquireExclusive(v197);
        v198 = 2;
        VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange((VIDMM_PROCESS_ADAPTER_INFO *)v144);
        v146 = *(_DWORD *)(v10 + 76);
        if ( (((unsigned __int8)v134 ^ (unsigned __int8)(v146 >> 12)) & 0xF) != 0 )
        {
          *(_QWORD *)(v145 + 8 * (v134 & 0xF) + 136) -= *(_QWORD *)(v10 + 16);
          v147 = (unsigned __int8)HIBYTE(*(_WORD *)(v10 + 76)) >> 4;
          *(_QWORD *)(v145 + 8 * v147 + 136) += *(_QWORD *)(v10 + 16);
          v146 = *(_DWORD *)(v10 + 76);
        }
        if ( (unsigned int)v134 >> 4 != (HIWORD(v146) & 0xF) )
        {
          *(_QWORD *)(v145 + 8 * (v134 >> 4) + 72) -= *(_QWORD *)(v10 + 16);
          v148 = v145 + 8LL * (*(_WORD *)(v10 + 78) & 0xF);
          *(_QWORD *)(v148 + 72) += *(_QWORD *)(v10 + 16);
        }
        VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange((VIDMM_PROCESS_ADAPTER_INFO *)v144);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v196);
        v26 = a2;
      }
      *((_DWORD *)v26 + 12) &= 0xFFFFFFF0;
      if ( v174 && *(_QWORD *)(v10 + 128) )
        VIDMM_GLOBAL::NotifyResidency(this, (struct _VIDMM_GLOBAL_ALLOC *)v10, 1u);
      v20 = *((_BYTE *)v11 + 25) & 1;
      if ( !((unsigned int)v20 | *((_DWORD *)v11 + 38)) || *(_WORD *)(*(_QWORD *)(v10 + 496) + 4LL) >= 2u )
        goto LABEL_278;
      inited = VIDMM_GLOBAL::PageInOneAllocation(this, v11, 0LL, a7, a3, a8, 0, -1LL);
      v172 = inited;
      goto LABEL_279;
    case 215:
      v149 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v23 + 4);
      v150 = 0;
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v199, (struct _KTHREAD **)this + 4996, 0);
      DXGPUSHLOCK::AcquireExclusive(v200);
      v16 = *((_QWORD *)v149 + 51) == 0LL;
      v201 = 2;
      if ( !v16 )
      {
        VIDMM_GLOBAL::RemoveAllocationFromDecommitList(this, v149);
        v150 = 1;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v199);
      if ( v150 )
        VIDMM_GLOBAL::DecommitGlobalAllocation(this, v149);
      v26 = a2;
      inited = 0;
      v172 = 0;
      goto LABEL_279;
    case 217:
      Interval.QuadPart = -10000LL * *((unsigned int *)v23 + 8);
      KeDelayExecutionThread(0, 0, &Interval);
      goto LABEL_277;
    default:
      v151 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, 0x1C0000000uLL);
      v151[3] = 270LL;
      v151[4] = 5LL;
      v151[5] = v27;
      v151[6] = -1073741811LL;
      v151[7] = 0LL;
      WdLogEvent5_WdCriticalError(v151);
      goto LABEL_277;
  }
}
