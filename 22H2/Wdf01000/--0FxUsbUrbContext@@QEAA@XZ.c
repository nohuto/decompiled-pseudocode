/*
 * XREFs of ??0FxUsbUrbContext@@QEAA@XZ @ 0x1C006C748
 * Callers:
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C00694A0 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C0069D40 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C006EAA0 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 * Callees:
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x1C006C6D4 (--0FxUsbRequestContext@@QEAA@E@Z.c)
 */

void __fastcall FxUsbUrbContext::FxUsbUrbContext(FxUsbUrbContext *this)
{
  FxUsbRequestContext::FxUsbRequestContext(this, 0x11u);
  this->m_pUrb = 0LL;
  this->__vftable = (FxUsbUrbContext_vtbl *)FxUsbUrbContext::`vftable';
}
