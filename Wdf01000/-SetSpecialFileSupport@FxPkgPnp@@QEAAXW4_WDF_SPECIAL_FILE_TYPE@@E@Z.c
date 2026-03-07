void __fastcall FxPkgPnp::SetSpecialFileSupport(
        FxPkgPnp *this,
        _DEVICE_USAGE_NOTIFICATION_TYPE FileType,
        unsigned __int8 Supported)
{
  _WDF_SPECIAL_FILE_TYPE v3; // eax
  char v4; // r8
  __int64 v5; // r10

  if ( FileType == DeviceUsageTypePaging
    || FileType == DeviceUsageTypeHibernation
    || FileType == DeviceUsageTypeDumpFile
    || FileType == DeviceUsageTypeBoot
    || (unsigned int)(FileType - 5) < 2 )
  {
    v3 = FxPkgPnp::_UsageToSpecialType(FileType);
    *(_BYTE *)((unsigned int)(v3 - 1) + v5 + 273) = v4;
  }
  else
  {
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0x23u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, FileType);
  }
}
