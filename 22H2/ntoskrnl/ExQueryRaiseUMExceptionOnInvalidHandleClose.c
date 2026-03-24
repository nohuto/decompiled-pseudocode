/*
 * XREFs of ExQueryRaiseUMExceptionOnInvalidHandleClose @ 0x140781A70
 * Callers:
 *     NtQueryInformationProcess @ 0x1406216C0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExQueryRaiseUMExceptionOnInvalidHandleClose(__int64 a1)
{
  return (*(_BYTE *)(a1 + 44) & 0x10) != 0;
}
