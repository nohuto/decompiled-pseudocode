/*
 * XREFs of PopPowerRequestCallbackWorker @ 0x14036A8F0
 * Callers:
 *     PopPowerRequestReferenceRelease @ 0x140369FDC (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestHandleClose @ 0x14036A100 (PopPowerRequestHandleClose.c)
 *     PopPowerRequestReferenceAcquire @ 0x14036A2C8 (PopPowerRequestReferenceAcquire.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     PopAcquirePowerRequestPushLock @ 0x140753094 (PopAcquirePowerRequestPushLock.c)
 *     PopReleasePowerRequestPushLock @ 0x1407EFDAC (PopReleasePowerRequestPushLock.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x1407EFDC8 (PopPowerRequestHandleRequestUpdate.c)
 *     PopPowerRequestStatsSetActive @ 0x1407EFF14 (PopPowerRequestStatsSetActive.c)
 */

__int64 __fastcall PopPowerRequestCallbackWorker(__int64 *a1)
{
  __int64 *v1; // rsi
  __int64 *v2; // r14
  __int64 result; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 *v6; // r14
  __int64 **v7; // r15
  int v8; // r12d
  int v9; // edi
  unsigned __int64 OldIrql; // rbx
  unsigned int v11; // r12d
  unsigned int v12; // r15d
  int v13; // esi
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // rcx
  int v19; // ecx
  __int64 v20; // rcx
  bool v21; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  __int64 **v26; // rax
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
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
    *(_QWORD *)(v5 + 8) = v1;
    v6 = v2 - 8;
    v7 = (__int64 **)(v6 + 8);
    v6[9] = (__int64)(v6 + 8);
    v6[8] = (__int64)(v6 + 8);
    v8 = *((_DWORD *)v6 + 21);
    v9 = *((_DWORD *)v6 + 20);
    *((_DWORD *)v6 + 21) = v9;
    *((_DWORD *)v6 + 22) = 2;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v21 = (v25 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v25;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    v11 = v9 ^ v8;
    if ( v11 )
    {
      v12 = v11;
      v13 = v9;
      do
      {
        _BitScanForward(&v14, v12);
        v15 = v14;
        LOBYTE(v15) = 1;
        v12 &= ~(1 << v14);
        PopAcquirePowerRequestPushLock(v15);
        LOBYTE(v16) = ((1 << v14) & v13) != 0;
        PopPowerRequestStatsSetActive(v6, v14, v16);
        LOBYTE(v17) = ((1 << v14) & v13) != 0;
        PopPowerRequestHandleRequestUpdate(v6, v14, v17);
        PopReleasePowerRequestPushLock(v18);
      }
      while ( v12 );
      v1 = a1;
      v7 = (__int64 **)(v6 + 8);
    }
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    while ( v11 )
    {
      _BitScanForward((unsigned int *)&v19, v11);
      v11 &= ~(1 << v19);
      v20 = 48LL * v19;
      v21 = (*(_DWORD *)((char *)&PopPowerRequestAttributes + v20 + 16))-- == 1;
      if ( v21 )
        KeSetEvent((PRKEVENT)((char *)&PopPowerRequestAttributes + v20 + 24), 0, 0);
    }
    if ( *((_DWORD *)v6 + 20) == *((_DWORD *)v6 + 21) )
    {
      *((_DWORD *)v6 + 22) = 0;
      ObfDereferenceObjectWithTag(v6, 0x72506F50u);
    }
    else
    {
      v26 = (__int64 **)v1[1];
      if ( *v26 != v1 )
        goto LABEL_28;
      *v7 = v1;
      v7[1] = (__int64 *)v26;
      *v26 = (__int64 *)v7;
      v1[1] = (__int64)v7;
      *((_DWORD *)v6 + 22) = 1;
    }
  }
  if ( v1 == &PopPowerRequestUpdateQueue )
    _InterlockedExchange(&dword_140C24460, 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  v4 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v21 = ((unsigned int)result & v28[5]) == 0;
        v28[5] &= result;
        if ( v21 )
          result = KiRemoveSystemWorkPriorityKick(v27);
      }
    }
  }
  __writecr8(v4);
  return result;
}
