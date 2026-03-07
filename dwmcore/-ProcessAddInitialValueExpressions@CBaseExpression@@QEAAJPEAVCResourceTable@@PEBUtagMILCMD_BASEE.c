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
