/*
 * XREFs of PspJobHasChildren @ 0x140797584
 * Callers:
 *     PsInsertPermanentSiloContextEx @ 0x14073858C (PsInsertPermanentSiloContextEx.c)
 *     PspCreateSilo @ 0x140797438 (PspCreateSilo.c)
 *     PspConvertSiloToServerSilo @ 0x1409A9C14 (PspConvertSiloToServerSilo.c)
 * Callees:
 *     <none>
 */

char __fastcall PspJobHasChildren(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)(a1 + 212) || *(_QWORD *)(a1 + 1272) != a1 + 1272 )
    return 1;
  return v1;
}
