__int64 dynamic_initializer_for__CCommonRegistryData::ForceDesktopTreeFullDirty__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"ForceDesktopTreeFullDirty", 0LL, 0LL);
  CCommonRegistryData::ForceDesktopTreeFullDirty = result;
  return result;
}
