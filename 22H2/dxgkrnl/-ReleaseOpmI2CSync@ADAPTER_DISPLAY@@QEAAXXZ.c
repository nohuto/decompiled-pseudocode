/*
 * XREFs of ?ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C022EA54
 * Callers:
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C022EC6E (DxgkReleaseAdapterOpmI2CSync.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::ReleaseOpmI2CSync(struct _KTHREAD **this)
{
  if ( this[49] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 4025LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OpmI2CMutex.IsOwner()", 4025LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Release(this + 46);
}
