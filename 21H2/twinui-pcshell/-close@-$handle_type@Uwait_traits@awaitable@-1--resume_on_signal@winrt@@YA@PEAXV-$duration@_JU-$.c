/*
 * XREFs of ?close@?$handle_type@Uwait_traits@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@winrt@@QEAAXXZ @ 0x18014D574
 * Callers:
 *     ??1awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x180147CDC (--1awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono.c)
 *     ?await_suspend@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x18014D418 (-await_suspend@awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@.c)
 * Callees:
 *     CloseThreadpoolWait_0 @ 0x18009137B (CloseThreadpoolWait_0.c)
 */

void __fastcall _close___handle_type_Uwait_traits_awaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__winrt__QEAAXXZ(
        struct _TP_WAIT **a1)
{
  struct _TP_WAIT *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    CloseThreadpoolWait_0(v2);
    *a1 = 0LL;
  }
}
