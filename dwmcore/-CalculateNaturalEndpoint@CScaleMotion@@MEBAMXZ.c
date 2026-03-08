/*
 * XREFs of ?CalculateNaturalEndpoint@CScaleMotion@@MEBAMXZ @ 0x18026C440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x18026C640 (-UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z.c)
 */

float __fastcall CScaleMotion::CalculateNaturalEndpoint(CScaleMotion *this)
{
  float v2; // xmm0_4
  float v4; // xmm0_4

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 8) - 1.0) & _xmm) > 0.0000011920929 )
  {
    if ( COERCE_FLOAT(*((_DWORD *)this + 8) & _xmm) >= 0.0000011920929 && (*((_BYTE *)this + 8) & 1) != 0 )
    {
      v4 = (*(float (__fastcall **)(CScaleMotion *))(*(_QWORD *)this + 40LL))(this);
      return fmaxf(0.001, CScaleMotion::UnboundedValueAtTime(this, v4));
    }
  }
  else
  {
    v2 = *((float *)this + 12);
    if ( v2 < 0.0 )
      return FLOAT_0_001;
    if ( v2 != 0.0 )
      return FLOAT_3_4028235e38;
  }
  return *((float *)this + 11);
}
