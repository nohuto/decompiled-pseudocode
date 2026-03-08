/*
 * XREFs of ?GetOpacity@CLegacyMilBrush@@KAMMPEAVCFloatResource@@@Z @ 0x180095C08
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800951C0 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?GetGradientColorData@CGradientLegacyMilBrush@@IEAAXPEAVCGradientColorData@@@Z @ 0x18021B828 (-GetGradientColorData@CGradientLegacyMilBrush@@IEAAXPEAVCGradientColorData@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CLegacyMilBrush::GetOpacity(float a1, struct CFloatResource *a2)
{
  if ( a2 )
    a1 = *((float *)a2 + 16);
  return fminf(1.0, fmaxf(a1, 0.0));
}
