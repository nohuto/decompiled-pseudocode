/*
 * XREFs of AcpiCheckExternalConnection @ 0x1C0083BF4
 * Callers:
 *     AcpiExternalQueryTranslatedDescriptorForGsiv @ 0x1C0083D08 (AcpiExternalQueryTranslatedDescriptorForGsiv.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C0083DA0 (AcpiExternalTranslateBiosToNtResources.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C0093D88 (ACPIRootIrpQueryBusRelations.c)
 * Callees:
 *     QueryExternalTranslatorInterface @ 0x1C0084494 (QueryExternalTranslatorInterface.c)
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
