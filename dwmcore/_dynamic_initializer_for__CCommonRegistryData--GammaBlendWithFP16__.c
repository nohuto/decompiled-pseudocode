/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::GammaBlendWithFP16__ @ 0x180003710
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z @ 0x1800AE168 (-Load@-$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z.c)
 */

__int64 __fastcall dynamic_initializer_for__CCommonRegistryData::GammaBlendWithFP16__(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  LOBYTE(a2) = 1;
  result = details::CRegistryKeyLoader<bool>::Load(L"GammaBlendWithFP16", a2, 0LL);
  CCommonRegistryData::GammaBlendWithFP16 = result;
  return result;
}
