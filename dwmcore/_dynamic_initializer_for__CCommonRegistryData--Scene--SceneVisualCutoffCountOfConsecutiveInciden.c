/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::Scene::SceneVisualCutoffCountOfConsecutiveIncidentsAllowed__ @ 0x180003B30
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010DD20 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::Scene::SceneVisualCutoffCountOfConsecutiveIncidentsAllowed__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(
             L"SceneVisualCutoffCountOfConsecutiveIncidentsAllowed",
             5LL,
             1LL);
  CCommonRegistryData::Scene::SceneVisualCutoffCountOfConsecutiveIncidentsAllowed = result;
  return result;
}
