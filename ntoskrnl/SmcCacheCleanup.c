/*
 * XREFs of SmcCacheCleanup @ 0x1409D7CF4
 * Callers:
 *     SmcProcessCreateRequest @ 0x1409D50AC (SmcProcessCreateRequest.c)
 *     SmcCacheDelete @ 0x1409D7D8C (SmcCacheDelete.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     StEtaCleanup @ 0x1402E7424 (StEtaCleanup.c)
 *     SmStoreDelete @ 0x1409D4D34 (SmStoreDelete.c)
 *     SmKmFileInfoCleanup @ 0x1409D5B90 (SmKmFileInfoCleanup.c)
 *     SmKmStoreFileDelete @ 0x1409D7038 (SmKmStoreFileDelete.c)
 */

void __fastcall SmcCacheCleanup(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  PPRIVILEGE_SET *v4; // rbx
  __int64 v5; // rsi
  int v6; // r8d

  v3 = a1 - 2128;
  v4 = (PPRIVILEGE_SET *)(a2 + 176);
  v5 = 16LL;
  do
  {
    v6 = *((_DWORD *)v4 - 2);
    if ( v6 != -1 )
    {
      SmStoreDelete(v3, *((_DWORD *)v4 - 1) & 3, v6);
      CmSiFreeMemory(*v4);
    }
    v4 += 3;
    --v5;
  }
  while ( v5 );
  if ( *(_QWORD *)(a2 + 40) && *(_QWORD *)(a2 + 48) )
    SmKmStoreFileDelete(a2 + 40);
  SmKmFileInfoCleanup(a2 + 40);
  StEtaCleanup(a2 + 104);
}
