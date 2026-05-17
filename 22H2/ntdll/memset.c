/*
 * XREFs of memset @ 0x1800A4600
 * Callers:
 *     RtlLargeIntegerToChar @ 0x180001010 (RtlLargeIntegerToChar.c)
 *     RtlpHpLargeAlloc @ 0x180003404 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhBucketActivate @ 0x180007328 (RtlpHpLfhBucketActivate.c)
 *     RtlpHpLfhContextAllocate @ 0x1800075AC (RtlpHpLfhContextAllocate.c)
 *     RtlpHpHeapAllocate @ 0x180007E6C (RtlpHpHeapAllocate.c)
 *     RtlpHpVsContextInitialize @ 0x18000813C (RtlpHpVsContextInitialize.c)
 *     RtlpHpSegContextInitialize @ 0x1800084E0 (RtlpHpSegContextInitialize.c)
 *     RtlpHpLfhContextInitialize @ 0x1800086EC (RtlpHpLfhContextInitialize.c)
 *     CsrAllocateCaptureBuffer @ 0x180008D50 (CsrAllocateCaptureBuffer.c)
 *     CsrpConnectToServer @ 0x180008FE4 (CsrpConnectToServer.c)
 *     RtlpSubSegmentInitialize @ 0x18000A090 (RtlpSubSegmentInitialize.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     RtlIpv6StringToAddressW @ 0x18000DB60 (RtlIpv6StringToAddressW.c)
 *     RtlDeleteResource @ 0x180010F30 (RtlDeleteResource.c)
 *     TppCleanupGroupMemberDestroy @ 0x180012088 (TppCleanupGroupMemberDestroy.c)
 *     RtlpComputeLangListCheckSum @ 0x18001532C (RtlpComputeLangListCheckSum.c)
 *     RtlIntegerToChar @ 0x1800163A0 (RtlIntegerToChar.c)
 *     LdrpInitializeDllPath @ 0x1800169B8 (LdrpInitializeDllPath.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001A9E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlGetFullPathName_Ustr @ 0x18001B430 (RtlGetFullPathName_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001C2B4 (sxsisol_SearchActCtxForDllName.c)
 *     RtlpReAllocateHeap @ 0x1800219E4 (RtlpReAllocateHeap.c)
 *     RtlpHpAllocVA @ 0x180022BAC (RtlpHpAllocVA.c)
 *     RtlpHpSegMgrCommit @ 0x180022E90 (RtlpHpSegMgrCommit.c)
 *     RtlpHpReAllocateHeap @ 0x180023990 (RtlpHpReAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x1800271D0 (RtlpHpSegReAlloc.c)
 *     RtlpHpVsContextAllocateInternal @ 0x180028CD0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpSegAlloc @ 0x180029B70 (RtlpHpSegAlloc.c)
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002B650 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x18002F690 (RtlpHpLfhSubsegmentInitialize.c)
 *     LdrpResolveProcedureAddress @ 0x1800303F4 (LdrpResolveProcedureAddress.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180037EF8 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18003C2D4 (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlSwitchedVVI @ 0x18003CC40 (RtlSwitchedVVI.c)
 *     SbSelectProcedure @ 0x18003E0E0 (SbSelectProcedure.c)
 *     SbpUpdateCacheWithCurrentImpl @ 0x18003E2C0 (SbpUpdateCacheWithCurrentImpl.c)
 *     A_SHAFinal @ 0x180040240 (A_SHAFinal.c)
 *     SHA256Final @ 0x18004034C (SHA256Final.c)
 *     RtlpCreateWnfNameSubscription @ 0x18004277C (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateWnfUserSubscription @ 0x180042920 (RtlpCreateWnfUserSubscription.c)
 *     EtwpSetProviderTraits @ 0x180042B48 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x180042ECC (EtwpRegisterProvider.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180043280 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpCreateRegGuidsContext @ 0x180043B94 (EtwpCreateRegGuidsContext.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180044040 (RtlpGetTokenNamedObjectPath.c)
 *     EtwpDisableTraceProviders @ 0x180044FF4 (EtwpDisableTraceProviders.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x1800467D0 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlpFindRegTziForCurrentYear @ 0x180046F54 (RtlpFindRegTziForCurrentYear.c)
 *     RtlCheckPortableOperatingSystem @ 0x180047C50 (RtlCheckPortableOperatingSystem.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x180047EA4 (RtlpQueryTimeZoneInformationWorker.c)
 *     EtwpAllocateUmGuidEntry @ 0x1800480A4 (EtwpAllocateUmGuidEntry.c)
 *     EtwpAllocateFreeBuffers @ 0x180048A90 (EtwpAllocateFreeBuffers.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180048BF8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180049AF0 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpGetTimeZoneInformation @ 0x180049C68 (EtwpGetTimeZoneInformation.c)
 *     EtwpQueryPartitionRegistryInformationUm @ 0x18004A040 (EtwpQueryPartitionRegistryInformationUm.c)
 *     RtlCreateProcessParametersInternal @ 0x18004A9F0 (RtlCreateProcessParametersInternal.c)
 *     RtlpCopyProcString @ 0x18004AEEC (RtlpCopyProcString.c)
 *     RtlpInitEnvironmentBlock @ 0x18004AFB8 (RtlpInitEnvironmentBlock.c)
 *     RtlSetEnvironmentVar @ 0x18004B430 (RtlSetEnvironmentVar.c)
 *     EtwpFlushBuffer @ 0x18004CA44 (EtwpFlushBuffer.c)
 *     TppWorkerThread @ 0x18004D110 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x18004DD30 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18004E04C (TppCallbackCheckThreadAfterCallback.c)
 *     TpCheckTerminateWorker @ 0x18004EC90 (TpCheckTerminateWorker.c)
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x18004FCA4 (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005064C (EtwpWriteToPrivateBuffers.c)
 *     EtwpTraceUmEvent @ 0x180050CE4 (EtwpTraceUmEvent.c)
 *     EtwpFreeRegistration @ 0x1800515F8 (EtwpFreeRegistration.c)
 *     RtlInitializeExtendedContext2 @ 0x180053090 (RtlInitializeExtendedContext2.c)
 *     RtlpCopyXStateChunk @ 0x18005350C (RtlpCopyXStateChunk.c)
 *     LdrpGetNewTlsVector @ 0x180054CA8 (LdrpGetNewTlsVector.c)
 *     RtlSetBits @ 0x180055310 (RtlSetBits.c)
 *     RtlClearBits @ 0x180058550 (RtlClearBits.c)
 *     RtlCreateAtomTableEx @ 0x180059068 (RtlCreateAtomTableEx.c)
 *     RtlpInsertStringAtom @ 0x180059A00 (RtlpInsertStringAtom.c)
 *     RtlpFreeHandleForAtom @ 0x180059CB0 (RtlpFreeHandleForAtom.c)
 *     RtlFreeHandle @ 0x180059D10 (RtlFreeHandle.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x18005B060 (RtlCompressBufferXpressHuffStandard.c)
 *     XpressBuildHuffmanEncodings @ 0x18005BB50 (XpressBuildHuffmanEncodings.c)
 *     MD5Final @ 0x18005D320 (MD5Final.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x18005DD2C (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x18005DF68 (RtlpFcBufferManagerUpdateBuffers.c)
 *     RtlReportSilentProcessExit @ 0x18005F410 (RtlReportSilentProcessExit.c)
 *     WerpGlobalFlagsForProcess @ 0x180061C54 (WerpGlobalFlagsForProcess.c)
 *     TppPoolUpdateNodeRelation @ 0x18006336C (TppPoolUpdateNodeRelation.c)
 *     RtlStringCbPrintfExW @ 0x18006ADBC (RtlStringCbPrintfExW.c)
 *     LdrpRemoveAlternateModuleCacheItem @ 0x18006C150 (LdrpRemoveAlternateModuleCacheItem.c)
 *     LdrpInitializeShimDllDependencies @ 0x18006CB94 (LdrpInitializeShimDllDependencies.c)
 *     RtlMakeSelfRelativeSD @ 0x18006E290 (RtlMakeSelfRelativeSD.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x180070520 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     RtlpTpImpersonate @ 0x180071130 (RtlpTpImpersonate.c)
 *     RtlActivateActivationContextEx @ 0x1800733B0 (RtlActivateActivationContextEx.c)
 *     RtlCreateActivationContext @ 0x180073E60 (RtlCreateActivationContext.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x180073FB4 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpCreateHashTable @ 0x1800743C8 (RtlpCreateHashTable.c)
 *     CompatCachepLookupCdb @ 0x180074584 (CompatCachepLookupCdb.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800750CC (RtlpQueryExtendedHeapInformation.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x1800751AC (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlpZeroBlockFromOffset @ 0x1800760E4 (RtlpZeroBlockFromOffset.c)
 *     LdrpQuerySxSMUIFile @ 0x18007757C (LdrpQuerySxSMUIFile.c)
 *     RtlpSetSecurityObject @ 0x1800777AC (RtlpSetSecurityObject.c)
 *     RtlClearAllBits @ 0x180078F00 (RtlClearAllBits.c)
 *     RtlpLocateActivationContextSectionForQuery @ 0x180079338 (RtlpLocateActivationContextSectionForQuery.c)
 *     RtlpDeleteData @ 0x180079800 (RtlpDeleteData.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18007A3F8 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007ADD0 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlVerifyVersionInfo @ 0x18007B0E0 (RtlVerifyVersionInfo.c)
 *     RtlCreateMemoryBlockLookaside @ 0x18007B590 (RtlCreateMemoryBlockLookaside.c)
 *     RtlpQueryExtendedInformationHeap @ 0x18007B8F0 (RtlpQueryExtendedInformationHeap.c)
 *     RtlSidHashInitialize @ 0x18007C970 (RtlSidHashInitialize.c)
 *     RtlpInitializeWnf @ 0x18007D380 (RtlpInitializeWnf.c)
 *     RtlIpv6StringToAddressA @ 0x18007D720 (RtlIpv6StringToAddressA.c)
 *     LdrLoadAlternateResourceModule @ 0x18007E480 (LdrLoadAlternateResourceModule.c)
 *     RtlInitializeGenericTableAvl @ 0x18007E740 (RtlInitializeGenericTableAvl.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007EE00 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x18007EFB0 (RtlpHpLfhBucketAllocateSlot.c)
 *     TpAllocJobNotification @ 0x18007FE00 (TpAllocJobNotification.c)
 *     Normalization__LoadTables @ 0x180081060 (Normalization__LoadTables.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800817B4 (LdrpRedirectDelayloadFailure.c)
 *     EtwpShutdownPrivateLoggers @ 0x180081F90 (EtwpShutdownPrivateLoggers.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800830C4 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     RtlSetEnvironmentStrings @ 0x1800831C0 (RtlSetEnvironmentStrings.c)
 *     RtlInitializeCorrelationVector @ 0x180085B50 (RtlInitializeCorrelationVector.c)
 *     RtlEraseUnicodeString @ 0x180086250 (RtlEraseUnicodeString.c)
 *     RtlpMUIEnumerateFolder @ 0x18008737C (RtlpMUIEnumerateFolder.c)
 *     RtlZeroMemory @ 0x1800883D0 (RtlZeroMemory.c)
 *     RtlExpandHashTable @ 0x180088C70 (RtlExpandHashTable.c)
 *     RtlpCreateUserProcess @ 0x180089000 (RtlpCreateUserProcess.c)
 *     RtlConnectToSm @ 0x180089BB0 (RtlConnectToSm.c)
 *     RtlDestroyAtomTable @ 0x18008AD00 (RtlDestroyAtomTable.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008BF20 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlSetCurrentEnvironment @ 0x18008C1A0 (RtlSetCurrentEnvironment.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008C298 (RtlpLoadInstallLanguageFallback.c)
 *     memcpy_s @ 0x180097AB0 (memcpy_s.c)
 *     _output_s @ 0x180098684 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x180098F0C (_safecrt_wctomb_s.c)
 *     _woutput_s @ 0x18009A0AC (_woutput_s.c)
 *     ReadStringDelimited_1 @ 0x18009ACCC (ReadStringDelimited_1.c)
 *     wil_details_StagingConfig_Load @ 0x18009C548 (wil_details_StagingConfig_Load.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CB520 (LdrAppxHandleIntegrityFailure.c)
 *     RtlEnableThreadProfiling @ 0x1800CBE10 (RtlEnableThreadProfiling.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1800CD9BC (RtlStringExHandleOtherFlagsW.c)
 *     LdrpLogEtwEvent @ 0x1800CF110 (LdrpLogEtwEvent.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800CF660 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpConstructModernAppKeyName @ 0x1800D068C (LdrpConstructModernAppKeyName.c)
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 *     LdrpInitializeProcessHeap @ 0x1800D3E9C (LdrpInitializeProcessHeap.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D7740 (RtlQueryProcessDebugInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7C20 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessModuleInformation @ 0x1800D82A0 (RtlQueryProcessModuleInformation.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x1800D8D30 (RtlpQueryProcessEnumHeapsRoutine.c)
 *     AVrfpParseVerifierDllsString @ 0x1800DAF60 (AVrfpParseVerifierDllsString.c)
 *     AVrfpSnapDllImports @ 0x1800DB2A0 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800DB560 (AvrfMiniLoadDll.c)
 *     ReportExceptionInternal @ 0x1800DC7F8 (ReportExceptionInternal.c)
 *     RtlReportExceptionEx @ 0x1800DCA00 (RtlReportExceptionEx.c)
 *     SendMessageToWERService @ 0x1800DD34C (SendMessageToWERService.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DD76C (WerpAllocateAndInitializeSid.c)
 *     WerpCreateCrashDataSection @ 0x1800DD914 (WerpCreateCrashDataSection.c)
 *     LdrpMUIEtwOutput @ 0x1800E133C (LdrpMUIEtwOutput.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800E19A0 (RtlQueryImageMitigationPolicy.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E3948 (RtlpQueryEafPlusModuleList.c)
 *     LdrpResSearchResourceHandle @ 0x1800E45FC (LdrpResSearchResourceHandle.c)
 *     RtlResetRtlTranslations @ 0x1800E53F0 (RtlResetRtlTranslations.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1800E66A0 (RtlNormalizeSecurityDescriptor.c)
 *     RtlAddResourceAttributeAce @ 0x1800E97E0 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E9F80 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800EA2F0 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlClearAllBitsEx @ 0x1800EB870 (RtlClearAllBitsEx.c)
 *     RtlClearBitsEx @ 0x1800EB8B0 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x1800ED440 (RtlSetBitsEx.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EE040 (RtlRestoreBootStatusDefaults.c)
 *     RtlConvertLCIDToString @ 0x1800EEDA0 (RtlConvertLCIDToString.c)
 *     RtlUnicodeStringToLcid @ 0x1800EF5A8 (RtlUnicodeStringToLcid.c)
 *     RtlpSetInstallLanguage @ 0x1800F0A50 (RtlpSetInstallLanguage.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3B90 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F45D8 (RtlpHpOverrideGCInterval.c)
 *     RtlpInitializeMap @ 0x1800F7F94 (RtlpInitializeMap.c)
 *     RtlFillMemory @ 0x1800FC210 (RtlFillMemory.c)
 *     RtlFillNonVolatileMemory @ 0x1800FC230 (RtlFillNonVolatileMemory.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1800FC528 (RtlStringExHandleFillBehindNullW.c)
 *     RtlInitializeContext @ 0x1800FEE50 (RtlInitializeContext.c)
 *     RtlInitializeExceptionLog @ 0x180100798 (RtlInitializeExceptionLog.c)
 *     RtlStdInitializeStackDatabase @ 0x180101050 (RtlStdInitializeStackDatabase.c)
 *     RtlTraceDatabaseCreate @ 0x180102750 (RtlTraceDatabaseCreate.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1801067C4 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180106DD4 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1801072D8 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpHpHeapHandleError @ 0x180108380 (RtlpHpHeapHandleError.c)
 *     RtlpHpRaiseFatalLimitError @ 0x18010862C (RtlpHpRaiseFatalLimitError.c)
 *     RtlpHpStackTraceConfig @ 0x180108E80 (RtlpHpStackTraceConfig.c)
 *     RtlpHpStackTraceEnable @ 0x180108F48 (RtlpHpStackTraceEnable.c)
 *     RtlpHpStackTraceEtwCallback @ 0x180108FF0 (RtlpHpStackTraceEtwCallback.c)
 *     RtlpHpStackTraceEventWriter @ 0x1801090C0 (RtlpHpStackTraceEventWriter.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1801095E4 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpInitializeStackTraceLog @ 0x1801097CC (RtlpInitializeStackTraceLog.c)
 *     RtlpLogHeapCommit @ 0x180109E08 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapDecommit @ 0x180109FEC (RtlpLogHeapDecommit.c)
 *     RtlpLogHeapSubSegmentAlloc @ 0x18010A420 (RtlpLogHeapSubSegmentAlloc.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x18010A4D0 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x18010A580 (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLogHeapSubSegmentFreeCached @ 0x18010A630 (RtlpLogHeapSubSegmentFreeCached.c)
 *     RtlpLogHeapSubSegmentInitialize @ 0x18010A6E0 (RtlpLogHeapSubSegmentInitialize.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x18010B198 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlDecompressBufferLZNT1 @ 0x18010C940 (RtlDecompressBufferLZNT1.c)
 *     RtlCompressBufferXpressHuffMax @ 0x18010CD34 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzMax @ 0x18010D43C (RtlCompressBufferXpressLzMax.c)
 *     RtlHpHeapManagerInitialize @ 0x18010DDF4 (RtlHpHeapManagerInitialize.c)
 *     RtlpInitializeLfhBitmapData @ 0x18010E59C (RtlpInitializeLfhBitmapData.c)
 *     MD4Final @ 0x18010FD00 (MD4Final.c)
 *     TppRaiseInvalidParameter @ 0x18011235C (TppRaiseInvalidParameter.c)
 *     SbpTraceContextUpdate @ 0x1801137A8 (SbpTraceContextUpdate.c)
 *     PssNtCaptureSnapshot @ 0x180113B70 (PssNtCaptureSnapshot.c)
 *     PssNtValidateDescriptor @ 0x180114740 (PssNtValidateDescriptor.c)
 *     PsspCaptureHandleTrace @ 0x180114A18 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x180114C10 (PsspCaptureIptTrace.c)
 *     PsspCaptureAuxiliaryPages @ 0x180114F0C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x18011538C (PsspCaptureVaSpaceInformation2.c)
 *     PsspWalkHandleTable @ 0x1801161E4 (PsspWalkHandleTable.c)
 *     PsspDumpThread @ 0x1801167E8 (PsspDumpThread.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x180116B54 (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x180116C80 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x180116E00 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     PsspWalkInfoClass_PSS_WALK_VA_SPACE @ 0x180116F88 (PsspWalkInfoClass_PSS_WALK_VA_SPACE.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180117138 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1801176A0 (PsspDuplicateSnapshotRemoteToRemote.c)
 *     RtlpStackDbEntryCreate @ 0x180119078 (RtlpStackDbEntryCreate.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}
