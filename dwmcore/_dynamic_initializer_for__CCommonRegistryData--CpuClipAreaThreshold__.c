__int64 dynamic_initializer_for__CCommonRegistryData::CpuClipAreaThreshold__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"CpuClipAreaThreshold", 20000LL, 0LL);
  CCommonRegistryData::CpuClipAreaThreshold = result;
  return result;
}
