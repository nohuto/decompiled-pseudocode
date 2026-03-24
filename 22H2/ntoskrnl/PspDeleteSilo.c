/*
 * XREFs of PspDeleteSilo @ 0x140906468
 * Callers:
 *     PspJobDelete @ 0x1402DD320 (PspJobDelete.c)
 * Callees:
 *     PsGetServerSiloState @ 0x14034D18C (PsGetServerSiloState.c)
 *     PsIsServerSilo @ 0x140361920 (PsIsServerSilo.c)
 *     PspDeleteServerSiloGlobals @ 0x1409062FC (PspDeleteServerSiloGlobals.c)
 */

void __fastcall PspDeleteSilo(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *(_DWORD *)(a1 + 216) )
    NT_ASSERT("Silo->ActiveProcesses == 0");
  if ( PsIsServerSilo(a1) && (unsigned int)PsGetServerSiloState(v2) != 4 )
    NT_ASSERT("PsGetServerSiloState(Silo) == SERVERSILO_TERMINATED");
  if ( PsIsServerSilo(v2) )
  {
    PspDeleteServerSiloGlobals(*(char **)(v3 + 1272));
    *(_QWORD *)(a1 + 1272) = 0LL;
  }
}
