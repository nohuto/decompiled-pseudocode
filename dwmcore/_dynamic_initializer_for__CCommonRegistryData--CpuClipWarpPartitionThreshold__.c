/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::CpuClipWarpPartitionThreshold__ @ 0x1800033B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x18010DD20 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::CpuClipWarpPartitionThreshold__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"CpuClipWarpPartitionThreshold", 1024LL, 0LL);
  CCommonRegistryData::CpuClipWarpPartitionThreshold = result;
  return result;
}
