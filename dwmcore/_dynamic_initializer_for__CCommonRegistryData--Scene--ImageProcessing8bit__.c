__int64 dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessing8bit__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"ImageProcessing8bit", 0LL, 1LL);
  CCommonRegistryData::Scene::ImageProcessing8bit = result;
  return result;
}
