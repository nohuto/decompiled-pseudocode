/*
 * XREFs of ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180008144
 * Callers:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180008088 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180031850 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?SetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800081B4 (-SetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x180030528 (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnSetAnimationClockTime(
        CAnimationClockCoordinator *a1,
        struct _GUID *a2,
        unsigned int a3,
        __int64 a4)
{
  struct _GUID v4; // xmm0
  int AnimationClock; // edi
  __int64 v8; // r8
  CBaseObject *v9; // rbx
  struct _GUID v11; // [rsp+20h] [rbp-18h] BYREF
  CBaseObject *v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = *a2;
  v12 = 0LL;
  v11 = v4;
  AnimationClock = CAnimationClockCoordinator::GetAnimationClock(a1, &v11, &v12);
  if ( AnimationClock >= 0 )
  {
    v8 = a4;
    v9 = v12;
    AnimationClock = CAnimationClock::SetTime(v12, a3, v8);
    if ( v9 )
      CBaseObject::Release(v9);
  }
  return (unsigned int)AnimationClock;
}
