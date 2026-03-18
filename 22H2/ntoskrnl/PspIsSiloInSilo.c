/*
 * XREFs of PspIsSiloInSilo @ 0x1407E5990
 * Callers:
 *     PsIsProcessInSilo @ 0x140289ECC (PsIsProcessInSilo.c)
 *     PsIsThreadInSilo @ 0x14031C6B8 (PsIsThreadInSilo.c)
 *     NtCreateUserProcess @ 0x1406B82E0 (NtCreateUserProcess.c)
 *     NtSetInformationThread @ 0x140733AB0 (NtSetInformationThread.c)
 *     PsRootSiloInformation @ 0x1409AC840 (PsRootSiloInformation.c)
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
