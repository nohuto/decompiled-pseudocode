/*
 * XREFs of MiFreeUltraMapping @ 0x1403C0688
 * Callers:
 *     MiZeroPage @ 0x140275060 (MiZeroPage.c)
 *     MiReleaseLargeZeroingVa @ 0x140652CD8 (MiReleaseLargeZeroingVa.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeUltraMapping(unsigned __int64 a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 v2; // rbx
  int v3; // esi
  unsigned __int64 v4; // rbx
  __int64 v5; // r8
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  bool v8; // zf
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+20h] [rbp-28h] BYREF

  memset(&v11, 0, sizeof(v11));
  v1 = (unsigned __int64 *)(((a1 >> 27) & 0x1FFFF8) - 0x90482600000LL);
  v2 = (a1 - qword_140C68178) >> 30;
  KeAcquireInStackQueuedSpinLock(&qword_140C68170, &v11);
  v3 = 0;
  _bittestandset64((signed __int64 *)qword_140C681A0, v2);
  v4 = ZeroPte;
  if ( MiPteInShadowRange((unsigned __int64)v1) )
  {
    if ( MiPteHasShadow() )
    {
      v3 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_2;
      v8 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_2;
      v8 = (ZeroPte & 1) == 0;
    }
    if ( !v8 )
      v4 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_2:
  *v1 = v4;
  if ( v3 )
    MiWritePteShadow((__int64)v1, v4, v5);
  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&v11);
  OldIrql = v11.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && v11.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (v11.OldIrql + 1));
      v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v8 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
