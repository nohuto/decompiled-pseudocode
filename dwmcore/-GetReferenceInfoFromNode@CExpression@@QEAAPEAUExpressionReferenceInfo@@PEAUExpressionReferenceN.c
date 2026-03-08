/*
 * XREFs of ?GetReferenceInfoFromNode@CExpression@@QEAAPEAUExpressionReferenceInfo@@PEAUExpressionReferenceNode@@@Z @ 0x1800C16B0
 * Callers:
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x1800C15B8 (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 * Callees:
 *     <none>
 */

struct ExpressionReferenceInfo *__fastcall CExpression::GetReferenceInfoFromNode(
        CExpression *this,
        struct ExpressionReferenceNode *a2)
{
  __int64 v2; // rax

  v2 = *((unsigned int *)a2 + 1);
  if ( (unsigned int)v2 >= *((_DWORD *)this + 110) )
    return 0LL;
  else
    return (struct ExpressionReferenceInfo *)(*((_QWORD *)this + 54) + 24 * v2);
}
