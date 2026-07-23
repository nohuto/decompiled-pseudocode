/*
 * XREFs of PpmIdleRemoveConcurrency @ 0x140566E90
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     PpmIdleUpdateConcurrency @ 0x140567270 (PpmIdleUpdateConcurrency.c)
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
