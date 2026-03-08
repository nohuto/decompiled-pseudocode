/*
 * XREFs of ExpNlsDeleteSiloState @ 0x1406074F4
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x1409A9DE8 (PspDeleteExternalServerSiloState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpNlsDeleteSiloState(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[1];
  if ( (unsigned __int64)v2 > 1 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  ExFreePoolWithTag(P, 0x58736C4Eu);
}
