/*
 * XREFs of PspDeleteSilo @ 0x1409AA08C
 * Callers:
 *     PspJobDelete @ 0x140291AD0 (PspJobDelete.c)
 * Callees:
 *     PsIsServerSilo @ 0x140294E20 (PsIsServerSilo.c)
 *     PspDeleteServerSiloGlobals @ 0x1409A9EC0 (PspDeleteServerSiloGlobals.c)
 */

void __fastcall PspDeleteSilo(__int64 a1)
{
  __int64 v2; // rcx

  if ( *(_DWORD *)(a1 + 216) )
    NT_ASSERT("Silo->ActiveProcesses == 0");
  if ( PsIsServerSilo(a1) )
  {
    PspDeleteServerSiloGlobals(*(char **)(v2 + 1488));
    *(_QWORD *)(a1 + 1488) = 0LL;
  }
}
