/*
 * XREFs of SendPositionChanged @ 0x1C00B74A0
 * Callers:
 *     _lambda_0106af77700bc4a134663e8cc2385985_::_lambda_invoker_cdecl_ @ 0x1C00B83A0 (_lambda_0106af77700bc4a134663e8cc2385985_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004CFF4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 SendPositionChanged()
{
  __int64 v0; // rcx

  KeQueryPerformanceCounter(0LL);
  return InputExtensibilityCallout::CoreMsgSendMessage(v0, 1);
}
