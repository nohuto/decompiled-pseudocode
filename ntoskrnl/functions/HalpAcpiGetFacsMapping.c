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
