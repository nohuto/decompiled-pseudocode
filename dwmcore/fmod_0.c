/*
 * XREFs of fmod_0 @ 0x180117734
 * Callers:
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x180016038 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180056B00 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z @ 0x180236760 (-GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z.c)
 *     ?GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18024E550 (-GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl fmod_0(double X, double Y)
{
  return fmod(X, Y);
}
