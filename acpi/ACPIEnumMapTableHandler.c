__int64 __fastcall ACPIEnumMapTableHandler(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 4);
  if ( !v1 )
    return ACPIEnumerateTables(a1 + 16, a1 + 12);
  if ( v1 == 1 )
    return ACPIMapNamedTable(*(unsigned int *)(a1 + 8), 0LL, 0LL, a1 + 16, a1 + 12);
  return 3221225474LL;
}
