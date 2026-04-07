/*
 * XREFs of ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z @ 0x1800354A0
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180030050 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x180031470 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ?OnAnimationComplete@CStoryboard@@UEAAJI@Z @ 0x180035530 (-OnAnimationComplete@CStoryboard@@UEAAJI@Z.c)
 */

__int64 __fastcall CAnimationScheduler::OnAnimationComplete(CAnimationScheduler *this, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v5; // esi
  unsigned int v6; // r8d

  v2 = 0LL;
  v5 = 0;
  if ( !*((_DWORD *)this + 10) )
    goto LABEL_6;
  do
  {
    CStoryboard::OnAnimationComplete((CStoryboard *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL * v5) + 16LL), a2);
    v6 = *((_DWORD *)this + 10);
    ++v5;
  }
  while ( v5 < v6 );
  if ( v6 )
  {
    while ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8 * v2) + 24LL) == 4 )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= v6 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    CAnimationScheduler::_CleanupTransition(this);
  }
  return 0LL;
}
