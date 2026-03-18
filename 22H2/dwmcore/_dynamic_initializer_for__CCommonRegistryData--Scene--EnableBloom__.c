/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::Scene::EnableBloom__ @ 0x180003560
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z @ 0x1800AE8C8 (-Load@-$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::Scene::EnableBloom__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"EnableBloom", 0LL, 1LL);
  CCommonRegistryData::Scene::EnableBloom = result;
  return result;
}
