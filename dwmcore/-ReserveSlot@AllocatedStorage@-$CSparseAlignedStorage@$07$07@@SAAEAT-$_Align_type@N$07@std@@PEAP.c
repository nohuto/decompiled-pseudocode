/*
 * XREFs of ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x180099C48
 * Callers:
 *     ?SetProjectedShadowReceivers@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@@Z @ 0x1800040C4 (-SetProjectedShadowReceivers@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocat.c)
 *     ?SetProjectedShadowCasters@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@@Z @ 0x18000A22C (-SetProjectedShadowCasters@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@P.c)
 *     ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z @ 0x18000BA24 (-SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z.c)
 *     ?SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x1800A4C50 (-SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z.c)
 *     ?SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z @ 0x1800C3254 (-SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z.c)
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x1800C75E0 (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ?Link@CVisualTreeData@@MEAAXXZ @ 0x1800DB4C0 (-Link@CVisualTreeData@@MEAAXXZ.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x1800DC180 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x1800E8084 (-SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z.c)
 *     ?SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedDirtyRect@@@Z @ 0x1800EA6AC (-SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedDirtyRect@@@Z.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x1800F6708 (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ?SetBlurredWallpaperSurface@CVisual@@QEAAXPEAVCVisualSurface@@@Z @ 0x180101D4C (-SetBlurredWallpaperSurface@CVisual@@QEAAXPEAVCVisualSurface@@@Z.c)
 *     ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x18020E728 (-SetBspPolygonList@CVisual@@QEAAXPEAV-$DynArray@PEAVCPolygon@@$0A@@@@Z.c)
 *     ?SetColorTransform@CVisual@@QEAAXPEAVCColorTransformResource@@@Z @ 0x18020E810 (-SetColorTransform@CVisual@@QEAAXPEAVCColorTransformResource@@@Z.c)
 *     ?SetDepthSortedList@CVisual@@QEAAXPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x18020E8B8 (-SetDepthSortedList@CVisual@@QEAAXPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std.c)
 *     ?SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@@Z @ 0x18020E960 (-SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnima.c)
 *     ?SetDropShadow@CSpriteVisual@@IEAAXPEAVCDropShadow@@@Z @ 0x18024EF70 (-SetDropShadow@CSpriteVisual@@IEAAXPEAVCDropShadow@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?Allocate@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@CAPEAV12@I@Z @ 0x180099BE0 (-Allocate@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@CAPEAV12@I@Z.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 */

char *__fastcall CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(_DWORD **a1, char a2)
{
  _DWORD *v2; // rbx
  __int64 v3; // rdi
  unsigned int *v6; // r13
  unsigned int v7; // ecx
  const void *v8; // r12
  _BYTE *v9; // rax
  _DWORD *v11; // r14

  v2 = *a1;
  v3 = 0LL;
  v6 = *a1 + 1;
  v7 = *v6;
  v8 = v2 + 2;
  if ( *v6 )
  {
    v9 = v2 + 2;
    do
    {
      if ( !*v9 )
        break;
      v3 = (unsigned int)(v3 + 1);
      ++v9;
    }
    while ( (unsigned int)v3 < v7 );
  }
  if ( (_DWORD)v3 == v7 )
  {
    v11 = v2;
    v2 = CSparseAlignedStorage<8,8>::AllocatedStorage::Allocate(v7 + 4);
    *a1 = v2;
    if ( v11 != (_DWORD *)&CSparseAlignedStorage<8,8>::k_defaultEmptyAllocatedStorage )
    {
      *v2 = *v11;
      memcpy_0(v2 + 2, v8, *v6);
      memcpy_0(
        (char *)v2 + (((unsigned int)v2[1] + 15LL) & 0xFFFFFFFFFFFFFFF8uLL),
        (char *)v11 + ((*v6 + 15LL) & 0xFFFFFFFFFFFFFFF8uLL),
        8LL * *v6);
      operator delete(v11);
    }
  }
  *v2 |= __ROR4__(1, a2);
  *((_BYTE *)v2 + v3 + 8) = a2;
  return (char *)v2 + (unsigned int)v2[1] + 8LL * (unsigned int)v3 - (((unsigned __int8)v2[1] + 15) & 7) + 15;
}
