__int64 __fastcall FxPrePostCallback::InvokeStateful(
        FxPrePostCallback *this,
        FxCxCallbackProgress *Progress,
        FxCxCallbackCleanupAction CleanupAction)
{
  FxCxCallbackProgress v4; // di
  int v7; // esi
  FxDevice *m_Device; // rbp
  FxPrePostCallback *v9; // rcx

  v4 = FxCxCallbackProgressInitialized;
  if ( this->m_PkgPnp->m_CompanionTarget )
  {
    v7 = ((__int64 (__fastcall *)(FxPrePostCallback *))this->InvokeCompanionCallback)(this);
    if ( v7 < 0 )
      goto $exit;
  }
  m_Device = this->m_PkgPnp->m_Device;
  if ( m_Device->m_CxDeviceInfoListHead.Flink == &m_Device->m_CxDeviceInfoListHead )
  {
    v7 = this->InvokeClient(this);
    v4 = FxCxCallbackProgressClientCalled;
    if ( v7 >= 0 )
      v4 = FxCxCallbackProgressClientSucceeded;
    goto $exit;
  }
  v7 = FxPrePostCallback::IssuePreCxCallbacksStateful(this, this->m_PkgPnp->m_Device);
  v9 = this;
  if ( v7 < 0 )
  {
LABEL_11:
    FxPrePostCallback::IssueCleanupCxCallbacks(v9, m_Device);
    goto $exit;
  }
  v7 = this->InvokeClient(this);
  v4 = FxCxCallbackProgressClientCalled;
  if ( v7 >= 0 )
  {
    v4 = FxCxCallbackProgressClientSucceeded;
    v7 = FxPrePostCallback::IssuePostCxCallbacks(this, m_Device);
    goto $exit;
  }
  if ( CleanupAction == FxCxCleanupAfterPreOrClientFailure )
  {
    v9 = this;
    goto LABEL_11;
  }
$exit:
  if ( Progress )
    *Progress = v4;
  return (unsigned int)v7;
}
