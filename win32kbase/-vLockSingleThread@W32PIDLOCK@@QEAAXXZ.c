/*
 * XREFs of ?vLockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1C00AAA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall W32PIDLOCK::vLockSingleThread(W32PIDLOCK *this)
{
  KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 5) + 64LL), UserRequest, 0, 0, 0LL);
}
