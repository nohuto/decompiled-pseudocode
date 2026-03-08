/*
 * XREFs of ?ShouldLogPerfStats@CBaseExpression@@IEAA_NXZ @ 0x1800C16DC
 * Callers:
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x1800C15B8 (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseExpression::ShouldLogPerfStats(CBaseExpression *this)
{
  bool result; // al

  if ( (*(_DWORD *)(*((_QWORD *)this + 41) + 4LL) & 0x40000000) != 0 )
    return 1;
  result = 0;
  if ( CCommonRegistryData::LogExpressionPerfStats )
    return 1;
  return result;
}
