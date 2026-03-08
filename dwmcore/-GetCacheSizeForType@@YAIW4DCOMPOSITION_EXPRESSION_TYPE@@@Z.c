/*
 * XREFs of ?GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800FD5BC
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180097F68 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x180236828 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCacheSizeForType(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  if ( a1 == 52 )
    return 20LL;
  if ( a1 <= 52 )
  {
    v1 = a1 - 11;
    if ( !v1 )
      return 8LL;
    v2 = v1 - 6;
    if ( !v2 )
      return 12LL;
    v3 = v2 - 1;
    if ( !v3 )
      return 12LL;
    v7 = v3 - 17;
    if ( !v7 )
      return 16LL;
    if ( v7 == 7 )
      return 12LL;
    return 0LL;
  }
  v5 = a1 - 69;
  if ( !v5 )
    return 24LL;
  v6 = v5 - 1;
  if ( !v6 )
    return 24LL;
  v8 = v6 - 1;
  if ( !v8 )
    return 24LL;
  v9 = v8 - 33;
  if ( !v9 )
    return 32LL;
  if ( v9 != 161 )
    return 0LL;
  return 72LL;
}
