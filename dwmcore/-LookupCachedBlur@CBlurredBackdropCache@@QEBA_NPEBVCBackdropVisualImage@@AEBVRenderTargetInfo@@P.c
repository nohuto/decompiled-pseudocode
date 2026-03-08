/*
 * XREFs of ?LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@PEAUEffectInput@@@Z @ 0x1800394F8
 * Callers:
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEAU3@@Z @ 0x180037E34 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 * Callees:
 *     ?CanRenderToTargetFromSource@@YA_NAEBVRenderTargetInfo@@0@Z @ 0x1800336F0 (-CanRenderToTargetFromSource@@YA_NAEBVRenderTargetInfo@@0@Z.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180092EE8 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 */

char __fastcall CBlurredBackdropCache::LookupCachedBlur(
        const struct CBackdropVisualImage ***this,
        const struct CBackdropVisualImage *a2,
        const struct RenderTargetInfo *a3,
        struct EffectInput *a4)
{
  const struct CBackdropVisualImage **v4; // r10
  const struct CBackdropVisualImage **v5; // rdi
  __int64 v9; // r11

  v4 = *this;
  v5 = this[1];
  while ( 1 )
  {
    if ( v4 == v5 )
      return 0;
    if ( a2 == *v4 && CanRenderToTargetFromSource(a3, (const struct RenderTargetInfo *)(v4 + 1)) )
      break;
    v4 += 17;
  }
  EffectInput::operator=(v9, v4 + 4);
  return 1;
}
