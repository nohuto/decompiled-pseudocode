__int64 dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessingMinWidth__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"ImageProcessingMinWidth", 200LL, 1LL);
  CCommonRegistryData::Scene::ImageProcessingMinWidth = result;
  return result;
}
