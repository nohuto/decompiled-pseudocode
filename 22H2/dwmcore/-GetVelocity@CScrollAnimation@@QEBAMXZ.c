/*
 * XREFs of ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x180265080
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1802343A4 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

float __fastcall CScrollAnimation::GetVelocity(CScrollAnimation *this)
{
  CMotion *v1; // rax

  v1 = (CMotion *)(*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 328LL))(this);
  return CMotion::GetCurrentVelocity(v1);
}
