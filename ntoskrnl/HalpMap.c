/*
 * XREFs of HalpMap @ 0x14037AE88
 * Callers:
 *     HalpAcpiCheckAndMapTable @ 0x14029AD4C (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x14029C328 (HalpAcpiGetRsdt.c)
 *     HalpPciMapMmConfigPhysicalAddress @ 0x1402D7B28 (HalpPciMapMmConfigPhysicalAddress.c)
 *     HalpMmAllocateMemoryInternal @ 0x14037A7A8 (HalpMmAllocateMemoryInternal.c)
 *     HalpAcpiAllocateMemory @ 0x14037AB24 (HalpAcpiAllocateMemory.c)
 *     HalMapIoSpace @ 0x14037AD90 (HalMapIoSpace.c)
 *     HalpMapPhysicalMemoryWriteThrough64 @ 0x14037C490 (HalpMapPhysicalMemoryWriteThrough64.c)
 *     HalpMapPhysicalMemory64 @ 0x140409B90 (HalpMapPhysicalMemory64.c)
 *     HalpAllocateEarlyPages @ 0x140503580 (HalpAllocateEarlyPages.c)
 *     HalpMapEarlyPages @ 0x140503660 (HalpMapEarlyPages.c)
 *     HalpPowerWriteResetCommand @ 0x140504AEC (HalpPowerWriteResetCommand.c)
 *     HalpInterruptMapParkedPage @ 0x1405182F0 (HalpInterruptMapParkedPage.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x14051EC00 (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpAcpiTableCacheInit @ 0x140B3DDE0 (HalpAcpiTableCacheInit.c)
 *     HalpSetupAcpiPhase0 @ 0x140B62CA8 (HalpSetupAcpiPhase0.c)
 *     HalpBlkAllocateAndShadowMemory @ 0x140B8E9BC (HalpBlkAllocateAndShadowMemory.c)
 *     HalpBlkAllocatePageTablePage @ 0x140B8EAB4 (HalpBlkAllocatePageTablePage.c)
 *     HalpBlkInitializeVirtualAddressSpace @ 0x140B8ECAC (HalpBlkInitializeVirtualAddressSpace.c)
 * Callees:
 *     HalpMmGetPteAddressSafe @ 0x14037B04C (HalpMmGetPteAddressSafe.c)
 *     HalpFlushTLB @ 0x14037B0FC (HalpFlushTLB.c)
 *     HalpIsHeap64KRegionExecutable @ 0x1405035F0 (HalpIsHeap64KRegionExecutable.c)
 */

unsigned __int64 __fastcall HalpMap(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  char v6; // r12
  unsigned __int64 v7; // r8
  unsigned int v8; // ebp
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned int v12; // esi
  unsigned __int64 v13; // r14
  _BYTE *PteAddressSafe; // rax
  bool v15; // cf
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax

  v6 = a4;
  v7 = 1LL;
  v8 = a2;
  if ( a3 > 1 )
    return 0LL;
  if ( a5 > 0x20 )
    return 0LL;
  v10 = 0x100000014LL;
  if ( !_bittest64(&v10, a5) )
    return 0LL;
  v11 = HalpHeapStart;
  v12 = 0;
  if ( (_DWORD)a2 )
  {
    while ( 2 )
    {
      while ( 1 )
      {
        v12 = 0;
        v13 = v11;
        while ( 1 )
        {
          if ( v13 == HalpHeapEnd )
            return 0LL;
          PteAddressSafe = (_BYTE *)HalpMmGetPteAddressSafe(v13);
          if ( !PteAddressSafe )
            return 0LL;
          v13 += 4096LL;
          v7 = 1LL;
          if ( (*PteAddressSafe & 1) != 0 )
            break;
          if ( ++v12 >= v8 )
            goto LABEL_10;
        }
        v11 = v13;
LABEL_10:
        if ( a5 != 32 )
          break;
        v15 = v12 < v8;
        if ( v12 != v8 )
          goto LABEL_12;
        if ( !(unsigned __int8)HalpIsHeap64KRegionExecutable(v11)
          && !(unsigned __int8)HalpIsHeap64KRegionExecutable(v11 + (v8 << 12) - 4096) )
        {
          v7 = 1LL;
          goto LABEL_13;
        }
      }
      v15 = v12 < v8;
LABEL_12:
      if ( v15 )
        continue;
      break;
    }
  }
LABEL_13:
  v16 = v11 | a1 & 0xFFF;
  if ( v11 == HalpHeapStart )
    HalpHeapStart = v11 + (v8 << 12);
  if ( v12 )
  {
    v17 = 3LL;
    if ( a5 != 4 )
      v17 = 1LL;
    v18 = v17 | 0x8000000000000000uLL;
    if ( a5 == 32 )
      v18 = v17;
    a2 = v18 | 0x18;
    if ( a3 == 1 )
      a2 = v18;
    do
    {
      v19 = a2 | a1 & 0xFFFFFFFFFF000LL;
      v7 = 0xFFFFF68000000000uLL;
      a1 += 4096LL;
      v10 = 8 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL;
      *(_QWORD *)v10 = v19;
      if ( v6 )
        __invlpg((void *)v11);
      v11 += 4096LL;
      --v12;
    }
    while ( v12 );
  }
  if ( !v6 )
    HalpFlushTLB(v10, a2, v7, a4);
  return v16;
}
