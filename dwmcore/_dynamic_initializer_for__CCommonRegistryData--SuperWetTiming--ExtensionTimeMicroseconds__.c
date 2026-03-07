__int64 dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::ExtensionTimeMicroseconds__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"ExtensionTimeMicroseconds", 1000LL, 2LL);
  CCommonRegistryData::SuperWetTiming::ExtensionTimeMicroseconds = result;
  return result;
}
