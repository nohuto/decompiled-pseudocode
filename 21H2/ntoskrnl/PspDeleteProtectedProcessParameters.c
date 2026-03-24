/*
 * XREFs of PspDeleteProtectedProcessParameters @ 0x1409059D0
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x1409062AC (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
