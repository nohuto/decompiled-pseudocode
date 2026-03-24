/*
 * XREFs of MiCommitPoolMemory @ 0x14028B8AC
 * Callers:
 *     MmAllocatePoolMemory @ 0x14028B758 (MmAllocatePoolMemory.c)
 *     MmAllocateSecurePoolMemory @ 0x140544D00 (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x14027D47C (MiMakeZeroedPageTablesEx.c)
 *     MiLockPoolCommitPageTable @ 0x14028BA50 (MiLockPoolCommitPageTable.c)
 *     MiLinkPoolCommitChain @ 0x14028BBC0 (MiLinkPoolCommitChain.c)
 *     MiWorkingSetIsContended @ 0x14028BE50 (MiWorkingSetIsContended.c)
 *     MiUnlockPoolCommitWs @ 0x14028BE88 (MiUnlockPoolCommitWs.c)
 *     MiLockPoolCommitWs @ 0x14028BED8 (MiLockPoolCommitWs.c)
 *     MiReturnExcessPoolCommit @ 0x14028BF14 (MiReturnExcessPoolCommit.c)
 *     MiCountSystemPool @ 0x14028BFA0 (MiCountSystemPool.c)
 *     MiFillPoolCommitPageTable @ 0x14028C060 (MiFillPoolCommitPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiClearNonPagedPtes @ 0x1402E9388 (MiClearNonPagedPtes.c)
 *     KeShouldYieldProcessor @ 0x1402F1320 (KeShouldYieldProcessor.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14053155C (MiLogPerfMemoryRangeEvent.c)
 */

__int64 __fastcall MiCommitPoolMemory(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  unsigned int v7; // edx
  __int64 v9; // r8
  __int64 v10; // r9

  v2 = ((*a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  ((void (*)(void))MiLockPoolCommitWs)();
  v3 = 0;
  while ( v2 <= a1[7] )
  {
    v5 = a1[8];
    if ( v5 )
    {
      MiUnlockPageTableInternal(a1[6], v5);
      a1[8] = 0LL;
    }
    if ( *((_BYTE *)a1 + 76) < 2u && ((unsigned int)MiWorkingSetIsContended(a1[6]) || KeShouldYieldProcessor()) )
    {
      MiUnlockPoolCommitWs(a1);
      MiLockPoolCommitWs(a1);
    }
    v6 = v2 & 0xFFFFFFFFFFFFF000uLL;
    if ( (unsigned int)MiLockPoolCommitPageTable(a1, v2) )
    {
      MiLinkPoolCommitChain(a1, v2);
      v2 = v6 + 4096;
    }
    else
    {
      MiUnlockPoolCommitWs(a1);
      v4 = v6 + 4088;
      if ( v6 + 4088 > a1[7] )
        v4 = a1[7];
      if ( !(unsigned int)MiMakeZeroedPageTablesEx(
                            v2,
                            v4,
                            (*((_WORD *)a1 + 39) & 4 | 0x400u) >> 1,
                            *((_DWORD *)a1 + 10),
                            *((_DWORD *)a1 + 18) + 1) )
      {
        *((_WORD *)a1 + 39) |= 1u;
        MiLockPoolCommitWs(a1);
        break;
      }
      MiLockPoolCommitWs(a1);
    }
  }
  MiFillPoolCommitPageTable(a1);
  MiUnlockPoolCommitWs(a1);
  v7 = *((unsigned __int16 *)a1 + 39);
  if ( (v7 & 1) != 0 )
  {
    if ( (v7 & 2) == 0 )
    {
      v9 = (*a1 >> 9) & 0x7FFFFFFFF8LL;
      if ( v2 != v9 - 0x98000000000LL )
      {
        v10 = (v7 >> 2) & 1 | 2;
        if ( (v7 & 0x100) == 0 )
          v10 = (v7 >> 2) & 1;
        MiClearNonPagedPtes(*a1, (__int64)(v2 - v9 + 0x98000000000LL) >> 3, 0x4000LL, v10);
      }
    }
    v3 = -1073741670;
  }
  else
  {
    if ( (v7 & 0x104) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(*a1, 0LL, 11LL, a1[1]);
    MiCountSystemPool(*((unsigned int *)a1 + 10), a1[3], 1LL);
  }
  MiReturnExcessPoolCommit(a1);
  return v3;
}
