/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x14025EE20
 * Callers:
 *     EtwpWriteUserEvent @ 0x140627FE0 (EtwpWriteUserEvent.c)
 *     ObpLookupObjectName @ 0x140641640 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     PopCreatePowerRequestObject @ 0x1406F5E38 (PopCreatePowerRequestObject.c)
 *     NtSetInformationObject @ 0x1406F91D0 (NtSetInformationObject.c)
 *     PnpNotifyDriverCallback @ 0x14071B694 (PnpNotifyDriverCallback.c)
 *     PfpProcessScenarioPhase @ 0x14078CE98 (PfpProcessScenarioPhase.c)
 *     IoGetContainerInformation @ 0x140894A10 (IoGetContainerInformation.c)
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
