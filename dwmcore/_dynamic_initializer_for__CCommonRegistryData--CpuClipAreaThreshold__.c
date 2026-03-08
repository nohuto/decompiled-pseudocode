/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::CpuClipAreaThreshold__ @ 0x180003380
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010DD20 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::CpuClipAreaThreshold__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"CpuClipAreaThreshold", 20000LL, 0LL);
  CCommonRegistryData::CpuClipAreaThreshold = result;
  return result;
}
