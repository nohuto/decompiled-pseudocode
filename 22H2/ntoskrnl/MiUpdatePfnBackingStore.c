/*
 * XREFs of MiUpdatePfnBackingStore @ 0x140332DF4
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14032F960 (MiStoreWriteModifiedPages.c)
 *     MiGatherPagefilePages @ 0x1403318B4 (MiGatherPagefilePages.c)
 * Callees:
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiTransferSoftwarePte @ 0x1403330E8 (MiTransferSoftwarePte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiUpdatePfnBackingStore(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int8 v4; // di
  int v5; // ebp
  unsigned int v6; // ebx
  __int64 v9; // rbx
  int v10; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r8
  bool v13; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax

  v4 = 0;
  v5 = (int)a4;
  v6 = a3;
  if ( !(_DWORD)a4 )
    v4 = MiLockPageInline(a1, a2, a3, a4);
  v9 = MiTransferSoftwarePte(*(_QWORD *)(a1 + 16), a2, v6, 2 * ((*(_DWORD *)(a1 + 16) >> 1) & 1u) + 1);
  v10 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange(a1 + 16);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v10 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_4;
      v13 = (v9 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_4;
      v13 = (v9 & 1) == 0;
    }
    if ( !v13 )
    {
      LOBYTE(CurrentThread) = 0;
      v9 |= 0x8000000000000000uLL;
    }
  }
LABEL_4:
  *(_QWORD *)(a1 + 16) = v9;
  if ( v10 )
    LOBYTE(CurrentThread) = MiWritePteShadow(a1 + 16, v9, v12);
  if ( !v5 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << (v4 + 1));
          v13 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    LOBYTE(CurrentThread) = v4;
    __writecr8(v4);
  }
  return (char)CurrentThread;
}
