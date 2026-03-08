/*
 * XREFs of ScaleDpiValueWithSubpixel @ 0x1C01BB288
 * Callers:
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01CD768 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 * Callees:
 *     ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x1C0144C12 (-ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z.c)
 */

void __fastcall ScaleDpiValueWithSubpixel(int *a1, float *a2, unsigned __int16 a3, unsigned __int16 a4)
{
  if ( a4 )
    ScaleValueWithSubpixel(a1, a2, (float)a3 / (float)a4);
}
