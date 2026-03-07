__int64 dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessingResizeGrowth__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"ImageProcessingResizeGrowth", 200LL, 1LL);
  CCommonRegistryData::Scene::ImageProcessingResizeGrowth = result;
  return result;
}
