__int64 __fastcall wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  RTL_SRWLOCK *v3; // rsi
  unsigned int Ptr_high; // edi

  if ( !LOBYTE(this->Ptr) )
    return 0LL;
  v2 = this + 1;
  AcquireSRWLockExclusive(this + 1);
  v3 = this + 4;
  if ( !this[4].Ptr )
  {
    v3->Ptr = 0LL;
    if ( g_wil_details_internalSubscribeFeatureStateChangeNotification )
    {
      g_wil_details_internalSubscribeFeatureStateChangeNotification(
        &this[4],
        _lambda_fee8cea507d2413a58be13acfb66740a_::_lambda_invoker_cdecl_,
        this);
    }
    else if ( g_wil_details_apiSubscribeFeatureStateChangeNotification )
    {
      g_wil_details_apiSubscribeFeatureStateChangeNotification(
        &this[4],
        _lambda_fee8cea507d2413a58be13acfb66740a_::_lambda_invoker_cdecl_,
        this);
    }
    if ( v3->Ptr )
    {
      HIDWORD(this[3].Ptr) = 1;
      if ( v2 )
        ReleaseSRWLockExclusive(v2);
      return 1LL;
    }
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return 0LL;
  }
  Ptr_high = HIDWORD(this[3].Ptr);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return Ptr_high;
}
