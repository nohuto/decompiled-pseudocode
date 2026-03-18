/*
 * XREFs of ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x1801DB4E4
 * Callers:
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z @ 0x18012F44A (--0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@PEAV1@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$$QEAV?$shared_ptr@VCRegion@@@std@@_N777@Z @ 0x1801DB520 (--0OverlayPlaneInfo@COverlayContext@@QEAA@PEAV1@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAU.c)
 *     ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x1801F69C0 (--0CDirectFlipInfo@@QEAA@AEBV0@@Z.c)
 *     ??0CUnpinResource@CD3DDevice@@QEAA@AEBV01@@Z @ 0x18028F95C (--0CUnpinResource@CD3DDevice@@QEAA@AEBV01@@Z.c)
 *     ?DelayUnpinResources@CD3DDevice@@QEAAXPEAVCCompositionSurfaceInfo@@U_LUID@@IV?$span@PEAUIDXGIResource@@$0?0@gsl@@@Z @ 0x180290478 (-DelayUnpinResources@CD3DDevice@@QEAAXPEAVCCompositionSurfaceInfo@@U_LUID@@IV-$span@PEAUIDXGIRes.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
