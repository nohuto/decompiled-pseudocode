/*
 * XREFs of ZwQueryVirtualMemory @ 0x140412770
 * Callers:
 *     RtlpHpFixedHeapCreate @ 0x1402F78D8 (RtlpHpFixedHeapCreate.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x140457B0C (KiVerifyContextXStateCetUEnabled.c)
 *     RtlCheckXfgFailureInformation @ 0x1405AF650 (RtlCheckXfgFailureInformation.c)
 *     SepGetStackTraceHash @ 0x1405B581C (SepGetStackTraceHash.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1405BF358 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1405BFCAC (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     sub_14075424C @ 0x14075424C (sub_14075424C.c)
 *     RtlCreateHeap @ 0x14078AD90 (RtlCreateHeap.c)
 *     EtwpTiQueryVad @ 0x140793610 (EtwpTiQueryVad.c)
 *     LdrpResGetMappingSize @ 0x1407EB0A8 (LdrpResGetMappingSize.c)
 *     PspFreeUserFiberShadowStack @ 0x1409AE1B8 (PspFreeUserFiberShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1409B0BD0 (PspFreeCurrentThreadUserShadowStack.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1409E6400 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1409E7898 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1409E83F8 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140ADD2B0 (VfMiscMmUnmapLockedPages_Entry.c)
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
  return KiServiceInternal(ProcessHandle, BaseAddress);
}
