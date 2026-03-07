__int64 dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessingMinHeight__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"ImageProcessingMinHeight", 200LL, 1LL);
  CCommonRegistryData::Scene::ImageProcessingMinHeight = result;
  return result;
}
