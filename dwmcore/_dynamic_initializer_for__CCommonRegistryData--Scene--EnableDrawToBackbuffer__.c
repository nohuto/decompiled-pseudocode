/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::Scene::EnableDrawToBackbuffer__ @ 0x180003530
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z @ 0x1800AE168 (-Load@-$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z.c)
 */

__int64 __fastcall dynamic_initializer_for__CCommonRegistryData::Scene::EnableDrawToBackbuffer__(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  LOBYTE(a2) = 1;
  result = details::CRegistryKeyLoader<bool>::Load(L"EnableDrawToBackbuffer", a2, 1LL);
  CCommonRegistryData::Scene::EnableDrawToBackbuffer = result;
  return result;
}
