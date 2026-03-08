/*
 * XREFs of ?ReleaseAndRestore@FxUsbUrbContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C000F2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAndRestore@FxRequestContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0008E40 (-ReleaseAndRestore@FxRequestContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxUsbUrbContext::ReleaseAndRestore(FxUsbUrbContext *this, FxRequestBase *Request)
{
  this->m_pUrb = 0LL;
  FxRequestContext::ReleaseAndRestore(this, Request);
}
