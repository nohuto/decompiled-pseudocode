/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::LayerClippingMode__ @ 0x180003830
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010DD20 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::LayerClippingMode__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"LayerClippingMode", 2LL, 0LL);
  CCommonRegistryData::LayerClippingMode = result;
  return result;
}
