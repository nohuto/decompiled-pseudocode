/*
 * XREFs of ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800334D0
 * Callers:
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180005940 (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180008810 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18000E7A0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180010F60 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x180033470 (-_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A808C (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Validate@CPerMonitorWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x1800BEEDC (-Validate@CPerMonitorWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetClip(CVisualProxy *this, struct CBaseGeometryProxy *a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a2 )
    v2 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 392LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           v2);
}
