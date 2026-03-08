/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::RefreshRatePercentage__ @ 0x180003AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010DD20 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::RefreshRatePercentage__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"RefreshRatePercentage", 10LL, 2LL);
  CCommonRegistryData::SuperWetTiming::RefreshRatePercentage = result;
  return result;
}
