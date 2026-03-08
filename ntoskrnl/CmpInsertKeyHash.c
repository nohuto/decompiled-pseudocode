/*
 * XREFs of CmpInsertKeyHash @ 0x140A147E0
 * Callers:
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpRehashKcbSubtree @ 0x140A14998 (CmpRehashKcbSubtree.c)
 * Callees:
 *     CmpAddKeyHashToEntry @ 0x14074B194 (CmpAddKeyHashToEntry.c)
 */

__int64 __fastcall CmpInsertKeyHash(__int64 a1, _DWORD *a2)
{
  return CmpAddKeyHashToEntry(
           (__int64)a2,
           *(_QWORD *)(a1 + 1648)
         + 24LL
         * ((*(_DWORD *)(a1 + 1656) - 1) & ((101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))),
           0);
}
