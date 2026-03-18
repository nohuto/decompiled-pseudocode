/*
 * XREFs of ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C0085B78
 * Callers:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00109A4 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0016E78 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 * Callees:
 *     ?GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x1C001C76C (-GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallba.c)
 *     ?_SaveTheFirstError@FxPrePostCallback@@SAXPEAJJ@Z @ 0x1C001C7D4 (-_SaveTheFirstError@FxPrePostCallback@@SAXPEAJJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPrePostCallback::IssuePostCxCallbacks(FxPrePostCallback *this, FxDevice *Device)
{
  unsigned int v2; // ebx
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rsi
  FxCxDeviceInfo *Flink; // rdi
  FxCxPnpPowerCallbackContext *CxPnpPowerCallbackContexts; // rax
  __int64 v7; // r8
  int v8; // eax
  int status; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  status = 0;
  Flink = 0LL;
  if ( Device->m_CxDeviceInfoListHead.Flink != &Device->m_CxDeviceInfoListHead )
    Flink = (FxCxDeviceInfo *)Device->m_CxDeviceInfoListHead.Flink;
  if ( Flink )
  {
    do
    {
      CxPnpPowerCallbackContexts = FxCxDeviceInfo::GetCxPnpPowerCallbackContexts(Flink, this->m_CallbackType);
      if ( CxPnpPowerCallbackContexts && CxPnpPowerCallbackContexts->u.Generic.PostCallback )
      {
        LOBYTE(v7) = 1;
        v8 = this->InvokeCxCallback(this, CxPnpPowerCallbackContexts, (FxCxInvokeCallbackSubType)v7);
        FxPrePostCallback::_SaveTheFirstError(&status, v8);
      }
      Flink = (FxCxDeviceInfo *)Flink->ListEntry.Flink;
    }
    while ( Flink != (FxCxDeviceInfo *)p_m_CxDeviceInfoListHead && Flink );
    return (unsigned int)status;
  }
  return v2;
}
