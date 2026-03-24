/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x14068F560
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x140301DF4 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037EC0C (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037F520 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpMapResourceFile @ 0x14037FE7C (LdrpMapResourceFile.c)
 *     ExpDeleteSiloState @ 0x1405B2B2C (ExpDeleteSiloState.c)
 *     AlpcViewDestroyProcedure @ 0x14061E250 (AlpcViewDestroyProcedure.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140637780 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MmUnmapViewInSessionSpace @ 0x14068F540 (MmUnmapViewInSessionSpace.c)
 *     KsepSdbMapToMemory @ 0x140755244 (KsepSdbMapToMemory.c)
 *     KsepSdbUnmapFromMemory @ 0x140755C2C (KsepSdbUnmapFromMemory.c)
 *     ExInitializeLeapSecondData @ 0x1407A92DC (ExInitializeLeapSecondData.c)
 *     EtwpCoverageEnsureContext @ 0x1407C9F5C (EtwpCoverageEnsureContext.c)
 *     CmFcpUnmapSection @ 0x1407D4A08 (CmFcpUnmapSection.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x14087E0B0 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x14087E6B4 (CmFcpManagerCreateSectionFromBuffer.c)
 *     PspDeleteServerSiloGlobals @ 0x1409062FC (PspDeleteServerSiloGlobals.c)
 *     EtwpCoverageSamplerCleanup @ 0x1409461E4 (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x140947034 (EtwpCoverageSamplerSetBloomFilter.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E2E0 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x140959B70 (NtMapCMFModule.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x1402854CC (MiRemoveFromSystemSpace.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  _QWORD *v2; // rcx
  _KPROCESS *Process; // rcx

  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)MappedBase) != 1 )
  {
    v2 = qword_140C4CD68;
LABEL_3:
    MiRemoveFromSystemSpace(v2, (ULONG_PTR)MappedBase, 1);
    return 0;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
  {
    v2 = (_QWORD *)(Process[1].AffinityPadding[5] + 192);
    goto LABEL_3;
  }
  return -1073741799;
}
