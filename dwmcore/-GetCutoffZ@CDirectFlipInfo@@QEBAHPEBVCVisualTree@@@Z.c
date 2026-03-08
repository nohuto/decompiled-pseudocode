/*
 * XREFs of ?GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCVisualTree@@@Z @ 0x1801F3E14
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x18008B408 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1801E5DF4 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$spa.c)
 * Callees:
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@AEBVCBackdropVisualImageKey@@@Z @ 0x1800E8D3C (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@AEBVCBackdropVisualImageKey@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirectFlipInfo::GetCutoffZ(CVisual **this, const struct CVisualTree *a2)
{
  unsigned int v2; // ebx
  struct COcclusionInfo *OcclusionInfo; // rax

  v2 = 0x7FFFFFFF;
  if ( *((int *)this + 13) >= 3 )
  {
    OcclusionInfo = CVisual::GetOcclusionInfo(
                      this[1],
                      a2,
                      (const struct CBackdropVisualImageKey *)&CBackdropVisualImageKey::sc_NoBVIKey);
    if ( OcclusionInfo )
      return (*(unsigned int (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 16LL))(OcclusionInfo);
  }
  return v2;
}
