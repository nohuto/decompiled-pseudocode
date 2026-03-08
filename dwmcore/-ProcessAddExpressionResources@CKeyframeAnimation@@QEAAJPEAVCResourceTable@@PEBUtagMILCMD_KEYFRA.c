/*
 * XREFs of ?ProcessAddExpressionResources@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@PEBXI@Z @ 0x1802369EC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??$SetExpressionArray@UtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@V?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@@CBaseExpression@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@PEBXIPEAV?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@@Z @ 0x1800EA2D0 (--$SetExpressionArray@UtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@V-$DynArrayIANoCtor@P.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessAddExpressionResources(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES *a3,
        unsigned int *a4)
{
  __int64 v5; // [rsp+20h] [rbp-18h]

  return CBaseExpression::SetExpressionArray<tagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES,DynArrayIANoCtor<CBaseExpression *,2,0>>(
           (__int64)this,
           a2,
           (__int64)a3,
           a4,
           v5,
           (__int64)this + 400);
}
