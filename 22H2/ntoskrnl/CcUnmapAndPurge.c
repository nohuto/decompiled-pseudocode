/*
 * XREFs of CcUnmapAndPurge @ 0x1402746F0
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14027445C (CcDeleteSharedCacheMap.c)
 * Callees:
 *     CcPurgeCacheSection @ 0x140270FA0 (CcPurgeCacheSection.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x140275E04 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140275E50 (CcReferenceSharedCacheMapFileObject.c)
 *     CcUnmapVacbArray @ 0x1402934F0 (CcUnmapVacbArray.c)
 */

__int64 __fastcall CcUnmapAndPurge(__int64 a1, char a2)
{
  __int64 v4; // rax
  int v5; // r9d
  __int64 v6; // rsi

  v4 = CcReferenceSharedCacheMapFileObject(a1);
  LOBYTE(v5) = a2;
  v6 = v4;
  CcUnmapVacbArray(a1, 0, 0, v5, 1, 0);
  if ( (*(_DWORD *)(a1 + 152) & 0x10) != 0 )
    CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v6 + 40), 0LL, 0, 2u);
  return CcDereferenceSharedCacheMapFileObject(a1, v6);
}
