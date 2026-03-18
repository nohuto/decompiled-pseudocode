/*
 * XREFs of _lambda_cf05d98c44b56423d1aa7353fc250a6c_::_lambda_invoker_cdecl_ @ 0x1C01B8A10
 * Callers:
 *     <none>
 * Callees:
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C0042094 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall lambda_cf05d98c44b56423d1aa7353fc250a6c_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  if ( !*(_QWORD *)a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v4 = *(_QWORD *)(a1 + 8);
  if ( !v4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v4 = *(_QWORD *)(a1 + 8);
  }
  if ( v4 == *(_QWORD *)(*(_QWORD *)a1 + 80LL) )
    CInputDest::_UnlockedFromThread(*(CInputDest **)a1, a2, a3);
}
