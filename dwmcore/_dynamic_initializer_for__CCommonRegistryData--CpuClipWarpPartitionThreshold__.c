__int64 dynamic_initializer_for__CCommonRegistryData::CpuClipWarpPartitionThreshold__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"CpuClipWarpPartitionThreshold", 1024LL, 0LL);
  CCommonRegistryData::CpuClipWarpPartitionThreshold = result;
  return result;
}
