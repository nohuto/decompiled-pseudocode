/*
 * XREFs of ZwQueryVirtualMemory @ 0x1403FA9E0
 * Callers:
 *     RtlpHpFixedHeapCreate @ 0x14037B0A8 (RtlpHpFixedHeapCreate.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x140516260 (KiVerifyContextXStateCetUEnabled.c)
 *     SepGetStackTraceHash @ 0x140596340 (SepGetStackTraceHash.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140599834 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140599FF4 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1405D0494 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1405D09D0 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1405D1528 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     sub_1405E6550 @ 0x1405E6550 (sub_1405E6550.c)
 *     LdrpResGetMappingSize @ 0x1405EC380 (LdrpResGetMappingSize.c)
 *     EtwpTiQueryVad @ 0x14061A1CC (EtwpTiQueryVad.c)
 *     RtlCreateHeap @ 0x140768D20 (RtlCreateHeap.c)
 *     PspFreeUserFiberShadowStack @ 0x14090A2D4 (PspFreeUserFiberShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x14090B188 (PspFreeCurrentThreadUserShadowStack.c)
 *     VerifierMmUnmapLockedPages @ 0x1409E81D0 (VerifierMmUnmapLockedPages.c)
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
