/*
 * XREFs of KeInitializeClockOtherProcessors @ 0x140A8B0E4
 * Callers:
 *     KiInitializeKernel @ 0x140A89160 (KiInitializeKernel.c)
 * Callees:
 *     KiSetPendingTick @ 0x14022AF40 (KiSetPendingTick.c)
 *     KiGetClockTimerState @ 0x140303184 (KiGetClockTimerState.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeInitializeClockOtherProcessors(__int64 a1)
{
  __int64 ClockTimerState; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // rcx
  int v4; // r9d
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = 0LL;
  ClockTimerState = KiGetClockTimerState(a1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 13 )
      LODWORD(v7) = 0x2000;
    else
      v7 = (-1LL << (CurrentIrql + 1)) & 0x3FFC;
    SchedulerAssist[5] |= v7;
  }
  off_140C01C98[0]();
  KiSetPendingTick(0);
  off_140C01C90[0]();
  LOBYTE(v3) = 1;
  ((void (__fastcall *)(__int64))off_140C01C88[0])(v3);
  ((void (__fastcall *)(_QWORD, _QWORD, __int64 *))off_140C01CA0[0])(0LL, (unsigned int)KeMaximumIncrement, &v13);
  KiSetPendingTick(1);
  v4 = v13;
  *(_DWORD *)(ClockTimerState + 12) = KeMaximumIncrement;
  *(_DWORD *)(ClockTimerState + 8) = v4;
  *(_BYTE *)(ClockTimerState + 136) = 1;
  if ( KiIrqlFlags )
  {
    v8 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v10 = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v12 = (v11 & v10[5]) == 0;
      v10[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
