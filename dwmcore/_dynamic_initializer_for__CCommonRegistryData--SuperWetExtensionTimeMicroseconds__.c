__int64 dynamic_initializer_for__CCommonRegistryData::SuperWetExtensionTimeMicroseconds__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned long>::Load(L"SuperWetExtensionTimeMicroseconds", 1000LL, 0LL);
  CCommonRegistryData::SuperWetExtensionTimeMicroseconds = result;
  return result;
}
