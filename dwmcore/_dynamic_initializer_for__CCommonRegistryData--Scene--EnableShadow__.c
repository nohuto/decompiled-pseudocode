__int64 dynamic_initializer_for__CCommonRegistryData::Scene::EnableShadow__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"EnableShadow", 0LL, 1LL);
  CCommonRegistryData::Scene::EnableShadow = result;
  return result;
}
