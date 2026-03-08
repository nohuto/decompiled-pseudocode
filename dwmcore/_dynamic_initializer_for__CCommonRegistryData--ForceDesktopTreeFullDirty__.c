/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::ForceDesktopTreeFullDirty__ @ 0x1800036B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z @ 0x1800AE168 (-Load@-$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::ForceDesktopTreeFullDirty__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"ForceDesktopTreeFullDirty", 0LL, 0LL);
  CCommonRegistryData::ForceDesktopTreeFullDirty = result;
  return result;
}
