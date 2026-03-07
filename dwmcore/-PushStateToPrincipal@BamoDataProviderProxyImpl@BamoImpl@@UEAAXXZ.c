// attributes: thunk
void __fastcall BamoImpl::BamoDataProviderProxyImpl::PushStateToPrincipal(Microsoft::BamoImpl::BaseBamoPeerImpl **this)
{
  BamoImpl::BamoDataProviderProxyImpl::UpdateNumberOfReadersRemoteCache(this);
}
