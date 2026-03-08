/*
 * XREFs of ?AdvanceInertiaToTimeDefault@CMotion@@MEAAMXZ @ 0x18026B200
 * Callers:
 *     ?AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ @ 0x18026C070 (-AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ.c)
 *     ?AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ @ 0x18026C400 (-AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z @ 0x18026B5D4 (-InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z.c)
 */

float __fastcall CMotion::AdvanceInertiaToTimeDefault(CMotion *this)
{
  float v1; // xmm0_4
  float v3; // xmm6_4
  float v4; // xmm2_4
  double v5; // xmm0_8
  float v6; // xmm3_4

  v1 = *((float *)this + 16);
  v3 = *((float *)this + 5);
  if ( v3 > *((float *)this + 9) || v1 > v3 )
  {
    if ( (*((_BYTE *)this + 8) & 1) != 0 )
    {
      v4 = 0.0;
      if ( *((float *)this + 6) != 0.0 )
      {
        v5 = (*(double (__fastcall **)(CMotion *))(*(_QWORD *)this + 32LL))(this);
        v4 = *(float *)&v5;
      }
      v6 = *((float *)this + 16);
      if ( v6 <= v3 )
        v6 = *((float *)this + 9);
      CMotion::InitializeDefaultBoundaryInertiaModifier(this, v3, v4, v6, *((float *)this + 6));
    }
    else
    {
      return fminf(fmaxf(v3, v1), *((float *)this + 9));
    }
  }
  return v3;
}
