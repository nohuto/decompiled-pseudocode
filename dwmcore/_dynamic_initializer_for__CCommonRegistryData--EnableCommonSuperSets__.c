/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::EnableCommonSuperSets__ @ 0x1800034A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z @ 0x1800AE168 (-Load@-$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z.c)
 */

__int64 __fastcall dynamic_initializer_for__CCommonRegistryData::EnableCommonSuperSets__(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  LOBYTE(a2) = 1;
  result = details::CRegistryKeyLoader<bool>::Load(L"EnableCommonSuperSets", a2, 0LL);
  CCommonRegistryData::EnableCommonSuperSets = result;
  return result;
}
