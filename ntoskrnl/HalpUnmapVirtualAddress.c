/*
 * XREFs of HalpUnmapVirtualAddress @ 0x14037ADE0
 * Callers:
 *     HalpAcpiCheckAndMapTable @ 0x14029AD4C (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x14029C328 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetTableWork @ 0x14029C5D0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x14029C76C (HalpAcpiIsCachedTableCompromised.c)
 *     HalpHpetDiscover @ 0x140372BE0 (HalpHpetDiscover.c)
 *     HalpIvtProcessDrhdEntry @ 0x14037B514 (HalpIvtProcessDrhdEntry.c)
 *     HalUnmapIoSpace @ 0x14051D490 (HalUnmapIoSpace.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x14051EC00 (HalpUsbLegacyStopOhciInterrupt.c)
 *     WdHwDestroyHardwareRegister @ 0x140527F04 (WdHwDestroyHardwareRegister.c)
 *     HalpCheckLowMemoryPostSleep @ 0x140A93B8C (HalpCheckLowMemoryPostSleep.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140A93CC8 (HalpCheckLowMemoryPreSleep.c)
 *     HalpAcpiTableCacheInit @ 0x140B3DDE0 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpFlushTLB @ 0x14037B0FC (HalpFlushTLB.c)
 */

char *__fastcall HalpUnmapVirtualAddress(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  char *result; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // r9
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rcx

  result = (char *)((unsigned __int64)(unsigned int)a2 << 12);
  v5 = (unsigned __int64)&result[a1 - 1];
  v6 = (unsigned int)a2;
  if ( a1 >= HalpOriginalHeapStart && v5 >= a1 && v5 <= HalpOriginalHeapEnd )
  {
    v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v8 = (_QWORD *)(8 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL);
    result = (char *)v7;
    if ( (_DWORD)a2 )
    {
      do
      {
        *v8 = 0LL;
        if ( (_BYTE)a3 )
          __invlpg(result);
        result += 4096;
        ++v8;
        --v6;
      }
      while ( v6 );
    }
    if ( !(_BYTE)a3 )
      result = (char *)HalpFlushTLB(v8, a2, a3, v6);
    if ( HalpHeapStart > v7 )
      HalpHeapStart = v7;
  }
  return result;
}
