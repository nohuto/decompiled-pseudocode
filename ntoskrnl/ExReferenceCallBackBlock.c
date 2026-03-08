/*
 * XREFs of ExReferenceCallBackBlock @ 0x14034C060
 * Callers:
 *     IoBoostThreadIoPriority @ 0x140356FD0 (IoBoostThreadIoPriority.c)
 *     KiEnumerateCallback @ 0x1403D0130 (KiEnumerateCallback.c)
 *     IoUnregisterPriorityCallback @ 0x1405550E0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x140569F00 (KeDeregisterBoundCallback.c)
 *     KiHandleBound @ 0x14056A8C0 (KiHandleBound.c)
 *     PoIssueCoalescingNotification @ 0x14058B2F4 (PoIssueCoalescingNotification.c)
 *     ExCallSessionCallBack @ 0x140776B38 (ExCallSessionCallBack.c)
 *     ExCallCallBack @ 0x1407D2DA4 (ExCallCallBack.c)
 *     PspCallProcessNotifyRoutines @ 0x1407D2E14 (PspCallProcessNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x1407D30D0 (PsCallImageNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1407D3260 (PspCallThreadNotifyRoutines.c)
 *     DbgkLkmdRegisterCallback @ 0x140819220 (DbgkLkmdRegisterCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140819698 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x140937D20 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x140937DC4 (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x140983E40 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1409B2C70 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1409B2D60 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     ExAcquireRundownProtectionEx @ 0x14035AFC0 (ExAcquireRundownProtectionEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExReferenceCallBackBlock(signed __int64 *a1)
{
  signed __int64 v2; // rbx
  signed __int64 v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  signed __int64 Count; // rdx
  bool v10; // zf
  signed __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax

  _m_prefetchw(a1);
  v2 = *a1;
  if ( (*a1 & 0xF) != 0 )
  {
    do
    {
      v6 = _InterlockedCompareExchange64(a1, v2 - 1, v2);
      if ( v2 == v6 )
        break;
      v2 = v6;
    }
    while ( (v6 & 0xF) != 0 );
  }
  if ( !v2 )
    return 0LL;
  v4 = v2 & 0xF;
  if ( (v2 & 0xF) != 0 )
  {
    v5 = (struct _EX_RUNDOWN_REF *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v4 == 1 && ExAcquireRundownProtectionEx(v5, 0xFu) )
    {
      _m_prefetchw(a1);
      v7 = *a1;
      while ( (v7 & 0xF) == 0 )
      {
        if ( v5 != (struct _EX_RUNDOWN_REF *)(v7 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v8 = v7;
        v7 = _InterlockedCompareExchange64(a1, v7 + 15, v7);
        if ( v8 == v7 )
          return v5;
      }
      _m_prefetchw(v5);
      Count = v5->Count;
      if ( (v5->Count & 1) != 0 )
      {
LABEL_18:
        v12 = Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFF1uLL) == 15
          && !_interlockedbittestandreset((volatile signed __int32 *)(v12 + 32), 0) )
        {
          KeSetEvent((PRKEVENT)(v12 + 8), 0, 0);
        }
      }
      else
      {
        while ( 1 )
        {
          v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, Count - 30, Count);
          v10 = Count == v11;
          Count = v11;
          if ( v10 )
            break;
          if ( (v11 & 1) != 0 )
            goto LABEL_18;
        }
      }
    }
  }
  else
  {
    v13 = ExAcquireSpinLockShared(&ExpCallBackFlush);
    v5 = (struct _EX_RUNDOWN_REF *)(*a1 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v5 && !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*a1 & 0xFFFFFFFFFFFFFFF0uLL)) )
      v5 = 0LL;
    ExReleaseSpinLockSharedFromDpcLevel(&ExpCallBackFlush);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v10 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v13);
    if ( !v5 )
      return 0LL;
  }
  return v5;
}
