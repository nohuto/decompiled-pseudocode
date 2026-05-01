/*
 * XREFs of ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z @ 0x18008F24C
 * Callers:
 *     _dynamic_initializer_for__g_header_init_ResultLoggingInitialize__ @ 0x1800039D0 (_dynamic_initializer_for__g_header_init_ResultLoggingInitialize__.c)
 * Callees:
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1801ACF9C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::SetResultTelemetryFallback(wil *this, void (*a2)(bool, const struct wil::FailureInfo *))
{
  const struct wil::FailureInfo *v2; // rdx
  _BYTE v3[152]; // [rsp+20h] [rbp-98h] BYREF

  if ( wil::details::g_pfnTelemetryCallback
    && (char *)wil::details::g_pfnTelemetryCallback != (char *)wil::ErrorHandlingHelpers::FallbackTelemetryCallback )
  {
    memset_0(v3, 0, 0x90uLL);
    wil::details::WilFailFast((wil::details *)v3, v2);
  }
  wil::details::g_pfnTelemetryCallback = (void (*)(bool, const struct wil::FailureInfo *))wil::ErrorHandlingHelpers::FallbackTelemetryCallback;
}
