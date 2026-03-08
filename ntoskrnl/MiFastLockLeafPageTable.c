/*
 * XREFs of MiFastLockLeafPageTable @ 0x140269C50
 * Callers:
 *     MiClearNonPagedPtes @ 0x14020DF88 (MiClearNonPagedPtes.c)
 *     MiSynchronizeSystemVa @ 0x1402228B0 (MiSynchronizeSystemVa.c)
 *     MiResolvePageTablePage @ 0x1402689F0 (MiResolvePageTablePage.c)
 *     MiLockPageLeafPageTable @ 0x140269310 (MiLockPageLeafPageTable.c)
 *     MiQueryAddressState @ 0x14031B4F0 (MiQueryAddressState.c)
 *     MiCountSharedPages @ 0x14031DE80 (MiCountSharedPages.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiDeletePagablePteRange @ 0x1403244A0 (MiDeletePagablePteRange.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 *     MiLockPoolCommitPageTable @ 0x14032FF9C (MiLockPoolCommitPageTable.c)
 *     MiCaptureDeleteHierarchy @ 0x140333890 (MiCaptureDeleteHierarchy.c)
 *     MiIsCfgBitMapPageShared @ 0x140346620 (MiIsCfgBitMapPageShared.c)
 *     MiGetNextPageTable @ 0x1403468E0 (MiGetNextPageTable.c)
 *     MiLockStealUserVm @ 0x1403B7F90 (MiLockStealUserVm.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiFastLockLeafPageTable(__int64 a1, unsigned __int64 a2, int a3)
{
  int v4; // r9d
  char v5; // al
  _DWORD *MmInternal; // rcx
  _DWORD *v7; // rdi
  unsigned int v8; // ebx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  struct _LIST_ENTRY *v13; // rdx
  __int64 v14; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v16; // rcx
  int v18; // [rsp+24h] [rbp-64h]
  unsigned int v19; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v20; // [rsp+A8h] [rbp+20h]

  v4 = 0;
  v5 = *(_BYTE *)(a1 + 184) & 7;
  if ( v5 != 7 && (unsigned __int8)(v5 - 1) > 2u )
  {
    switch ( v5 )
    {
      case 5:
        if ( a2 >= qword_140C6A1B8 && a2 < qword_140C6A1B8 + 0x100000000000LL )
          return 0LL;
        goto LABEL_6;
      case 4:
        if ( a2 >= MmPfnDatabase
          && a2 < ((MmPfnDatabase + (MxPfnAllocation << 12) + 0x7FFFFFFFFFLL) & 0xFFFFFF8000000000uLL) )
        {
          return 0LL;
        }
        break;
      case 0:
LABEL_6:
        v4 = 1;
        break;
    }
  }
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( (MiFlags & 0x800000) == 0 )
    return 0LL;
  if ( !MmInternal )
    return 0LL;
  v7 = MmInternal + 3152;
  if ( MmInternal[3152] )
    return 0LL;
  *v7 = 1;
  v18 = 0;
  v8 = 0;
  v9 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v20 = v9;
  v19 = a3 | 2;
  if ( !v4 )
    goto LABEL_15;
  v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = *(_QWORD *)v10;
  if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v16 = *((_QWORD *)&Flink->Flink + ((v10 >> 3) & 0x1FF));
        if ( (v16 & 0x20) != 0 )
          LOBYTE(v11) = v11 | 0x20;
        if ( (v16 & 0x42) != 0 )
          LOBYTE(v11) = v11 | 0x42;
      }
    }
    v8 = 0;
  }
  if ( (v11 & 1) != 0 )
  {
    if ( (v11 & 0x80u) != 0LL )
    {
      v18 = 3;
      v20 = ((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      goto LABEL_15;
    }
    if ( (v19 & 8) == 0 )
    {
      while ( 1 )
      {
LABEL_15:
        v12 = *(_QWORD *)v20;
        if ( v20 >= 0xFFFFF6FB7DBED000uLL
          && v20 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
        {
          if ( (v12 & 1) == 0 )
          {
LABEL_33:
            v8 = 0;
            goto LABEL_50;
          }
          if ( (v12 & 0x20) == 0 || (v12 & 0x42) == 0 )
          {
            v13 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v13 )
            {
              v14 = *((_QWORD *)&v13->Flink + ((v20 >> 3) & 0x1FF));
              if ( (v14 & 0x20) != 0 )
                LOBYTE(v12) = v12 | 0x20;
              if ( (v14 & 0x42) != 0 )
                LOBYTE(v12) = v12 | 0x42;
            }
          }
        }
        if ( (v12 & 1) == 0 )
          goto LABEL_33;
        if ( (v12 & 0x80u) == 0LL )
        {
          v8 = MiLockPageTableInternal(a1, v20, v19) != 0;
          goto LABEL_50;
        }
        v18 = 2;
        v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    if ( (unsigned int)MiLockPageTableInternal(a1, v10, v19 & 0xFFFFFFF3 | 4) )
      v8 = 2;
  }
LABEL_50:
  *v7 = 0;
  if ( v8 && v18 )
  {
    if ( v18 == 3 )
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( (MI_READ_PTE_LOCK_FREE(v9) & 0x81) == 0x81 )
    {
      if ( v18 == 3 )
        return 3;
      else
        return 2;
    }
    else
    {
      MiUnlockPageTableInternal(a1, v20);
      return 0;
    }
  }
  return v8;
}
