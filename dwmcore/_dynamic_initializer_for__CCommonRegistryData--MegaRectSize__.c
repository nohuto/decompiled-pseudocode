/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::MegaRectSize__ @ 0x180003980
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010DD20 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::MegaRectSize__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"MegaRectSize", 100000LL, 0LL);
  CCommonRegistryData::MegaRectSize = result;
  return result;
}
