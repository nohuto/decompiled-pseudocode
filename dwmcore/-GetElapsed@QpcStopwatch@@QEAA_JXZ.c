/*
 * XREFs of ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x180213984
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180051314 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     ?UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z @ 0x180053950 (-UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053D90 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800BF040 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x1800C15B8 (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 * Callees:
 *     <none>
 */

LONGLONG __fastcall QpcStopwatch::GetElapsed(QpcStopwatch *this)
{
  LONGLONG result; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  result = 0LL;
  if ( *(_QWORD *)this )
  {
    QueryPerformanceCounter(&PerformanceCount);
    return PerformanceCount.QuadPart - *(_QWORD *)this;
  }
  return result;
}
