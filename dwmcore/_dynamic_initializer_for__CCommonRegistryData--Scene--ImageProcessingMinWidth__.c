/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessingMinWidth__ @ 0x1800037A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010DD20 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessingMinWidth__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"ImageProcessingMinWidth", 200LL, 1LL);
  CCommonRegistryData::Scene::ImageProcessingMinWidth = result;
  return result;
}
