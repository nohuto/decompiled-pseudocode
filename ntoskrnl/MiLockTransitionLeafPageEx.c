/*
 * XREFs of MiLockTransitionLeafPageEx @ 0x1402DD4C8
 * Callers:
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiUserFault @ 0x140268260 (MiUserFault.c)
 *     MiTryDeleteTransitionPte @ 0x14029CB54 (MiTryDeleteTransitionPte.c)
 *     MiTranslatePageForCopy @ 0x1402A1FD4 (MiTranslatePageForCopy.c)
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 *     MiUpdatePrefetchPriority @ 0x1402C95DC (MiUpdatePrefetchPriority.c)
 *     MiOutSwapWorkingSetPte @ 0x1402CC600 (MiOutSwapWorkingSetPte.c)
 *     MiActOnPte @ 0x1402CF06C (MiActOnPte.c)
 *     MiAccessCheck @ 0x1402E4134 (MiAccessCheck.c)
 *     MiSetProtectionOnTransitionPte @ 0x1402EC490 (MiSetProtectionOnTransitionPte.c)
 *     MmProtectPool @ 0x14030B7D8 (MmProtectPool.c)
 *     MiGetPageProtection @ 0x14031C310 (MiGetPageProtection.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 *     MiSetSystemCodeProtection @ 0x14032E170 (MiSetSystemCodeProtection.c)
 *     MiReservePageFileSpaceForPage @ 0x14032ECD0 (MiReservePageFileSpaceForPage.c)
 *     MiReplacePageTablePage @ 0x14039164C (MiReplacePageTablePage.c)
 *     MiCheckPteForWriteCluster @ 0x1404640B2 (MiCheckPteForWriteCluster.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406157F0 (MiCheckCommitReleaseFromVad.c)
 *     MiMakeOutswappedPageResident @ 0x14061612C (MiMakeOutswappedPageResident.c)
 *     MiWalkResetCommitPte @ 0x140617300 (MiWalkResetCommitPte.c)
 *     MiClearDriverHotPatchPtes @ 0x14063F9FC (MiClearDriverHotPatchPtes.c)
 *     MiQueryVaPhysicalContiguity @ 0x1406469A0 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeTransitionHeatBatch @ 0x140651CD4 (MiMakeTransitionHeatBatch.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065B0E0 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14065DE28 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiHandleForkTransitionPte @ 0x140662368 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiInvalidPteConforms @ 0x140287530 (MiInvalidPteConforms.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14065E278 (MiLockSpecialPurposeMemoryCachedPage.c)
 */

__int64 __fastcall MiLockTransitionLeafPageEx(ULONG_PTR BugCheckParameter2, _BYTE *a2, char a3)
{
  __int64 v6; // rax
  ULONG_PTR v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  volatile signed __int32 *v11; // rdi
  signed __int8 v12; // al
  unsigned __int64 v14; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  int v24; // eax
  _DWORD *v25; // r8
  int v26; // [rsp+68h] [rbp+10h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v6 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
      v7 = v6;
      if ( (unsigned __int64)a2 > 1 && ((v6 & 1) != 0 || (v6 & 0x400) != 0) || (v6 & 0x800) == 0 )
        return 0LL;
      if ( MiInvalidPteConforms(v6) )
      {
        v8 = v7;
        if ( qword_140C657C0 )
        {
          if ( (v7 & 0x10) != 0 )
            v8 = v7 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v8 = v7 & ~qword_140C657C0;
        }
        v9 = (v8 >> 12) & 0xFFFFFFFFFFLL;
        if ( v9 <= qword_140C65820 )
        {
          if ( _bittest64((const signed __int64 *)(48 * v9 - 0x21FFFFFFFFD8LL), 0x36u) )
            break;
        }
      }
    }
    v10 = 48 * v9 - 0x220000000000LL;
    v11 = (volatile signed __int32 *)(v10 + 24);
    if ( (unsigned __int64)a2 > 1 )
    {
      *a2 = MiLockPageInline(48 * v9 - 0x220000000000LL);
    }
    else
    {
      v12 = _interlockedbittestandset64(v11, 0x3FuLL);
      if ( a2 == (_BYTE *)1 )
      {
        if ( v12 )
          return 0LL;
      }
      else
      {
        v26 = 0;
        if ( v12 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v26);
            while ( *(__int64 *)v11 < 0 );
          }
          while ( _interlockedbittestandset64(v11, 0x3FuLL) );
        }
      }
    }
    if ( MI_READ_PTE_LOCK_FREE(BugCheckParameter2) == v7 )
      break;
    if ( (unsigned __int64)a2 <= 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v11, 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v14 = (unsigned __int8)*a2;
      _InterlockedAnd64((volatile signed __int64 *)v11, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v19 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v14);
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
  {
    v20 = (a2 == (_BYTE *)1) | 2u;
    if ( (a3 & 1) == 0 )
      v20 = a2 == (_BYTE *)1;
    v10 = MiLockSpecialPurposeMemoryCachedPage(v10, v20);
    if ( !v10 )
    {
      if ( (unsigned __int64)a2 > 1 )
      {
        v21 = (unsigned __int8)*a2;
        if ( KiIrqlFlags )
        {
          v22 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v22 >= 2u )
          {
            v23 = KeGetCurrentPrcb();
            v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
            v25 = v23->SchedulerAssist;
            v19 = (v24 & v25[5]) == 0;
            v25[5] &= v24;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
        __writecr8(v21);
      }
      return 0LL;
    }
  }
  if ( (unsigned __int64)a2 <= 1
    && (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) != BugCheckParameter2
    && !_bittest64((const signed __int64 *)(v10 + 40), 0x28u) )
  {
    KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v7, *(_QWORD *)(v10 + 8));
  }
  return v10;
}
