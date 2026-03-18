/*
 * XREFs of VerifierExCreateCallback @ 0x140ACF030
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierExCreateCallback()
{
  return ((__int64 (*)(void))pXdvExCreateCallback)();
}
