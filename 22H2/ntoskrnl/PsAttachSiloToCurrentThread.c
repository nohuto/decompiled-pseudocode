/*
 * XREFs of PsAttachSiloToCurrentThread @ 0x14031CAD0
 * Callers:
 *     MmUnloadSystemImage @ 0x140696020 (MmUnloadSystemImage.c)
 *     ObpIncrementHandleCountEx @ 0x1406E7110 (ObpIncrementHandleCountEx.c)
 *     ObpCloseHandle @ 0x1406E7730 (ObpCloseHandle.c)
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 *     ExpWnfLookupPermanentName @ 0x140710A1C (ExpWnfLookupPermanentName.c)
 *     NtSetInformationThread @ 0x140733AB0 (NtSetInformationThread.c)
 *     ObpDecrementHandleCount @ 0x140740464 (ObpDecrementHandleCount.c)
 *     PspExitThread @ 0x14076DF3C (PspExitThread.c)
 *     EtwpLogger @ 0x140773610 (EtwpLogger.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x14077D6B4 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077DE68 (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwpEnableGuid @ 0x140780210 (EtwpEnableGuid.c)
 *     SepRmCommandServerThread @ 0x14082D2D0 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14082D52C (SepRmLsaConnectRequest.c)
 *     EtwpInitializeSiloState @ 0x14083D0F4 (EtwpInitializeSiloState.c)
 *     ExpRefreshTimeZoneInformation @ 0x140840928 (ExpRefreshTimeZoneInformation.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14085BB8C (EtwpUpdateFileInfoDriverRegistration.c)
 *     DbgkInitializeServerSilo @ 0x140936D30 (DbgkInitializeServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x1409ACE68 (PspDeleteExternalServerSiloState.c)
 *     PspShutdownCsrProcess @ 0x1409AD358 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1409AD690 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeIsStateSeparationEnabled @ 0x1409AD6F4 (PspSiloInitializeIsStateSeparationEnabled.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AD83C (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1409AD968 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1409ADAA0 (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x1409C8EA0 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1409CFFC0 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409F5694 (EtwpTrackGuidEntryRegistrations.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F8168 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1409F8240 (ExpTimeZoneWork.c)
 *     ExpNlsInitSiloState @ 0x1409FB60C (ExpNlsInitSiloState.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140A724DC (VrpHandleIoctlGetVirtualRootKey.c)
 *     ObCreateSiloRootDirectory @ 0x140A73B70 (ObCreateSiloRootDirectory.c)
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
