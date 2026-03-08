/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::Scene::SceneVisualCutoffThresholdInMS__ @ 0x180003B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010DD20 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::Scene::SceneVisualCutoffThresholdInMS__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"SceneVisualCutoffThresholdInMS", 1000LL, 1LL);
  CCommonRegistryData::Scene::SceneVisualCutoffThresholdInMS = result;
  return result;
}
