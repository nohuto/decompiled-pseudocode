/*
 * XREFs of PsIsProcessInAppSilo @ 0x140905CA0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsServerSilo @ 0x1402F70B0 (PsIsServerSilo.c)
 *     PsGetProcessSilo @ 0x1405815E0 (PsGetProcessSilo.c)
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
