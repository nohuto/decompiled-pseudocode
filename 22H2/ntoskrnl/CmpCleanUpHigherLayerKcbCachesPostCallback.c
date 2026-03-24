/*
 * XREFs of CmpCleanUpHigherLayerKcbCachesPostCallback @ 0x140875F50
 * Callers:
 *     <none>
 * Callees:
 *     CmpCleanUpKCBCacheTable @ 0x14066D23C (CmpCleanUpKCBCacheTable.c)
 */

__int64 __fastcall CmpCleanUpHigherLayerKcbCachesPostCallback(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  CmpCleanUpKCBCacheTable(*(_QWORD *)(a1 + 32), a2, a3, a4);
  if ( *(_QWORD *)a1 == 1LL )
    *(_WORD *)(a1 + 8) |= 0x20u;
  return 0LL;
}
