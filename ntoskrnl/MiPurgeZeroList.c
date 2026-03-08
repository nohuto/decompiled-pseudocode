/*
 * XREFs of MiPurgeZeroList @ 0x14064B790
 * Callers:
 *     MiMirrorPurgePartitionPages @ 0x1406259E0 (MiMirrorPurgePartitionPages.c)
 * Callees:
 *     MiUnlinkFreeOrZeroedPage @ 0x140276500 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPurgeLargeZeroNodePages @ 0x14064D6A8 (MiPurgeLargeZeroNodePages.c)
 */

void __fastcall MiPurgeZeroList(__int64 a1)
{
  unsigned int v2; // ebp
  ULONG_PTR *v3; // r14
  __int64 v4; // rsi
  unsigned __int64 v5; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  ULONG_PTR v11; // rbx

  if ( *(_BYTE *)(a1 + 15781) )
  {
    MiPurgeLargeZeroNodePages();
    v2 = 0;
    if ( 3 * dword_140C6577C )
    {
      v3 = (ULONG_PTR *)(*(_QWORD *)(a1 + 2496) + 16LL);
      do
      {
        while ( 1 )
        {
          v11 = *v3;
          if ( *v3 == 0x3FFFFFFFFFLL )
            break;
          v4 = 48 * v11 - 0x220000000000LL;
          v5 = (unsigned __int8)MiLockPageInline(v4);
          if ( v11 <= qword_140C65820
            && _bittest64((const signed __int64 *)(48 * v11 - 0x21FFFFFFFFD8LL), 0x36u)
            && !_bittest64((const signed __int64 *)(v4 + 40), 0x28u)
            && (*(_BYTE *)(v4 + 34) & 7) == 0 )
          {
            MiUnlinkFreeOrZeroedPage(v11, 0LL, 0);
            MiInsertPageInFreeOrZeroedList(v11, 2);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
              v10 = (v9 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v9;
              if ( v10 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
          __writecr8(v5);
        }
        ++v2;
        v3 += 11;
      }
      while ( v2 < 3 * dword_140C6577C );
    }
    *(_BYTE *)(a1 + 15781) = 0;
  }
}
