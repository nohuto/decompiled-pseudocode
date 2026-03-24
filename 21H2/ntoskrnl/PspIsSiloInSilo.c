/*
 * XREFs of PspIsSiloInSilo @ 0x1406BF51C
 * Callers:
 *     PsIsThreadInSilo @ 0x14025C988 (PsIsThreadInSilo.c)
 *     PsIsProcessInSilo @ 0x14025CA38 (PsIsProcessInSilo.c)
 *     NtCreateUserProcess @ 0x14060A1D0 (NtCreateUserProcess.c)
 *     NtSetInformationThread @ 0x1406FCE80 (NtSetInformationThread.c)
 *     PsRootSiloInformation @ 0x140905BF4 (PsRootSiloInformation.c)
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
