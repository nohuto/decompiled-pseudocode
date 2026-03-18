/*
 * XREFs of ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800E27B0
 * Callers:
 *     ?SetProjectedShadowReceivers@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@@Z @ 0x1800041B4 (-SetProjectedShadowReceivers@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocat.c)
 *     ?SetProjectedShadowCasters@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@@Z @ 0x18000A31C (-SetProjectedShadowCasters@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@P.c)
 *     ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z @ 0x18000BB14 (-SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z.c)
 *     ??1CVisualTree@@UEAA@XZ @ 0x18003B4F4 (--1CVisualTree@@UEAA@XZ.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18004B424 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180063080 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064A30 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B570 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800701D0 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeCont.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008974C (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x180089840 (-CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18008AA40 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18009A7CC (--1CVisual@@MEAA@XZ.c)
 *     ?SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x1800A4D90 (-SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z.c)
 *     ?SetBlurredWallpaperSurface@CVisual@@QEAAXPEAVCVisualSurface@@@Z @ 0x1800B0248 (-SetBlurredWallpaperSurface@CVisual@@QEAAXPEAVCVisualSurface@@@Z.c)
 *     ?SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z @ 0x1800C3CB4 (-SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z.c)
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x1800C8040 (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x1800DCC30 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x1800E8C54 (-SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z.c)
 *     ?ClearInteraction@CVisual@@QEAAXXZ @ 0x1800E8D20 (-ClearInteraction@CVisual@@QEAAXXZ.c)
 *     ?SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedDirtyRect@@@Z @ 0x1800EB27C (-SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedDirtyRect@@@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800F7190 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPA.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x1800F7348 (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x18020FBC4 (--1CDesktopTree@@UEAA@XZ.c)
 *     ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x180211AA8 (-SetBspPolygonList@CVisual@@QEAAXPEAV-$DynArray@PEAVCPolygon@@$0A@@@@Z.c)
 *     ?SetColorTransform@CVisual@@QEAAXPEAVCColorTransformResource@@@Z @ 0x180211B90 (-SetColorTransform@CVisual@@QEAAXPEAVCColorTransformResource@@@Z.c)
 *     ?SetDepthSortedList@CVisual@@QEAAXPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x180211C38 (-SetDepthSortedList@CVisual@@QEAAXPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std.c)
 *     ?SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@@Z @ 0x180211CE0 (-SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnima.c)
 *     ?SetDropShadow@CSpriteVisual@@IEAAXPEAVCDropShadow@@@Z @ 0x180252650 (-SetDropShadow@CSpriteVisual@@IEAAXPEAVCDropShadow@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(__int64 a1, int a2)
{
  unsigned int v2; // r9d
  unsigned __int8 *v3; // r8
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 4);
  v3 = (unsigned __int8 *)(a1 + 8);
  for ( result = 0LL; (unsigned int)result < v2; ++v3 )
  {
    if ( *v3 == a2 )
      break;
    result = (unsigned int)(result + 1);
  }
  return result;
}
