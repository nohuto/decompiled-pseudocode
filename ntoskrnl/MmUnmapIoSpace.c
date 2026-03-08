/*
 * XREFs of MmUnmapIoSpace @ 0x14029B230
 * Callers:
 *     HalpAcpiCheckAndMapTable @ 0x14029AD4C (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x14029C328 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetTableWork @ 0x14029C5D0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x14029C76C (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiGetAllTablesWork @ 0x14037A8C8 (HalpAcpiGetAllTablesWork.c)
 *     BgpFwLibraryEnable @ 0x1403843F4 (BgpFwLibraryEnable.c)
 *     HalInitializeBios @ 0x14039A4D0 (HalInitializeBios.c)
 *     MiAllocateContiguousMemory @ 0x1403B49B4 (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x1403BD6E0 (MmFreeContiguousMemory.c)
 *     HalpMcaExtendedLogInitialize @ 0x14050110C (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x14050E378 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x1405190D8 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     WmipReadSMBiosSysInfo @ 0x1405F9660 (WmipReadSMBiosSysInfo.c)
 *     WmipFirmwareTableHandler @ 0x1405F9920 (WmipFirmwareTableHandler.c)
 *     MiHugePageOperation @ 0x14061E158 (MiHugePageOperation.c)
 *     WmipGetSMBiosTableData @ 0x140725AEC (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x14085BBF8 (ExpGetSystemPlatformBinary.c)
 *     HvlDeleteProcessor @ 0x14093E28C (HvlDeleteProcessor.c)
 *     WmipFindSMBiosStructure @ 0x1409DC91C (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1409DCA60 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1409DCB58 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x1409DCDD8 (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x1409DD0A0 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x140A05870 (WheapClearPoison.c)
 *     MiMapNewPfns @ 0x140A29C20 (MiMapNewPfns.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140A88304 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140A93104 (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpFreeNvsBuffers @ 0x140A93E04 (HalpFreeNvsBuffers.c)
 *     PopGetHwConfigurationSignature @ 0x140A9FA5C (PopGetHwConfigurationSignature.c)
 *     PipInitComputerIds @ 0x140B552F0 (PipInitComputerIds.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140B60FAC (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140B62144 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140B8EF48 (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditGetExtendedBiosDataArea @ 0x140B8F034 (HalpAuditGetExtendedBiosDataArea.c)
 *     HalpAuditQuerySlicAddresses @ 0x140B8F0AC (HalpAuditQuerySlicAddresses.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x140210194 (MiInsertLargeTbFlushEntry.c)
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x14027D0C0 (MiInsertCachedPte.c)
 *     MiMappingHasIoTracker @ 0x14029B344 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x14029B3BC (MiZeroAndFlushPtes.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14032E710 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiUnmapLargePages @ 0x1403D0D9C (MiUnmapLargePages.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiRemovePteTracker @ 0x14065F020 (MiRemovePteTracker.c)
 */

void __stdcall MmUnmapIoSpace(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  SIZE_T v2; // r15
  unsigned __int64 v3; // rbp
  SIZE_T v4; // rbx
  int HasIoTracker; // edi
  __int64 v6; // r9
  int v7; // r14d
  unsigned __int64 v8; // rsi
  SIZE_T v9; // r14
  unsigned int v10; // r13d
  __int64 v11; // rdi
  __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  bool v18; // zf
  PVOID v19; // [rsp+20h] [rbp-118h]
  _QWORD v21[24]; // [rsp+30h] [rbp-108h] BYREF

  v19 = BaseAddress;
  v2 = NumberOfBytes;
  v3 = (unsigned __int64)BaseAddress;
  v4 = (((unsigned __int16)BaseAddress & 0xFFF) + NumberOfBytes + 4095) >> 12;
  if ( (dword_140D1D1CC & 1) != 0 )
    MiRemovePteTracker(0LL);
  HasIoTracker = MiMappingHasIoTracker(v3);
  v7 = MI_IS_PHYSICAL_ADDRESS(v3);
  if ( HasIoTracker )
    MiZeroAndFlushPtes(v3, v4, 0LL, v6, v19);
  v8 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v7 )
  {
    MiReleasePtes((__int64)&qword_140C695C0, (__int64 *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), v4);
    return;
  }
  if ( (v2 & 0x1FFFFF) != 0 )
    goto LABEL_9;
  memset(v21, 0, 0xB8uLL);
  do
  {
    v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v7;
  }
  while ( v7 );
  v21[3] = 0LL;
  v9 = v2 >> 21;
  LODWORD(v21[1]) = 20;
  if ( HasIoTracker )
    goto LABEL_28;
  v10 = 0;
  v11 = MiSwizzleInvalidPte(768LL);
  if ( !(_DWORD)v9 )
    goto LABEL_27;
  v12 = (unsigned int)v9;
  v10 = v2 >> 21;
  do
  {
    v13 = v11;
    v14 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v8) )
      goto LABEL_23;
    if ( (unsigned int)MiPteHasShadow(v16, v15, v17) )
    {
      v14 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_23;
      v18 = (v11 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_23;
      v18 = (v11 & 1) == 0;
    }
    if ( !v18 )
      v13 = v11 | 0x8000000000000000uLL;
LABEL_23:
    *(_QWORD *)v8 = v13;
    if ( v14 )
      MiWritePteShadow(v8, v13);
    MiInsertLargeTbFlushEntry((__int64)v21, 1, v8);
    v8 += 8LL;
    --v12;
  }
  while ( v12 );
  v3 = (unsigned __int64)v19;
  v2 = NumberOfBytes;
LABEL_27:
  v8 -= 8LL * v10;
LABEL_28:
  if ( !(unsigned int)MiInsertCachedPte((__int64)&qword_140C695C0, (unsigned __int64 *)v8, v9) )
  {
    MiFlushTbList(v21);
LABEL_9:
    MiUnmapLargePages(v3, v2, 9LL);
  }
}
