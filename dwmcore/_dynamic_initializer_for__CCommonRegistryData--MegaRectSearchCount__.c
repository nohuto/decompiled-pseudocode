/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::MegaRectSearchCount__ @ 0x180003950
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010DD20 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::MegaRectSearchCount__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"MegaRectSearchCount", 100LL, 0LL);
  CCommonRegistryData::MegaRectSearchCount = result;
  return result;
}
