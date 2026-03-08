/*
 * XREFs of HalpAcpiAllocateMemory @ 0x14037AB24
 * Callers:
 *     HalpAcpiGetAllTablesWork @ 0x14037A8C8 (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiCopyBiosTable @ 0x14037AA9C (HalpAcpiCopyBiosTable.c)
 *     HalpAcpiTableCacheInit @ 0x140B3DDE0 (HalpAcpiTableCacheInit.c)
 *     HalpAcpiFindRsdp @ 0x140B6C7C8 (HalpAcpiFindRsdp.c)
 * Callees:
 *     HalpMap @ 0x14037AE88 (HalpMap.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     HalpAllocPhysicalMemory @ 0x140B3D9F4 (HalpAllocPhysicalMemory.c)
 */

__int64 __fastcall HalpAcpiAllocateMemory(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  if ( !a1 )
    return HalpMmAllocCtxAlloc(0LL, a2);
  v7 = 0x1000000LL;
  v5 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v6 = HalpAllocPhysicalMemory(a1, &v7, v5, 0LL);
  if ( !v6 )
    return v2;
  return HalpMap(v6, v5, 1, 0, 4);
}
