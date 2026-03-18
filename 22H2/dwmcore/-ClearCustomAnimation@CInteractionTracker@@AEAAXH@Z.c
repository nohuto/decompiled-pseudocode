/*
 * XREFs of ?ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x180231E94
 * Callers:
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x1802351F8 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x180235980 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CInteractionTracker::ClearCustomAnimation(CInteractionTracker *this, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx

  v2 = a2;
  if ( (unsigned __int64)a2 < 2 )
  {
    v4 = *((_QWORD *)this + a2 + 44);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + v2 + 44) = 0LL;
    }
  }
  if ( (_DWORD)v2 == 1 )
    *((_BYTE *)this + 541) &= ~2u;
}
