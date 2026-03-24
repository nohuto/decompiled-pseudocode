/*
 * XREFs of CmpSyncKcbCacheForHive @ 0x140870C20
 * Callers:
 *     <none>
 * Callees:
 *     CmpIsKeyDeleted @ 0x1406E9D20 (CmpIsKeyDeleted.c)
 *     CmpRebuildKcbCache @ 0x14071CD6C (CmpRebuildKcbCache.c)
 */

__int64 __fastcall CmpSyncKcbCacheForHive(ULONG_PTR a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  if ( (!a2 || *(_QWORD *)(a1 + 32) == a2)
    && !CmpIsKeyDeleted(a1, 0LL, a3, a4)
    && *(_QWORD *)(a1 + 32)
    && (*(_DWORD *)(a1 + 184) & 0x100000) == 0 )
  {
    CmpRebuildKcbCache(a1, a3);
  }
  return 0LL;
}
