__int64 dynamic_initializer_for__CCommonRegistryData::OverlayMinFPS__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"OverlayMinFPS", 15LL, 0LL);
  CCommonRegistryData::OverlayMinFPS = result;
  return result;
}
