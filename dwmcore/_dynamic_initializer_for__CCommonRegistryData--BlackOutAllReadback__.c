__int64 dynamic_initializer_for__CCommonRegistryData::BlackOutAllReadback__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"BlackOutAllReadback", 0LL, 0LL);
  CCommonRegistryData::BlackOutAllReadback = result;
  return result;
}
