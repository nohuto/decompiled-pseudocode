__int64 dynamic_initializer_for__CCommonRegistryData::MegaRectSize__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"MegaRectSize", 100000LL, 0LL);
  CCommonRegistryData::MegaRectSize = result;
  return result;
}
