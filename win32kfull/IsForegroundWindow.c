/*
 * XREFs of IsForegroundWindow @ 0x1C00C8988
 * Callers:
 *     _lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_ @ 0x1C00C8930 (_lambda_1a8a671d465f8785bc97c99107a222a3_--_lambda_invoker_cdecl_.c)
 *     ?IsWindowEligibleForMinimize@CRecalcState@@AEAA_NPEBUtagWND@@@Z @ 0x1C012971C (-IsWindowEligibleForMinimize@CRecalcState@@AEAA_NPEBUtagWND@@@Z.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01AF5F8 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsForegroundWindow(__int64 a1)
{
  return gpqForeground == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL) && *(_QWORD *)(gpqForeground + 128LL) == a1;
}
