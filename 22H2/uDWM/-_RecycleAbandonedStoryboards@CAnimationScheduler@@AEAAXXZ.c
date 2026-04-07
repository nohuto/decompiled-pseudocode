/*
 * XREFs of ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18003167C
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180030050 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180030C54 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x180031470 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x180032D20 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimationScheduler::_RecycleAbandonedStoryboards(CAnimationScheduler *this, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  _DWORD *v5; // rsi
  unsigned int v6; // ecx
  __int64 v7; // r9
  __int64 v8; // rcx

  v2 = 0LL;
  while ( (unsigned int)v2 < *((_DWORD *)this + 10) )
  {
    v4 = *((_QWORD *)this + 2);
    v5 = *(_DWORD **)(v4 + 8 * v2);
    if ( v5[6] == 4 )
    {
      v6 = *((_DWORD *)this + 10);
      if ( (unsigned int)v2 >= v6 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x194u);
      }
      else
      {
        v7 = (unsigned int)v2;
        if ( (unsigned int)v2 < v6 - 1 )
        {
          do
          {
            v8 = (unsigned int)v7;
            a2 = (unsigned int)(v7 + 1);
            v7 = a2;
            *(_QWORD *)(v4 + 8 * v8) = *(_QWORD *)(v4 + 8 * a2);
            v6 = *((_DWORD *)this + 10);
          }
          while ( (unsigned int)a2 < v6 - 1 );
        }
        *((_DWORD *)this + 10) = v6 - 1;
      }
      (*(void (__fastcall **)(_DWORD *, __int64, __int64, __int64))(*(_QWORD *)v5 + 80LL))(v5, a2, v4, v7);
    }
    else
    {
      v2 = (unsigned int)(v2 + 1);
    }
  }
}
