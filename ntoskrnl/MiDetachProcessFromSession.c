/*
 * XREFs of MiDetachProcessFromSession @ 0x1402EA0D8
 * Callers:
 *     MiDetachSessionGlobal @ 0x1402EA04C (MiDetachSessionGlobal.c)
 *     MiDereferenceSessionFinal @ 0x14067E7A0 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDetachProcessFromSession(_DWORD *a1)
{
  _KPROCESS *Process; // rsi
  unsigned __int64 v3; // rbx
  unsigned __int64 *v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  bool v14; // zf
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  signed __int32 v17[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v18; // [rsp+20h] [rbp-28h] BYREF

  memset(&v18, 0, sizeof(v18));
  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = Process[1].Affinity.StaticBitmap[25];
  v4 = (unsigned __int64 *)(8 * (((unsigned __int64)qword_140C65668 >> 39) & 0x1FF) - 0x90482413000LL);
  KeAcquireInStackQueuedSpinLock(&qword_140C69440, &v18);
  if ( a1 )
  {
    v5 = 0LL;
    v6 = v3 + 104;
    while ( *(_KPROCESS **)v6 != Process )
    {
      v5 = (unsigned int)(v5 + 1);
      v6 += 8LL;
      if ( (unsigned int)v5 >= 2 )
        goto LABEL_5;
    }
    *(_QWORD *)(*(_QWORD *)v6 + 1368LL) = 0LL;
    *(_QWORD *)(v3 + 8 * v5 + 104) = 0LL;
  }
LABEL_5:
  if ( MI_READ_PTE_LOCK_FREE(v4) )
  {
    v7 = ZeroPte;
    v8 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v4) )
      goto LABEL_7;
    if ( (unsigned int)MiPteHasShadow(v10, v9, v11) )
    {
      v8 = 1;
      if ( !HIBYTE(word_140C6697C) )
      {
        v14 = (ZeroPte & 1) == 0;
        goto LABEL_20;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v14 = (ZeroPte & 1) == 0;
LABEL_20:
      if ( !v14 )
        v7 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_7:
    *v4 = v7;
    if ( v8 )
      MiWritePteShadow(v4, v7);
  }
  if ( a1 )
  {
    _InterlockedOr(v17, 0);
    *a1 = KiTbFlushTimeStamp;
  }
  result = KxReleaseQueuedSpinLock(&v18);
  OldIrql = v18.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && v18.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (v18.OldIrql + 1));
      v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v14 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
