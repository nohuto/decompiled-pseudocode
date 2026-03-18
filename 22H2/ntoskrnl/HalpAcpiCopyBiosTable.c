/*
 * XREFs of HalpAcpiCopyBiosTable @ 0x14037E498
 * Callers:
 *     HalpAcpiGetRsdt @ 0x140336C28 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetTableWork @ 0x140336ED0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiGetAllTablesWork @ 0x14037E278 (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiTableCacheInit @ 0x140B4C428 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpAcpiAllocateMemory @ 0x14037E520 (HalpAcpiAllocateMemory.c)
 *     HalpAcpiValidateAcpiTable @ 0x14037E59C (HalpAcpiValidateAcpiTable.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
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
