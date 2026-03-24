/*
 * XREFs of MiClearPfnImageVerified @ 0x1402FBA64
 * Callers:
 *     MiProbeLeafPteAccess @ 0x14020B6B0 (MiProbeLeafPteAccess.c)
 *     MiFlushSectionInternal @ 0x140219D70 (MiFlushSectionInternal.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234880 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCopyPage @ 0x14023FB90 (MiCopyPage.c)
 *     MiGatherMappedPages @ 0x140255428 (MiGatherMappedPages.c)
 *     MiReferencePageForModifiedWrite @ 0x14025614C (MiReferencePageForModifiedWrite.c)
 *     MiDeleteClusterSection @ 0x140280A60 (MiDeleteClusterSection.c)
 *     MiInsertPageInList @ 0x1402A6E90 (MiInsertPageInList.c)
 *     MiReadyLargePageToFree @ 0x1402AA3C0 (MiReadyLargePageToFree.c)
 *     MiDeleteClusterPage @ 0x1402ABEC0 (MiDeleteClusterPage.c)
 *     MiRestoreTransitionPte @ 0x1402FB620 (MiRestoreTransitionPte.c)
 *     MiDeletePerSessionProtos @ 0x1403285B0 (MiDeletePerSessionProtos.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MmChangeImageProtection @ 0x1406FE6A0 (MmChangeImageProtection.c)
 *     MiTradeBootImagePage @ 0x140A4FE60 (MiTradeBootImagePage.c)
 * Callees:
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiGetPagePrivilege @ 0x1402A8D80 (MiGetPagePrivilege.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x140512DB8 (KeSetPagePrivilege.c)
 */

char __fastcall MiClearPfnImageVerified(ULONG_PTR a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char v5; // si
  char result; // al
  unsigned __int8 v7; // di
  int PagePrivilege; // eax
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  v16 = 0LL;
  v5 = a2;
  result = (*(_QWORD *)(a1 + 40) >> 60) & 7;
  if ( result == 3 )
  {
    if ( (a2 & 4) != 0 )
      v7 = 17;
    else
      v7 = MiLockPageInline(a1, a2, a3, a4);
    if ( (v5 & 8) != 0 )
    {
      PagePrivilege = MiGetPagePrivilege(a1, 1, &v16);
      if ( PagePrivilege )
      {
        if ( (PagePrivilege & 0x20) != 0 )
          v9 = 512;
        else
          v9 = (v5 & 0x10) != 0 ? 32 : 16;
        v10 = v9;
        LODWORD(v10) = v9 | 0x80;
        if ( (v5 & 0x40) == 0 )
          v10 = v9;
        if ( (int)KeSetPagePrivilege((__int64)(a1 + 0x58000000000LL) / 48, &v16, v10) < 0 )
          KeBugCheckEx(0x1Au, 0x5150BuLL, (__int64)(a1 + 0x58000000000LL) / 48, 0LL, 0LL);
      }
    }
    result = -1;
    *(_QWORD *)(a1 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
    if ( v7 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v14 = ~(unsigned __int16)(-1LL << (v7 + 1));
            v15 = (v14 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v14;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = v7;
      __writecr8(v7);
    }
  }
  return result;
}
