void __fastcall BamoImpl::BamoDataSourceProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoDataSourceProxyImpl *this,
        const struct _LUID *a2)
{
  const char *v4; // r9
  struct _LUID v5; // rax

  BamoImpl::BamoDataSourceProxyImpl::UpdateUniqueId(this, 0, a2 + 4);
  v5 = a2[5];
  if ( v5 )
    BamoImpl::BamoDataSourceProxyImpl::UpdateRestrictToProcessIds(
      this,
      0LL,
      *(unsigned int *)(*(_QWORD *)&v5 + 40LL),
      v4);
}
