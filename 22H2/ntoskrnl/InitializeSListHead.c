/*
 * XREFs of InitializeSListHead @ 0x140352660
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140351D54 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializePagedLookasideListInternal @ 0x1403522C0 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeLookasideListExInternal @ 0x140352460 (ExInitializeLookasideListExInternal.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14037A170 (ExInitializeNPagedLookasideListInternal.c)
 *     RtlpHpVsContextInitialize @ 0x14037B17C (RtlpHpVsContextInitialize.c)
 *     MiInitializeNuma @ 0x1403AAAC8 (MiInitializeNuma.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403B40F0 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     RtlpDynamicLookasideInitialize @ 0x1403C3930 (RtlpDynamicLookasideInitialize.c)
 *     MiInitializePageFaultResources @ 0x1403CA0A8 (MiInitializePageFaultResources.c)
 *     HvlpSetupCachedHypercallPages @ 0x1404F3CA8 (HvlpSetupCachedHypercallPages.c)
 *     MmInitializeProcessAddressSpace @ 0x1406FBB04 (MmInitializeProcessAddressSpace.c)
 *     WdipSemInitializeGlobalState @ 0x140795984 (WdipSemInitializeGlobalState.c)
 *     MiInitializePartition @ 0x1407974EC (MiInitializePartition.c)
 *     MiInitializeSections @ 0x140797A24 (MiInitializeSections.c)
 *     MiCreatePagefile @ 0x1407B7A10 (MiCreatePagefile.c)
 *     PfTInitialize @ 0x1407BF500 (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x1407BF73C (PfFbBufferListInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x14091196C (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x140930268 (WdipSemFreePool.c)
 *     EtwpInitializeStackTracing @ 0x14093580C (EtwpInitializeStackTracing.c)
 *     EtwpEnableStackCaching @ 0x140941CE4 (EtwpEnableStackCaching.c)
 *     EtwpCovSampCaptureContextStart @ 0x140942308 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x1409451B0 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x140945244 (EtwpCovSampLookasideInitialize.c)
 *     PfTAccessTracingInitialize @ 0x14099AAE4 (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x14099BFA4 (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x14099C048 (KiInitPrcb.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1409D7360 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x1409E0230 (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x140A6E944 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0LL;
}
