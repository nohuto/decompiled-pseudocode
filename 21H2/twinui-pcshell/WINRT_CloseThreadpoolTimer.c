/*
 * XREFs of WINRT_CloseThreadpoolTimer @ 0x180090CCE
 * Callers:
 *     ?close@?$handle_type@Utimer_traits@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@winrt@@QEAAXXZ @ 0x1804D5558 (-close@-$handle_type@Utimer_traits@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall WINRT_CloseThreadpoolTimer(PTP_TIMER pti)
{
  CloseThreadpoolTimer(pti);
}
