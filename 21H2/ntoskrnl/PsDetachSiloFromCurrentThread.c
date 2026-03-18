/*
 * XREFs of PsDetachSiloFromCurrentThread @ 0x1402D7F90
 * Callers:
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1406608E8 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14069CEC8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ObpIncrementHandleCountEx @ 0x140733B40 (ObpIncrementHandleCountEx.c)
 *     ObpCloseHandle @ 0x140734160 (ObpCloseHandle.c)
 *     ExpWnfLookupPermanentName @ 0x14075A12C (ExpWnfLookupPermanentName.c)
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MmUnloadSystemImage @ 0x140762490 (MmUnloadSystemImage.c)
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 *     EtwpLogger @ 0x140799440 (EtwpLogger.c)
 *     ObpDecrementHandleCount @ 0x1407A2FA0 (ObpDecrementHandleCount.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x1407F5E04 (VrpHandleIoctlGetVirtualRootKey.c)
 *     ExpRefreshTimeZoneInformation @ 0x140835844 (ExpRefreshTimeZoneInformation.c)
 *     SepRmCommandServerThread @ 0x14083B300 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14083B480 (SepRmLsaConnectRequest.c)
 *     EtwpInitializeSiloState @ 0x140851114 (EtwpInitializeSiloState.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14085D06C (EtwpUpdateFileInfoDriverRegistration.c)
 *     DbgkInitializeServerSilo @ 0x140927240 (DbgkInitializeServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x1409ABED8 (PspDeleteExternalServerSiloState.c)
 *     PspShutdownCsrProcess @ 0x1409AC388 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1409AC6C0 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeIsStateSeparationEnabled @ 0x1409AC724 (PspSiloInitializeIsStateSeparationEnabled.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AC86C (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1409AC998 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1409ACAD0 (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x1409C5A90 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1409CD41C (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409F5570 (EtwpTrackGuidEntryRegistrations.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F8178 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1409F8250 (ExpTimeZoneWork.c)
 *     ExpNlsInitSiloState @ 0x1409FB4F4 (ExpNlsInitSiloState.c)
 *     ObCreateSiloRootDirectory @ 0x140A34510 (ObCreateSiloRootDirectory.c)
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
