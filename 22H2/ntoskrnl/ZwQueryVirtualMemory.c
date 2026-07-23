/*
 * XREFs of ZwQueryVirtualMemory @ 0x1403F9E80
 * Callers:
 *     RtlpHpFixedHeapCreate @ 0x14037AFC8 (RtlpHpFixedHeapCreate.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x140515F60 (KiVerifyContextXStateCetUEnabled.c)
 *     SepGetStackTraceHash @ 0x140596050 (SepGetStackTraceHash.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140599544 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140599D04 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1405D0494 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1405D09D0 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1405D1528 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     sub_1406670B0 @ 0x1406670B0 (sub_1406670B0.c)
 *     LdrpResGetMappingSize @ 0x1406710B0 (LdrpResGetMappingSize.c)
 *     EtwpTiQueryVad @ 0x14069E23C (EtwpTiQueryVad.c)
 *     RtlCreateHeap @ 0x140768180 (RtlCreateHeap.c)
 *     PspFreeUserFiberShadowStack @ 0x14090A1C4 (PspFreeUserFiberShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x14090B078 (PspFreeCurrentThreadUserShadowStack.c)
 *     VerifierMmUnmapLockedPages @ 0x1409E71E0 (VerifierMmUnmapLockedPages.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
