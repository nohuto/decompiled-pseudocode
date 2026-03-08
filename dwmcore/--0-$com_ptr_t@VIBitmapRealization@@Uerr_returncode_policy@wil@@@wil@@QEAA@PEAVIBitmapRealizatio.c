/*
 * XREFs of ??0?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180092758
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18000D304 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800925F4 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ??0CDrawListBitmap@@QEAA@AEBV0@@Z @ 0x1800927A0 (--0CDrawListBitmap@@QEAA@AEBV0@@Z.c)
 *     ??0CBitmapResource@@IEAA@PEAVCComposition@@PEAVIBitmapRealization@@@Z @ 0x1800FAAB4 (--0CBitmapResource@@IEAA@PEAVCComposition@@PEAVIBitmapRealization@@@Z.c)
 *     ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801F4068 (-Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 *     ??$?0AEA_KPEAVIBitmapRealization@@AEA_NAEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAVMILMatrix3x2@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@1@AEA_K$$QEAPEAVIBitmapRealization@@AEA_NAEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAVMILMatrix3x2@@@Z @ 0x1802747CC (--$-0AEA_KPEAVIBitmapRealization@@AEA_NAEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?GetPixelColor@CColorKeyBitmapRealization@@UEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z @ 0x1802ACE40 (-GetPixelColor@CColorKeyBitmapRealization@@UEBA-AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z.c)
 *     ?HrFindInterface@CColorKeyBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802ACF20 (-HrFindInterface@CColorKeyBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SetMargins@CColorKeyBitmapRealization@@UEAAXAEBU_MARGINS@@@Z @ 0x1802AD220 (-SetMargins@CColorKeyBitmapRealization@@UEAAXAEBU_MARGINS@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx

  *a1 = a2;
  if ( a2 )
  {
    v3 = *(int *)(*(_QWORD *)(a2 + 8) + 4LL) + a2 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return a1;
}
