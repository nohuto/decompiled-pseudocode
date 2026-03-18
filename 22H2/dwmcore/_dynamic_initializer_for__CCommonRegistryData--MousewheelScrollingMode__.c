/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::MousewheelScrollingMode__ @ 0x180003AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010E860 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::MousewheelScrollingMode__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"MousewheelScrollingMode", 0LL, 0LL);
  CCommonRegistryData::MousewheelScrollingMode = result;
  return result;
}
