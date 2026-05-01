/*
 * XREFs of ?SetPosition@CSwitchItemGrid@@UEAAXAEBUCRect@Geometry@@@Z @ 0x180413680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSwitchItemGrid::SetPosition(CSwitchItemGrid *this, const struct Geometry::CRect *a2)
{
  (*(void (__fastcall **)(CSwitchItemGrid *, const struct Geometry::CRect *, _QWORD, _QWORD))(*(_QWORD *)this + 512LL))(
    this,
    a2,
    0LL,
    0LL);
}
