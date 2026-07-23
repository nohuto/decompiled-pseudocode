/*
 * XREFs of PspIsSiloInSilo @ 0x14061E42C
 * Callers:
 *     PsIsThreadInSilo @ 0x14027DEF8 (PsIsThreadInSilo.c)
 *     PsIsProcessInSilo @ 0x14027DFA8 (PsIsProcessInSilo.c)
 *     NtCreateUserProcess @ 0x140699C80 (NtCreateUserProcess.c)
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 *     PsRootSiloInformation @ 0x140905D54 (PsRootSiloInformation.c)
 * Callees:
 *     <none>
 */

char __fastcall PspIsSiloInSilo(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 1;
  while ( a1 )
  {
    if ( a1 == a2 )
      return 1;
    a1 = *(_QWORD *)(a1 + 1072);
  }
  return 0;
}
