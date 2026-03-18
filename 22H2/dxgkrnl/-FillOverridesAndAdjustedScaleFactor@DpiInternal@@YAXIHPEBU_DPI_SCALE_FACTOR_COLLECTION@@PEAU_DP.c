/*
 * XREFs of ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@H@Z @ 0x1C0013F84
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0013A90 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C01DAF30 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 * Callees:
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@HH@Z @ 0x1C0014034 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?CalculateMinMaxOverride@DpiInternal@@YAXKUtagSIZE@@PEAJ1QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00160DC (-CalculateMinMaxOverride@DpiInternal@@YAXKUtagSIZE@@PEAJ1QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DpiInternal::FillOverridesAndAdjustedScaleFactor(
        DpiInternal *this,
        int a2,
        int *a3,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a4,
        struct _DPI_INFORMATION *a5)
{
  int v8; // esi
  DpiInternal *v9; // rcx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  const struct _DPI_SCALE_FACTOR_COLLECTION *v16; // [rsp+28h] [rbp-50h]

  v8 = (int)this;
  if ( !*((_DWORD *)a4 + 3) )
  {
    WdLogSingleEntry1(1LL, 517LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v11,
          v10,
          v12,
          0,
          2,
          -1,
          (__int64)L"pDpiInfo->BaselineDesktopScaleFactor != DESKTOP_SCALE_INVALID");
    }
  }
  if ( !*((_DWORD *)a4 + 8) || !*((_DWORD *)a4 + 9) )
  {
    WdLogSingleEntry1(1LL, 518LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v14,
          v13,
          v15,
          0,
          2,
          -1,
          (__int64)L"pDpiInfo->CurrentResolution.cx != 0 && pDpiInfo->CurrentResolution.cy != 0");
    }
  }
  if ( !a2 )
    DpiInternal::CalculateMinMaxOverride(
      (DpiInternal *)*((unsigned int *)a4 + 3),
      *((_QWORD *)a4 + 4),
      (struct tagSIZE)((char *)a4 + 80),
      (int *)a4 + 22,
      a3,
      v16);
  if ( v8 )
  {
    *((_DWORD *)a4 + 21) = (a2 != 0) + 1234568;
    LODWORD(v9) = (100 * v8 + 48) / 0x60u;
  }
  else
  {
    v9 = (DpiInternal *)*((unsigned int *)a4 + 3);
    if ( !a2 )
      LODWORD(v9) = DpiInternal::AdjustDesktopScaleFactorForOverride(
                      v9,
                      *((_QWORD *)a4 + 4),
                      (struct tagSIZE)a3,
                      (const struct _DPI_SCALE_FACTOR_COLLECTION *)*((unsigned int *)a4 + 21),
                      (int)a5,
                      (int)v16);
  }
  *((_DWORD *)a4 + 2) = (_DWORD)v9;
}
