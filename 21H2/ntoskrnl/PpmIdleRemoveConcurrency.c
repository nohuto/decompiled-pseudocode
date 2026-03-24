/*
 * XREFs of PpmIdleRemoveConcurrency @ 0x140566C50
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 *     PpmIdleUpdateConcurrency @ 0x140567030 (PpmIdleUpdateConcurrency.c)
 */

__int64 __fastcall PpmIdleRemoveConcurrency(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  KSPIN_LOCK *v3; // rcx

  v1 = *(KSPIN_LOCK **)(a1 + 33192);
  if ( v1 )
  {
    KeQueryPerformanceCounter(0LL);
    PpmIdleUpdateConcurrency(v1);
    v3 = *(KSPIN_LOCK **)(a1 + 33200);
    *(_QWORD *)(a1 + 33192) = 0LL;
    if ( v3 )
    {
      PpmIdleUpdateConcurrency(v3);
      *(_QWORD *)(a1 + 33200) = 0LL;
    }
  }
  return 0LL;
}
