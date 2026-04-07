/*
 * XREFs of ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x18002DD68
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18002D27C (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x1800BA3F0 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x18002CFBC (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 *     ?IsSet@CTimer@@QEAA_NXZ @ 0x18002DE24 (-IsSet@CTimer@@QEAA_NXZ.c)
 *     ?Start@CTimer@@QEAAJK@Z @ 0x18002E8D4 (-Start@CTimer@@QEAAJK@Z.c)
 *     ?Cancel@CTimer@@QEAAJXZ @ 0x18002E9F0 (-Cancel@CTimer@@QEAAJXZ.c)
 *     ??0CTimer@@QEAA@XZ @ 0x18002EE10 (--0CTimer@@QEAA@XZ.c)
 *     ?SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z @ 0x18002EEC8 (-SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationClock::_SetTimer(CAnimationClock *this, unsigned int a2)
{
  int v2; // ebx
  CTimer *v6; // rax

  v2 = 0;
  if ( !*((_QWORD *)this + 8) )
  {
    v6 = (CTimer *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     80LL);
    if ( v6 )
      v6 = CTimer::CTimer(v6);
    *((_QWORD *)this + 8) = v6;
    if ( !v6 )
      return (unsigned int)-2147024882;
    v2 = CTimer::SetTimerCallback(v6, (CAnimationClock *)((char *)this + 16));
    if ( v2 < 0 )
      return (unsigned int)v2;
  }
  if ( CTimer::IsSet(*((CTimer **)this + 8)) )
    v2 = CTimer::Cancel(*((CTimer **)this + 8));
  if ( v2 >= 0 )
  {
    if ( a2 )
      return (unsigned int)CTimer::Start(*((CTimer **)this + 8), a2);
    else
      CAnimationClock::_OnTimerCallback(this);
  }
  return (unsigned int)v2;
}
