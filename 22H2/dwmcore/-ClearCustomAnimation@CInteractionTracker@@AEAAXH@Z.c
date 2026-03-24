/*
 * XREFs of ?ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x1801C8BB8
 * Callers:
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x1801CC338 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1801CCC38 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInteractionTracker::ClearCustomAnimation(CInteractionTracker *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx

  v2 = (int)a2;
  if ( a2 < 2 )
  {
    v4 = *((_QWORD *)this + (int)a2 + 43);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + v2 + 43) = 0LL;
    }
  }
  if ( (_DWORD)v2 == 1 )
    *((_BYTE *)this + 533) &= ~2u;
}
