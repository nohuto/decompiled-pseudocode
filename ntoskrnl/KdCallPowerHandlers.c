/*
 * XREFs of KdCallPowerHandlers @ 0x140564F44
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x1405976B0 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KdCallPowerHandlers(unsigned int a1)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v5; // rdx
  __int64 v6; // rdi
  int v7; // ebp
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf

  if ( !KdpPowerListHead )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v5) = 0x8000;
    else
      v5 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v5;
  }
  KxAcquireSpinLock(&KdpPowerSpinLock);
  v6 = KdpPowerListHead;
  v7 = 0;
  while ( (__int64 *)v6 != &KdpPowerListHead )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v6 + 16))(a1, *(_QWORD *)(v6 + 24));
    if ( v7 < 0 )
      break;
    v6 = *(_QWORD *)v6;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&KdpPowerSpinLock);
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
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return (unsigned int)v7;
}
