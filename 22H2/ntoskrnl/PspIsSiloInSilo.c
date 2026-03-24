/*
 * XREFs of PspIsSiloInSilo @ 0x1406A210C
 * Callers:
 *     PsIsThreadInSilo @ 0x14025C1E8 (PsIsThreadInSilo.c)
 *     PsIsProcessInSilo @ 0x14025C298 (PsIsProcessInSilo.c)
 *     NtCreateUserProcess @ 0x14060A630 (NtCreateUserProcess.c)
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 *     PsRootSiloInformation @ 0x140905C44 (PsRootSiloInformation.c)
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
