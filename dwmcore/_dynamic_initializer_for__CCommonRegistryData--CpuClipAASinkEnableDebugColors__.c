__int64 dynamic_initializer_for__CCommonRegistryData::CpuClipAASinkEnableDebugColors__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"CpuClipAASinkEnableDebugColors", 0LL, 0LL);
  CCommonRegistryData::CpuClipAASinkEnableDebugColors = result;
  return result;
}
