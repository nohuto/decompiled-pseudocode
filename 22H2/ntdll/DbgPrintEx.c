/*
 * XREFs of DbgPrintEx @ 0x180051450
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x180012DE0 (RtlQueryInformationActivationContext.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x1800197B0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001C2B4 (sxsisol_SearchActCtxForDllName.c)
 *     RtlFindActivationContextSectionString @ 0x18001C6C0 (RtlFindActivationContextSectionString.c)
 *     RtlpFindUnicodeStringInSection @ 0x18001CA18 (RtlpFindUnicodeStringInSection.c)
 *     RtlFindActivationContextSectionGuid @ 0x18001CD80 (RtlFindActivationContextSectionGuid.c)
 *     RtlpLocateActivationContextSection @ 0x18001D0FC (RtlpLocateActivationContextSection.c)
 *     RtlpFindActivationContextSection_CheckParameters @ 0x18001D278 (RtlpFindActivationContextSection_CheckParameters.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1800356C0 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180047690 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18004E04C (TppCallbackCheckThreadAfterCallback.c)
 *     TpCheckTerminateWorker @ 0x18004EC90 (TpCheckTerminateWorker.c)
 *     RtlpWaitOnCriticalSection @ 0x180064940 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x180065F80 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800660A0 (RtlAcquireResourceExclusive.c)
 *     RtlDeactivateActivationContext @ 0x180071A40 (RtlDeactivateActivationContext.c)
 *     RtlGetAssemblyStorageRoot @ 0x180072F70 (RtlGetAssemblyStorageRoot.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180073094 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180073650 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180073A74 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180073B9C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlCreateActivationContext @ 0x180073E60 (RtlCreateActivationContext.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x180073FB4 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpValidateActivationContextData @ 0x180074038 (RtlpValidateActivationContextData.c)
 *     RtlpQueryRunLevel @ 0x180078F28 (RtlpQueryRunLevel.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x180079018 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpCrackActivationContextStringSectionHeader @ 0x1800793EC (RtlpCrackActivationContextStringSectionHeader.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007ADD0 (RtlQueryActivationContextApplicationSettings.c)
 *     UninitUser32Proc @ 0x18008C630 (UninitUser32Proc.c)
 *     AVrfInitializeVerifier @ 0x1800D97D8 (AVrfInitializeVerifier.c)
 *     AvrfMiniLoadDll @ 0x1800DB560 (AvrfMiniLoadDll.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800DFA78 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800DFD08 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E0050 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E8FA0 (RtlpNotOwnerCriticalSection.c)
 *     RtlAssert @ 0x1800ED6C0 (RtlAssert.c)
 *     RtlReportCriticalFailure @ 0x1800FF2FC (RtlReportCriticalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x180100800 (RtlUnhandledExceptionFilter2.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x180051B08 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrintEx(ULONG ComponentId, ULONG Level, PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal(&Flags, ComponentId, Level, Format, (__int64 *)va, 1);
}
