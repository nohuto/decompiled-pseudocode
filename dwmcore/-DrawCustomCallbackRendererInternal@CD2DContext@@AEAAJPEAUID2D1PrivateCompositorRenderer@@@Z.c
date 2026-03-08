/*
 * XREFs of ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18008CF30
 * Callers:
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x18005A5D4 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800748A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x18008DB60 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18008DE30 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801D1564 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18008E868 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::DrawCustomCallbackRendererInternal(
        CD2DContext *this,
        struct ID2D1PrivateCompositorRenderer *a2)
{
  CD2DContext::EnsureBeginDraw(this);
  (*(void (__fastcall **)(_QWORD, struct ID2D1PrivateCompositorRenderer *))(**((_QWORD **)this + 26) + 120LL))(
    *((_QWORD *)this + 26),
    a2);
  return 0LL;
}
