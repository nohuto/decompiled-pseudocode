/*
 * XREFs of HalAcpiGetAllTablesDispatch @ 0x14037A3A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetAllTables @ 0x14037A3B8 (HalpAcpiGetAllTables.c)
 */

__int64 HalAcpiGetAllTablesDispatch()
{
  return HalpAcpiGetAllTables();
}
