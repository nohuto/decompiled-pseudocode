__int64 __fastcall FxPkgPnp::AdjustUsageCount(
        FxPkgPnp *this,
        _DEVICE_USAGE_NOTIFICATION_TYPE Usage,
        unsigned __int8 Add)
{
  __int64 v3; // rdx

  v3 = (unsigned int)(Usage - 1);
  if ( Add )
    return (unsigned int)_InterlockedIncrement(&this->m_SpecialFileCount[v3]);
  else
    return (unsigned int)_InterlockedDecrement(&this->m_SpecialFileCount[v3]);
}
