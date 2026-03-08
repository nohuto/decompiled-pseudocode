/*
 * XREFs of ?BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x18022DD1C
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18022D238 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180232410 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1802325C4 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x18023265C (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1802326B8 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?LogBoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x18022FBE8 (-LogBoostCompositorClock@CInteractionTracker@@AEAAX_N@Z.c)
 */

void __fastcall CInteractionTracker::BoostCompositorClock(CInteractionTracker *this, bool a2)
{
  __int64 v2; // r8
  int v3; // eax
  int v4; // eax

  if ( ((*((_BYTE *)this + 541) & 4) != 0) != a2 )
  {
    v2 = *((_QWORD *)this + 2);
    v3 = *(_DWORD *)(v2 + 1228);
    if ( a2 )
    {
      v4 = v3 + 1;
    }
    else
    {
      if ( !v3 )
      {
LABEL_7:
        *((_BYTE *)this + 541) &= ~4u;
        *((_BYTE *)this + 541) |= 4 * a2;
        CInteractionTracker::LogBoostCompositorClock(this, a2);
        return;
      }
      v4 = v3 - 1;
    }
    *(_DWORD *)(v2 + 1228) = v4;
    goto LABEL_7;
  }
}
