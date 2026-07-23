/*
 * XREFs of NtdllpFreeStringRoutine @ 0x180022E70
 * Callers:
 *     RtlUpcaseUnicodeString @ 0x180015D20 (RtlUpcaseUnicodeString.c)
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     LdrpLoadForwardedDll @ 0x180016C08 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDll @ 0x18001733C (LdrpLoadDll.c)
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x180019580 (RtlAnsiStringToUnicodeString.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001A9E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlGetFullPathName_UstrEx @ 0x18001D890 (RtlGetFullPathName_UstrEx.c)
 *     LdrpFindLoadedDll @ 0x18001DB20 (LdrpFindLoadedDll.c)
 *     LdrpFindLoadedDllInternal @ 0x18001DBEC (LdrpFindLoadedDllInternal.c)
 *     RtlCreateUnicodeString @ 0x180038AF0 (RtlCreateUnicodeString.c)
 *     RtlpGetRegistryHandle @ 0x18004591C (RtlpGetRegistryHandle.c)
 *     RtlUTF8StringToUnicodeString @ 0x18005A8E0 (RtlUTF8StringToUnicodeString.c)
 *     LdrpGetNtPathFromDosPath @ 0x1800607DC (LdrpGetNtPathFromDosPath.c)
 *     LdrpGetFullPath @ 0x18006096C (LdrpGetFullPath.c)
 *     LdrpMapDllSearchPath @ 0x180060AD0 (LdrpMapDllSearchPath.c)
 *     LdrpFreeUnicodeString @ 0x180060DA0 (LdrpFreeUnicodeString.c)
 *     LdrpMapDllFullPath @ 0x180060E90 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x180061A48 (LdrpMapDllRetry.c)
 *     RtlUnicodeStringToOemString @ 0x180062170 (RtlUnicodeStringToOemString.c)
 *     RtlOemStringToUnicodeString @ 0x180062250 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180062340 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1800627D0 (RtlUnicodeStringToAnsiString.c)
 *     LdrpInitShimEngine @ 0x18006C74C (LdrpInitShimEngine.c)
 *     RtlpEnsureBufferSize @ 0x18006ED00 (RtlpEnsureBufferSize.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180073650 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180073B9C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlDuplicateUnicodeString @ 0x180079E40 (RtlDuplicateUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x18007C6E0 (RtlDowncaseUnicodeString.c)
 *     LdrpCorInitialize @ 0x180083294 (LdrpCorInitialize.c)
 *     RtlFreeOemString @ 0x18008B140 (RtlFreeOemString.c)
 *     LdrpEnclaveAddDependentModule @ 0x1800CD40C (LdrpEnclaveAddDependentModule.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D07B0 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpAddRedirectedFunction @ 0x1800D4B24 (LdrpAddRedirectedFunction.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DEB20 (LdrUpdatePackageSearchPath.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800EB240 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800EB370 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800EB480 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1800F5A6C (RtlpConstructCrossVmObjectPath.c)
 *     RtlUnicodeStringToUTF8String @ 0x180102DE0 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall NtdllpFreeStringRoutine(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
