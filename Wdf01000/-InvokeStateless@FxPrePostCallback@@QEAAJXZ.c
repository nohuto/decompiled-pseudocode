__int64 __fastcall FxPrePostCallback::InvokeStateless(FxPrePostCallback *this)
{
  FxDevice *m_Device; // rsi
  int v3; // edi
  int v4; // eax
  int v5; // eax
  unsigned int v6; // eax

  m_Device = this->m_PkgPnp->m_Device;
  if ( m_Device->m_CxDeviceInfoListHead.Flink == &m_Device->m_CxDeviceInfoListHead )
  {
    v3 = this->InvokeClient(this);
  }
  else
  {
    v3 = FxPrePostCallback::IssuePreCxCallbacksStateless(this, this->m_PkgPnp->m_Device);
    v4 = this->InvokeClient(this);
    if ( v3 >= 0 )
      v3 = v4;
    v5 = FxPrePostCallback::IssuePostCxCallbacks(this, m_Device);
    if ( v3 >= 0 )
      v3 = v5;
  }
  if ( this->m_PkgPnp->m_CompanionTarget )
  {
    v6 = ((__int64 (__fastcall *)(FxPrePostCallback *))this->InvokeCompanionCallback)(this);
    if ( v3 >= 0 )
      return v6;
  }
  return (unsigned int)v3;
}
