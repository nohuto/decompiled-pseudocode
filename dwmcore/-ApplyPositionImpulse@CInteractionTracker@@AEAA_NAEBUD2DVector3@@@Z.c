/*
 * XREFs of ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x18022DA04
 * Callers:
 *     ?ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE@@@Z @ 0x18022FE1C (-ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERAC.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18012E802 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1802326B8 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 */

char __fastcall CInteractionTracker::ApplyPositionImpulse(CInteractionTracker *this, const struct D2DVector3 *a2)
{
  int v2; // r8d
  char v3; // di
  float v6; // xmm6_4
  __int64 v7; // rax
  float v8; // xmm6_4
  __int64 v9; // rax

  v2 = *((_DWORD *)this + 44);
  v3 = 0;
  if ( !v2 || (unsigned int)(v2 - 2) <= 1 )
  {
    v3 = 1;
    CInteractionTracker::TransitionToInertia(this, 2LL);
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
    {
      v6 = *(float *)a2;
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 328LL))(*((_QWORD *)this + 42));
      *(float *)(v7 + 40) = v6 + *(float *)(v7 + 40);
      v8 = *((float *)a2 + 1);
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 43) + 328LL))(*((_QWORD *)this + 43));
      *(float *)(v9 + 40) = v8 + *(float *)(v9 + 40);
    }
  }
  return v3;
}
