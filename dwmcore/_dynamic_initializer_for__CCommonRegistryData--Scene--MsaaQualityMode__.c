__int64 dynamic_initializer_for__CCommonRegistryData::Scene::MsaaQualityMode__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"MsaaQualityMode", 2LL, 1LL);
  CCommonRegistryData::Scene::MsaaQualityMode = result;
  return result;
}
