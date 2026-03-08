/*
 * XREFs of _lambda_49695c4423cfafe8a47d188aee5e3e85_::_lambda_invoker_cdecl_ @ 0x1C00DF640
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C01E3C64 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 */

void __fastcall lambda_49695c4423cfafe8a47d188aee5e3e85_::_lambda_invoker_cdecl_(__int64 a1)
{
  if ( !*(_QWORD *)a1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1318LL);
  if ( !*(_QWORD *)(a1 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1319LL);
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(*(_QWORD *)a1 + 80LL) )
    CInputDest::_UnlockedFromThread(*(CInputDest **)a1);
}
