/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x1402DF7B0
 * Callers:
 *     NtQueryInformationJobObject @ 0x140684450 (NtQueryInformationJobObject.c)
 *     SeGetTokenDeviceMap @ 0x14069CC40 (SeGetTokenDeviceMap.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14069CEC8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x1406C7270 (CmpDoesProcessBelongToServiceSession.c)
 *     PsIsServiceSession @ 0x1406E9070 (PsIsServiceSession.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     IoRegisterPlugPlayNotification @ 0x140768390 (IoRegisterPlugPlayNotification.c)
 *     SeQuerySessionIdTokenEx @ 0x14077D580 (SeQuerySessionIdTokenEx.c)
 *     PnpNotifyTargetDeviceChange @ 0x14078B7C4 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x14078D5D8 (PnpNotifyDeviceClassChange.c)
 *     DbgkpSendErrorMessage @ 0x14092A29C (DbgkpSendErrorMessage.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x140944ADC (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1409ACBA0 (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C6000 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1409C61B0 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloServiceSessionId(__int64 a1)
{
  unsigned int **v1; // rax

  v1 = (unsigned int **)&PspHostSiloGlobals;
  if ( a1 )
    v1 = *(unsigned int ***)(a1 + 1464);
  return *v1[165];
}
