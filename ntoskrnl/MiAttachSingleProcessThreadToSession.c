/*
 * XREFs of MiAttachSingleProcessThreadToSession @ 0x1402D51CC
 * Callers:
 *     MiAttachSessionGlobal @ 0x1402D509C (MiAttachSessionGlobal.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAttachSingleProcessThreadToSession(unsigned __int64 a1)
{
  _KPROCESS *Process; // rdi
  __int64 v3; // rdx
  _QWORD *v4; // r8
  __int64 *v5; // rdi
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  BOOL v10; // edx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE v16; // [rsp+20h] [rbp-28h] BYREF

  memset(&v16, 0, sizeof(v16));
  Process = KeGetCurrentThread()->ApcState.Process;
  KeAcquireInStackQueuedSpinLock(&qword_140C69440, &v16);
  v3 = 0LL;
  v4 = (_QWORD *)(a1 + 104);
  while ( *v4 )
  {
    v3 = (unsigned int)(v3 + 1);
    ++v4;
    if ( (unsigned int)v3 >= 2 )
      goto LABEL_4;
  }
  *(_QWORD *)(a1 + 8 * v3 + 104) = Process;
LABEL_4:
  Process[1].Affinity.StaticBitmap[25] = a1;
  v5 = (__int64 *)(8 * (((unsigned __int64)qword_140C65668 >> 39) & 0x1FF) - 0x90482413000LL);
  v6 = MI_READ_PTE_LOCK_FREE(a1 + 744);
  v7 = MiPteInShadowRange(v5);
  v10 = 0;
  if ( (v6 & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_6;
    if ( (unsigned int)MiPteHasShadow(v8, 0LL, v9) )
    {
      v10 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_6;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_6;
    }
    v6 |= 0x8000000000000000uLL;
  }
  else if ( v7 )
  {
    v10 = MiPteHasShadow(v8, 0LL, v9) != 0;
  }
LABEL_6:
  *v5 = v6;
  if ( v10 )
    MiWritePteShadow(v5, v6);
  result = KxReleaseQueuedSpinLock(&v16);
  OldIrql = v16.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && v16.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (v16.OldIrql + 1));
      v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v15 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
