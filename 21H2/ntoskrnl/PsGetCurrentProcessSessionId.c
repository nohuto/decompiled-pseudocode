/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x14025F5C0
 * Callers:
 *     EtwpWriteUserEvent @ 0x140627BC0 (EtwpWriteUserEvent.c)
 *     PopCreatePowerRequestObject @ 0x14062BBB0 (PopCreatePowerRequestObject.c)
 *     NtSetInformationObject @ 0x140691630 (NtSetInformationObject.c)
 *     PnpNotifyDriverCallback @ 0x1406E5CC4 (PnpNotifyDriverCallback.c)
 *     ObpLookupObjectName @ 0x1406F3F20 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     PfpProcessScenarioPhase @ 0x14078CF98 (PfpProcessScenarioPhase.c)
 *     IoGetContainerInformation @ 0x1408949C0 (IoGetContainerInformation.c)
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentProcessSessionId()
{
  _KPROCESS *Process; // rdx
  unsigned __int64 v1; // rcx
  unsigned int v2; // eax
  unsigned int v3; // ecx

  Process = KeGetCurrentThread()->ApcState.Process;
  v1 = Process[1].AffinityPadding[5];
  if ( !v1 || (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    v2 = -1;
  else
    v2 = *(_DWORD *)(v1 + 8);
  v3 = 0;
  if ( v2 != -1 )
    return v2;
  return v3;
}
