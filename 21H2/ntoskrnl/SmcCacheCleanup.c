/*
 * XREFs of SmcCacheCleanup @ 0x14092D548
 * Callers:
 *     SmcProcessCreateRequest @ 0x14092A940 (SmcProcessCreateRequest.c)
 *     SmcCacheDelete @ 0x14092D5CC (SmcCacheDelete.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     StEtaCleanup @ 0x1402A0154 (StEtaCleanup.c)
 *     SmStoreDelete @ 0x14092A5E0 (SmStoreDelete.c)
 *     SmKmFileInfoCleanup @ 0x14092B3D8 (SmKmFileInfoCleanup.c)
 *     SmKmStoreFileDelete @ 0x14092C89C (SmKmStoreFileDelete.c)
 */

void __fastcall SmcCacheCleanup(__int64 a1)
{
  PPRIVILEGE_SET *v2; // rbx
  __int64 v3; // rsi
  int v4; // edx

  v2 = (PPRIVILEGE_SET *)(a1 + 176);
  v3 = 16LL;
  do
  {
    v4 = *((_DWORD *)v2 - 2);
    if ( v4 != -1 )
    {
      SmStoreDelete(*((_DWORD *)v2 - 1) & 3, v4);
      CmSiFreeMemory(*v2);
    }
    v2 += 3;
    --v3;
  }
  while ( v3 );
  if ( *(_QWORD *)(a1 + 40) && *(_QWORD *)(a1 + 48) )
    SmKmStoreFileDelete(a1 + 40);
  SmKmFileInfoCleanup(a1 + 40);
  StEtaCleanup(a1 + 104);
}
