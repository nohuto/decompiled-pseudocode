/*
 * XREFs of ?Provider@Win32BackedViewHostItemTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1802C05BC
 * Callers:
 *     ??$PutVisibility@PEBGIAEAEAEA_NAEA_NAEAH@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAIAEAEAEA_N3AEAH@Z @ 0x1800C7E50 (--$PutVisibility@PEBGIAEAEAEA_NAEA_NAEAH@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAIAEA.c)
 *     ?put_KeepAlive@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x1800C9790 (-put_KeepAlive@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedViewHostItemTelemetryProvider@@P6AXXZ@Z @ 0x1802C5ADC (-get@-$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedV.c)
 */

const struct _tlgProvider_t *__fastcall Win32BackedViewHostItemTelemetryProvider::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<Win32BackedViewHostItemTelemetryProvider>::get(
                                             a1,
                                             _lambda_ec1d4b054d630c017dce9880fb168525_::_lambda_invoker_cdecl_)
                                         + 8);
}
