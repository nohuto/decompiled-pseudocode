__int64 dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"PeriodicFenceMinDifferenceMicroseconds", 500LL, 2LL);
  CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds = result;
  return result;
}
