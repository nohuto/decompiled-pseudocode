/*
 * XREFs of MiLockLowestValidPageTable @ 0x140285C40
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14020BD60 (MiWalkPageTablesRecursively.c)
 *     MiCommitExistingVad @ 0x140218D50 (MiCommitExistingVad.c)
 *     MiTrimSharedPageFromViews @ 0x1402702C4 (MiTrimSharedPageFromViews.c)
 *     MiRelockFaultState @ 0x140285928 (MiRelockFaultState.c)
 *     MiDeleteSystemPagableVm @ 0x140286100 (MiDeleteSystemPagableVm.c)
 *     MiLockPoolCommitPageTable @ 0x14028BA50 (MiLockPoolCommitPageTable.c)
 *     MiMakeSystemAddressValid @ 0x14028EA10 (MiMakeSystemAddressValid.c)
 *     MiSynchronizeSystemVa @ 0x1402922C0 (MiSynchronizeSystemVa.c)
 *     NtUnlockVirtualMemory @ 0x1402AE5C0 (NtUnlockVirtualMemory.c)
 *     MiSetProtectionOnSection @ 0x1402B3300 (MiSetProtectionOnSection.c)
 *     MiTranslatePageForCopy @ 0x14030C534 (MiTranslatePageForCopy.c)
 *     MiLockStealUserVm @ 0x140333FE4 (MiLockStealUserVm.c)
 *     MiGetWorkingSetInfoList @ 0x1403378AC (MiGetWorkingSetInfoList.c)
 *     MiConvertAndFlushWsleVas @ 0x140339AFC (MiConvertAndFlushWsleVas.c)
 *     MiSharePages @ 0x140367CB0 (MiSharePages.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F3CA8 (MmUpdateUserShadowStackValue.c)
 *     MiReacquireWalkLocks @ 0x140530620 (MiReacquireWalkLocks.c)
 *     MiSplitReducedCommitClonePage @ 0x140530CD4 (MiSplitReducedCommitClonePage.c)
 *     MiSetGraphicsPtes @ 0x14053457C (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x140534FF0 (MiSetPagesModified.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14053660C (MiDeprioritizeVirtualAddresses.c)
 *     MiProtectAweRegion @ 0x14054D2A4 (MiProtectAweRegion.c)
 *     MiScrubLargeMappedPage @ 0x1405639C8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiPerformSafePdeWrite @ 0x1403810DC (MiPerformSafePdeWrite.c)
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
    if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
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
            Process = (_KPROCESS *)(unsigned __int8)v13;
            LOBYTE(Process) = v13 & 0x20;
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
