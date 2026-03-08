/*
 * XREFs of ?CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ @ 0x18026C4F0
 * Callers:
 *     <none>
 * Callees:
 *     powf_0 @ 0x18011777C (powf_0.c)
 */

float __fastcall CScaleMotion::CurrentInertiaVelocity(CScaleMotion *this)
{
  float v1; // xmm1_4

  v1 = *((float *)this + 6);
  if ( v1 >= *((float *)this + 17) )
    return 0.0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 8) - 1.0) & _xmm) <= 0.0000011920929 )
    return *((float *)this + 12);
  if ( COERCE_FLOAT(*((_DWORD *)this + 8) & _xmm) >= 0.0000011920929 && (*((_BYTE *)this + 8) & 1) != 0 )
    return powf_0(*((float *)this + 8), v1) * *((float *)this + 12);
  else
    return 0.0;
}
