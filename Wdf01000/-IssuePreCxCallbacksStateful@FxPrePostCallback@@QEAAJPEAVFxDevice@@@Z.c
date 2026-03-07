__int64 __fastcall FxPrePostCallback::IssuePreCxCallbacksStateful(FxPrePostCallback *this, FxDevice *Device)
{
  int v2; // r9d
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rsi
  FxCxDeviceInfo *Flink; // rbx
  char v5; // bp
  FxCxPnpPowerCallbackContext *CxPnpPowerCallbackContexts; // rax
  FxCxPnpPowerCallbackContext *v8; // rdi

  v2 = 0;
  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  Flink = (FxCxDeviceInfo *)Device->m_CxDeviceInfoListHead.Flink;
  v5 = 0;
  while ( Flink != (FxCxDeviceInfo *)p_m_CxDeviceInfoListHead && Flink )
  {
    CxPnpPowerCallbackContexts = FxCxDeviceInfo::GetCxPnpPowerCallbackContexts(Flink, this->m_CallbackType);
    v8 = CxPnpPowerCallbackContexts;
    if ( CxPnpPowerCallbackContexts )
    {
      if ( CxPnpPowerCallbackContexts->u.Generic.PreCallback )
      {
        CxPnpPowerCallbackContexts->m_PreCallbackSuccessful = 0;
        if ( !v5 )
        {
          v2 = this->InvokeCxCallback(this, CxPnpPowerCallbackContexts, FxCxInvokePreCallback);
          if ( v2 < 0 )
            v5 = 1;
          else
            v8->m_PreCallbackSuccessful = 1;
        }
      }
    }
    Flink = (FxCxDeviceInfo *)Flink->ListEntry.Flink;
  }
  return (unsigned int)v2;
}
