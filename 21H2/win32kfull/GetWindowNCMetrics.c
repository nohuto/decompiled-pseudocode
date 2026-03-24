/*
 * XREFs of GetWindowNCMetrics @ 0x1C00E0CB0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00DD338 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     GetScaledLogFontForDpi @ 0x1C0047AC4 (GetScaledLogFontForDpi.c)
 *     GetDpiDependentMetric @ 0x1C00614D0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0063CBC (GetDpiForSystem.c)
 *     GreExtGetObjectW @ 0x1C0083108 (GreExtGetObjectW.c)
 *     GetDPIMetrics @ 0x1C00E0DEC (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x1C00E0E18 (GetDPIServerInfo.c)
 *     GetResizeBorderWidthForDpi @ 0x1C00E0E90 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C00E0EB8 (GetWindowFrameMetricForDpi.c)
 */

_BOOL8 __fastcall GetWindowNCMetrics(__int64 a1)
{
  unsigned int DpiForSystem; // esi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 DPIServerInfo; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  HSURF *DPIMetrics; // rdi

  DpiForSystem = GetDpiForSystem(a1);
  *(_DWORD *)(a1 + 20) = GetDpiDependentMetric(13LL, DpiForSystem);
  *(_DWORD *)(a1 + 220) = GetDpiDependentMetric(26LL, DpiForSystem);
  *(_DWORD *)(a1 + 4) = GetResizeBorderWidthForDpi(DpiForSystem);
  *(_DWORD *)(a1 + 8) = GetDpiDependentMetric(0LL, DpiForSystem);
  *(_DWORD *)(a1 + 12) = GetDpiDependentMetric(10LL, DpiForSystem);
  *(_DWORD *)(a1 + 16) = GetDpiDependentMetric(12LL, DpiForSystem);
  *(_DWORD *)(a1 + 116) = GetDpiDependentMetric(23LL, DpiForSystem);
  *(_DWORD *)(a1 + 120) = GetDpiDependentMetric(24LL, DpiForSystem);
  *(_DWORD *)(a1 + 216) = GetDpiDependentMetric(25LL, DpiForSystem);
  *(_DWORD *)(a1 + 500) = GetWindowFrameMetricForDpi(v3, DpiForSystem);
  DPIServerInfo = GetDPIServerInfo(v5, v4, v6, v7);
  DPIMetrics = (HSURF *)GetDPIMetrics(v10, v9, v11, v12);
  GreExtGetObjectW(*(HSURF *)(DPIServerInfo + 8), 92LL, (char *)(a1 + 24));
  GreExtGetObjectW(DPIMetrics[4], 92LL, (char *)(a1 + 124));
  GreExtGetObjectW(*DPIMetrics, 92LL, (char *)(a1 + 224));
  GreExtGetObjectW(DPIMetrics[7], 92LL, (char *)(a1 + 316));
  return GetScaledLogFontForDpi(5u, DpiForSystem, a1 + 408);
}
