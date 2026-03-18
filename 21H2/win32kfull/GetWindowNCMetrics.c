/*
 * XREFs of GetWindowNCMetrics @ 0x1C006492C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0027B74 (GreExtGetObjectW.c)
 *     GetScaledLogFontForDpi @ 0x1C0063C80 (GetScaledLogFontForDpi.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     GetDPIServerInfo @ 0x1C00BA3D4 (GetDPIServerInfo.c)
 *     GetResizeBorderWidthForDpi @ 0x1C00BB5D8 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C00BB618 (GetWindowFrameMetricForDpi.c)
 *     GetDPIMetrics @ 0x1C00BE974 (GetDPIMetrics.c)
 */

_BOOL8 __fastcall GetWindowNCMetrics(__int64 a1)
{
  __int64 DpiForSystem; // rsi
  __int64 v3; // rcx
  __int64 DPIServerInfo; // rbx
  HBRUSH *DPIMetrics; // rdi

  DpiForSystem = (unsigned int)GetDpiForSystem();
  *(_DWORD *)(a1 + 20) = GetDpiDependentMetric(13LL, DpiForSystem);
  *(_DWORD *)(a1 + 220) = GetDpiDependentMetric(26LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 4) = GetResizeBorderWidthForDpi(DpiForSystem);
  *(_DWORD *)(a1 + 8) = GetDpiDependentMetric(0LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 12) = GetDpiDependentMetric(10LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 16) = GetDpiDependentMetric(12LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 116) = GetDpiDependentMetric(23LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 120) = GetDpiDependentMetric(24LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 216) = GetDpiDependentMetric(25LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 500) = GetWindowFrameMetricForDpi(v3, (unsigned int)DpiForSystem);
  DPIServerInfo = GetDPIServerInfo();
  DPIMetrics = (HBRUSH *)GetDPIMetrics();
  GreExtGetObjectW(*(HBRUSH *)(DPIServerInfo + 8), 92LL, (char *)(a1 + 24));
  GreExtGetObjectW(DPIMetrics[4], 92LL, (char *)(a1 + 124));
  GreExtGetObjectW(*DPIMetrics, 92LL, (char *)(a1 + 224));
  GreExtGetObjectW(DPIMetrics[7], 92LL, (char *)(a1 + 316));
  return GetScaledLogFontForDpi(5u, DpiForSystem, a1 + 408);
}
