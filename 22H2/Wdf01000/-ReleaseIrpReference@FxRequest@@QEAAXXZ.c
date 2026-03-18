/*
 * XREFs of ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C004F104
 * Callers:
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C0033364 (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 *     ?CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ @ 0x1C003631C (-CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ.c)
 *     ?Dispose@FxDmaTransactionBase@@UEAAEXZ @ 0x1C0036430 (-Dispose@FxDmaTransactionBase@@UEAAEXZ.c)
 *     ?DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z @ 0x1C0036534 (-DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z.c)
 *     ?Execute@FxDmaTransactionBase@@QEAAJPEAX@Z @ 0x1C00367FC (-Execute@FxDmaTransactionBase@@QEAAJPEAX@Z.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C0036F8C (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?ReleaseOverride@FxRequest@@UEAAKGPEAXJPEBD@Z @ 0x1C004F160 (-ReleaseOverride@FxRequest@@UEAAKGPEAXJPEBD@Z.c)
 *     ??1FxRequestMemory@@UEAA@XZ @ 0x1C0055720 (--1FxRequestMemory@@UEAA@XZ.c)
 *     ?Release@FxRequestOutputBuffer@@UEAAKPEAXJPEBD@Z @ 0x1C0055A60 (-Release@FxRequestOutputBuffer@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxRequestSystemBuffer@@UEAAKPEAXJPEBD@Z @ 0x1C0055B80 (-Release@FxRequestSystemBuffer@@UEAAKPEAXJPEBD@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequest::ReleaseIrpReference(FxRequest *this)
{
  const void *_a1; // rax

  if ( _InterlockedDecrement(&this->m_IrpReferenceCount) < 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x10u, 0x30u, WPP_FxRequest_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
}
