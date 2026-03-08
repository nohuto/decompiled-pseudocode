/*
 * XREFs of ?SetTargetProperty@CAnimationBinding@DirectComposition@@QEAAXMPEA_N@Z @ 0x1C024C0BC
 * Callers:
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C00617B8 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CAnimationBinding::SetTargetProperty(
        DirectComposition::CAnimationBinding *this,
        float a2,
        bool *a3)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, bool *, bool *))(**((_QWORD **)this + 2) + 216LL))(
    *((_QWORD *)this + 2),
    *((unsigned int *)this + 3),
    a3,
    a3);
}
