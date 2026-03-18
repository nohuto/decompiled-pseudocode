/*
 * XREFs of ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x180099DF8
 * Callers:
 *     ?SetProjectedShadowReceivers@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@@Z @ 0x1800041B4 (-SetProjectedShadowReceivers@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocat.c)
 *     ?SetProjectedShadowCasters@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@@Z @ 0x18000A31C (-SetProjectedShadowCasters@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@P.c)
 *     ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z @ 0x18000BB14 (-SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z.c)
 *     ?SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x1800A4D90 (-SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z.c)
 *     ?SetBlurredWallpaperSurface@CVisual@@QEAAXPEAVCVisualSurface@@@Z @ 0x1800B0248 (-SetBlurredWallpaperSurface@CVisual@@QEAAXPEAVCVisualSurface@@@Z.c)
 *     ?SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z @ 0x1800C3CB4 (-SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z.c)
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x1800C8040 (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ?Link@CVisualTreeData@@MEAAXXZ @ 0x1800DBF70 (-Link@CVisualTreeData@@MEAAXXZ.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x1800DCC30 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x1800E8C54 (-SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z.c)
 *     ?SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedDirtyRect@@@Z @ 0x1800EB27C (-SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedDirtyRect@@@Z.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x1800F7348 (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x180211AA8 (-SetBspPolygonList@CVisual@@QEAAXPEAV-$DynArray@PEAVCPolygon@@$0A@@@@Z.c)
 *     ?SetColorTransform@CVisual@@QEAAXPEAVCColorTransformResource@@@Z @ 0x180211B90 (-SetColorTransform@CVisual@@QEAAXPEAVCColorTransformResource@@@Z.c)
 *     ?SetDepthSortedList@CVisual@@QEAAXPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x180211C38 (-SetDepthSortedList@CVisual@@QEAAXPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std.c)
 *     ?SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@@Z @ 0x180211CE0 (-SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnima.c)
 *     ?SetDropShadow@CSpriteVisual@@IEAAXPEAVCDropShadow@@@Z @ 0x180252650 (-SetDropShadow@CSpriteVisual@@IEAAXPEAVCDropShadow@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?Allocate@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@CAPEAV12@I@Z @ 0x180099D90 (-Allocate@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@CAPEAV12@I@Z.c)
 *     memcpy_0 @ 0x18011B998 (memcpy_0.c)
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
