/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x1402A1CC0
 * Callers:
 *     PnpNotifyDriverCallback @ 0x140687B60 (PnpNotifyDriverCallback.c)
 *     NtSetInformationObject @ 0x140697640 (NtSetInformationObject.c)
 *     ObpLookupObjectName @ 0x1406ED7D0 (ObpLookupObjectName.c)
 *     EtwpWriteUserEvent @ 0x1406F41F0 (EtwpWriteUserEvent.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     PfpProcessScenarioPhase @ 0x1407D3BD0 (PfpProcessScenarioPhase.c)
 *     IoGetContainerInformation @ 0x140948200 (IoGetContainerInformation.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 */

__int64 PsGetCurrentProcessSessionId()
{
  unsigned int SessionId; // ecx
  __int64 result; // rax

  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  result = 0LL;
  if ( SessionId != -1 )
    return SessionId;
  return result;
}
