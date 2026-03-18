/*
 * XREFs of ?AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z @ 0x180263308
 * Callers:
 *     ?UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z @ 0x180053B20 (-UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053F60 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800BF690 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x1800C2014 (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CExpressionPerformanceCounter::AddDurationSample(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = a2;
  if ( (unsigned __int64)a2 < 6 )
  {
    ++*(_DWORD *)(a1 + 4LL * a2);
    *(_QWORD *)(a1 + 8LL * a2 + 24) += a3;
  }
  return result;
}
