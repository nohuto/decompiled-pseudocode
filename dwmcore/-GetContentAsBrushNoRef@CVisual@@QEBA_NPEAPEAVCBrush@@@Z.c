/*
 * XREFs of ?GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z @ 0x18004AFA4
 * Callers:
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18004AB88 (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?HasPixelSnappedContent@CVisual@@IEBA_NXZ @ 0x18004AF78 (-HasPixelSnappedContent@CVisual@@IEBA_NXZ.c)
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007A2F0 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CDropShadow@@AEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1802270E0 (-IsReadyToDraw@CDropShadow@@AEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18022796C (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CVisual::GetContentAsBrushNoRef(CVisual *this, struct CBrush **a2)
{
  char v3; // bl
  __int64 v4; // rcx

  v3 = 0;
  v4 = *((_QWORD *)this + 32);
  if ( v4 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 56LL))(v4, 17LL) )
  {
    v3 = 1;
    *a2 = (struct CBrush *)*((_QWORD *)this + 32);
  }
  return v3;
}
