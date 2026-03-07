__int64 dynamic_initializer_for__CCommonRegistryData::DisableProjectedShadows__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"DisableProjectedShadows", 0LL, 0LL);
  CCommonRegistryData::DisableProjectedShadows = result;
  return result;
}
