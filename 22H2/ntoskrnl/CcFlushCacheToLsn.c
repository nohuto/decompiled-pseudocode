/*
 * XREFs of CcFlushCacheToLsn @ 0x1403D3ED0
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x14029CC14 (CcFlushCachePriv.c)
 */

void __fastcall CcFlushCacheToLsn(const void *a1, _QWORD *a2, __int128 *a3)
{
  CcFlushCachePriv(a1, 0LL, 0, a2, 0, a3, 0LL);
}
