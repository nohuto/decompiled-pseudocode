/*
 * XREFs of PspDeleteProtectedProcessParameters @ 0x140905B30
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x14090640C (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
