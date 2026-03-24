/*
 * XREFs of MmMapViewInSystemSpace @ 0x1406A2470
 * Callers:
 *     LdrpMapResourceFile @ 0x14037FE7C (LdrpMapResourceFile.c)
 *     NtGetNlsSectionPtr @ 0x14069CEC0 (NtGetNlsSectionPtr.c)
 *     KsepSdbMapToMemory @ 0x140755244 (KsepSdbMapToMemory.c)
 *     ExInitializeLeapSecondData @ 0x1407A92DC (ExInitializeLeapSecondData.c)
 *     EtwpCoverageEnsureContext @ 0x1407C9F5C (EtwpCoverageEnsureContext.c)
 *     CmFcpMapSection @ 0x1407D23CC (CmFcpMapSection.c)
 *     PspApiSetCopyToSystemSpace @ 0x140905D78 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x140906C3C (PspSiloInitializeUserSharedData.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x140947034 (EtwpCoverageSamplerSetBloomFilter.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E2E0 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x140959B70 (NtMapCMFModule.c)
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 *     MiInitializeApiSets @ 0x140A54650 (MiInitializeApiSets.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x140635F9C (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSystemSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace((__int64)Section, (__int64)qword_140C4CD68, MappedBase, ViewSize, &v4, 0LL, 0LL);
}
