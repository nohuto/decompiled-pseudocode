__int64 __fastcall FxPrePostCallback::IssuePreCxCallbacksStateless(FxPrePostCallback *this, FxDevice *Device)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rdi
  FxCxDeviceInfo *Flink; // rbx
  int v5; // esi
  FxCxPnpPowerCallbackContext *CxPnpPowerCallbackContexts; // rax
  int v7; // eax

  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  Flink = (FxCxDeviceInfo *)Device->m_CxDeviceInfoListHead.Flink;
  v5 = 0;
  while ( Flink != (FxCxDeviceInfo *)p_m_CxDeviceInfoListHead && Flink )
  {
    CxPnpPowerCallbackContexts = FxCxDeviceInfo::GetCxPnpPowerCallbackContexts(Flink, this->m_CallbackType);
    if ( CxPnpPowerCallbackContexts )
    {
      if ( CxPnpPowerCallbackContexts->u.Generic.PreCallback )
      {
        v7 = this->InvokeCxCallback(this, CxPnpPowerCallbackContexts, FxCxInvokePreCallback);
        if ( v5 >= 0 )
          v5 = v7;
      }
    }
    Flink = (FxCxDeviceInfo *)Flink->ListEntry.Flink;
  }
  return (unsigned int)v5;
}
