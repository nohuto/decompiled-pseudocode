__int64 __fastcall MiCreateLargePfnList(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 *a7,
        char a8,
        _QWORD *a9)
{
  __int64 v11; // r10
  struct _KTHREAD *CurrentThread; // r11
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  signed __int64 v15; // r8
  unsigned __int64 v16; // r12
  __int64 v17; // r14
  unsigned int CrossPartitionCharges; // edi
  __int64 v19; // r10
  char v20; // r12
  int LargeProcessPagesFromCache; // eax
  int v23; // r9d
  int v24; // eax
  _DWORD *v25; // rdi
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v32; // zf
  signed __int32 v33; // eax
  int v34; // [rsp+38h] [rbp-59h]
  _QWORD v35[16]; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v36; // [rsp+D8h] [rbp+47h]
  _DWORD *v37; // [rsp+D8h] [rbp+47h]

  memset(v35, 0, 0x50uLL);
  v11 = *(_QWORD *)a1;
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)a1 )
  {
    v13 = *(_DWORD *)(v11 + 48);
    *(_QWORD *)(a1 + 8) = MiVadPageSizes[(v13 >> 19) & 3];
    *(_DWORD *)(a1 + 20) = (v13 >> 7) & 0x1F;
    *(_DWORD *)(a1 + 16) = (v13 & 0x1A00000) == 27262976;
  }
  v14 = 0;
  v15 = *(unsigned int *)(a1 + 8);
  v16 = 0LL;
  v34 = *(_DWORD *)(a1 + 20);
  v36 = *(_DWORD *)(a1 + 8);
  v17 = *(_QWORD *)(qword_140C67048 + 8LL * CurrentThread->ApcState.Process[1].IdealProcessor[25]);
  if ( !v11 )
    goto LABEL_11;
  if ( !a7 )
  {
LABEL_9:
    if ( !(unsigned int)MiChargeResident((void *)v17, a3, 0LL) )
      goto LABEL_32;
    v15 = v36;
    v14 |= 4u;
LABEL_11:
    v19 = 0LL;
    if ( v16 || (_DWORD)v15 != 16 || a3 >= 0x200 )
    {
      v20 = a6;
    }
    else
    {
      v20 = a6;
      if ( (*(_DWORD *)(v17 + 4) & 0x10) == 0 )
      {
        LargeProcessPagesFromCache = MiAllocateLargeProcessPagesFromCache(a1, a2, a3, a5, a6, a9);
        v19 = 16LL * a9[8];
        if ( LargeProcessPagesFromCache >= 0 )
          return 0LL;
      }
    }
    v23 = MmMakeProtectNotWriteCopy[v34];
    if ( a5 )
    {
      v24 = a5 - 1;
      if ( a5 - 1 >= (unsigned int)(unsigned __int16)KeNumberNodes )
      {
        CrossPartitionCharges = -1073741811;
LABEL_33:
        if ( v14 < 4 )
          goto LABEL_46;
        v15 = a3;
        if ( (unsigned __int16 *)v17 == MiSystemPartition )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
          if ( (_DWORD)CachedResidentAvailable != -1 )
          {
            if ( a3 + CachedResidentAvailable <= 0x100 && a3 < 0x80000 )
            {
              while ( 1 )
              {
                v33 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                        CachedResidentAvailable + a3,
                        CachedResidentAvailable);
                v32 = (_DWORD)CachedResidentAvailable == v33;
                LODWORD(CachedResidentAvailable) = v33;
                if ( v32 )
                  break;
                if ( v33 == -1 || a3 + v33 > 0x100 )
                  goto LABEL_41;
              }
LABEL_46:
              if ( (v14 & 2) != 0 )
                MiReturnCommit(v17, a3, v15);
              if ( (v14 & 1) == 0 )
                return CrossPartitionCharges;
              goto LABEL_49;
            }
LABEL_41:
            if ( (int)CachedResidentAvailable > 192
              && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                      192,
                                                      CachedResidentAvailable) )
            {
              v15 = a3 + (int)CachedResidentAvailable - 192;
            }
          }
        }
        if ( v15 )
          v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 17280), v15);
        goto LABEL_46;
      }
    }
    else
    {
      v24 = MiComputePreferredNode(*(_QWORD *)a1);
    }
    v35[4] = __PAIR64__(v23, v24);
    v35[1] = v17;
    v35[8] = v19;
    v35[2] = a3;
    v35[7] = a2;
    v25 = (_DWORD *)(qword_140C65718 + 4LL * v24 * (unsigned int)(unsigned __int16)KeNumberNodes);
    v37 = &v25[(unsigned __int16)KeNumberNodes];
    v26 = 0;
    if ( *(_DWORD *)(a1 + 16) )
      v26 = 8;
    v35[5] = -1LL;
    LODWORD(v35[0]) = v26;
    v35[3] = a4;
    if ( (a8 & 0x10) != 0 )
      LODWORD(v35[0]) = v26 | 0x10;
    v27 = *(_QWORD *)a1;
    v35[9] = a9;
    if ( v27 )
      MiComputeIdealLargePage(v27, a2 + (v19 << 12), a3 - v19, (__int64)v35);
    MiAllocateLargeZeroPages((unsigned int *)v35);
    v28 = v35[8];
    v29 = v35[2];
    if ( v35[8] == v35[2] )
      return 0;
    if ( !v20 )
    {
      do
      {
        if ( ++v25 == v37 )
          break;
        LODWORD(v35[4]) = *v25;
        MiAllocateLargeZeroPages((unsigned int *)v35);
        v28 = v35[8];
        v29 = v35[2];
      }
      while ( v35[8] != v35[2] );
    }
    if ( v28 == v29 )
      return 0;
    MiFreeLargeZeroPages(v17, (__int64)a9, (LODWORD(v35[0]) >> 3) & 1);
LABEL_32:
    CrossPartitionCharges = -1073741670;
    goto LABEL_33;
  }
  v16 = *a7;
  v17 = *a7;
  CrossPartitionCharges = MiGetCrossPartitionCharges(*a7, 2, 1, a3);
  if ( (CrossPartitionCharges & 0x80000000) == 0 )
  {
    if ( !(unsigned int)MiChargeCommit(v16, a3, 0LL) )
    {
      CrossPartitionCharges = -1073741523;
LABEL_49:
      MiReturnCrossPartitionCharges(v17, 2, 1, a3);
      return CrossPartitionCharges;
    }
    v14 = 3;
    goto LABEL_9;
  }
  return CrossPartitionCharges;
}
