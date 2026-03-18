/*
 * XREFs of ?IsCenteredGradient@CRadialGradientBrush@@AEBA_NXZ @ 0x18024E27C
 * Callers:
 *     ?CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z @ 0x18024D9F0 (-CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z.c)
 *     ?SetOriginOffsetProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18024E3F0 (-SetOriginOffsetProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRadialGradientBrush::IsCenteredGradient(CRadialGradientBrush *this)
{
  return COERCE_FLOAT(*((_DWORD *)this + 64) & _xmm) < 0.0000011920929
      && COERCE_FLOAT(*((_DWORD *)this + 65) & _xmm) < 0.0000011920929;
}
