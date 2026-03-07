__int64 HalpAcpiGetAllTables()
{
  __int64 AllTablesWork; // rbx

  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  AllTablesWork = HalpAcpiGetAllTablesWork();
  ExReleaseFastMutex(&HalpAcpiTableCacheLock);
  return AllTablesWork;
}
