/*
 * XREFs of PspIsSiloInSilo @ 0x1406E1570
 * Callers:
 *     PsIsThreadInSilo @ 0x1402F6170 (PsIsThreadInSilo.c)
 *     PsIsProcessInSilo @ 0x140300B74 (PsIsProcessInSilo.c)
 *     NtCreateUserProcess @ 0x14066D650 (NtCreateUserProcess.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     PsRootSiloInformation @ 0x1409AB8A0 (PsRootSiloInformation.c)
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
    a1 = *(_QWORD *)(a1 + 1264);
  }
  return 0;
}
