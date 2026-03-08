/*
 * XREFs of ?ProcessSetPlaybackRate@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPLAYBACKRATE@@@Z @ 0x18012F332
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetPlaybackRate@CKeyframeAnimation@@AEAAXM@Z @ 0x1800D28C0 (-SetPlaybackRate@CKeyframeAnimation@@AEAAXM@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetPlaybackRate(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETPLAYBACKRATE *a3)
{
  CKeyframeAnimation::SetPlaybackRate(this, *((float *)a3 + 2));
  return 0LL;
}
