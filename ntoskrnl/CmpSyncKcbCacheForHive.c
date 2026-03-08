/*
 * XREFs of CmpSyncKcbCacheForHive @ 0x140A17510
 * Callers:
 *     <none>
 * Callees:
 *     CmpRebuildKcbCache @ 0x1406B6498 (CmpRebuildKcbCache.c)
 *     CmpIsKeyDeleted @ 0x14077B358 (CmpIsKeyDeleted.c)
 */

__int64 __fastcall CmpSyncKcbCacheForHive(ULONG_PTR a1, __int64 a2)
{
  if ( (!a2 || *(_QWORD *)(a1 + 32) == a2)
    && !CmpIsKeyDeleted(a1)
    && *(_QWORD *)(a1 + 32)
    && (*(_DWORD *)(a1 + 184) & 0x100000) == 0 )
  {
    CmpRebuildKcbCache(a1);
  }
  return 0LL;
}
