/*
 * XREFs of ?WasInertiaStartedByImpulse@CScrollAnimation@@QEBA_NXZ @ 0x180262620
 * Callers:
 *     ?WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z @ 0x180232B20 (-WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CScrollAnimation::WasInertiaStartedByImpulse(CScrollAnimation *this)
{
  return (*(_BYTE *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 328LL))(this) + 8) & 4) != 0;
}
