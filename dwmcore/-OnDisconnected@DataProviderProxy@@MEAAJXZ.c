__int64 __fastcall DataProviderProxy::OnDisconnected(DataProviderManager **this)
{
  if ( this[9] )
    DataProviderManager::RemoveDataProvider(this[9], (struct DataProviderProxy *)this);
  return 0LL;
}
