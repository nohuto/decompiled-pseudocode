/*
 * XREFs of ?ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C02204AE
 * Callers:
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C02206C8 (DxgkReleaseAdapterOpmI2CSync.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_DISPLAY::ReleaseOpmI2CSync(struct _KTHREAD **this)
{
  if ( this[49] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 4018LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OpmI2CMutex.IsOwner()", 4018LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Release(this + 46);
}
