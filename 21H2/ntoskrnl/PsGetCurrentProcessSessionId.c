/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x14027E740
 * Callers:
 *     NtSetInformationObject @ 0x1405F14A0 (NtSetInformationObject.c)
 *     PopCreatePowerRequestObject @ 0x140670788 (PopCreatePowerRequestObject.c)
 *     EtwpWriteUserEvent @ 0x140690950 (EtwpWriteUserEvent.c)
 *     PnpNotifyDriverCallback @ 0x1406FD0AC (PnpNotifyDriverCallback.c)
 *     ObpLookupObjectName @ 0x14070B300 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     PfpProcessScenarioPhase @ 0x14078D158 (PfpProcessScenarioPhase.c)
 *     IoGetContainerInformation @ 0x140894B20 (IoGetContainerInformation.c)
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
