/*
 * XREFs of ?Dispose@FxUsbDeviceStringContext@@UEAAXXZ @ 0x1C005D4B0
 * Callers:
 *     <none>
 * Callees:
 *     USBD_UrbFree @ 0x1C008876C (USBD_UrbFree.c)
 */

void __fastcall FxUsbDeviceStringContext::Dispose(FxUsbDeviceStringContext *this)
{
  _URB *m_Urb; // rdx

  m_Urb = (_URB *)this->m_Urb;
  if ( m_Urb )
  {
    if ( m_Urb != (_URB *)&this->m_UrbLegacy )
    {
      USBD_UrbFree(this->m_USBDHandle, m_Urb);
      this->m_Urb = 0LL;
      this->m_USBDHandle = 0LL;
    }
  }
}
