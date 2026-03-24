/*
 * XREFs of MmUnmapIoSpace @ 0x1402EA680
 * Callers:
 *     HalpAcpiGetRsdt @ 0x1402E7690 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetTableWork @ 0x1402E7850 (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x1402E79EC (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiCheckAndMapTable @ 0x1402E7D28 (HalpAcpiCheckAndMapTable.c)
 *     MiAllocateContiguousMemory @ 0x1402E808C (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x1402E9070 (MmFreeContiguousMemory.c)
 *     BgpFwLibraryEnable @ 0x14039C188 (BgpFwLibraryEnable.c)
 *     HalpAcpiGetAllTablesWork @ 0x1403BAE94 (HalpAcpiGetAllTablesWork.c)
 *     HalInitializeBios @ 0x1403C4710 (HalInitializeBios.c)
 *     WmipFirmwareTableHandler @ 0x1403CA8D0 (WmipFirmwareTableHandler.c)
 *     HalpMcaExtendedLogInitialize @ 0x1404BA3B0 (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1404C6F18 (HalpDmaAllocateNewTranslationBuffer.c)
 *     MiHugePageOperation @ 0x140532EB8 (MiHugePageOperation.c)
 *     WmipGetSMBiosTableData @ 0x14065FBBC (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x1407CFE44 (ExpGetSystemPlatformBinary.c)
 *     HvlDeleteProcessor @ 0x14088E710 (HvlDeleteProcessor.c)
 *     MiMapNewPfns @ 0x1408C5D24 (MiMapNewPfns.c)
 *     WmipFindSMBiosStructure @ 0x140931848 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x14093198C (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x140931A84 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x140931C78 (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x140931F3C (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x14095D9A4 (WheapClearPoison.c)
 *     PopGetHwConfigurationSignature @ 0x140996ED4 (PopGetHwConfigurationSignature.c)
 *     HalpFreeNvsBuffers @ 0x140998EA8 (HalpFreeNvsBuffers.c)
 *     HalpInitGenericErrorSourceEntry @ 0x1409A7820 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x1409A7AB8 (HalpInitGenericErrorSourceEntryV2.c)
 *     PipInitComputerIds @ 0x140A5B730 (PipInitComputerIds.c)
 *     HalpAuditQuerySlicAddresses @ 0x140A654C8 (HalpAuditQuerySlicAddresses.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140A656CC (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditGetExtendedBiosDataArea @ 0x140A6586C (HalpAuditGetExtendedBiosDataArea.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A65B2C (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140A6967C (HalpPowerInitFwPerformanceTableMappings.c)
 * Callees:
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x140245570 (MiInsertCachedPte.c)
 *     MiMappingHasIoTracker @ 0x14029D1D0 (MiMappingHasIoTracker.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14029D260 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiZeroAndFlushPtes @ 0x1402EA790 (MiZeroAndFlushPtes.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402EDDE0 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiUnmapLargePages @ 0x140394BE4 (MiUnmapLargePages.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiRemovePteTracker @ 0x14055EFA0 (MiRemovePteTracker.c)
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
  __int64 v18; // r9
  bool v19; // zf
  _KPROCESS *v20; // rdx
  _QWORD v23[24]; // [rsp+30h] [rbp-108h] BYREF

  v2 = NumberOfBytes;
  v3 = (unsigned __int64)BaseAddress;
  v4 = (((unsigned __int16)BaseAddress & 0xFFF) + NumberOfBytes + 4095) >> 12;
  if ( (dword_140CFB17C & 1) != 0 )
    MiRemovePteTracker(0LL);
  HasIoTracker = MiMappingHasIoTracker(v3);
  v7 = MI_IS_PHYSICAL_ADDRESS(v3);
  if ( HasIoTracker == 1 )
    MiZeroAndFlushPtes(v3, v4);
  v8 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v7 )
  {
    MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), v4);
    return;
  }
  if ( (v2 & 0x1FFFFF) != 0 )
    goto LABEL_9;
  memset(v23, 0, 0xB8uLL);
  do
  {
    v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v7;
  }
  while ( v7 );
  v23[3] = 0LL;
  v9 = v2 >> 21;
  LODWORD(v23[1]) = 20;
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
    if ( !MiPteInShadowRange(v8) )
      goto LABEL_23;
    if ( (unsigned int)MiPteHasShadow(v16, v15, v17, v18) )
    {
      v14 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_23;
      v19 = (v11 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_23;
      v19 = (v11 & 1) == 0;
    }
    if ( !v19 )
      v13 = v11 | 0x8000000000000000uLL;
LABEL_23:
    *(_QWORD *)v8 = v13;
    if ( v14 )
      MiWritePteShadow(v8, v13);
    MiInsertLargeTbFlushEntry(v23, 1LL, v8);
    v8 += 8LL;
    --v12;
  }
  while ( v12 );
  v3 = (unsigned __int64)BaseAddress;
  v2 = NumberOfBytes;
LABEL_27:
  v8 -= 8LL * v10;
LABEL_28:
  if ( (unsigned int)MiInsertCachedPte((__int64)&qword_140C4EF40, v8, (unsigned int)v9) != 1 )
  {
    MiFlushTbList((__int64)v23, v20);
LABEL_9:
    MiUnmapLargePages(v3, v2, 9LL, v6);
  }
}
