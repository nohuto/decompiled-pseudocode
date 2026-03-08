/*
 * XREFs of ?SetCommonShaderConstants@CRadialGradientEffect@@QEAAXMM@Z @ 0x1802B629C
 * Callers:
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18024A460 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRadialGradientEffect::SetCommonShaderConstants(CRadialGradientEffect *this, float a2, float a3)
{
  if ( *((float *)this + 7) != a2 || *((float *)this + 8) != a3 )
  {
    *((float *)this + 7) = a2;
    *((float *)this + 8) = a3;
    ++*((_DWORD *)this + 6);
  }
}
