/*
 * XREFs of _lambda_694d91ef54da8f8582014362157fd67b_::_lambda_invoker_cdecl_ @ 0x1C00CCB80
 * Callers:
 *     <none>
 * Callees:
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C009D05C (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall lambda_694d91ef54da8f8582014362157fd67b_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 v2; // rax

  if ( !*(_QWORD *)a1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1282LL);
  v2 = *(_QWORD *)(a1 + 8);
  if ( !v2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1283LL);
    v2 = *(_QWORD *)(a1 + 8);
  }
  if ( v2 == *(_QWORD *)(*(_QWORD *)a1 + 80LL) )
    CInputDest::_UnlockedFromThread(*(CInputDest **)a1);
}
