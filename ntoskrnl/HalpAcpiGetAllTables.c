/*
 * XREFs of HalpAcpiGetAllTables @ 0x14037A3B8
 * Callers:
 *     HalAcpiGetAllTablesDispatch @ 0x14037A3A0 (HalAcpiGetAllTablesDispatch.c)
 *     HalpAcpiPopulateTableCacheWork @ 0x1403B1840 (HalpAcpiPopulateTableCacheWork.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     HalpAcpiGetAllTablesWork @ 0x14037A8C8 (HalpAcpiGetAllTablesWork.c)
 */

__int64 HalpAcpiGetAllTables()
{
  __int64 AllTablesWork; // rbx

  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  AllTablesWork = HalpAcpiGetAllTablesWork();
  ExReleaseFastMutex(&HalpAcpiTableCacheLock);
  return AllTablesWork;
}
