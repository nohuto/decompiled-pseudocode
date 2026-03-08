/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x140343AA0
 * Callers:
 *     EtwpWriteUserEvent @ 0x1406AA640 (EtwpWriteUserEvent.c)
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 *     PnpNotifyDriverCallback @ 0x1406F55F4 (PnpNotifyDriverCallback.c)
 *     PfpProcessScenarioPhase @ 0x14073A2C8 (PfpProcessScenarioPhase.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     NtSetInformationObject @ 0x1407DA9A0 (NtSetInformationObject.c)
 *     IoGetContainerInformation @ 0x1409451E0 (IoGetContainerInformation.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
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
