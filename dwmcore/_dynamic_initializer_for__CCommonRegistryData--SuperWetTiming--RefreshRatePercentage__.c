__int64 dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::RefreshRatePercentage__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"RefreshRatePercentage", 10LL, 2LL);
  CCommonRegistryData::SuperWetTiming::RefreshRatePercentage = result;
  return result;
}
