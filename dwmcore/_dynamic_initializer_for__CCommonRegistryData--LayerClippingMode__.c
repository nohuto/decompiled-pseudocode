__int64 dynamic_initializer_for__CCommonRegistryData::LayerClippingMode__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"LayerClippingMode", 2LL, 0LL);
  CCommonRegistryData::LayerClippingMode = result;
  return result;
}
