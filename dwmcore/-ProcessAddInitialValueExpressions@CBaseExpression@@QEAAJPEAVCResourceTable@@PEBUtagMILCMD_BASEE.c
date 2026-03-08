/*
 * XREFs of ?ProcessAddInitialValueExpressions@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@PEBXI@Z @ 0x18023C198
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??$SetExpressionArray@UtagMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@V?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@@CBaseExpression@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@PEBXIPEAV?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@@Z @ 0x18023AE0C (--$SetExpressionArray@UtagMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@V-$DynArrayIANoCtor@.c)
 */

__int64 __fastcall CBaseExpression::ProcessAddInitialValueExpressions(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS *a3,
        unsigned int *a4)
{
  __int64 v5; // [rsp+20h] [rbp-18h]

  return CBaseExpression::SetExpressionArray<tagMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS,DynArrayIANoCtor<CBaseExpression *,2,0>>(
           (__int64)this,
           a2,
           (__int64)a3,
           a4,
           v5,
           (__int64)this + 240);
}
