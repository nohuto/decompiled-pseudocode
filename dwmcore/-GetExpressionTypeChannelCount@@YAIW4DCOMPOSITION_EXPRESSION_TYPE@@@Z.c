/*
 * XREFs of ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180055800
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180054C80 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x1800C060C (-Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z.c)
 *     ?CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x1800C090C (-CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z @ 0x1800E9BBC (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x180213E30 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetExpressionTypeChannelCount(int a1)
{
  __int64 result; // rax

  if ( a1 == 35 )
    return (unsigned int)(a1 >> 4);
  switch ( a1 )
  {
    case 17:
    case 18:
    case 42:
    case 52:
    case 69:
    case 70:
    case 71:
    case 104:
    case 265:
      return (unsigned int)(a1 >> 4);
    default:
      result = 0LL;
      break;
  }
  return result;
}
