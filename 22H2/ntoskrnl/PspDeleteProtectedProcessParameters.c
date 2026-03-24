/*
 * XREFs of PspDeleteProtectedProcessParameters @ 0x140905A20
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x1409062FC (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PspDeleteProtectedProcessParameters(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 1024);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x6C537350u);
    *(_QWORD *)(a1 + 1024) = 0LL;
  }
}
