/*
 * XREFs of MiCreateLargePfnList @ 0x14055DE3C
 * Callers:
 *     MiCommitExistingVad @ 0x140218D50 (MiCommitExistingVad.c)
 *     MiMapUserLargePages @ 0x14055E670 (MiMapUserLargePages.c)
 * Callees:
 *     MiChargeCommit @ 0x14021AA90 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140259EB8 (MiChargeResident.c)
 *     MiFreeLargeZeroPages @ 0x14027D9D4 (MiFreeLargeZeroPages.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiComputePreferredNode @ 0x140547AB8 (MiComputePreferredNode.c)
 *     MiAllocateLargeZeroPages @ 0x14055D99C (MiAllocateLargeZeroPages.c)
 *     MiGetCrossPartitionCharges @ 0x140562368 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x140562AD0 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiCreateLargePfnList(__int64 a1, unsigned __int64 a2, char a3, __int64 *a4, char *a5)
{
  unsigned __int64 v5; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rbp
  __int64 v9; // r14
  int CrossPartitionCharges; // edi
  unsigned int v11; // edi
  __int64 v12; // r9
  unsigned int v13; // r14d
  unsigned int *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  char v18; // r13
  unsigned __int64 LargeZeroPages; // rax
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v24; // zf
  signed __int32 v25; // eax
  __int64 v27; // [rsp+48h] [rbp-50h]
  unsigned int *v28; // [rsp+50h] [rbp-48h]
  unsigned int v31; // [rsp+B8h] [rbp+20h]

  v5 = a2;
  v7 = 0;
  v8 = *(_QWORD *)(qword_140C4E648 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
  if ( a4 )
  {
    v9 = *a4;
    v8 = *a4;
    CrossPartitionCharges = MiGetCrossPartitionCharges(*a4, 4LL, 1LL, a2);
    if ( CrossPartitionCharges < 0 )
      goto LABEL_25;
    v7 = 1;
  }
  else
  {
    v9 = 0LL;
  }
  v11 = MiComputePreferredNode(a1);
  if ( v9 )
  {
    if ( !(unsigned int)MiChargeCommit(v8, v5, 0) )
    {
      CrossPartitionCharges = -1073741523;
      goto LABEL_25;
    }
    v7 |= 2u;
  }
  if ( !(unsigned int)MiChargeResident((ULONG_PTR *)v8, v5, 0LL, v12) )
    goto LABEL_10;
  v13 = *(_DWORD *)(a1 + 48);
  v31 = MmMakeProtectNotWriteCopy[(v13 >> 7) & 0x1F];
  v14 = (unsigned int *)(qword_140C4DE98 + 4LL * v11 * (unsigned __int16)KeNumberNodes);
  v15 = (v13 >> 18) & 3;
  v28 = &v14[(unsigned __int16)KeNumberNodes];
  if ( (unsigned int)MiVadPageSizes[v15] == 16 )
  {
    v16 = 2LL;
  }
  else if ( (v13 & 0x500000) == 0x500000 )
  {
    v16 = (unsigned int)MiVadPageIndices[v15];
  }
  else
  {
    v16 = 1LL;
  }
  v17 = MiLargePageSizes[v16];
  v27 = v17;
  v18 = 2;
  if ( (v13 & 0xD00000) != 0xD00000 )
    v18 = 0;
  LargeZeroPages = MiAllocateLargeZeroPages(
                     v8,
                     v5,
                     v17,
                     v11,
                     MmMakeProtectNotWriteCopy[(v13 >> 7) & 0x1F],
                     (__int64)a5,
                     v18);
  v20 = v5 - LargeZeroPages;
  if ( v5 != LargeZeroPages )
  {
    do
    {
      if ( a3 )
        break;
      if ( ++v14 == v28 )
        break;
      v20 -= MiAllocateLargeZeroPages(v8, v20, v27, *v14, v31, (__int64)a5, v18);
    }
    while ( v20 );
    v7 |= 4u;
    v5 = a2;
    if ( v20 )
    {
      MiFreeLargeZeroPages(v8, a5, (v13 & 0xD00000) == 13631488);
LABEL_10:
      CrossPartitionCharges = -1073741670;
      goto LABEL_25;
    }
  }
  v7 = 0;
  CrossPartitionCharges = 0;
LABEL_25:
  if ( v7 >= 4 )
  {
    v21 = v5;
    if ( (ULONG_PTR *)v8 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( v5 + CachedResidentAvailable <= 0x100 )
        {
          do
          {
            if ( v5 >= 0x80000 )
              break;
            v25 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    CachedResidentAvailable + v5,
                    CachedResidentAvailable);
            v24 = (_DWORD)CachedResidentAvailable == v25;
            LODWORD(CachedResidentAvailable) = v25;
            if ( v24 )
              goto LABEL_38;
          }
          while ( v25 != -1 && v5 + v25 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v21 = v5 + (int)CachedResidentAvailable - 192;
        }
      }
    }
    if ( v21 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 7168), v21);
  }
LABEL_38:
  if ( (v7 & 2) != 0 )
    MiReturnCommit(v8, v5);
  if ( (v7 & 1) != 0 )
    MiReturnCrossPartitionCharges(v8, 4LL, 1LL, v5);
  return (unsigned int)CrossPartitionCharges;
}
