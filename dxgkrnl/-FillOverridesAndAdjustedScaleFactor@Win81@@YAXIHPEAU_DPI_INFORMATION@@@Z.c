/*
 * XREFs of ?FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z @ 0x1C031C844
 * Callers:
 *     ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1C031C72C (-FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C031CC94 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z @ 0x1C031C23C (-AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z.c)
 *     ?CalculateMinMaxOverride@Win81@@YAXKUtagSIZE@@PEAJ1QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z @ 0x1C031C3E8 (-CalculateMinMaxOverride@Win81@@YAXKUtagSIZE@@PEAJ1QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z.c)
 */

void __fastcall Win81::FillOverridesAndAdjustedScaleFactor(
        Win81 *this,
        __int64 a2,
        __int64 a3,
        struct _DPI_INFORMATION *a4)
{
  int v5; // edi
  struct tagSIZE v6; // r9
  unsigned int v7; // eax

  v5 = (int)this;
  if ( !*(_DWORD *)(a3 + 12) )
  {
    WdLogSingleEntry1(1LL, 591LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDpiInfo->BaselineDesktopScaleFactor != DESKTOP_SCALE_INVALID",
      591LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*(_DWORD *)(a3 + 32) || !*(_DWORD *)(a3 + 36) )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDpiInfo->CurrentResolution.cx != 0 && pDpiInfo->CurrentResolution.cy != 0",
      592LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Win81::CalculateMinMaxOverride(
    (Win81 *)*(unsigned int *)(a3 + 12),
    *(_QWORD *)(a3 + 32),
    (struct tagSIZE)(a3 + 80),
    (int *)(a3 + 88));
  if ( v5 )
  {
    *(_DWORD *)(a3 + 84) = 1234568;
    v7 = (100 * v5 + 48) / 0x60u;
  }
  else
  {
    v7 = Win81::AdjustDesktopScaleFactorForOverride(
           (Win81 *)*(unsigned int *)(a3 + 12),
           *(_QWORD *)(a3 + 32),
           (struct tagSIZE)*(unsigned int *)(a3 + 84),
           v6);
  }
  *(_DWORD *)(a3 + 8) = v7;
}
