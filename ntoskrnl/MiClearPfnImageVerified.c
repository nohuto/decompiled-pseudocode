/*
 * XREFs of MiClearPfnImageVerified @ 0x14036ABC0
 * Callers:
 *     MiReferencePageForModifiedWrite @ 0x140213038 (MiReferencePageForModifiedWrite.c)
 *     MiGatherMappedPages @ 0x140215150 (MiGatherMappedPages.c)
 *     MiProbeLeafPteAccess @ 0x140269620 (MiProbeLeafPteAccess.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeleteClusterPage @ 0x14027A890 (MiDeleteClusterPage.c)
 *     MiDeletePerSessionProtos @ 0x1402CF6DC (MiDeletePerSessionProtos.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 *     MiCopyPage @ 0x14032DC70 (MiCopyPage.c)
 *     MiDeleteClusterSection @ 0x14034B3A4 (MiDeleteClusterSection.c)
 *     MiRestoreTransitionPte @ 0x14036A9C4 (MiRestoreTransitionPte.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiPrepareLargePageSubPageForFree @ 0x140666E94 (MiPrepareLargePageSubPageForFree.c)
 *     MmChangeImageProtection @ 0x1407D1E10 (MmChangeImageProtection.c)
 *     MiTradeBootImagePage @ 0x140B3BE4C (MiTradeBootImagePage.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiGetPagePrivilege @ 0x14032D3F0 (MiGetPagePrivilege.c)
 *     MiSetPfnIdentity @ 0x14034BE78 (MiSetPfnIdentity.c)
 *     KeSetPagePrivilege @ 0x1403CF124 (KeSetPagePrivilege.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiClearPfnImageVerified(ULONG_PTR BugCheckParameter2, char a2)
{
  char result; // al
  unsigned __int8 v5; // di
  int PagePrivilege; // eax
  unsigned int v7; // eax
  __int64 v8; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v14 = 0LL;
  result = (*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7;
  if ( result == 3 )
  {
    if ( (a2 & 4) != 0 )
      v5 = 17;
    else
      v5 = MiLockPageInline(BugCheckParameter2);
    if ( (a2 & 8) != 0 )
    {
      PagePrivilege = MiGetPagePrivilege(BugCheckParameter2, 1, (unsigned __int64 *)&v14);
      if ( PagePrivilege )
      {
        if ( (PagePrivilege & 0x20) != 0 )
          v7 = 512;
        else
          v7 = (a2 & 0x10) != 0 ? 32 : 16;
        v8 = v7;
        LODWORD(v8) = v7 | 0x80;
        if ( (a2 & 0x40) == 0 )
          v8 = v7;
        if ( (int)KeSetPagePrivilege(
                    0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
                    &v14,
                    v8) < 0 )
          KeBugCheckEx(
            0x1Au,
            0x5150BuLL,
            0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4),
            0LL,
            0LL);
      }
    }
    result = MiSetPfnIdentity(BugCheckParameter2, 0);
    if ( v5 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v13 = (v12 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      result = v5;
      __writecr8(v5);
    }
  }
  return result;
}
