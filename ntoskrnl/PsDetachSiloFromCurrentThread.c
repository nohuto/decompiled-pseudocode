/*
 * XREFs of PsDetachSiloFromCurrentThread @ 0x1402993C0
 * Callers:
 *     EtwpEnableGuid @ 0x14068EEBC (EtwpEnableGuid.c)
 *     EtwpLogger @ 0x1406926A0 (EtwpLogger.c)
 *     ExpWnfLookupPermanentName @ 0x14071C320 (ExpWnfLookupPermanentName.c)
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x14079B558 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ObpIncrementHandleCountEx @ 0x1407C1090 (ObpIncrementHandleCountEx.c)
 *     ObpCloseHandle @ 0x1407C2500 (ObpCloseHandle.c)
 *     ObpDecrementHandleCount @ 0x1407D8404 (ObpDecrementHandleCount.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1407DCB7C (SepCleanupLUIDDeviceMapDirectory.c)
 *     MmUnloadSystemImage @ 0x1407F5FA0 (MmUnloadSystemImage.c)
 *     ExpRefreshTimeZoneInformation @ 0x140811500 (ExpRefreshTimeZoneInformation.c)
 *     SepRmCommandServerThread @ 0x140825260 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1408254BC (SepRmLsaConnectRequest.c)
 *     EtwpInitializeSiloState @ 0x14083BE04 (EtwpInitializeSiloState.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x140858188 (EtwpUpdateFileInfoDriverRegistration.c)
 *     DbgkInitializeServerSilo @ 0x140933D20 (DbgkInitializeServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x1409A9DE8 (PspDeleteExternalServerSiloState.c)
 *     PspShutdownCsrProcess @ 0x1409AA2D8 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1409AA610 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeIsStateSeparationEnabled @ 0x1409AA674 (PspSiloInitializeIsStateSeparationEnabled.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AA7BC (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1409AA8E8 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1409AAA20 (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x1409C5E50 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1409CD120 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409F2804 (EtwpTrackGuidEntryRegistrations.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F52D8 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1409F53B0 (ExpTimeZoneWork.c)
 *     ExpNlsInitSiloState @ 0x1409F877C (ExpNlsInitSiloState.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140A6F7DC (VrpHandleIoctlGetVirtualRootKey.c)
 *     ObCreateSiloRootDirectory @ 0x140A70E70 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall PsDetachSiloFromCurrentThread(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  result[1].WaitBlock[3].WaitListEntry.Blink = a1;
  return result;
}
