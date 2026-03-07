void __fastcall FxPrePostCallback::IssueCleanupCxCallbacks(FxPrePostCallback *this, FxDevice *Device)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rdi
  FxCxDeviceInfo *i; // rbx
  FxCxPnpPowerCallbackContext *CxPnpPowerCallbackContexts; // rax

  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  for ( i = (FxCxDeviceInfo *)Device->m_CxDeviceInfoListHead.Flink;
        i != (FxCxDeviceInfo *)p_m_CxDeviceInfoListHead && i;
        i = (FxCxDeviceInfo *)i->ListEntry.Flink )
  {
    CxPnpPowerCallbackContexts = FxCxDeviceInfo::GetCxPnpPowerCallbackContexts(i, this->m_CallbackType);
    if ( CxPnpPowerCallbackContexts
      && CxPnpPowerCallbackContexts->u.Generic.CleanupCallback
      && CxPnpPowerCallbackContexts->m_PreCallbackSuccessful == 1 )
    {
      this->InvokeCxCleanupCallback(this, CxPnpPowerCallbackContexts);
    }
  }
}
