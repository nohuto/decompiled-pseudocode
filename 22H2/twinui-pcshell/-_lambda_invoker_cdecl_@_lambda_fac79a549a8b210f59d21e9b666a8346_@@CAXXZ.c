/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_fac79a549a8b210f59d21e9b666a8346_@@CAXXZ @ 0x18029CAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??_ECustomShellHostTelemetry@@UEAAPEAXI@Z @ 0x1800A1EF0 (--_ECustomShellHostTelemetry@@UEAAPEAXI@Z.c)
 */

void __fastcall _lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      CustomShellHostTelemetry::`vector deleting destructor'((CustomShellHostTelemetry *)Context, 0);
  }
}
