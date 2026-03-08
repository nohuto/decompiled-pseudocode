/*
 * XREFs of ?CalculateNaturalEndpoint@CPositionMotion@@MEBAMXZ @ 0x18026C140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z @ 0x18026C358 (-UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z.c)
 */

float __fastcall CPositionMotion::CalculateNaturalEndpoint(CPositionMotion *this)
{
  float v2; // xmm6_4
  float v3; // xmm0_4

  v2 = *((float *)this + 33) / *((float *)this + 30);
  v3 = (*(float (__fastcall **)(CPositionMotion *))(*(_QWORD *)this + 40LL))(this);
  return (float)((float)((float)(CPositionMotion::UnboundedInertiaPanningAtTime(this, v3) + *((float *)this + 11))
                       - *((float *)this + 32))
               * v2)
       + *((float *)this + 32);
}
