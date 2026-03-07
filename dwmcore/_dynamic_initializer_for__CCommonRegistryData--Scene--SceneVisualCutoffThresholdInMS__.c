__int64 dynamic_initializer_for__CCommonRegistryData::Scene::SceneVisualCutoffThresholdInMS__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"SceneVisualCutoffThresholdInMS", 1000LL, 1LL);
  CCommonRegistryData::Scene::SceneVisualCutoffThresholdInMS = result;
  return result;
}
