/*
 * XREFs of VidSchMarkDeviceAsError @ 0x1C00019F0
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C000C930 (VidSchiSendToExecutionQueue.c)
 *     VidSchInvalidateHwContext @ 0x1C0044230 (VidSchInvalidateHwContext.c)
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C0089CC0 (-TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@P.c)
 *     VidSchFlushDevice @ 0x1C0089F70 (VidSchFlushDevice.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C0097B70 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00A20B0 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEA.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00ABE50 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00AF740 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C00B1AC4 (-UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B5730 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00E7270 (-RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E94A8 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ValidateHistoryBuffers@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_MULTI_ALLOC@@_K@Z @ 0x1C00E97A4 (-ValidateHistoryBuffers@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_MULTI_ALLOC@@_K@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00FDB40 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 *     VidSchiMarkDevicesInError @ 0x1C0105FE4 (VidSchiMarkDevicesInError.c)
 *     VidSchiSubmitRenderCommand @ 0x1C01069AC (VidSchiSubmitRenderCommand.c)
 *     VidSchiMarkTdrFaultingDevice @ 0x1C010A0D4 (VidSchiMarkTdrFaultingDevice.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C00017E4 (VidSchiMarkDeviceAsError.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C00032E4 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00033A8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C000A3C0 (--1HwQueueStagingList@@QEAA@XZ.c)
 */

void __fastcall VidSchMarkDeviceAsError(__int64 a1, int a2, _OWORD *a3)
{
  __int64 v3; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-40h] BYREF
  char v8; // [rsp+30h] [rbp-30h]
  _QWORD v9[4]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v10; // [rsp+58h] [rbp-8h]

  v3 = *(_QWORD *)(a1 + 32);
  v10 = 0;
  v9[0] = v3 + 1728;
  AcquireSpinLock::Acquire((AcquireSpinLock *)v9);
  v8 = 0;
  v7[1] = v7;
  v7[0] = v7;
  VidSchiMarkDeviceAsError((struct HwQueueStagingList *)v7, a1, a2, a3);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v7);
  AcquireSpinLock::Release((AcquireSpinLock *)v9);
}
