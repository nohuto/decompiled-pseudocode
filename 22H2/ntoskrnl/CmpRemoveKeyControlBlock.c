/*
 * XREFs of CmpRemoveKeyControlBlock @ 0x14086F188
 * Callers:
 *     CmRenameKey @ 0x14086CA54 (CmRenameKey.c)
 * Callees:
 *     CmpRemoveKeyHash @ 0x1406E5690 (CmpRemoveKeyHash.c)
 */

__int64 __fastcall CmpRemoveKeyControlBlock(__int64 a1)
{
  return CmpRemoveKeyHash(*(_QWORD *)(a1 + 32), (_DWORD *)(a1 + 16));
}
