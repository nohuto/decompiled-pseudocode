/*
 * XREFs of PfpPrefetchSharedConflictNotifyEnd @ 0x14067FEF0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     PfpPrefetchSharedDeref @ 0x140766630 (PfpPrefetchSharedDeref.c)
 */

__int64 __fastcall PfpPrefetchSharedConflictNotifyEnd(ULONG_PTR *a1, ULONG_PTR a2)
{
  ULONG_PTR *v4; // rbx
  __int64 result; // rax

  if ( a2 )
  {
    v4 = a1;
    if ( !a1 )
      v4 = &PfGlobals;
    KeAbPreAcquire((__int64)v4, a2);
    result = KeAbPostReleaseEx((ULONG_PTR)v4, a2);
  }
  if ( a1 )
    return PfpPrefetchSharedDeref(a1);
  return result;
}
