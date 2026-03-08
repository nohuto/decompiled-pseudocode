/*
 * XREFs of MiUnlockNestedPageTableWritePte @ 0x140346D60
 * Callers:
 *     MiClearPteAccessed @ 0x140326910 (MiClearPteAccessed.c)
 *     MiWsleFlush @ 0x14032B4A0 (MiWsleFlush.c)
 *     MiEvictPageTableLock @ 0x140346460 (MiEvictPageTableLock.c)
 *     MiRewritePteWithLockBit @ 0x140371830 (MiRewritePteWithLockBit.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiReplicatePteChange @ 0x1402A4528 (MiReplicatePteChange.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiWriteValidPteNewProtection @ 0x14032E660 (MiWriteValidPteNewProtection.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     MiShouldLockPteDirectly @ 0x140346F34 (MiShouldLockPteDirectly.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140346F70 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUnlockNestedPageTableWritePte(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  __int64 *v6; // rdi
  int v8; // r14d
  __int64 v9; // rcx
  unsigned __int64 OldIrql; // rbx
  BOOL HasShadow; // esi
  __int64 v12; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = a2;
  if ( (((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
  {
    v8 = 1;
    if ( !a4 )
      KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
  }
  else
  {
    v8 = 0;
  }
  v9 = 0LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0
    && (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v6 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v9 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 624);
  }
  if ( v6 == (__int64 *)0xFFFFF6FB7DBEDF68LL )
  {
    MI_INTERLOCKED_EXCHANGE_PTE(0xFFFFF6FB7DBEDF68uLL, a3);
    goto LABEL_9;
  }
  if ( v9 )
  {
    if ( (a3 & 1) != 0 )
      goto LABEL_9;
  }
  else
  {
    if ( (unsigned int)MiShouldLockPteDirectly(a1) )
    {
      MI_INTERLOCKED_EXCHANGE_PTE(v6, a3);
      v6 = 0LL;
      goto LABEL_9;
    }
    if ( (a3 & 1) != 0 )
    {
      MiWriteValidPteNewProtection((unsigned __int64)v6, a3);
      goto LABEL_9;
    }
  }
  HasShadow = 0;
  if ( MiPteInShadowRange((unsigned __int64)v6) )
    HasShadow = MiPteHasShadow();
  *v6 = a3;
  if ( HasShadow )
    MiWritePteShadow((__int64)v6, a3, v12);
LABEL_9:
  if ( v8 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
      MiReplicatePteChange((__int64)v6, a3, 1);
    if ( !a4 )
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v17 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
    }
  }
  if ( v6 )
    MiUnlockPageTableInternal(a1, (unsigned __int64)v6);
}
