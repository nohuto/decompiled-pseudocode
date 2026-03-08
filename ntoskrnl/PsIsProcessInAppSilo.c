/*
 * XREFs of PsIsProcessInAppSilo @ 0x1409A96A0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsServerSilo @ 0x140294E20 (PsIsServerSilo.c)
 *     PsGetProcessSilo @ 0x1405A18F0 (PsGetProcessSilo.c)
 */

bool __fastcall PsIsProcessInAppSilo(__int64 a1)
{
  __int64 ProcessSilo; // rax
  char v2; // dl

  ProcessSilo = PsGetProcessSilo(a1);
  v2 = 0;
  if ( ProcessSilo )
    return !PsIsServerSilo(ProcessSilo);
  return v2;
}
