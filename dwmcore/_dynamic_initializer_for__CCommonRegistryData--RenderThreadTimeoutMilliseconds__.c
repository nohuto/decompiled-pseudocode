__int64 dynamic_initializer_for__CCommonRegistryData::RenderThreadTimeoutMilliseconds__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"RenderThreadTimeoutMilliseconds", 5000LL, 0LL);
  CCommonRegistryData::RenderThreadTimeoutMilliseconds = result;
  return result;
}
