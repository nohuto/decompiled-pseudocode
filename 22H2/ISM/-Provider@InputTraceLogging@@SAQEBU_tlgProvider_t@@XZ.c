/*
 * XREFs of ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180018CA0
 * Callers:
 *     ?RuntimeClassInitialize@ForegroundManager@@UEAAJXZ @ 0x180033100 (-RuntimeClassInitialize@ForegroundManager@@UEAAJXZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180041B84 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?TouchpadRect@VirtualTouchpad@InputTraceLogging@@SAX_KAEBUtagRECT@@@Z @ 0x180049394 (-TouchpadRect@VirtualTouchpad@InputTraceLogging@@SAX_KAEBUtagRECT@@@Z.c)
 *     ?SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z @ 0x180049E7C (-SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x1800B0040 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAVInputCon.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018CC0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 */

const struct _tlgProvider_t *__fastcall InputTraceLogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<InputTraceLogging>::get(
                                             a1,
                                             _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                                         + 8);
}
