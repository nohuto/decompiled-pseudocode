/*
 * XREFs of CmpRemoveKeyHash @ 0x14074BBF8
 * Callers:
 *     CmpDiscardKcb @ 0x14074B098 (CmpDiscardKcb.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpRehashKcbSubtree @ 0x140A14998 (CmpRehashKcbSubtree.c)
 * Callees:
 *     CmpRemoveKeyHashFromTableEntry @ 0x1407AF7E4 (CmpRemoveKeyHashFromTableEntry.c)
 */

__int64 __fastcall CmpRemoveKeyHash(__int64 a1, _DWORD *a2)
{
  return CmpRemoveKeyHashFromTableEntry(
           a2,
           *(_QWORD *)(a1 + 1648)
         + 24
         * ((unsigned int)(*(_DWORD *)(a1 + 1656) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
