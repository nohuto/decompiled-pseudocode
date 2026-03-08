/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::MajorityScreenTest_MinArea__ @ 0x1800038C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010DD20 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::MajorityScreenTest_MinArea__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"MajorityScreenTest_MinArea", 80LL, 0LL);
  CCommonRegistryData::MajorityScreenTest_MinArea = result;
  return result;
}
