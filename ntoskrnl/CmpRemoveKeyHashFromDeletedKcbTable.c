/*
 * XREFs of CmpRemoveKeyHashFromDeletedKcbTable @ 0x14074B040
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x1407AF820 (CmpCleanUpKcbCacheWithLock.c)
 * Callees:
 *     CmpRemoveKeyHashFromTableEntry @ 0x1407AF7E4 (CmpRemoveKeyHashFromTableEntry.c)
 */

__int64 __fastcall CmpRemoveKeyHashFromDeletedKcbTable(__int64 a1, _DWORD *a2)
{
  return CmpRemoveKeyHashFromTableEntry(
           a2,
           *(_QWORD *)(a1 + 1664)
         + 24
         * ((unsigned int)(*(_DWORD *)(a1 + 1672) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
