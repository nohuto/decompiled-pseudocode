/*
 * XREFs of ??1FxUsbPipeTransferContext@@UEAA@XZ @ 0x1C0059A40
 * Callers:
 *     ??_EFxUsbPipeTransferContext@@UEAAPEAXI@Z @ 0x1C0059B50 (--_EFxUsbPipeTransferContext@@UEAAPEAXI@Z.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C005B4E0 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 * Callees:
 *     USBD_UrbFree @ 0x1C008876C (USBD_UrbFree.c)
 */

void __fastcall FxUsbPipeTransferContext::~FxUsbPipeTransferContext(FxUsbPipeTransferContext *this)
{
  _URB *m_Urb; // rdx

  m_Urb = (_URB *)this->m_Urb;
  this->__vftable = (FxUsbPipeTransferContext_vtbl *)FxUsbPipeTransferContext::`vftable';
  if ( m_Urb && m_Urb != (_URB *)&this->m_UrbLegacy )
    USBD_UrbFree(this->m_USBDHandle, m_Urb);
  this->m_Urb = 0LL;
  this->m_USBDHandle = 0LL;
  this->__vftable = (FxUsbPipeTransferContext_vtbl *)FxRequestContext::`vftable';
}
