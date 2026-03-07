__int64 __fastcall ST_STORE<SM_TRAITS>::StGetStats(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 result; // rax
  int v7; // edx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 )
  {
    v5 = SmMapPage(v3, &v8);
    if ( !v5 )
      return 3221225626LL;
  }
  else
  {
    v5 = 0LL;
  }
  v7 = *(_DWORD *)(a2 + 8);
  if ( v7 != -1 )
    return ST_STORE<SM_TRAITS>::StGetStatsWorker(a1, v7, v5, (unsigned int *)(a2 + 12));
  ST_STORE<SM_TRAITS>::StDmEtwRegionRundown(a1 + 80);
  if ( (unsigned __int8)*(_DWORD *)a1 == 1 )
    ST_STORE<SM_TRAITS>::StDmEtwRegionRundown(a1 + 2016);
  result = ST_STORE<SM_TRAITS>::StDmEtwPageRundown((__int64 *)(a1 + 80));
  if ( (int)result >= 0 && (unsigned __int8)*(_DWORD *)a1 == 1 )
    return ST_STORE<SM_TRAITS>::StDmEtwPageRundown((__int64 *)(a1 + 2016));
  return result;
}
