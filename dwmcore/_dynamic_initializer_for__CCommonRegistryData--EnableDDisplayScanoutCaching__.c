__int64 __fastcall dynamic_initializer_for__CCommonRegistryData::EnableDDisplayScanoutCaching__(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  LOBYTE(a2) = 1;
  result = details::CRegistryKeyLoader<bool>::Load(L"EnableDDisplayScanoutCaching", a2, 0LL);
  CCommonRegistryData::EnableDDisplayScanoutCaching = result;
  return result;
}
