/*
 * XREFs of CmpFindPathByName @ 0x140A19690
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x140A1A2B8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVirtualBranchIsReplicated @ 0x140A1A6DC (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140A1A890 (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpFindPathByNameEx @ 0x14067EED0 (CmpFindPathByNameEx.c)
 */

char __fastcall CmpFindPathByName(__int64 a1, __m128i *a2, UNICODE_STRING *a3, unsigned int *a4, ULONG_PTR *a5)
{
  return CmpFindPathByNameEx(a1, a2, a3, 0, a4, a5);
}
