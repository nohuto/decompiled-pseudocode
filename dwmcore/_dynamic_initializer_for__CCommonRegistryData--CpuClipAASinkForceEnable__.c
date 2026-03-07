__int64 dynamic_initializer_for__CCommonRegistryData::CpuClipAASinkForceEnable__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"CpuClipAASinkForceEnable", 0LL, 0LL);
  CCommonRegistryData::CpuClipAASinkForceEnable = result;
  return result;
}
