/*
 * XREFs of ?TimeToMinimumVelocity@CScaleMotion@@MEBAMXZ @ 0x18026C570
 * Callers:
 *     <none>
 * Callees:
 *     logf_0 @ 0x180117764 (logf_0.c)
 */

float __fastcall CScaleMotion::TimeToMinimumVelocity(CScaleMotion *this)
{
  float v1; // xmm4_4
  float v3; // xmm2_4
  float v4; // xmm6_4
  float v5; // xmm0_4
  float v6; // xmm0_4

  v1 = *((float *)this + 12);
  v3 = *((float *)this + 14);
  v4 = 0.0;
  if ( COERCE_FLOAT(LODWORD(v1) & _xmm) > v3 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 8) - 1.0) & _xmm) > 0.0000011920929 )
    {
      if ( COERCE_FLOAT(*((_DWORD *)this + 8) & _xmm) >= 0.0000011920929 && (*((_BYTE *)this + 8) & 1) != 0 )
      {
        v6 = logf_0(v3 / COERCE_FLOAT(LODWORD(v1) & _xmm));
        return v6 / logf_0(*((float *)this + 8));
      }
    }
    else
    {
      if ( (float)(v1 > 0.0) <= 0.0 )
        v5 = 0.0;
      else
        v5 = FLOAT_3_4028235e38;
      return fmaxf(0.0, (float)(v5 - *((float *)this + 11)) / v1);
    }
  }
  return v4;
}
