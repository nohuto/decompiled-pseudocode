/*
 * XREFs of MiFinishLastForkPageTable @ 0x140661F1C
 * Callers:
 *     MiDoneWithThisPageGetAnother @ 0x1406619A4 (MiDoneWithThisPageGetAnother.c)
 *     MiFreeForkMaps @ 0x1406621B0 (MiFreeForkMaps.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140286264 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiDecrementShareCount @ 0x14032AE40 (MiDecrementShareCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFinishLastForkPageTable(__int64 a1, __int64 a2)
{
  BOOL v3; // ebx
  __int64 v4; // rdi
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  unsigned __int64 *v8; // rsi
  unsigned __int64 ValidPte; // rbx
  int v10; // r14d
  __int64 v11; // r8
  bool v12; // zf
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v3 = 1;
  v4 = 48 * a2 - 0x220000000000LL;
  v5 = *(_QWORD *)(v4 + 8) | 0x8000000000000000uLL;
  v6 = (__int64)(v5 << 25) >> 16 << 25 >> 16;
  if ( v6 >= 0xFFFFF68000000000uLL )
    v3 = v6 > 0xFFFFF6FFFFFFFFFFuLL;
  v7 = (unsigned __int8)MiLockPageInline(v4);
  MiRemoveLockedPageChargeAndDecRef(v4);
  if ( v3 )
  {
    if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
    {
      MiDecrementShareCount(v4);
      goto LABEL_18;
    }
    v8 = (unsigned __int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000)
                            + 8 * ((v5 >> 3) & 0x1FF));
    if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)v8) & 1) != 0 )
      goto LABEL_16;
    ValidPte = MiMakeValidPte(v5, a2, -2147483644);
    v10 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v8) )
    {
      if ( MiPteHasShadow() )
      {
        v10 = 1;
        if ( !HIBYTE(word_140C6697C) )
        {
          v12 = (ValidPte & 1) == 0;
          goto LABEL_12;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v12 = (ValidPte & 1) == 0;
LABEL_12:
        if ( !v12 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    *v8 = ValidPte;
    if ( v10 )
      MiWritePteShadow((__int64)v8, ValidPte, v11);
LABEL_16:
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v8, 0x11u);
  }
LABEL_18:
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v7 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v12 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v7);
  return result;
}
