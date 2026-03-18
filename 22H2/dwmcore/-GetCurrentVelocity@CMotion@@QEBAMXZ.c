/*
 * XREFs of ?GetCurrentVelocity@CMotion@@QEBAMXZ @ 0x18026EBF0
 * Callers:
 *     ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1802329A8 (-GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x180265080 (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z @ 0x180266F20 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z.c)
 *     ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z @ 0x180267540 (-StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

float __fastcall CMotion::GetCurrentVelocity(CMotion *this)
{
  __int64 v1; // r8
  _BYTE v3[24]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 12);
  if ( v1 )
    return *(float *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v1 + 32LL))(*((_QWORD *)this + 12), v3) + 8);
  else
    return *((float *)this + 7);
}
