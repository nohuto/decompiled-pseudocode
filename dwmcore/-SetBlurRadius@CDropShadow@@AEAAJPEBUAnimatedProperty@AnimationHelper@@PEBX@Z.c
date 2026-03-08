/*
 * XREFs of ?SetBlurRadius@CDropShadow@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801017B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180098D74 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropShadow::SetBlurRadius(
        CDropShadow *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        float *a3)
{
  float v4; // xmm1_4

  v4 = fminf(750.0, *a3);
  if ( *((float *)this + 22) != v4 )
  {
    *((float *)this + 22) = v4;
    CResource::InvalidateAnimationSources(this, 0);
    (*(void (__fastcall **)(CDropShadow *, _QWORD, CDropShadow *))(*(_QWORD *)this + 72LL))(this, 0LL, this);
  }
  return 0LL;
}
