__int64 dynamic_initializer_for__CCommonRegistryData::MousewheelAnimationDurationMs__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"MousewheelAnimationDurationMs", 250LL, 0LL);
  CCommonRegistryData::MousewheelAnimationDurationMs = result;
  return result;
}
