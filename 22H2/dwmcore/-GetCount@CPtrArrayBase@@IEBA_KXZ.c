/*
 * XREFs of ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA890
 * Callers:
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x180011D74 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 *     ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x1800128F4 (-RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z @ 0x1800150B8 (-IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x1800461F0 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18004B424 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B9C0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x18004C5E4 (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18004F2D0 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180063080 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 *     ?GetEffects@CDrawingContext@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEAUNodeEffects@1@@Z @ 0x1800646D0 (-GetEffects@CDrawingContext@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEAUNodeEffects@1@@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064A30 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067A20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B570 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800701D0 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeCont.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x18007BBD4 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180086EC0 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18008AA40 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x180096F18 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180099398 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180099FD4 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?GotoSibling@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x18009A714 (-GotoSibling@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV-$vector@PEAVCVisual@@V-$alloca.c)
 *     ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x18009BBF8 (-InsertChild@CVisual@@IEAAJPEAV1@0_N@Z.c)
 *     ?SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1800AA5F0 (-SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?Contains@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800AA858 (-Contains@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x1800AB798 (-ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SE.c)
 *     ?DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ @ 0x1800AB958 (-DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ.c)
 *     ?DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ @ 0x1800AB9F0 (-DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x1800AC500 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800BC8E8 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x1800BD830 (-NotifyAnimationStopped@CBaseExpression@@IEAAJXZ.c)
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ @ 0x1800C36A0 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ.c)
 *     ?HasSpriteContent@CWindowNode@@AEBA_NXZ @ 0x1800C36E8 (-HasSpriteContent@CWindowNode@@AEBA_NXZ.c)
 *     ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1800E7980 (-GotoFirstChild@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV-$vector@PEAVCVisual@@V-$all.c)
 *     ?GetChildAt@CVisual@@QEBAPEAV1@I@Z @ 0x1800E7A48 (-GetChildAt@CVisual@@QEBAPEAV1@I@Z.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x1800E8278 (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z @ 0x1800ECAFC (-NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z.c)
 *     ?ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITECLIP@@@Z @ 0x1800EFD88 (-ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITECL.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x18012D978 (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 *     ?ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ @ 0x180133E70 (-ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ.c)
 *     ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x180211788 (-RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z.c)
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMilRectF@@@Z @ 0x18021E5CC (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMi.c)
 *     ?Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x18024B050 (-Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCP.c)
 *     ?SetFlipExSurface@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180256B80 (-SetFlipExSurface@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPtrArrayBase::GetCount(CPtrArrayBase *this)
{
  if ( (*(_QWORD *)this & 2) != 0 )
    return *(_QWORD *)(*(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL);
  else
    return *(_QWORD *)this & 1LL;
}
