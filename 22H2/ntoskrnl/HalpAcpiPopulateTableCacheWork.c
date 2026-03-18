/*
 * XREFs of HalpAcpiPopulateTableCacheWork @ 0x1403B6500
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetAllTables @ 0x14037DD68 (HalpAcpiGetAllTables.c)
 *     HalpMmAllocCtxFree @ 0x1403A4F60 (HalpMmAllocCtxFree.c)
 */

__int64 __fastcall HalpAcpiPopulateTableCacheWork(__int64 a1)
{
  HalpMmAllocCtxFree(a1, a1);
  return HalpAcpiGetAllTables();
}
