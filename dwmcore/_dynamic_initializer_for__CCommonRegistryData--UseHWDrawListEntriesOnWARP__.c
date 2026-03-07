__int64 dynamic_initializer_for__CCommonRegistryData::UseHWDrawListEntriesOnWARP__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"UseHWDrawListEntriesOnWARP", 0LL, 0LL);
  CCommonRegistryData::UseHWDrawListEntriesOnWARP = result;
  return result;
}
