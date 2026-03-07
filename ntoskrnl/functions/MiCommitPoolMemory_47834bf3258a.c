__int64 __fastcall MiCommitPoolMemory(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // dl
  __int64 v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // esi
  unsigned __int64 v9; // rdx
  unsigned __int16 v10; // ax
  __int64 v11; // rdx
  int v12; // ecx
  unsigned __int64 v13; // rax
  _DWORD *SchedulerAssist; // r10
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  int ZeroedPageTables; // eax
  unsigned __int8 v20; // dl
  __int64 v21; // rcx
  unsigned __int8 v22; // dl
  __int64 v23; // rcx
  _DWORD *v24; // r10
  __int64 v25; // r8
  _DWORD *v26; // r10
  __int64 v27; // r8
  _DWORD *v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // r9d

  v2 = ((*a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LODWORD(v4) = 4;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v16) = 4;
    else
      v16 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v16;
  }
  v5 = a1[6];
  *((_BYTE *)a1 + 76) = CurrentIrql;
  MiLockWorkingSetShared(v5);
  v8 = 0;
  while ( v2 <= a1[7] )
  {
    v9 = a1[8];
    if ( v9 )
    {
      MiUnlockPageTableInternal(a1[6], v9);
      a1[8] = 0LL;
    }
    if ( *((_BYTE *)a1 + 76) < 2u
      && ((*(_DWORD *)MiGetSharedVm(a1[6], v9, v6, v7) & 0x40000000) != 0 || KeShouldYieldProcessor()) )
    {
      MiUnlockPoolCommitWs(a1);
      v22 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
      {
        v26 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v22 == 2 )
          LODWORD(v27) = 4;
        else
          v27 = (-1LL << (v22 + 1)) & 4;
        v26[5] |= v27;
      }
      v23 = a1[6];
      *((_BYTE *)a1 + 76) = v22;
      MiLockWorkingSetShared(v23);
    }
    if ( (unsigned int)MiLockPoolCommitPageTable(a1, v2, v6, v7) )
    {
      MiLinkPoolCommitChain(a1, v2);
      v2 = (v2 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    else
    {
      MiUnlockPoolCommitWs(a1);
      v18 = (v2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      if ( v18 > a1[7] )
        v18 = a1[7];
      ZeroedPageTables = MiMakeZeroedPageTablesEx(
                           v2,
                           v18,
                           (*((_WORD *)a1 + 39) & 4 | 0x400u) >> 1,
                           *((_DWORD *)a1 + 10),
                           *((_DWORD *)a1 + 18) + 1);
      v20 = KeGetCurrentIrql();
      if ( !ZeroedPageTables )
      {
        *((_WORD *)a1 + 39) |= 1u;
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v20 <= 0xFu )
        {
          v28 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v20 != 2 )
            v4 = (-1LL << (v20 + 1)) & 4;
          v28[5] |= v4;
        }
        v29 = a1[6];
        *((_BYTE *)a1 + 76) = v20;
        MiLockWorkingSetShared(v29);
        break;
      }
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v20 <= 0xFu )
      {
        v24 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v20 == 2 )
          LODWORD(v25) = 4;
        else
          v25 = (-1LL << (v20 + 1)) & 4;
        v24[5] |= v25;
      }
      v21 = a1[6];
      *((_BYTE *)a1 + 76) = v20;
      MiLockWorkingSetShared(v21);
    }
  }
  MiFillPoolCommitPageTable((__int64)a1);
  MiUnlockPoolCommitWs(a1);
  v10 = *((_WORD *)a1 + 39);
  v11 = v10;
  if ( (v10 & 1) != 0 )
  {
    if ( (v10 & 2) == 0 )
    {
      v30 = (*a1 >> 9) & 0x7FFFFFFFF8LL;
      if ( v2 != v30 - 0x98000000000LL )
      {
        v31 = (v10 >> 2) & 1 | 2;
        if ( (v10 & 0x100) == 0 )
          v31 = (v10 >> 2) & 1;
        MiClearNonPagedPtes(*a1, (__int64)(v2 - v30 + 0x98000000000LL) >> 3, 0x4000u, v31);
      }
    }
    v8 = -1073741670;
  }
  else
  {
    if ( (v10 & 0x104) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(*a1, 0LL, 11LL, a1[1]);
    v12 = *((_DWORD *)a1 + 10);
    v13 = a1[3];
    switch ( v12 )
    {
      case 5:
        v17 = v13 + _InterlockedExchangeAdd64(&qword_140C65108, v13);
        if ( v17 >= MiState[0] || MiState[0] - v17 < 0x300 )
          MiFreeExcessSegments(v17, v11);
        break;
      case 6:
        _InterlockedExchangeAdd64(&qword_140C695A8, v13);
        break;
      case 15:
        _InterlockedExchangeAdd64(&qword_140C65110, v13);
        break;
      default:
        _InterlockedExchangeAdd64(0LL, v13);
        break;
    }
  }
  MiReturnExcessPoolCommit(a1);
  return v8;
}
