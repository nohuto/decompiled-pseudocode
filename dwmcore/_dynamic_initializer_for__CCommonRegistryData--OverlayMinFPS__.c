/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::OverlayMinFPS__ @ 0x180003A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010DD20 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::OverlayMinFPS__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"OverlayMinFPS", 15LL, 0LL);
  CCommonRegistryData::OverlayMinFPS = result;
  return result;
}
