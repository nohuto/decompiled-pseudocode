void __fastcall BamoImpl::BamoDataProviderProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoDataProviderProxyImpl *this,
        const struct _LUID *a2,
        __int64 a3,
        const char *a4)
{
  BamoImpl::BamoDataProviderProxyImpl::UpdateUniqueId(this, 0, a2 + 4, a4);
}
