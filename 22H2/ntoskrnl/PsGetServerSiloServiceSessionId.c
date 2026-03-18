/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x1402C0850
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x140687F00 (IoRegisterPlugPlayNotification.c)
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x140740BF0 (CmpDoesProcessBelongToServiceSession.c)
 *     SeQuerySessionIdTokenEx @ 0x1407422E0 (SeQuerySessionIdTokenEx.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077DE68 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PnpNotifyTargetDeviceChange @ 0x14078386C (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x14078F790 (PnpNotifyDeviceClassChange.c)
 *     SeGetTokenDeviceMap @ 0x1407AFD00 (SeGetTokenDeviceMap.c)
 *     PsIsServiceSession @ 0x1407E8C4C (PsIsServiceSession.c)
 *     DbgkpSendErrorMessage @ 0x14093A32C (DbgkpSendErrorMessage.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1409569A0 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1409ADB70 (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C9410 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1409C95C0 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloServiceSessionId(__int64 a1)
{
  unsigned int **v1; // rax

  v1 = (unsigned int **)&PspHostSiloGlobals;
  if ( a1 )
    v1 = *(unsigned int ***)(a1 + 1488);
  return *v1[165];
}
