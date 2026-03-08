/*
 * XREFs of CmpDoesProcessBelongToServiceSession @ 0x1406CDA44
 * Callers:
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1402456C0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetProcessServerSilo @ 0x1402637E0 (PsGetProcessServerSilo.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 */

bool __fastcall CmpDoesProcessBelongToServiceSession(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
  return (unsigned int)MmGetSessionIdEx(a1) == ServerSiloServiceSessionId;
}
