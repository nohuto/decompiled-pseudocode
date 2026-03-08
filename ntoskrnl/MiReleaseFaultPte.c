/*
 * XREFs of MiReleaseFaultPte @ 0x140631BE0
 * Callers:
 *     MiValidateImagePfn @ 0x14069EF78 (MiValidateImagePfn.c)
 * Callees:
 *     KeFlushSingleTb @ 0x140211E60 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReleaseFaultPte(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  int v3; // esi
  __int64 v4; // r8
  bool v5; // zf
  __int64 v6; // rdi
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v1 = ZeroPte;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0;
  if ( MiPteInShadowRange(a1) )
  {
    if ( MiPteHasShadow() )
    {
      v3 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_9;
      v5 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v5 = (ZeroPte & 1) == 0;
    }
    if ( !v5 )
      v1 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_9:
  *(_QWORD *)a1 = v1;
  if ( v3 )
    MiWritePteShadow(a1, v1, v4);
  KeFlushSingleTb((__int64)(a1 << 25) >> 16, 0, 1u);
  v6 = (__int64)(a1 - qword_140C69348) >> 3;
  KeAcquireInStackQueuedSpinLock(&qword_140C69350, &LockHandle);
  byte_140C69358[(unsigned __int64)(unsigned int)v6 >> 3] &= ~(1 << (v6 & 7));
  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v5 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v5 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
