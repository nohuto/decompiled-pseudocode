/*
 * XREFs of ?callback@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@CAX000I@Z @ 0x18014D3E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `winrt::resume_on_signal'::`2'::awaitable::callback(
        PTP_CALLBACK_INSTANCE Instance,
        _QWORD *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  void (__fastcall **v4)(_QWORD, _QWORD *, PTP_WAIT); // rcx

  v4 = (void (__fastcall **)(_QWORD, _QWORD *, PTP_WAIT))Context[4];
  *((_DWORD *)Context + 6) = WaitResult;
  (*v4)(v4, Context, Wait);
}
