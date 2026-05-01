/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_576b8a055e1eddaf8c0f48bcebe2427e_@@CAXXZ @ 0x1801522E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??_EImmersiveIconsLogging@@UEAAPEAXI@Z @ 0x180137390 (--_EImmersiveIconsLogging@@UEAAPEAXI@Z.c)
 */

void _lambda_576b8a055e1eddaf8c0f48bcebe2427e_::_lambda_invoker_cdecl_(void)
{
  LPVOID Context; // [rsp+20h] [rbp-28h] BYREF
  WINBOOL fPending; // [rsp+28h] [rbp-20h] BYREF

  if ( InitOnceBeginInitialize(&`TaskbarPinningTelemetry::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      ImmersiveIconsLogging::`vector deleting destructor'((ImmersiveIconsLogging *)Context, 0);
  }
}
