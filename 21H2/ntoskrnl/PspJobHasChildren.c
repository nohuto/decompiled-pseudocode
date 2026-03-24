/*
 * XREFs of PspJobHasChildren @ 0x1405D91D4
 * Callers:
 *     PspCreateSilo @ 0x1405D90DC (PspCreateSilo.c)
 *     PsInsertPermanentSiloContextEx @ 0x140715D5C (PsInsertPermanentSiloContextEx.c)
 *     PspConvertSiloToServerSilo @ 0x140906054 (PspConvertSiloToServerSilo.c)
 * Callees:
 *     <none>
 */

char __fastcall PspJobHasChildren(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)(a1 + 212) || *(_QWORD *)(a1 + 1056) != a1 + 1056 )
    return 1;
  return v1;
}
