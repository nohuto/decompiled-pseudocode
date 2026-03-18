/*
 * XREFs of ?IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z @ 0x1C0085AFC
 * Callers:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0016E78 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 * Callees:
 *     ?GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x1C001C76C (-GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallba.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxPrePostCallback::IssueCleanupCxCallbacks(FxPrePostCallback *this, FxDevice *Device)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rdi
  FxCxDeviceInfo *Flink; // rbx
  FxCxPnpPowerCallbackContext *CxPnpPowerCallbackContexts; // rax

  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  Flink = 0LL;
  if ( Device->m_CxDeviceInfoListHead.Flink != &Device->m_CxDeviceInfoListHead )
    Flink = (FxCxDeviceInfo *)Device->m_CxDeviceInfoListHead.Flink;
  do
  {
    if ( !Flink )
      break;
    CxPnpPowerCallbackContexts = FxCxDeviceInfo::GetCxPnpPowerCallbackContexts(Flink, this->m_CallbackType);
    if ( CxPnpPowerCallbackContexts
      && CxPnpPowerCallbackContexts->u.Generic.CleanupCallback
      && CxPnpPowerCallbackContexts->m_PreCallbackSuccessful == 1 )
    {
      this->InvokeCxCleanupCallback(this, CxPnpPowerCallbackContexts);
    }
    Flink = (FxCxDeviceInfo *)Flink->ListEntry.Flink;
  }
  while ( Flink != (FxCxDeviceInfo *)p_m_CxDeviceInfoListHead );
}
