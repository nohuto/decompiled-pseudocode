/*
 * XREFs of ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0018D10
 * Callers:
 *     ?SupportsChainedMdls@FxDmaEnabler@@QEAAEXZ @ 0x1C000BE4A (-SupportsChainedMdls@FxDmaEnabler@@QEAAEXZ.c)
 *     ?InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z @ 0x1C000C31C (-InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?BuildScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z55K@Z @ 0x1C000C392 (-BuildScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@.c)
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C000CA84 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 *     imp_WdfDmaTransactionAllocateResources @ 0x1C0019740 (imp_WdfDmaTransactionAllocateResources.c)
 *     imp_WdfDmaTransactionCancel @ 0x1C00198B0 (imp_WdfDmaTransactionCancel.c)
 *     imp_WdfDmaTransactionFreeResources @ 0x1C0019A40 (imp_WdfDmaTransactionFreeResources.c)
 *     imp_WdfDmaTransactionSetImmediateExecution @ 0x1C001A0A0 (imp_WdfDmaTransactionSetImmediateExecution.c)
 *     imp_WdfDmaTransactionSetSingleTransferRequirement @ 0x1C001A1A0 (imp_WdfDmaTransactionSetSingleTransferRequirement.c)
 *     imp_WdfDmaTransactionWdmGetTransferContext @ 0x1C001A400 (imp_WdfDmaTransactionWdmGetTransferContext.c)
 *     ?ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C001AF28 (-ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C001AF70 (-ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECT.c)
 *     ?AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z @ 0x1C001C4BC (-AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z.c)
 *     ?ReleaseResources@FxDmaPacketTransaction@@UEAAXE@Z @ 0x1C001C960 (-ReleaseResources@FxDmaPacketTransaction@@UEAAXE@Z.c)
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C001C9D4 (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 *     ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C001CDA0 (-StageTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 *     ?StartTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C001D3F0 (-StartTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 *     ?TransferCompleted@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C001D650 (-TransferCompleted@FxDmaPacketTransaction@@UEAAJXZ.c)
 *     ?_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C001D984 (-_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?GetScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z5@Z @ 0x1C001E598 (-GetScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@P.c)
 *     ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C001E93C (-_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@P.c)
 *     ?_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C001EFEC (-_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?GetTransferInfo@FxDmaTransactionBase@@QEAAXPEAK0@Z @ 0x1C001F960 (-GetTransferInfo@FxDmaTransactionBase@@QEAAXPEAK0@Z.c)
 * Callees:
 *     <none>
 */

$2CC3FC5F0458F7DBA3F7D6DD9579F542 *__fastcall FxDmaEnabler::GetDmaDescription(
        FxDmaEnabler *this,
        _WDF_DMA_DIRECTION Direction)
{
  if ( (*((_BYTE *)this + 380) & 0x10) != 0 )
    return ($2CC3FC5F0458F7DBA3F7D6DD9579F542 *)((char *)&this->184 + 96 * Direction);
  else
    return &this->184;
}
