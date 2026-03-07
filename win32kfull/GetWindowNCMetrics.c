__int64 __fastcall GetWindowNCMetrics(__int64 a1)
{
  __int64 DpiForSystem; // rsi
  __int64 v3; // rcx
  __int64 DPIServerInfo; // rbx
  __int64 v5; // rcx
  HBRUSH *DPIMetrics; // rdi

  DpiForSystem = (unsigned int)GetDpiForSystem(a1);
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
  DPIMetrics = (HBRUSH *)GetDPIMetrics(v5);
  GreExtGetObjectW(*(HBRUSH *)(DPIServerInfo + 8), 92LL, (_WORD *)(a1 + 24));
  GreExtGetObjectW(DPIMetrics[4], 92LL, (_WORD *)(a1 + 124));
  GreExtGetObjectW(*DPIMetrics, 92LL, (_WORD *)(a1 + 224));
  GreExtGetObjectW(DPIMetrics[7], 92LL, (_WORD *)(a1 + 316));
  return GetScaledLogFontForDpi(5LL, (unsigned int)DpiForSystem);
}
