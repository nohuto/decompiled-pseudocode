__int64 dynamic_initializer_for__CCommonRegistryData::MousewheelScrollingMode__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"MousewheelScrollingMode", 0LL, 0LL);
  CCommonRegistryData::MousewheelScrollingMode = result;
  return result;
}
