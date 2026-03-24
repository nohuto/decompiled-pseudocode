/*
 * XREFs of HalpAcpiPopulateTableCacheWork @ 0x1403BAB10
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140378ED0 (HalpMmAllocCtxFree.c)
 *     HalpAcpiGetAllTables @ 0x1403BAE5C (HalpAcpiGetAllTables.c)
 */

__int64 __fastcall HalpAcpiPopulateTableCacheWork(__int64 a1)
{
  HalpMmAllocCtxFree(a1, a1);
  return HalpAcpiGetAllTables();
}
