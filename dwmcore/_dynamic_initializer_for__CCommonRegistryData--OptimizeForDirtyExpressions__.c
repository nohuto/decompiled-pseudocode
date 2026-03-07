__int64 __fastcall dynamic_initializer_for__CCommonRegistryData::OptimizeForDirtyExpressions__(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  LOBYTE(a2) = 1;
  result = details::CRegistryKeyLoader<bool>::Load(L"OptimizeForDirtyExpressions", a2, 0LL);
  CCommonRegistryData::OptimizeForDirtyExpressions = result;
  return result;
}
