/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_87ebf9cdbe9512ecf246e0e20380c4a1_@@CAXXZ @ 0x180297E10
 * Callers:
 *     <none>
 * Callees:
 *     ??_ECustomShellHostTelemetry@@UEAAPEAXI@Z @ 0x1800A1EF0 (--_ECustomShellHostTelemetry@@UEAAPEAXI@Z.c)
 */

void __fastcall _lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(&`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      CustomShellHostTelemetry::`vector deleting destructor'((CustomShellHostTelemetry *)Context, 0);
  }
}
