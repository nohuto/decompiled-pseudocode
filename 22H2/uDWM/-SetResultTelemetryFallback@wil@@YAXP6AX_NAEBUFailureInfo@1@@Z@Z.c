/*
 * XREFs of ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@Z@Z @ 0x180042F88
 * Callers:
 *     DllMain @ 0x1800571C4 (DllMain.c)
 * Callees:
 *     memset_0 @ 0x180057E72 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18007FD9C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::SetResultTelemetryFallback(wil *this, void (*a2)(bool, const struct wil::FailureInfo *))
{
  const struct wil::FailureInfo *v2; // rdx
  _BYTE v3[152]; // [rsp+20h] [rbp-98h] BYREF

  if ( wil::details::g_pfnTelemetryCallback
    && (char *)wil::details::g_pfnTelemetryCallback != (char *)WindowFrameLoggingTelemetry::FallbackTelemetryCallback )
  {
    memset_0(v3, 0, 0x90uLL);
    wil::details::WilFailFast((wil::details *)v3, v2);
  }
  wil::details::g_pfnTelemetryCallback = (void (*)(bool, const struct wil::FailureInfo *))WindowFrameLoggingTelemetry::FallbackTelemetryCallback;
}
