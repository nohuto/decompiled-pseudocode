/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x140264460
 * Callers:
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405CEDD8 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405EC7E0 (CmpCheckOpenAccessOnKeyBody.c)
 *     NtQueryInformationJobObject @ 0x140616880 (NtQueryInformationJobObject.c)
 *     SeQuerySessionIdTokenEx @ 0x140634440 (SeQuerySessionIdTokenEx.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x1406344E4 (CmpDoesProcessBelongToServiceSession.c)
 *     SeGetTokenDeviceMap @ 0x140692CBC (SeGetTokenDeviceMap.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406A5914 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PsIsServiceSession @ 0x1406C27A8 (PsIsServiceSession.c)
 *     IoRegisterPlugPlayNotification @ 0x1406C4890 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyTargetDeviceChange @ 0x1406E6FA0 (PnpNotifyTargetDeviceChange.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     PnpNotifyDeviceClassChange @ 0x14073D5D8 (PnpNotifyDeviceClassChange.c)
 *     DbgkpSendErrorMessage @ 0x140887370 (DbgkpSendErrorMessage.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140906DE4 (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091C640 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14091C7CC (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloServiceSessionId(__int64 a1)
{
  unsigned int **v1; // rax

  v1 = (unsigned int **)&PspHostSiloGlobals;
  if ( a1 )
    v1 = *(unsigned int ***)(a1 + 1272);
  return *v1[141];
}
