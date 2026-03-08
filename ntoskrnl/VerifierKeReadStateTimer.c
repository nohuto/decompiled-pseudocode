/*
 * XREFs of VerifierKeReadStateTimer @ 0x140AD2600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReadStateTimer()
{
  return ((__int64 (*)(void))pXdvKeReadStateTimer)();
}
