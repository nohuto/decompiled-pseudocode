__int64 dynamic_initializer_for__CCommonRegistryData::Scene::EnableBloom__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"EnableBloom", 0LL, 1LL);
  CCommonRegistryData::Scene::EnableBloom = result;
  return result;
}
