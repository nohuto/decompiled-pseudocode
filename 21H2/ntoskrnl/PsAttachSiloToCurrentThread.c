/*
 * XREFs of PsAttachSiloToCurrentThread @ 0x14026D090
 * Callers:
 *     ExpTimeZoneInitSiloState @ 0x1405D1B7C (ExpTimeZoneInitSiloState.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140603544 (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwpLogger @ 0x14063A500 (EtwpLogger.c)
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     ExpWnfLookupPermanentName @ 0x140663338 (ExpWnfLookupPermanentName.c)
 *     ObpDecrementHandleCount @ 0x140663B94 (ObpDecrementHandleCount.c)
 *     EtwpEnableGuid @ 0x1406B96E4 (EtwpEnableGuid.c)
 *     ObCloseHandleTableEntry @ 0x14070CA40 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x14070D340 (ObpIncrementHandleCountEx.c)
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1407333C4 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 *     MmUnloadSystemImage @ 0x140772310 (MmUnloadSystemImage.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14079888C (EtwpUpdateFileInfoDriverRegistration.c)
 *     EtwInitializeSiloState @ 0x14079ADF8 (EtwInitializeSiloState.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9754 (ExpRefreshTimeZoneInformation.c)
 *     SepRmCommandServerThread @ 0x1407AD430 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1407AD5B0 (SepRmLsaConnectRequest.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140882D18 (VrpHandleIoctlGetVirtualRootKey.c)
 *     DbgkInitializeServerSilo @ 0x1408844E8 (DbgkInitializeServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x140906398 (PspDeleteExternalServerSiloState.c)
 *     PspShutdownCsrProcess @ 0x1409067B0 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x140906AD8 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140906C20 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140906D4C (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140906E74 (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x14091C234 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x14092392C (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x14094149C (EtwpTrackGuidEntryRegistrations.c)
 *     ExpTimeZoneWork @ 0x14094BDE0 (ExpTimeZoneWork.c)
 *     ObCreateSiloRootDirectory @ 0x1409806B0 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall PsAttachSiloToCurrentThread(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  struct _LIST_ENTRY *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  CurrentThread[1].WaitBlock[3].WaitListEntry.Blink = a1;
  return result;
}
