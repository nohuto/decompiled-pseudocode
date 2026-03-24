/*
 * XREFs of CcFetchDataForRead @ 0x1402A10C0
 * Callers:
 *     CcMapAndCopyFromCache @ 0x14063CC70 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x140701480 (CcMdlRead.c)
 * Callees:
 *     MmWaitForCacheManagerPrefetch @ 0x14027BC08 (MmWaitForCacheManagerPrefetch.c)
 *     MmCheckCachedPageStates @ 0x1402A1C20 (MmCheckCachedPageStates.c)
 *     MmPrefetchForCacheManager @ 0x1406360AC (MmPrefetchForCacheManager.c)
 *     MmHardFaultBytesRequired @ 0x14063CE30 (MmHardFaultBytesRequired.c)
 */

char __fastcall CcFetchDataForRead(__int64 a1, _QWORD *a2, int a3, char a4, _DWORD *a5, _QWORD *P, int a7)
{
  unsigned __int64 v8; // rbx
  unsigned int v10; // ebp
  __int64 v11; // rdi
  unsigned int v12; // ecx
  __int64 v13; // rsi
  int v14; // r8d

  v8 = *a2 & 0xFFFFFFFFFFFFF000uLL;
  v10 = ((a3 + *a2 + 4095) & 0xFFFFF000) - v8;
  v11 = *P + (*(_DWORD *)a2 & 0x3F000);
  v12 = 0x40000 - (v11 & 0x3FFFF);
  if ( v12 >= v10 )
    v12 = ((a3 + *a2 + 4095) & 0xFFFFF000) - v8;
  v13 = v12;
  if ( !(unsigned int)MmHardFaultBytesRequired(a1, v8, v12) )
    goto LABEL_4;
  if ( a4 )
  {
    MmPrefetchForCacheManager(a1, v8, v14, v10, a7);
    *a5 = 1;
LABEL_4:
    MmCheckCachedPageStates(v11, v13, 0LL);
    return 1;
  }
  return 0;
}
