/*
 * XREFs of PopPowerRequestCallbackWorker @ 0x1402BC180
 * Callers:
 *     PopPowerRequestReferenceRelease @ 0x1402BA084 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestHandleClose @ 0x1402BBD4C (PopPowerRequestHandleClose.c)
 *     PopPowerRequestReferenceAcquire @ 0x1402BBDF0 (PopPowerRequestReferenceAcquire.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopReleasePowerRequestPushLock @ 0x14073B67C (PopReleasePowerRequestPushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x14073B7D4 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestStatsSetActive @ 0x14073BEE8 (PopPowerRequestStatsSetActive.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x14073BF54 (PopPowerRequestHandleRequestUpdate.c)
 */

__int64 __fastcall PopPowerRequestCallbackWorker(__int64 *a1)
{
  __int64 *v1; // r14
  __int64 *v2; // rsi
  __int64 result; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 *v6; // r15
  int v7; // r12d
  int v8; // edi
  unsigned __int64 OldIrql; // rbx
  unsigned int v10; // r12d
  unsigned int v11; // r14d
  int v12; // r13d
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rcx
  bool v20; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  __int64 **v25; // rax
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-20h] BYREF

  v1 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  while ( 1 )
  {
    v2 = (__int64 *)*v1;
    if ( (__int64 *)*v1 == v1 )
      break;
    v5 = *v2;
    if ( (__int64 *)v2[1] != v1 || *(__int64 **)(v5 + 8) != v2 )
LABEL_28:
      __fastfail(3u);
    *v1 = v5;
    v6 = v2 - 8;
    *(_QWORD *)(v5 + 8) = v1;
    v2[1] = (__int64)v2;
    *v2 = (__int64)v2;
    v7 = *((_DWORD *)v2 + 5);
    v8 = *((_DWORD *)v2 + 4);
    *((_DWORD *)v2 + 5) = v8;
    *((_DWORD *)v2 + 6) = 2;
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v20 = (v24 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v24;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    v10 = v8 ^ v7;
    if ( v10 )
    {
      v11 = v10;
      v12 = v8;
      do
      {
        _BitScanForward(&v13, v11);
        v14 = v13;
        LOBYTE(v14) = 1;
        v11 &= ~(1 << v13);
        PopAcquirePowerRequestPushLock(v14);
        LOBYTE(v15) = ((1 << v13) & v12) != 0;
        PopPowerRequestStatsSetActive(v2 - 8, v13, v15);
        LOBYTE(v16) = ((1 << v13) & v12) != 0;
        PopPowerRequestHandleRequestUpdate(v2 - 8, v13, v16);
        PopReleasePowerRequestPushLock(v17);
      }
      while ( v11 );
      v1 = a1;
    }
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    while ( v10 )
    {
      _BitScanForward((unsigned int *)&v18, v10);
      v10 &= ~(1 << v18);
      v19 = 48LL * v18;
      v20 = (*(_DWORD *)((char *)&PopPowerRequestAttributes + v19 + 16))-- == 1;
      if ( v20 )
        KeSetEvent((PRKEVENT)((char *)&PopPowerRequestAttributes + v19 + 24), 0, 0);
    }
    if ( *((_DWORD *)v6 + 20) == *((_DWORD *)v6 + 21) )
    {
      *((_DWORD *)v6 + 22) = 0;
      ObfDereferenceObjectWithTag(v2 - 8, 0x72506F50u);
    }
    else
    {
      v25 = (__int64 **)v1[1];
      if ( *v25 != v1 )
        goto LABEL_28;
      *v2 = (__int64)v1;
      v2[1] = (__int64)v25;
      *v25 = v2;
      v1[1] = (__int64)v2;
      *((_DWORD *)v6 + 22) = 1;
    }
  }
  if ( v1 == &PopPowerRequestUpdateQueue )
    _InterlockedExchange(&dword_140C3F1C0, 0);
  result = KxReleaseQueuedSpinLock(&LockHandle);
  v4 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      v26 = KeGetCurrentPrcb();
      v27 = v26->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v20 = ((unsigned int)result & v27[5]) == 0;
      v27[5] &= result;
      if ( v20 )
        result = KiRemoveSystemWorkPriorityKick(v26);
    }
  }
  __writecr8(v4);
  return result;
}
