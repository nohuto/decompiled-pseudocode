/*
 * XREFs of ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@HH@Z @ 0x1C0001930
 * Callers:
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@H@Z @ 0x1C0001880 (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C004BDCC (-UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0169828 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 * Callees:
 *     ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C00019E4 (-SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

unsigned int __fastcall DpiInternal::AdjustDesktopScaleFactorForOverride(
        DpiInternal *this,
        int a2,
        struct tagSIZE a3,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a4,
        int a5)
{
  int v5; // r14d
  int v8; // ebp
  unsigned int v9; // eax
  unsigned int v10; // edi
  _DWORD *v11; // rdx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  struct _DPI_SCALE_FACTOR_COLLECTION *v19; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+28h] [rbp-40h]

  v5 = (int)a4;
  v8 = (int)this;
  if ( (unsigned int)((_DWORD)a4 + 11) > 0x16 )
  {
    WdLogSingleEntry1(1LL, 314LL);
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
          (__int64)L"(Override >= MIN_DESKTOPDPIOVERRIDE) && (Override <= MAX_DESKTOPDPIOVERRIDE)",
          58,
          0,
          0,
          0,
          0);
    }
  }
  v9 = *(_DWORD *)(*(_QWORD *)&a3 + 8LL);
  v10 = 0;
  if ( v9 )
  {
    v11 = *(_DWORD **)(*(_QWORD *)&a3 + 16LL);
    do
    {
      if ( v8 == *v11 )
        break;
      ++v10;
      ++v11;
    }
    while ( v10 < v9 );
  }
  if ( v10 >= v9 )
  {
    WdLogSingleEntry1(1LL, 296LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v17,
          v16,
          v18,
          0,
          2,
          -1,
          (__int64)L"(UINT)idx < pScaleFactorCollection->NumFactors",
          40,
          0,
          0,
          0,
          0);
    }
  }
  LODWORD(v19) = a5;
  return DpiInternal::SatisfyMinResolutionBarForScaleIdx((DpiInternal *)v10, v5, a2, a3, v19, v20);
}
