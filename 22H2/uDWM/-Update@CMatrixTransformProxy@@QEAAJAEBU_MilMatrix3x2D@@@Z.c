/*
 * XREFs of ?Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z @ 0x180043050
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800202A0 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateAlignmentTransform@CText@@AEAAJXZ @ 0x180042FBC (-UpdateAlignmentTransform@CText@@AEAAJXZ.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x18008B4E8 (-Initialize@CMagnifier@@AEAAJXZ.c)
 *     ?_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z @ 0x1800926C4 (-_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180095AAC (-UpdateTransform@CVisual@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMatrixTransformProxy::Update(CMatrixTransformProxy *this, const struct _MilMatrix3x2D *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _MilMatrix3x2D *))(**(_QWORD **)(*((_QWORD *)this + 2)
                                                                                                + 16LL)
                                                                                  + 992LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2);
}
