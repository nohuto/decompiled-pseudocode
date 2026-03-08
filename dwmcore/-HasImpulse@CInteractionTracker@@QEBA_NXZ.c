/*
 * XREFs of ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x18022F824
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18022DF28 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18022F410 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1802326B8 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HasImpulse@CMotion@@QEBA_NXZ @ 0x180261990 (-HasImpulse@CMotion@@QEBA_NXZ.c)
 */

char __fastcall CInteractionTracker::HasImpulse(CInteractionTracker *this)
{
  __int64 v2; // rcx
  char v3; // bl
  CMotion *v4; // rax
  __int64 v5; // rcx
  CMotion *v6; // rax
  __int64 v7; // rcx
  CMotion *v8; // rax

  if ( (*((_BYTE *)this + 540) & 0x10) != 0 )
    return 1;
  v2 = *((_QWORD *)this + 42);
  v3 = 0;
  if ( v2 )
  {
    v4 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 328LL))(v2);
    if ( CMotion::HasImpulse(v4) )
      return 1;
  }
  v5 = *((_QWORD *)this + 43);
  if ( v5 )
  {
    v6 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 328LL))(v5);
    if ( CMotion::HasImpulse(v6) )
      return 1;
  }
  v7 = *((_QWORD *)this + 41);
  if ( v7 )
  {
    v8 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 328LL))(v7);
    if ( CMotion::HasImpulse(v8) )
      return 1;
  }
  return v3;
}
