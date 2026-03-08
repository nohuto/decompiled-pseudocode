/*
 * XREFs of ?IsProcessUserService@@YAHQEAU_EPROCESS@@@Z @ 0x1C0093820
 * Callers:
 *     xxxQueryInformationThread @ 0x1C0093274 (xxxQueryInformationThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsProcessUserService(PEPROCESS Process)
{
  PACCESS_TOKEN v2; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeStringEx(&DestinationString, L"WIN://SCMUserService");
  v2 = PsReferencePrimaryToken(Process);
  LODWORD(Process) = (unsigned __int8)SeSecurityAttributePresent(v2, &DestinationString);
  ObfDereferenceObject(v2);
  return (unsigned int)Process;
}
