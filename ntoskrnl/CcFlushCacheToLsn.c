/*
 * XREFs of CcFlushCacheToLsn @ 0x1403CE930
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x140219F20 (CcFlushCachePriv.c)
 */

void __fastcall CcFlushCacheToLsn(const void *a1, _QWORD *a2, __int128 *a3)
{
  CcFlushCachePriv(a1, 0LL, 0, a2, 0, a3, 0LL);
}
