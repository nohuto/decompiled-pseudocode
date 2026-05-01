/*
 * XREFs of ?callback@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@CAXPEAX11@Z @ 0x18008EB60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `winrt::resume_after'::`2'::awaitable::callback(
        PTP_CALLBACK_INSTANCE Instance,
        void (__fastcall **Context)(_QWORD),
        PTP_TIMER Timer)
{
  (*Context)(Context);
}
