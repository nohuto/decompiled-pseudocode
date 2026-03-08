/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessingMinHeight__ @ 0x180003770
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010DD20 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessingMinHeight__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"ImageProcessingMinHeight", 200LL, 1LL);
  CCommonRegistryData::Scene::ImageProcessingMinHeight = result;
  return result;
}
