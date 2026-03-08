/*
 * XREFs of HalpAcpiGetFacsMapping @ 0x1403705F8
 * Callers:
 *     HalAcpiGetFacsMappingDispatch @ 0x1403705E0 (HalAcpiGetFacsMappingDispatch.c)
 *     HaliInitPowerManagement @ 0x140801CA0 (HaliInitPowerManagement.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     HalpAcpiCheckAndMapTable @ 0x14029AD4C (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetTableWork @ 0x14029C5D0 (HalpAcpiGetTableWork.c)
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpAcpiGetFacsMapping(__int64 a1)
{
  unsigned int *TableWork; // rax
  int v3; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+54h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  if ( !HalpAcpiFacsMapping )
  {
    TableWork = (unsigned int *)HalpAcpiGetTableWork(0LL, 0x50434146u, 0LL, 0LL);
    if ( !TableWork )
    {
      DbgPrint("**** HalpAcpiGetFacsMapping: No FADT found.\n");
      KeBugCheckEx(0xA5u, 0x10009uLL, 0LL, 0LL, 0LL);
    }
    HalpAcpiFacsMapping = HalpAcpiCheckAndMapTable(0LL, TableWork[9], 0x21u, 1396916550, 0LL, 0LL, 0, &v3);
  }
  ExReleaseFastMutex(&HalpAcpiTableCacheLock);
  return HalpAcpiFacsMapping;
}
