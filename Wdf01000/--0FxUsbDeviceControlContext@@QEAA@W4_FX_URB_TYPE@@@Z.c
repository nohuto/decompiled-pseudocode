/*
 * XREFs of ??0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C000F504
 * Callers:
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C0059400 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C005F8A0 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 * Callees:
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x1C000F0A8 (--0FxUsbRequestContext@@QEAA@E@Z.c)
 */

void __fastcall FxUsbDeviceControlContext::FxUsbDeviceControlContext(
        FxUsbDeviceControlContext *this,
        _FX_URB_TYPE FxUrbType)
{
  _URB_CONTROL_TRANSFER *p_m_UrbLegacy; // rax

  FxUsbRequestContext::FxUsbRequestContext(this, 0x13u);
  this->__vftable = (FxUsbDeviceControlContext_vtbl *)FxUsbDeviceControlContext::`vftable';
  p_m_UrbLegacy = &this->m_UrbLegacy;
  this->m_PartialMdl = 0LL;
  if ( FxUrbType )
    p_m_UrbLegacy = 0LL;
  this->m_UnlockPages = 0;
  this->m_USBDHandle = 0LL;
  this->m_Urb = p_m_UrbLegacy;
}
