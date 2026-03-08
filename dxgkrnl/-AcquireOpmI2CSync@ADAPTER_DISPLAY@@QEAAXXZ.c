/*
 * XREFs of ?AcquireOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C022028E
 * Callers:
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C02205EE (DxgkAcquireAdapterOpmI2CSync.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_DISPLAY::AcquireOpmI2CSync(struct _KTHREAD **this)
{
  if ( this[49] == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 3999LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_OpmI2CMutex.IsOwner()", 3999LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 46));
}
