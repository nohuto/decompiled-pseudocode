/*
 * XREFs of KiIntSteerDisable @ 0x14028E484
 * Callers:
 *     KeDisconnectInterrupt @ 0x14028E38C (KeDisconnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x14028EFF0 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     KiIntSteerLogState @ 0x1402903C8 (KiIntSteerLogState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiIntSteerDisable(__int64 *a1, unsigned int a2)
{
  __int64 *v2; // rdi
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf

  v2 = a1;
  v4 = *(_QWORD **)(*a1 + 168);
  if ( !v4 )
    return 0LL;
  KiIntSteerLogState(*(_QWORD *)(*a1 + 168), PPM_ETW_INTERRUPT_STEERING_STATE_DISCONNECT);
  v5 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
  if ( a2 )
  {
    v6 = a2;
    do
    {
      v7 = *v2;
      _InterlockedAnd((volatile signed __int32 *)(*v2 + 104), 0xFFFFFFFB);
      *(_QWORD *)(v7 + 168) = 0LL;
      ++v2;
      --v6;
    }
    while ( v6 );
  }
  v8 = *v4;
  v9 = (_QWORD *)v4[2];
  v10 = (_QWORD *)v4[1];
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v10 != v4 )
    goto LABEL_14;
  *v10 = v8;
  *(_QWORD *)(v8 + 8) = v10;
  ExFreePoolWithTag(v4, 0x6B725449u);
  if ( (_QWORD *)v9[2] != v9 + 2 )
    goto LABEL_11;
  --KiIntTrackRootCount;
  v11 = *v9;
  v12 = (_QWORD *)v9[1];
  if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v12 != v9 )
LABEL_14:
    __fastfail(3u);
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  KiIntSteerUpdateDeviceInterruptMask(v9 + 20, 1LL);
  ExFreePoolWithTag(v9, 0x6B725449u);
LABEL_11:
  KxReleaseSpinLock((volatile signed __int64 *)&KiIntTrackSpinlock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v18 = (v17 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  return 0LL;
}
