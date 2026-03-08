/*
 * XREFs of MiLockLowestValidPageTable @ 0x140225DB0
 * Callers:
 *     MiSynchronizeSystemVa @ 0x1402228B0 (MiSynchronizeSystemVa.c)
 *     MiWalkPageTablesRecursively @ 0x140223160 (MiWalkPageTablesRecursively.c)
 *     MiRelockFaultState @ 0x14022853C (MiRelockFaultState.c)
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MiTranslatePageForCopy @ 0x1402A1FD4 (MiTranslatePageForCopy.c)
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiLockPoolCommitPageTable @ 0x14032FF9C (MiLockPoolCommitPageTable.c)
 *     NtUnlockVirtualMemory @ 0x1403479C0 (NtUnlockVirtualMemory.c)
 *     MiConvertAndFlushWsleVas @ 0x14036C29C (MiConvertAndFlushWsleVas.c)
 *     MiLockStealUserVm @ 0x1403B7F90 (MiLockStealUserVm.c)
 *     MiReacquireWalkLocks @ 0x140463468 (MiReacquireWalkLocks.c)
 *     MiSplitReducedCommitClonePage @ 0x14061A624 (MiSplitReducedCommitClonePage.c)
 *     MiSetGraphicsPtes @ 0x1406240B0 (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x1406264CC (MiSetPagesModified.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062B2BC (MiDeprioritizeVirtualAddresses.c)
 *     MmUpdateUserShadowStackValue @ 0x1406441CC (MmUpdateUserShadowStackValue.c)
 *     MiProtectAweRegion @ 0x140648DF8 (MiProtectAweRegion.c)
 *     MiScrubLargeMappedPage @ 0x14065BE5C (MiScrubLargeMappedPage.c)
 *     MiComputeIdealLargePage @ 0x140665140 (MiComputeIdealLargePage.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiPerformSafePdeWrite @ 0x1403C0578 (MiPerformSafePdeWrite.c)
 */

unsigned __int64 __fastcall MiLockLowestValidPageTable(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rsi
  _KPROCESS *Process; // rcx
  __int64 i; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // r8
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // [rsp+20h] [rbp-48h]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]
  unsigned __int64 v17; // [rsp+30h] [rbp-38h]
  __int64 v18; // [rsp+38h] [rbp-30h]

  *a3 = 0LL;
  v15 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0xFFFFF6FB7DBEDF68uLL;
  MiLockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL, 0LL);
  for ( i = 2LL; ; --i )
  {
    v9 = *(&v15 + i);
    v10 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        if ( (v10 & 1) == 0 )
          break;
        if ( (v10 & 0x20) == 0 || (v10 & 0x42) == 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          Flink = Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v13 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
            v14 = v10 | 0x20;
            if ( (v13 & 0x20) == 0 )
              v14 = *(_QWORD *)v9;
            v10 = v14;
            if ( (v13 & 0x42) != 0 )
              v10 = v14 | 0x42;
          }
        }
      }
    }
    if ( (v10 & 1) == 0 || (v10 & 0x80u) != 0LL )
      break;
    if ( (v10 & 0x20) == 0 )
      MiPerformSafePdeWrite(Process, *(&v15 + i), v10, 1LL);
    if ( v9 != v6 )
    {
      MiLockPageTableInternal(a1, v9, 0LL);
      MiUnlockPageTableInternal(a1, v6);
      v6 = v9;
    }
    if ( !i )
    {
      *a3 = a2;
      return v6;
    }
  }
  *a3 = v9;
  return v6;
}
