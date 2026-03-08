/*
 * XREFs of CcUnmapAndPurge @ 0x140217984
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x140217A10 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     CcUnmapVacbArray @ 0x14021B910 (CcUnmapVacbArray.c)
 *     CcPurgeCacheSection @ 0x1402A0EA0 (CcPurgeCacheSection.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140343320 (CcReferenceSharedCacheMapFileObject.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1403441C0 (ObFastDereferenceObjectDeferDelete.c)
 */

__int64 __fastcall CcUnmapAndPurge(__int64 a1, char a2)
{
  __int64 v4; // rax
  int v5; // r9d
  __int64 v6; // rsi

  v4 = CcReferenceSharedCacheMapFileObject();
  LOBYTE(v5) = a2;
  v6 = v4;
  CcUnmapVacbArray(a1, 0, 0, v5, 1, 0);
  if ( (*(_DWORD *)(a1 + 152) & 0x10) != 0 )
    CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v6 + 40), 0LL, 0, 2u);
  return ObFastDereferenceObjectDeferDelete(a1 + 96, v6, 1666409283LL);
}
