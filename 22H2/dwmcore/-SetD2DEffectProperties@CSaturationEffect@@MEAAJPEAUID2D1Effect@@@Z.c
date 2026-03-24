/*
 * XREFs of ?SetD2DEffectProperties@CSaturationEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x1801706D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSaturationEffect::SetD2DEffectProperties(CSaturationEffect *this, struct ID2D1Effect *a2)
{
  return (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
           a2,
           0LL,
           0LL,
           (char *)this + 152,
           4);
}
