/*
 * XREFs of PspIsSiloInSilo @ 0x140796550
 * Callers:
 *     PsIsProcessInSilo @ 0x1402484DC (PsIsProcessInSilo.c)
 *     PsIsThreadInSilo @ 0x1402B6178 (PsIsThreadInSilo.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     NtCreateUserProcess @ 0x14070C850 (NtCreateUserProcess.c)
 *     PsRootSiloInformation @ 0x1409A97C0 (PsRootSiloInformation.c)
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
    a1 = *(_QWORD *)(a1 + 1288);
  }
  return 0;
}
