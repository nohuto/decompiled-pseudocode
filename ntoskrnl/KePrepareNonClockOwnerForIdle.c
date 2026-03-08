/*
 * XREFs of KePrepareNonClockOwnerForIdle @ 0x1402D4634
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiSetClockTimer @ 0x14022AC78 (KiSetClockTimer.c)
 *     RtlGetInterruptTimePrecise @ 0x14022C9C0 (RtlGetInterruptTimePrecise.c)
 *     KiSetNextClockTickDueTime @ 0x14022FD10 (KiSetNextClockTickDueTime.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiShouldRearmClockTimer @ 0x1402D96B0 (KiShouldRearmClockTimer.c)
 *     KiFindNextTimerDueTime @ 0x140328600 (KiFindNextTimerDueTime.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KePrepareNonClockOwnerForIdle(__int64 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 InterruptTimePrecise; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rbp
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // rdx
  $7B5CACFB46652731FD5E219DB549FF78 *v9; // rcx
  struct _KPRCB *v10; // rbx
  int v11; // ebp
  __int64 NextTickDueTime; // rbx
  __int64 result; // rax
  __int64 NextTimerDueTime; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v16; // rdx
  unsigned __int8 v17; // cl
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  __int64 v22; // [rsp+30h] [rbp-58h] BYREF
  LARGE_INTEGER v23; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+40h] [rbp-48h] BYREF

  v23.QuadPart = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v23);
  v5 = -1LL;
  v22 = -1LL;
  v6 = -1LL;
  if ( !KiSerializeTimerExpiration )
  {
    NextTimerDueTime = KiFindNextTimerDueTime(CurrentPrcb, InterruptTimePrecise, 0LL, &v22);
    v5 = v22;
    v6 = NextTimerDueTime;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v16) = 0x8000;
    else
      v16 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    v4 = (unsigned int)v16 | SchedulerAssist[5];
    v5 = v22;
    SchedulerAssist[5] = v4;
  }
  if ( v5 != -1 )
    KiSetClockTimer((__int64)CurrentPrcb, v5, 0, 0, 0, 0);
  if ( v6 != -1 )
    KiSetClockTimer((__int64)CurrentPrcb, v6, 0, 1, 0, 0);
  v8 = 0LL;
  v9 = &CurrentPrcb->ClockTimerState.ClockTimerEntries[0].12;
  while ( (v9->TypeFlags & 3) != 1 )
  {
    ++v8;
    v9 += 16;
    if ( v8 >= 7 )
    {
      v10 = KeGetCurrentPrcb();
      v11 = KiClockTimerOwner;
      if ( (v10->PendingTickFlags & 1) != 0 )
      {
        ((void (__fastcall *)($7B5CACFB46652731FD5E219DB549FF78 *))off_140C01C98[0])(v9);
        v10->PendingTickFlags &= ~1u;
        v10->ClockTimerState.ClockActive = 0;
      }
      if ( v10->Number == v11 )
        ++dword_140C417C8;
      if ( v10->ClockOwner )
        v10->ClockOwner = 0;
      if ( (unsigned int)dword_140C02F28 > 5 )
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02F28,
          (unsigned __int8 *)byte_14002D235,
          0LL,
          0LL,
          2u,
          &v24);
      NextTickDueTime = -1LL;
      goto LABEL_20;
    }
  }
  if ( (unsigned __int8)KiShouldRearmClockTimer(CurrentPrcb, 0LL, v4) )
  {
    CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
    KiSetNextClockTickDueTime(0);
  }
  NextTickDueTime = CurrentPrcb->ClockTimerState.NextTickDueTime;
LABEL_20:
  if ( KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
    {
      v18 = KeGetCurrentPrcb();
      v19 = v18->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v21 = (v20 & v19[5]) == 0;
      v19[5] &= v20;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(v18);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( a1 )
    *a1 = NextTickDueTime;
  return result;
}
