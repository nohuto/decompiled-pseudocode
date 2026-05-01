/*
 * XREFs of WINRT_SetThreadpoolWait @ 0x180091387
 * Callers:
 *     ?await_suspend@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x18014D418 (-await_suspend@awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall WINRT_SetThreadpoolWait(PTP_WAIT pwa, HANDLE h, PFILETIME pftTimeout)
{
  SetThreadpoolWait(pwa, h, pftTimeout);
}
