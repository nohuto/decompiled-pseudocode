/*
 * XREFs of ?ProcessSetProgress@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPROGRESS@@@Z @ 0x1800E8BA8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetProgress@CKeyframeAnimation@@AEAAXM@Z @ 0x1800E8BC8 (-SetProgress@CKeyframeAnimation@@AEAAXM@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetProgress(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETPROGRESS *a3)
{
  CKeyframeAnimation::SetProgress(this, *((float *)a3 + 2));
  return 0LL;
}
