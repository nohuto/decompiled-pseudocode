/*
 * XREFs of ?CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x1800C090C
 * Callers:
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x1800C060C (-Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x180213E30 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 * Callees:
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180055800 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 */

__int64 __fastcall CExpressionValue::CopyIntoFloatArray(CExpressionValue *this, __int64 a2, float *a3)
{
  unsigned int ExpressionTypeChannelCount; // eax
  __int64 v4; // rcx
  const void *v5; // r9
  void *v6; // r10
  unsigned int v7; // ebx

  *a3 = 0.0;
  if ( *((_BYTE *)this + 76) )
  {
    ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((_DWORD *)this + 18));
    if ( ExpressionTypeChannelCount > 0x10 )
    {
      v7 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147467259, 0x212u, 0LL);
    }
    else
    {
      memcpy_0(v6, v5, 4LL * ExpressionTypeChannelCount);
      return 0;
    }
  }
  else
  {
    v7 = -2147023728;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147023728, 0x209u, 0LL);
  }
  return v7;
}
