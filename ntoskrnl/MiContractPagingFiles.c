/*
 * XREFs of MiContractPagingFiles @ 0x1402A5364
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140726E8C (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiOkToShrinkPageFiles @ 0x1402A5400 (MiOkToShrinkPageFiles.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiQueuePageFileExtension @ 0x140638ECC (MiQueuePageFileExtension.c)
 */

void __fastcall MiContractPagingFiles(__int64 a1)
{
  unsigned int v2; // r8d
  unsigned int v3; // ecx
  __int64 v4; // r9
  _QWORD *v5; // rdx
  KIRQL v6; // al
  __int64 v7; // r8
  unsigned __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v11; // eax
  _DWORD *SchedulerAssist; // r8
  bool v13; // zf

  if ( (unsigned int)MiOkToShrinkPageFiles(*(_QWORD *)(a1 + 17576), *(_QWORD *)(a1 + 17816)) )
  {
    v2 = *(_DWORD *)(a1 + 17048);
    v3 = 0;
    if ( v2 )
    {
      v4 = a1 + 17056;
      do
      {
        v5 = *(_QWORD **)v4;
        if ( (*(_WORD *)(*(_QWORD *)v4 + 204LL) & 0x50) == 0 && *v5 != v5[2] && v5[3] > 0x4000uLL )
          break;
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < v2 );
    }
    if ( v3 != v2 )
    {
      v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1408));
      v8 = v6;
      if ( *(_QWORD *)(a1 + 600) == -1LL )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1408));
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v13 = (v11 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v11;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v8);
      }
      else
      {
        *(_QWORD *)(a1 + 568) = 0LL;
        LOBYTE(v7) = v6;
        *(_BYTE *)(a1 + 647) |= 0x10u;
        *(_QWORD *)(a1 + 592) = a1;
        *(_QWORD *)(a1 + 600) = -1LL;
        MiQueuePageFileExtension(a1 + 568, 0LL, v7);
      }
    }
  }
}
