/*
 * XREFs of MiWriteTopLevelPxe @ 0x140201C64
 * Callers:
 *     MiDecommitLargePoolVa @ 0x14020FF88 (MiDecommitLargePoolVa.c)
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiDeleteSystemPageTable @ 0x140299BA0 (MiDeleteSystemPageTable.c)
 *     MiZeroAndFlushPtes @ 0x14029B3BC (MiZeroAndFlushPtes.c)
 *     MiDeleteVa @ 0x140324900 (MiDeleteVa.c)
 *     MiLinkPoolCommitChain @ 0x140330100 (MiLinkPoolCommitChain.c)
 * Callees:
 *     MiReplicatePteChange @ 0x1402A4528 (MiReplicatePteChange.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWriteTopLevelPxe(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  BOOL v7; // edx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  __int64 v10; // rdx
  int v11; // r8d
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf
  struct _KLOCK_QUEUE_HANDLE v15; // [rsp+20h] [rbp-28h] BYREF

  memset(&v15, 0, sizeof(v15));
  KeAcquireInStackQueuedSpinLock(&qword_140C69440, &v15);
  v4 = MiPteInShadowRange(a1);
  if ( (a2 & 1) != 0 )
  {
    v11 = 0;
    v10 = a2;
    if ( !v4 )
      goto LABEL_14;
    if ( (unsigned int)MiPteHasShadow(v5, a2, 0LL) )
    {
      v11 = 1;
      if ( HIBYTE(word_140C6697C) )
      {
LABEL_14:
        *a1 = v10;
        if ( !v11 )
          goto LABEL_5;
LABEL_15:
        MiWritePteShadow(a1, v10);
        goto LABEL_5;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_14;
    }
    v10 |= 0x8000000000000000uLL;
    goto LABEL_14;
  }
  v7 = 0;
  if ( v4 )
    v7 = MiPteHasShadow(v5, 0LL, v6) != 0;
  *a1 = a2;
  if ( v7 )
  {
    v10 = a2;
    goto LABEL_15;
  }
LABEL_5:
  MiReplicatePteChange(a1, a2, 1LL);
  result = KxReleaseQueuedSpinLock(&v15);
  OldIrql = v15.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && v15.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (v15.OldIrql + 1));
      v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v14 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
