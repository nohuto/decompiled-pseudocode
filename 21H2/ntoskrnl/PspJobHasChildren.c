/*
 * XREFs of PspJobHasChildren @ 0x1406E5090
 * Callers:
 *     PsInsertPermanentSiloContextEx @ 0x140692980 (PsInsertPermanentSiloContextEx.c)
 *     PspCreateSilo @ 0x1406E4FA4 (PspCreateSilo.c)
 *     PspConvertSiloToServerSilo @ 0x1409ABCF4 (PspConvertSiloToServerSilo.c)
 * Callees:
 *     <none>
 */

char __fastcall PspJobHasChildren(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)(a1 + 212) || *(_QWORD *)(a1 + 1248) != a1 + 1248 )
    return 1;
  return v1;
}
