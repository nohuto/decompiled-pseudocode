/*
 * XREFs of ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x180033504
 * Callers:
 *     ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x18000552C (-UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180005940 (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180019884 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x180033470 (-_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A808C (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800AD5B8 (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 *     ?UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B97AC (-UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001FEE0 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 */

__int64 __fastcall ResourceHelper::CreateRectangleGeometry(
        const struct tagRECT *a1,
        struct CRectangleGeometryProxy **a2)
{
  int v2; // r8d
  int v3; // eax
  int v4; // r9d
  int v5; // r10d
  LONG top; // edx
  LONG left; // ecx

  v2 = 0;
  v3 = a1->bottom - a1->top;
  v4 = 0;
  v5 = a1->right - a1->left;
  top = a1->top;
  left = a1->left;
  if ( v3 >= 0 )
    v4 = v3;
  if ( v5 >= 0 )
    v2 = v5;
  return ResourceHelper::CreateRectangleGeometry(left, top, v2, v4, a2);
}
