/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::MajorityScreenTest_MinLength__ @ 0x1800038F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010DD20 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::MajorityScreenTest_MinLength__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"MajorityScreenTest_MinLength", 80LL, 0LL);
  CCommonRegistryData::MajorityScreenTest_MinLength = result;
  return result;
}
