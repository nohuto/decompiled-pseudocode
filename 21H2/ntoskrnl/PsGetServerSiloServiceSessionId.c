/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x14027E130
 * Callers:
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405CEDD8 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     SeGetTokenDeviceMap @ 0x1405F2340 (SeGetTokenDeviceMap.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140603544 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PsIsServiceSession @ 0x140621468 (PsIsServiceSession.c)
 *     IoRegisterPlugPlayNotification @ 0x140673180 (IoRegisterPlugPlayNotification.c)
 *     NtQueryInformationJobObject @ 0x1406804E0 (NtQueryInformationJobObject.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x14068F9C8 (CmpDoesProcessBelongToServiceSession.c)
 *     SeQuerySessionIdTokenEx @ 0x14068FA10 (SeQuerySessionIdTokenEx.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1406DBF40 (CmpCheckOpenAccessOnKeyBody.c)
 *     PnpNotifyTargetDeviceChange @ 0x1406FE380 (PnpNotifyTargetDeviceChange.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     PnpNotifyDeviceClassChange @ 0x14073D798 (PnpNotifyDeviceClassChange.c)
 *     DbgkpSendErrorMessage @ 0x1408874D0 (DbgkpSendErrorMessage.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140906F44 (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091C7A0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14091C92C (SepCopyClientTokenAndSetSilo.c)
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
