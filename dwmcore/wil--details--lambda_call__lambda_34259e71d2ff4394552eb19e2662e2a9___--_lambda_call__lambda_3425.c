/*
 * XREFs of wil::details::lambda_call__lambda_34259e71d2ff4394552eb19e2662e2a9___::_lambda_call__lambda_34259e71d2ff4394552eb19e2662e2a9___ @ 0x1802296EC
 * Callers:
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180229C78 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18008D070 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 */

_BYTE *__fastcall wil::details::lambda_call__lambda_34259e71d2ff4394552eb19e2662e2a9___::_lambda_call__lambda_34259e71d2ff4394552eb19e2662e2a9___(
        __int64 a1)
{
  _BYTE *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = *(_BYTE **)a1;
    if ( **(_BYTE **)a1 )
      return (_BYTE *)CDrawingContext::PopLayerInternal(**(_QWORD **)(a1 + 8));
  }
  return result;
}
