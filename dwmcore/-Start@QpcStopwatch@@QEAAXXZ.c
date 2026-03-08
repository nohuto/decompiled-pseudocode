/*
 * XREFs of ?Start@QpcStopwatch@@QEAAXXZ @ 0x180213C28
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180051314 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x1800C15B8 (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 * Callees:
 *     <none>
 */

void __fastcall QpcStopwatch::Start(QpcStopwatch *this)
{
  BOOL v2; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF

  v2 = QueryPerformanceCounter(&PerformanceCount);
  *(_QWORD *)this = PerformanceCount.QuadPart & -(__int64)v2;
}
