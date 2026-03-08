/*
 * XREFs of AcpiExternalQueryTranslatedDescriptorForGsiv @ 0x1C0083D08
 * Callers:
 *     AcpiIrqTranslateSecondaryInterruptToNtResources @ 0x1C000AB60 (AcpiIrqTranslateSecondaryInterruptToNtResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     AcpiCheckExternalConnection @ 0x1C0083BF4 (AcpiCheckExternalConnection.c)
 */

__int64 __fastcall AcpiExternalQueryTranslatedDescriptorForGsiv(unsigned int a1, __int64 a2)
{
  unsigned int v4; // ebx

  AcpiCheckExternalConnection();
  v4 = -1073741822;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(&ExternalTranslatorInterfaceLock, 1u);
  if ( ExternalTranslationInterface )
    v4 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, __int64))ExternalTranslationInterface + 9))(a1, 0LL, a2);
  ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
  KeLeaveCriticalRegion();
  return v4;
}
