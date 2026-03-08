/*
 * XREFs of ?DoesSurfaceHaveBorder@CRenderingTechnique@@QEBA_NI@Z @ 0x1802B6510
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18002E744 (-GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     <none>
 */

char __fastcall CRenderingTechnique::DoesSurfaceHaveBorder(CRenderingTechnique *this, unsigned int a2)
{
  __int64 v2; // rdx
  char result; // al

  v2 = 44LL * a2;
  result = 0;
  if ( *((_BYTE *)this + v2 + 92) || *((_BYTE *)this + v2 + 93) )
    return 1;
  return result;
}
