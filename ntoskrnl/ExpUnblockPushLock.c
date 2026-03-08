/*
 * XREFs of ExpUnblockPushLock @ 0x1402BFD34
 * Callers:
 *     MiUnlockImageSection @ 0x140225A90 (MiUnlockImageSection.c)
 *     ExBlockOnAddressPushLock @ 0x1402BF8C0 (ExBlockOnAddressPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1402BF9A0 (ExTimedWaitForUnblockPushLock.c)
 *     CmpTryToRundownHive @ 0x1402BFA88 (CmpTryToRundownHive.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x1402BFE38 (CmpDecrementAppHiveUnloadCount.c)
 *     RtlReleaseSwapReference @ 0x1402F03F8 (RtlReleaseSwapReference.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x1403046C4 (RtlpCSparseBitmapPageDecommit.c)
 *     ExUnblockPushLockEx @ 0x1403120C0 (ExUnblockPushLockEx.c)
 *     ExSweepSingleHandle @ 0x14035218C (ExSweepSingleHandle.c)
 *     ExUnblockOnAddressPushLockEx @ 0x1403CFBC0 (ExUnblockOnAddressPushLockEx.c)
 *     ExfUnblockPushLock @ 0x14040CCE0 (ExfUnblockPushLock.c)
 *     IopCheckHandleForRevocation @ 0x1405562E0 (IopCheckHandleForRevocation.c)
 *     PspHandleTableWalker @ 0x1405A1AE0 (PspHandleTableWalker.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1402BF9A0 (ExTimedWaitForUnblockPushLock.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall ExpUnblockPushLock(volatile __int64 *a1, void *a2, char a3)
{
  char v3; // bp
  __int64 v4; // r9
  unsigned __int8 CurrentIrql; // bl
  __int64 v9; // rsi
  _DWORD *SchedulerAssist; // r10
  __int64 v11; // rax
  unsigned __int8 v12; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf

  v3 = 0;
  v4 = _InterlockedExchange64(a1, 0LL);
  CurrentIrql = 2;
  if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 24) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          LODWORD(v11) = 4;
          if ( CurrentIrql != 2 )
            v11 = (-1LL << (CurrentIrql + 1)) & 4;
          SchedulerAssist[5] |= v11;
        }
      }
    }
    do
    {
      v9 = *(_QWORD *)(v4 + 24);
      if ( (void *)v4 == a2 )
        v3 = 1;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)(v4 + 52), 1u) )
        KeSetEvent((PRKEVENT)v4, 1, 0);
      v4 = v9;
    }
    while ( v9 );
    if ( CurrentIrql != 2 )
    {
      if ( KiIrqlFlags )
      {
        v12 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v14 = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v16 = (v15 & v14[5]) == 0;
          v14[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  if ( a2 && !v3 )
  {
    if ( a3 )
      KeWaitForSingleObject(a2, WrPushLock, 0, 0, 0LL);
    else
      ExTimedWaitForUnblockPushLock((__int64)a1, (char *)a2, 0LL);
  }
}
