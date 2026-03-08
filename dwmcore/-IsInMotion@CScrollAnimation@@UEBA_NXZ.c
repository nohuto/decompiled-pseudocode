/*
 * XREFs of ?IsInMotion@CScrollAnimation@@UEBA_NXZ @ 0x180261B60
 * Callers:
 *     ?IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ @ 0x1802636F0 (-IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CScrollAnimation::IsInMotion(CScrollAnimation *this)
{
  CMotion *v2; // rax

  if ( *((_DWORD *)this + 106) )
    return 1;
  v2 = (CMotion *)(*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 328LL))(this);
  return CMotion::IsInMotion(v2);
}
