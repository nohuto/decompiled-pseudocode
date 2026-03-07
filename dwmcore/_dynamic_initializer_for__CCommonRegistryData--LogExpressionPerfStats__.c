__int64 dynamic_initializer_for__CCommonRegistryData::LogExpressionPerfStats__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"LogExpressionPerfStats", 0LL, 0LL);
  CCommonRegistryData::LogExpressionPerfStats = result;
  return result;
}
