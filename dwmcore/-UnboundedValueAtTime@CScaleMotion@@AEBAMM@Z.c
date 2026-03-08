/*
 * XREFs of ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x18026C640
 * Callers:
 *     ?AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ @ 0x18026C400 (-AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ.c)
 *     ?CalculateNaturalEndpoint@CScaleMotion@@MEBAMXZ @ 0x18026C440 (-CalculateNaturalEndpoint@CScaleMotion@@MEBAMXZ.c)
 * Callees:
 *     logf_0 @ 0x180117764 (logf_0.c)
 *     powf_0 @ 0x18011777C (powf_0.c)
 */

float __fastcall CScaleMotion::UnboundedValueAtTime(CScaleMotion *this, float a2)
{
  float v4; // xmm6_4

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 8) - 1.0) & _xmm) <= 0.0000011920929 )
    return (float)(a2 * *((float *)this + 12)) + *((float *)this + 11);
  if ( COERCE_FLOAT(*((_DWORD *)this + 8) & _xmm) < 0.0000011920929 || (*((_BYTE *)this + 8) & 1) == 0 )
    return *((float *)this + 11);
  v4 = (float)(powf_0(*((float *)this + 8), a2) - 1.0) * *((float *)this + 12);
  return (float)(v4 / logf_0(*((float *)this + 8))) + *((float *)this + 11);
}
