_DWORD *__fastcall ST_STORE<SM_TRAITS>::StStagingRegionFind(__int64 a1, int a2)
{
  _DWORD *result; // rax
  unsigned __int64 v3; // rcx

  result = (_DWORD *)(a1 + 1104);
  v3 = a1 + 1248;
  while ( (unsigned __int64)result < v3 )
  {
    if ( *result == a2 )
      return result;
    result += 6;
  }
  return 0LL;
}
