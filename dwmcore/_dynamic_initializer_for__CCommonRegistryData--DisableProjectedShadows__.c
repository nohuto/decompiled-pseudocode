/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::DisableProjectedShadows__ @ 0x180003410
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z @ 0x1800AE168 (-Load@-$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::DisableProjectedShadows__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"DisableProjectedShadows", 0LL, 0LL);
  CCommonRegistryData::DisableProjectedShadows = result;
  return result;
}
