/*
 * XREFs of TR_OkToReclaimTransfersOnCancel @ 0x1C0041B60
 * Callers:
 *     ESM_NotifyingTransferRingsOkToReclaimTransfersOnCancel @ 0x1C0051830 (ESM_NotifyingTransferRingsOkToReclaimTransfersOnCancel.c)
 *     ESM_ReclaimingCanceledTransfersAfterControllerSurpriseRemoval @ 0x1C00519E0 (ESM_ReclaimingCanceledTransfersAfterControllerSurpriseRemoval.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_OkToReclaimTransfersOnCancel(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 64LL))();
}
