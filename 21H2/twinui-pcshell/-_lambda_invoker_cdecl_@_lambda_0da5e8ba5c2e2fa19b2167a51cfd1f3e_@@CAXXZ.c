/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_0da5e8ba5c2e2fa19b2167a51cfd1f3e_@@CAXXZ @ 0x180129910
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void _lambda_0da5e8ba5c2e2fa19b2167a51cfd1f3e_::_lambda_invoker_cdecl_(void)
{
  LPVOID Context; // [rsp+20h] [rbp-28h] BYREF
  WINBOOL fPending; // [rsp+28h] [rbp-20h] BYREF

  if ( InitOnceBeginInitialize(&`PinManagerTelemetry::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      (*(void (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
}
