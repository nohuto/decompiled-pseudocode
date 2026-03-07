__int64 dynamic_initializer_for__CCommonRegistryData::MajorityScreenTest_MaxCoverage__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"MajorityScreenTest_MaxCoverage", 10LL, 0LL);
  CCommonRegistryData::MajorityScreenTest_MaxCoverage = result;
  return result;
}
