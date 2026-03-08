/*
 * XREFs of ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800389DC
 * Callers:
 *     ?SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x18001B390 (-SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 *     ?SetOpacityInternal@CVisual@@QEAAXM@Z @ 0x180038994 (-SetOpacityInternal@CVisual@@QEAAXM@Z.c)
 *     ?SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z @ 0x180039E44 (-SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z.c)
 *     ?SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z @ 0x1800DFC8C (-SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetNotifiedWorldOffset@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x1800DFCCC (-SetNotifiedWorldOffset@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z @ 0x1800DFD18 (-SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z.c)
 *     ?SetNotifiedWorldUpVector@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x1800DFD58 (-SetNotifiedWorldUpVector@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z.c)
 *     ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x1800E1920 (-ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_.c)
 *     ?SetTopLevelWindow@CVisual@@QEAAX_K@Z @ 0x1800F9228 (-SetTopLevelWindow@CVisual@@QEAAX_K@Z.c)
 *     ?SetTouchTargetBounds@CVisual@@IEAAXV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800FA748 (-SetTouchTargetBounds@CVisual@@IEAAXV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z @ 0x1800FB030 (-SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z.c)
 *     ?SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x1800FB070 (-SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 *     ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x180102878 (-SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z.c)
 *     ?ProcessSetBlurredWallpaperSurfaceRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACERECT@@@Z @ 0x180102F88 (-ProcessSetBlurredWallpaperSurfaceRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SE.c)
 *     ?SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z @ 0x1801D3CB4 (-SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z.c)
 *     ?SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18020E7D0 (-SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetDebugTargetInfo@CConditionalExpression@@AEAAXUDebugTargetInfo@1@@Z @ 0x180231474 (-SetDebugTargetInfo@CConditionalExpression@@AEAAXUDebugTargetInfo@1@@Z.c)
 * Callees:
 *     ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x180038A5C (-FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 */

void __fastcall CSparseStorage::SetData(CSparseStorage *this, unsigned int a2, unsigned int a3, const void *a4)
{
  struct CSparseStorage::DataInfo *SlotForData; // rdi

  SlotForData = CSparseStorage::FindSlotForData(this, a2, a3);
  memcpy_0((char *)SlotForData + 4, a4, a3);
  *(_DWORD *)SlotForData ^= (*(_DWORD *)SlotForData ^ (a2 << 24)) & 0x7F000000;
  *(_DWORD *)(*(_QWORD *)this + 4LL) |= __ROR4__(1, a2);
}
