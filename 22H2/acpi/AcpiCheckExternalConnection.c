/*
 * XREFs of AcpiCheckExternalConnection @ 0x1C0083C04
 * Callers:
 *     AcpiExternalQueryTranslatedDescriptorForGsiv @ 0x1C0083D18 (AcpiExternalQueryTranslatedDescriptorForGsiv.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C0083DB0 (AcpiExternalTranslateBiosToNtResources.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C0093D98 (ACPIRootIrpQueryBusRelations.c)
 * Callees:
 *     QueryExternalTranslatorInterface @ 0x1C00844A4 (QueryExternalTranslatorInterface.c)
 */

__int64 AcpiCheckExternalConnection()
{
  PVOID v0; // rbx
  __int64 result; // rax

  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(&ExternalTranslatorInterfaceLock, 1u);
  v0 = ExternalTranslationInterface;
  ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
  KeLeaveCriticalRegion();
  result = 0LL;
  if ( !v0 )
    return QueryExternalTranslatorInterface();
  return result;
}
