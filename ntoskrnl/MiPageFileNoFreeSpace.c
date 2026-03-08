/*
 * XREFs of MiPageFileNoFreeSpace @ 0x140638D04
 * Callers:
 *     MiGatherPagefilePages @ 0x140637D34 (MiGatherPagefilePages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeModifiedReservations @ 0x140637B1C (MiFreeModifiedReservations.c)
 *     MiIssuePageExtendRequest @ 0x14063890C (MiIssuePageExtendRequest.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x140638C18 (MiMakePagefileWriterEntryAvailable.c)
 *     MiCauseOverCommitPopup @ 0x140653D38 (MiCauseOverCommitPopup.c)
 */

void __fastcall MiPageFileNoFreeSpace(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // rsi
  int v7; // r15d
  unsigned __int64 v8; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r8
  unsigned int v16; // r9d
  unsigned int v17; // edx
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx

  v2 = *(_QWORD *)(a1 + 248);
  v4 = 1LL;
  MiFreeModifiedReservations(a1, 1);
  v6 = 0LL;
  v7 = 0;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  if ( *(_QWORD *)(a1 + 24) )
  {
    MiMakePagefileWriterEntryAvailable(a2);
  }
  else
  {
    *(_BYTE *)(a1 + 206) |= 1u;
    v7 = 1;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v8);
  if ( v7 )
  {
    *a2 = 2575857425LL;
    v14 = *(_QWORD *)(v2 + 17816);
    v15 = *(_QWORD *)(v2 + 17576);
    if ( v15 > v14 )
      v15 = *(_QWORD *)(v2 + 17816);
    if ( (*(_BYTE *)(a1 + 204) & 0x50) == 0 )
    {
      if ( v15 > (((v14 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL)
        && v14 < *(_QWORD *)(v2 + 16392) )
      {
        MiCauseOverCommitPopup(v2);
LABEL_27:
        if ( *(_QWORD *)(v2 + 17816) < *(_QWORD *)(v2 + 16392) )
          MiIssuePageExtendRequest(v2, v4, 6, 0);
        return;
      }
      if ( *(_QWORD *)(v2 + 17824) >= 0x1000uLL )
      {
        v16 = *(_DWORD *)(v2 + 17048);
        v17 = 0;
        if ( v16 )
        {
          v18 = v2 + 17056;
          do
          {
            if ( (*(_BYTE *)(*(_QWORD *)v18 + 204LL) & 0x50) == 0 )
            {
              if ( v6 + *(_QWORD *)(*(_QWORD *)v18 + 24LL) < v6 )
                break;
              v6 += *(_QWORD *)(*(_QWORD *)v18 + 24LL);
            }
            ++v17;
            v18 += 8LL;
          }
          while ( v17 < v16 );
        }
        v19 = *(_QWORD *)(v2 + 17824);
        if ( v19 > v6 )
        {
          v4 = v19 - v6;
          if ( v4 )
            goto LABEL_27;
        }
      }
    }
  }
}
