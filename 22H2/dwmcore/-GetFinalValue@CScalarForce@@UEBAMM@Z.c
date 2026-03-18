/*
 * XREFs of ?GetFinalValue@CScalarForce@@UEBAMM@Z @ 0x180275ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

float __fastcall CScalarForce::GetFinalValue(CScalarForce *this, float a2)
{
  float result; // xmm0_4

  if ( !(*(unsigned __int8 (__fastcall **)(CScalarForce *))(*(_QWORD *)this + 48LL))(this) )
    return a2;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 24LL))(*((_QWORD *)this + 13));
  return result;
}
