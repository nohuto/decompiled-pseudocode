/*
 * XREFs of KiCompleteDirectSwitchThread @ 0x140369F84
 * Callers:
 *     KeReleaseSemaphoreEx @ 0x14033E940 (KeReleaseSemaphoreEx.c)
 * Callees:
 *     KiRemoveBoostThread @ 0x140229890 (KiRemoveBoostThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14036A030 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiCompleteDirectSwitchThread(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 updated; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v7; // rdi
  signed __int32 *SchedulerAssist; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  signed __int32 v11; // eax
  signed __int32 v12; // ett

  v2 = *(_DWORD *)(a2 + 120);
  if ( (v2 & 0x20) != 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
    _disable();
    updated = KiUpdateTotalCyclesCurrentThread(a1, a2, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = updated;
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v11 = *SchedulerAssist;
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
      }
      while ( v12 != v11 );
      if ( (v11 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v9 = *(_QWORD *)(a1 + 11528);
    if ( v9 )
    {
      v10 = *(_QWORD *)(a2 + 32);
      if ( v10 > v7 )
        *(_QWORD *)(v9 - 184) += v10 - v7;
    }
    LOBYTE(v2) = KiRemoveBoostThread(a1, a2);
    *(_QWORD *)(a2 + 32) = v7;
  }
  return v2;
}
