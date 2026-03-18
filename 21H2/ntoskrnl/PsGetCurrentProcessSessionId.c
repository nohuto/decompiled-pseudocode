/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x140287F00
 * Callers:
 *     NtSetInformationObject @ 0x1406B9250 (NtSetInformationObject.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     PnpNotifyDriverCallback @ 0x14078D3DC (PnpNotifyDriverCallback.c)
 *     EtwpWriteUserEvent @ 0x1407B4D70 (EtwpWriteUserEvent.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 *     PfpProcessScenarioPhase @ 0x14081BB14 (PfpProcessScenarioPhase.c)
 *     IoGetContainerInformation @ 0x1409371A0 (IoGetContainerInformation.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 */

__int64 PsGetCurrentProcessSessionId()
{
  unsigned int SessionId; // ecx
  __int64 result; // rax

  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  result = 0LL;
  if ( SessionId != -1 )
    return SessionId;
  return result;
}
