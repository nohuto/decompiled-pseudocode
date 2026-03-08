/*
 * XREFs of InitializeSListHead @ 0x1402A8B90
 * Callers:
 *     ExInitializeLookasideListExInternal @ 0x1402A8000 (ExInitializeLookasideListExInternal.c)
 *     MiAbsorbPossibleEngineChanges @ 0x1402A87C4 (MiAbsorbPossibleEngineChanges.c)
 *     ExInitializePagedLookasideListInternal @ 0x1402F6750 (ExInitializePagedLookasideListInternal.c)
 *     RtlpHpVsContextInitialize @ 0x1402F7B28 (RtlpHpVsContextInitialize.c)
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403589B4 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiInitializePageFaultResources @ 0x140370C30 (MiInitializePageFaultResources.c)
 *     MiInitializeNuma @ 0x140394008 (MiInitializeNuma.c)
 *     RtlpDynamicLookasideInitialize @ 0x14039D5B0 (RtlpDynamicLookasideInitialize.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403A340C (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1403BD3B0 (ExInitializeNPagedLookasideListInternal.c)
 *     HvlpSetupCachedHypercallPages @ 0x14053FCEC (HvlpSetupCachedHypercallPages.c)
 *     MmInitializeProcessAddressSpace @ 0x1407291A8 (MmInitializeProcessAddressSpace.c)
 *     EtwpInitLoggerContext @ 0x140761AA8 (EtwpInitLoggerContext.c)
 *     WdipSemInitializeGlobalState @ 0x1408347EC (WdipSemInitializeGlobalState.c)
 *     MiCreatePagefile @ 0x140835934 (MiCreatePagefile.c)
 *     MiInitializePartition @ 0x140837D40 (MiInitializePartition.c)
 *     MiInitializeSections @ 0x1408385EC (MiInitializeSections.c)
 *     PfTInitialize @ 0x140845B5C (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x140845D94 (PfFbBufferListInitialize.c)
 *     EtwpEnableStackCaching @ 0x1408A385A (EtwpEnableStackCaching.c)
 *     RtlStdInitializeStackDatabase @ 0x1409B76AC (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x1409DB200 (WdipSemFreePool.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409EDC1C (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x1409EF7B0 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1409EF844 (EtwpCovSampLookasideInitialize.c)
 *     PfTAccessTracingInitialize @ 0x140A85A48 (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x140A886F8 (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x140A88DD8 (KiInitPrcb.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140AC8A34 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x140AD7118 (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x140B38844 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0LL;
}
