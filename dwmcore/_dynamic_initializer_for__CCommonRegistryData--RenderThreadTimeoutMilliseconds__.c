/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::RenderThreadTimeoutMilliseconds__ @ 0x180003B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010DD20 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::RenderThreadTimeoutMilliseconds__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"RenderThreadTimeoutMilliseconds", 5000LL, 0LL);
  CCommonRegistryData::RenderThreadTimeoutMilliseconds = result;
  return result;
}
