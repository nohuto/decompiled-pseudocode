__int64 dynamic_initializer_for__CCommonRegistryData::MajorityScreenTest_MinArea__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"MajorityScreenTest_MinArea", 80LL, 0LL);
  CCommonRegistryData::MajorityScreenTest_MinArea = result;
  return result;
}
