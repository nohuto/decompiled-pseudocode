/*
 * XREFs of HalpSetupAcpiPhase0 @ 0x140B62CA8
 * Callers:
 *     HalpAcpiInitDiscard @ 0x140B62AD4 (HalpAcpiInitDiscard.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x14029C550 (HalpAcpiGetTable.c)
 *     HalpMmAllocateMemoryInternal @ 0x14037A7A8 (HalpMmAllocateMemoryInternal.c)
 *     HalpMap @ 0x14037AE88 (HalpMap.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HalpAllocPhysicalMemory @ 0x140B3D9F4 (HalpAllocPhysicalMemory.c)
 *     HalpAcpiTableCacheInit @ 0x140B3DDE0 (HalpAcpiTableCacheInit.c)
 *     HalpAcpiInitializePmRegisters @ 0x140B62E74 (HalpAcpiInitializePmRegisters.c)
 *     HalpInitBootTable @ 0x140B6316C (HalpInitBootTable.c)
 *     HalpSetPlatformFlags @ 0x140B631DC (HalpSetPlatformFlags.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140B63268 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140B63318 (HalpAcpiDetectMachineSpecificActions.c)
 *     HalpNumaParseHmat @ 0x140B8E1C4 (HalpNumaParseHmat.c)
 */

__int64 __fastcall HalpSetupAcpiPhase0(__int64 a1)
{
  __int64 result; // rax
  __int64 Table; // rax
  const void *v4; // rdx
  size_t v5; // rax
  size_t v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  void *v11; // rax
  __int64 MemoryInternal; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  if ( !HalpProcessedACPIPhase0 )
  {
    result = HalpAcpiTableCacheInit(a1);
    if ( (int)result < 0 )
      return result;
    Table = HalpAcpiGetTable(a1, 1346584902, 0, 0);
    v4 = (const void *)Table;
    if ( !Table )
      return 3221226021LL;
    v5 = *(unsigned int *)(Table + 4);
    v6 = 276LL;
    if ( (unsigned int)v5 < 0x114 )
      v6 = v5;
    memmove(&HalpFixedAcpiDescTable, v4, v6);
    HalpSetPlatformFlags(&HalpFixedAcpiDescTable, a1);
    HalpAcpiInitializePmRegisters(&HalpFixedAcpiDescTable);
    if ( (dword_140C61D10 & 0x40000) != 0 )
      HalpInterruptClusterModeForced = 1;
    if ( (dword_140C61D10 & 0x80000) != 0 )
      HalpInterruptPhysicalModeOnly = 1;
    HalpAcpiDetectMachineSpecificActions(a1);
    HalpNumaInitializeStaticConfiguration(a1);
    LODWORD(v16) = 0;
    HalpAcpiHmat = HalpAcpiGetTable(a1, 1413565768, 0, 0);
    if ( HalpAcpiHmat )
    {
      if ( HalpAcpiSrat )
      {
        if ( (int)HalpNumaParseHmat(v7, 0LL, 0LL, &v16) >= 0 )
        {
          MemoryInternal = HalpMmAllocateMemoryInternal(v16, 1u);
          v14 = MemoryInternal;
          if ( MemoryInternal )
          {
            if ( (int)HalpNumaParseHmat(v13, MemoryInternal, (unsigned int)v16, &v16) >= 0 )
              HalpHmaConfig = v14;
          }
        }
      }
    }
    PdttTable = 0LL;
    v8 = HalpAcpiGetTable(a1, 1414808656, 0, 0);
    v9 = v8;
    if ( v8 )
    {
      v15 = *(unsigned __int8 *)(v8 + 36);
      if ( *(unsigned int *)(v9 + 4) >= (unsigned __int64)*(unsigned int *)(v9 + 40) + 2 * v15 )
      {
        qword_140C6A748 = HalpMmAllocateMemoryInternal(136 * (int)v15, 1u);
        if ( qword_140C6A748 )
          PdttTable = v9;
      }
    }
    v10 = HalpAcpiGetTable(a1, 1413824855, 0, 0);
    if ( v10 )
      HalpWAETDeviceFlags = *(_DWORD *)(v10 + 36);
    if ( !HalpLowStubPhysicalAddress )
    {
      v16 = 0x100000LL;
      v11 = (void *)HalpAllocPhysicalMemory(a1, (__int64)&v16, 1u);
      HalpLowStubPhysicalAddress = v11;
      if ( v11 )
        HalpLowStub = HalpMap((__int64)v11, 1LL, 1u, 0LL, 4u);
    }
    if ( (dword_140C61D10 & 3) == 0 )
      HalpVirtAddrForFlush = HalpMap((__int64)HalpLowStubPhysicalAddress, 1LL, 1u, 0LL, 4u);
    HalpProcessedACPIPhase0 = 1;
    qword_140C02198 = (__int64)HalpAcpiGetPrmCache;
    qword_140C02188 = (__int64)HalAcpiGetTableDispatch;
    qword_140C02190 = (__int64)xHalTimerWatchdogStop;
    HalpInitBootTable(a1);
  }
  return 0LL;
}
