/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::MaxD3DFeatureLevel__ @ 0x180003920
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010DD20 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::MaxD3DFeatureLevel__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"MaxD3DFeatureLevel", 0LL, 0LL);
  CCommonRegistryData::MaxD3DFeatureLevel = result;
  return result;
}
