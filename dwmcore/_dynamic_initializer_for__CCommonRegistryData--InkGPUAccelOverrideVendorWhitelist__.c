__int64 dynamic_initializer_for__CCommonRegistryData::InkGPUAccelOverrideVendorWhitelist__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"InkGPUAccelOverrideVendorWhitelist", 0LL, 0LL);
  CCommonRegistryData::InkGPUAccelOverrideVendorWhitelist = result;
  return result;
}
