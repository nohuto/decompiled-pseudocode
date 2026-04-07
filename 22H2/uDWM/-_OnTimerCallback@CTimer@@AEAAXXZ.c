/*
 * XREFs of ?_OnTimerCallback@CTimer@@AEAAXXZ @ 0x180041A08
 * Callers:
 *     ?Start@CTimer@@QEAAJK@Z @ 0x18002E8D4 (-Start@CTimer@@QEAAJK@Z.c)
 *     ?_OnTimerTick@CTimer@@AEAAXXZ @ 0x1800419BC (-_OnTimerTick@CTimer@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTimer::_OnTimerCallback(CTimer *this)
{
  if ( *((_QWORD *)this + 8) )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    (***((void (__fastcall ****)(_QWORD))this + 8))(*((_QWORD *)this + 8));
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  }
}
