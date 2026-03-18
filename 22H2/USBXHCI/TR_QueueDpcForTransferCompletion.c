/*
 * XREFs of TR_QueueDpcForTransferCompletion @ 0x1C000F2B4
 * Callers:
 *     Bulk_WdfEvtRequestCancel @ 0x1C000DD40 (Bulk_WdfEvtRequestCancel.c)
 *     Bulk_EP_ReclaimTransfers @ 0x1C000F220 (Bulk_EP_ReclaimTransfers.c)
 *     Control_EP_StartMapping @ 0x1C00134C0 (Control_EP_StartMapping.c)
 *     Control_EP_OkToReclaimTransfersOnCancel @ 0x1C0042220 (Control_EP_OkToReclaimTransfersOnCancel.c)
 *     Control_EP_ReclaimTransfers @ 0x1C0042350 (Control_EP_ReclaimTransfers.c)
 *     Control_WdfEvtRequestCancel @ 0x1C0043020 (Control_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1C00431B0 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_EP_OkToReclaimTransfersOnCancel @ 0x1C0044010 (Isoch_EP_OkToReclaimTransfersOnCancel.c)
 *     Isoch_EP_ReclaimTransfers @ 0x1C0044120 (Isoch_EP_ReclaimTransfers.c)
 *     Isoch_Transfer_Complete @ 0x1C00453C0 (Isoch_Transfer_Complete.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0045490 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x1C0045A00 (Isoch_WdfEvtIoCanceledOnQueue.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1C0045B90 (Isoch_WdfEvtRequestCancel.c)
 *     Bulk_EP_OkToReclaimTransfersOnCancel @ 0x1C0046BA0 (Bulk_EP_OkToReclaimTransfersOnCancel.c)
 *     Bulk_WdfEvtIoCanceledOnQueue @ 0x1C00472D0 (Bulk_WdfEvtIoCanceledOnQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_QueueDpcForTransferCompletion(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 280) )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3040))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 88));
  else
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 896))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 80));
}
