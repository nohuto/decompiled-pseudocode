/*
 * XREFs of ?GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x180092BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x18007FE50 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?GetBrushParametersWorker@CBitmapResourceRenderStrategy@@KAJPEBVCSurfaceBrush@@PEAVIBitmapResource@@PEAULayoutData@CContent@@W4D2D1_INTERPOLATION_MODE@@PEAVCBrushDrawListGenerator@@@Z @ 0x180092C64 (-GetBrushParametersWorker@CBitmapResourceRenderStrategy@@KAJPEBVCSurfaceBrush@@PEAVIBitmapResour.c)
 *     ?GetBitmap@CBitmapRenderStrategy@@SAXPEBVCSurfaceBrush@@PEAPEAVIBitmapResource@@@Z @ 0x18009467C (-GetBitmap@CBitmapRenderStrategy@@SAXPEBVCSurfaceBrush@@PEAPEAVIBitmapResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBitmapRenderStrategy::GetBrushParameters(
        CBitmapRenderStrategy *this,
        enum D2D1_INTERPOLATION_MODE *a2,
        struct D2D_SIZE_F *a3)
{
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  int BrushParametersWorker; // eax
  unsigned int v9; // ecx
  _BYTE v11[56]; // [rsp+30h] [rbp-38h] BYREF
  struct IBitmapResource *v12; // [rsp+80h] [rbp+18h] BYREF

  v12 = 0LL;
  CBitmapRenderStrategy::GetBitmap((const struct CSurfaceBrush *)a2, &v12);
  v5 = CSurfaceBrush::ComputeLayout((CSurfaceBrush *)a2, a3 + 1, (struct CContent::LayoutData *)v11, 0LL);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x3FCu, 0LL);
  }
  else
  {
    BrushParametersWorker = CBitmapResourceRenderStrategy::GetBrushParametersWorker(
                              (const struct CSurfaceBrush *)a2,
                              v12,
                              (struct CContent::LayoutData *)v11,
                              a2[25],
                              (struct CBrushDrawListGenerator *)a3);
    v7 = BrushParametersWorker;
    if ( BrushParametersWorker < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, BrushParametersWorker, 0x3FEu, 0LL);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v12);
  return v7;
}
