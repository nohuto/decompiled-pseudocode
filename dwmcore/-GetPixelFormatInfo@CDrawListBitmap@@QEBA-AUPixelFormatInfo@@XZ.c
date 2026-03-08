/*
 * XREFs of ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x1800E5D4C
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x1800102A0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ??$CreateRenderingEffectWorker@VCCommonRenderingEffect@@@CCommonRenderingEffectFactory@@SAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x1800939E0 (--$CreateRenderingEffectWorker@VCCommonRenderingEffect@@@CCommonRenderingEffectFactory@@SAJV-$sp.c)
 *     IsWhitePixelOptimizationCandidate @ 0x1800E5CB4 (IsWhitePixelOptimizationCandidate.c)
 *     ?IsColorConversionRequired@CSurfaceDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801F9160 (-IsColorConversionRequired@CSurfaceDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?IsColorConversionRequired@CPrimitiveGroupDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802B63A0 (-IsColorConversionRequired@CPrimitiveGroupDrawListBrush@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = (void (__fastcall ***)(_QWORD, __int64))(v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 8LL));
    (**v4)(v4, a2);
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
    *(_DWORD *)(a2 + 8) = 0;
  }
  return a2;
}
