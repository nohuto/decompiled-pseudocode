/*
 * XREFs of HalpAcpiGetTableWork @ 0x14029C5D0
 * Callers:
 *     HalpAcpiGetTableFromBios @ 0x14029ABA0 (HalpAcpiGetTableFromBios.c)
 *     HalpAcpiGetTable @ 0x14029C550 (HalpAcpiGetTable.c)
 *     HalpAcpiGetFacsMapping @ 0x1403705F8 (HalpAcpiGetFacsMapping.c)
 *     HalpAcpiGetAllTablesWork @ 0x14037A8C8 (HalpAcpiGetAllTablesWork.c)
 * Callees:
 *     HalpAcpiGetTableFromBios @ 0x14029ABA0 (HalpAcpiGetTableFromBios.c)
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 *     HalpAcpiGetCachedTable @ 0x14029C6E4 (HalpAcpiGetCachedTable.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x14029C76C (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiCopyBiosTable @ 0x14037AA9C (HalpAcpiCopyBiosTable.c)
 *     HalpAcpiCacheTable @ 0x14037ABF4 (HalpAcpiCacheTable.c)
 *     HalpUnmapVirtualAddress @ 0x14037ADE0 (HalpUnmapVirtualAddress.c)
 */

void *__fastcall HalpAcpiGetTableWork(__int64 a1, unsigned int a2, char *a3, char *a4)
{
  void *Buf2; // rax
  void *v9; // rbx
  _DWORD *TableFromBios; // rax
  __int64 v12; // rdi
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h] BYREF

  v14 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  Buf2 = (void *)HalpAcpiGetCachedTable(a2, a3, a4);
  v9 = Buf2;
  if ( !Buf2 || (unsigned __int8)HalpAcpiIsCachedTableCompromised(a1, a2, (int)a3, (int)a4, Buf2) )
  {
    TableFromBios = HalpAcpiGetTableFromBios(a1, a2, a3, a4, &NumberOfBytes, &v14);
    v9 = TableFromBios;
    if ( TableFromBios )
    {
      v12 = HalpAcpiCopyBiosTable(a1, TableFromBios, v14);
      if ( a1 )
        HalpUnmapVirtualAddress(
          v9,
          (((unsigned __int16)v9 & 0xFFF) + (unsigned __int64)(unsigned int)NumberOfBytes + 4095) >> 12,
          0LL);
      else
        MmUnmapIoSpace(v9, (unsigned int)NumberOfBytes);
      if ( v12 )
      {
        HalpAcpiCacheTable(a1, v12);
        return (void *)v12;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return v9;
}
