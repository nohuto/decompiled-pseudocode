__int64 dynamic_initializer_for__CCommonRegistryData::MajorityScreenTest_MinLength__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"MajorityScreenTest_MinLength", 80LL, 0LL);
  CCommonRegistryData::MajorityScreenTest_MinLength = result;
  return result;
}
