__int64 __fastcall DataSourceProxy::OnDisconnected(DataProviderProxy **this)
{
  if ( this[24] )
    DataProviderProxy::QueueForDeferredDestruction(this[24], (struct BamoDataSourceProxy *)this);
  return 0LL;
}
