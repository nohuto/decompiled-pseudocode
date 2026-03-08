/*
 * XREFs of wil::details::lambda_call__lambda_2326946f082da97231d4d6088fdec19c___::_lambda_call__lambda_2326946f082da97231d4d6088fdec19c___ @ 0x18027FCA8
 * Callers:
 *     ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x1800384E8 (-Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z.c)
 * Callees:
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800E2990 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_2326946f082da97231d4d6088fdec19c___::_lambda_call__lambda_2326946f082da97231d4d6088fdec19c___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    CDrawingContext::PopTransformInternal(*(CDrawingContext **)a1, 1);
  }
}
