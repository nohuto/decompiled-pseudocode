/*
 * XREFs of HalpAcpiGetAllTables @ 0x14037DD68
 * Callers:
 *     HalAcpiGetAllTablesDispatch @ 0x14037DD50 (HalAcpiGetAllTablesDispatch.c)
 *     HalpAcpiPopulateTableCacheWork @ 0x1403B6500 (HalpAcpiPopulateTableCacheWork.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     HalpAcpiGetAllTablesWork @ 0x14037E278 (HalpAcpiGetAllTablesWork.c)
 */

__int64 HalpAcpiGetAllTables()
{
  __int64 AllTablesWork; // rbx

  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  AllTablesWork = HalpAcpiGetAllTablesWork();
  ExReleaseFastMutex(&HalpAcpiTableCacheLock);
  return AllTablesWork;
}
