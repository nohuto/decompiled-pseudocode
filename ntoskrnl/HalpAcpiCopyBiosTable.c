/*
 * XREFs of HalpAcpiCopyBiosTable @ 0x14037AA9C
 * Callers:
 *     HalpAcpiGetRsdt @ 0x14029C328 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetTableWork @ 0x14029C5D0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiGetAllTablesWork @ 0x14037A8C8 (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiTableCacheInit @ 0x140B3DDE0 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpAcpiAllocateMemory @ 0x14037AB24 (HalpAcpiAllocateMemory.c)
 *     HalpAcpiValidateAcpiTable @ 0x14037ABA0 (HalpAcpiValidateAcpiTable.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

char *__fastcall HalpAcpiCopyBiosTable(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v4; // esi
  _QWORD *Memory; // rax
  _QWORD *v7; // rbp
  char *v8; // rbx

  v4 = a2[1] + 24;
  Memory = (_QWORD *)HalpAcpiAllocateMemory(a1, v4);
  v7 = Memory;
  if ( !Memory )
    return 0LL;
  memset(Memory, 0, v4);
  v7[2] = a3;
  v8 = (char *)(v7 + 3);
  memmove(v7 + 3, a2, a2[1]);
  if ( (int)HalpAcpiValidateAcpiTable(a2) < 0 )
    KeBugCheckEx(0xA5u, 0x1000BuLL, *a2, (ULONG_PTR)a2, 0LL);
  return v8;
}
