/*
 * XREFs of MiFreePageFileHashPfn @ 0x1406638E8
 * Callers:
 *     MiFreePageFileHashPfns @ 0x1403619CC (MiFreePageFileHashPfns.c)
 *     MiMapPageFileHash @ 0x140663D0C (MiMapPageFileHash.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiFreePageFileHashPfn(ULONG_PTR a1)
{
  __int64 v1; // rax

  v1 = 48 * a1 - 0x220000000000LL;
  *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(v1 + 32) = 0;
  return MiInsertPageInFreeOrZeroedList(a1, 2);
}
