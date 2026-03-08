/*
 * XREFs of MiPfnRangeIsZero @ 0x14038B144
 * Callers:
 *     MiFreedUnusedPfnPagesWorker @ 0x14038ACDC (MiFreedUnusedPfnPagesWorker.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x14020FD6C (MiFreeLargeZeroPages.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiGetContainingPageTable @ 0x140289FE0 (MiGetContainingPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14032E710 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetLeafVa @ 0x140346C50 (MiGetLeafVa.c)
 *     MiInitializeLargePfnList @ 0x14035059C (MiInitializeLargePfnList.c)
 *     MiReplacePfnWithGapMapping @ 0x14038B4B8 (MiReplacePfnWithGapMapping.c)
 *     MiPreparePfnDatabasePageForFree @ 0x14038B564 (MiPreparePfnDatabasePageForFree.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038B664 (MiDemoteValidLargePageOneLevel.c)
 *     MiClearSystemAccessBits @ 0x14038BBC4 (MiClearSystemAccessBits.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __fastcall MiPfnRangeIsZero(unsigned __int64 LeafVa, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdi
  int v5; // eax
  int v6; // esi
  unsigned __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r14
  int v10; // ebp
  __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int64 v18; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v20; // zf
  signed __int32 v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // [rsp+28h] [rbp-B0h] BYREF
  _QWORD v27[12]; // [rsp+30h] [rbp-A8h] BYREF

  memset(v27, 0, sizeof(v27));
  if ( a2 > MmPfnDatabase + (MxPfnAllocation << 12) )
    a2 = MmPfnDatabase + (MxPfnAllocation << 12);
  if ( LeafVa >= a2 )
    return;
  MiInitializeLargePfnList(v27);
  v4 = 0LL;
  do
  {
    v5 = MI_IS_PHYSICAL_ADDRESS(LeafVa);
    v6 = v5;
    v7 = ((LeafVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v8 = 1LL;
    LODWORD(v9) = 3;
    if ( v5 > 0 )
    {
      v22 = (unsigned int)v5;
      do
      {
        LODWORD(v9) = v9 - 1;
        v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v22;
      }
      while ( v22 );
      if ( (_DWORD)v9 != 3 )
      {
        v9 = (unsigned int)(v9 - 1);
        v8 = MiLargePageSizes[v9];
      }
    }
    if ( (((v8 << 12) - 1) & LeafVa) == 0 && a2 - LeafVa >= v8 << 12 )
    {
      if ( (*(_BYTE *)v7 & 0x20) != 0 && ((unsigned __int8)(1 << v5) & (unsigned __int8)byte_140C6570F) != 0 )
      {
        v23 = 512 - ((v7 >> 3) & 0x1FF);
        v24 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v5 > 0 )
        {
          v25 = (unsigned int)v5;
          do
          {
            v24 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v25;
          }
          while ( v25 );
        }
        if ( ((v24 ^ v7) & 0xFFFFFFFFF000LL) == 0 )
          v23 = (__int64)(v24 - v7) >> 3;
        MiClearSystemAccessBits(v7, v23, (unsigned int)v5);
      }
      v10 = v6;
      while ( v6 < 4 )
      {
        v11 = MI_READ_PTE_LOCK_FREE(v7);
        v26 = v11;
        if ( v6 != v10 && (v11 & 0x20) != 0 && ((unsigned __int8)(1 << v6) & (unsigned __int8)byte_140C6570F) != 0 )
          MiClearSystemAccessBits(v7, 1LL, 0LL);
        MiPreparePfnDatabasePageForFree(v7, (unsigned int)v6, (unsigned int)v9);
        v4 += v8;
        v12 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26) >> 12) & 0xFFFFFFFFFFLL)
                       - 0x220000000000LL);
        v13 = &v27[3 * (unsigned int)v9];
        v14 = (_QWORD *)v13[1];
        if ( (_QWORD *)*v14 != v13 )
          __fastfail(3u);
        v12[1] = v14;
        *v12 = v13;
        *v14 = v12;
        v13[1] = v12;
        MiReplacePfnWithGapMapping(v7, (unsigned int)v6);
        if ( (*(_QWORD *)(48 * MiGetContainingPageTable(v7 & 0xFFFFFFFFFFFFF000uLL) - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
        {
          v7 += 8LL;
          break;
        }
        v8 = 1LL;
        LODWORD(v9) = 3;
        v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        ++v6;
      }
      v15 = v7;
      goto LABEL_16;
    }
    if ( !(unsigned int)MiDemoteValidLargePageOneLevel(LeafVa) )
    {
      v15 = v7 + 8;
LABEL_16:
      LeafVa = MiGetLeafVa(v15);
    }
  }
  while ( LeafVa < a2 );
  MiFreeLargeZeroPages((int)&MiSystemPartition, (__int64)v27, 0);
  MiReturnCommit((__int64)&MiSystemPartition, v4, v16);
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = v4;
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable != -1 )
  {
    if ( v4 + CachedResidentAvailable <= 0x100 )
    {
      do
      {
        if ( v4 >= 0x80000 )
          break;
        v21 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                CachedResidentAvailable + v4,
                CachedResidentAvailable);
        v20 = (_DWORD)CachedResidentAvailable == v21;
        LODWORD(CachedResidentAvailable) = v21;
        if ( v20 )
          goto LABEL_22;
      }
      while ( v21 != -1 && v4 + v21 <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v18 = v4 + (int)CachedResidentAvailable - 192;
    }
  }
  if ( v18 )
    _InterlockedExchangeAdd64(&qword_140C6F440, v18);
LABEL_22:
  _InterlockedExchangeAdd64(&qword_140C69658, -(__int64)v4);
}
