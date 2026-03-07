__int64 dynamic_initializer_for__CCommonRegistryData::DisableDrawListCaching__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"DisableDrawListCaching", 0LL, 0LL);
  CCommonRegistryData::DisableDrawListCaching = result;
  return result;
}
