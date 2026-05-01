/*
 * XREFs of ?await_suspend@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x18014D2A8
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A690 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     WINRT_SetThreadpoolWait @ 0x180091367 (WINRT_SetThreadpoolWait.c)
 *     WINRT_CreateThreadpoolWait @ 0x180091373 (WINRT_CreateThreadpoolWait.c)
 *     ?close@?$handle_type@Uwait_traits@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@winrt@@QEAAXXZ @ 0x18014D404 (-close@-$handle_type@Uwait_traits@awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x180264468 (-throw_last_error@winrt@@YAXXZ.c)
 */

void __fastcall `winrt::resume_on_signal'::`2'::awaitable::await_suspend(PVOID pv, __int64 a2)
{
  winrt *v3; // rcx
  struct _TP_WAIT *ThreadpoolWait; // rdi
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF

  *((_QWORD *)pv + 4) = a2;
  ThreadpoolWait = WINRT_CreateThreadpoolWait(`winrt::resume_on_signal'::`2'::awaitable::callback, pv, 0LL);
  if ( !ThreadpoolWait )
    winrt::throw_last_error(v3);
  _close___handle_type_Uwait_traits_awaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__winrt__QEAAXXZ(pv);
  *(_QWORD *)pv = ThreadpoolWait;
  WINRT_SetThreadpoolWait(
    ThreadpoolWait,
    *((HANDLE *)pv + 2),
    (PFILETIME)((unsigned __int64)&v5 & -(__int64)(*((_QWORD *)pv + 1) != 0LL)));
}
