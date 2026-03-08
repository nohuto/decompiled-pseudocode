/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x1402456C0
 * Callers:
 *     PnpNotifyTargetDeviceChange @ 0x14068C820 (PnpNotifyTargetDeviceChange.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x1406CDA44 (CmpDoesProcessBelongToServiceSession.c)
 *     SeQuerySessionIdTokenEx @ 0x1406CDD00 (SeQuerySessionIdTokenEx.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     IoRegisterPlugPlayNotification @ 0x1406F4F30 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x1406F5818 (PnpNotifyDeviceClassChange.c)
 *     NtQueryInformationJobObject @ 0x1406F9480 (NtQueryInformationJobObject.c)
 *     SeGetTokenDeviceMap @ 0x14075D880 (SeGetTokenDeviceMap.c)
 *     PsIsServiceSession @ 0x140799A4C (PsIsServiceSession.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1407DCB7C (SepCleanupLUIDDeviceMapDirectory.c)
 *     DbgkpSendErrorMessage @ 0x14093730C (DbgkpSendErrorMessage.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x140953980 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1409AAAF0 (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C63C0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1409C6570 (SepCopyClientTokenAndSetSilo.c)
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
