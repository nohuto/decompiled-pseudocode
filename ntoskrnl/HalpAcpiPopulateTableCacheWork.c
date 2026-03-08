/*
 * XREFs of HalpAcpiPopulateTableCacheWork @ 0x1403B1840
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetAllTables @ 0x14037A3B8 (HalpAcpiGetAllTables.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 */

__int64 __fastcall HalpAcpiPopulateTableCacheWork(__int64 a1)
{
  HalpMmAllocCtxFree(a1, a1);
  return HalpAcpiGetAllTables();
}
