__int64 dynamic_initializer_for__CCommonRegistryData::MegaRectSearchCount__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"MegaRectSearchCount", 100LL, 0LL);
  CCommonRegistryData::MegaRectSearchCount = result;
  return result;
}
