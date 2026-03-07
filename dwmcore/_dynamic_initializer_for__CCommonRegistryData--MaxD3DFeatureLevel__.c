__int64 dynamic_initializer_for__CCommonRegistryData::MaxD3DFeatureLevel__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"MaxD3DFeatureLevel", 0LL, 0LL);
  CCommonRegistryData::MaxD3DFeatureLevel = result;
  return result;
}
