_QWORD *__fastcall MiAllocateSlabEntry(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // rcx
  char v7; // r12
  BOOL v8; // esi
  unsigned __int64 v9; // r15
  char *Pool; // rax
  __int64 v11; // r8
  char *v12; // rdx
  int v13; // eax
  unsigned int v14; // eax
  int v15; // ecx
  __int64 v16; // r15
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // r14d
  unsigned __int64 v21; // rax
  _QWORD *v22; // r14
  int v23; // r13d
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rsi
  __int64 CurrentIrql; // r9
  _BYTE *v27; // rbx
  char v28; // al
  __int64 v29; // rax
  char v30; // al
  unsigned int v31; // eax
  _DWORD *SchedulerAssist; // r8
  int v34; // r14d
  volatile signed __int32 *v35; // rax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v38; // zf
  signed __int32 v39; // eax
  unsigned __int8 v40; // cl
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r8
  int v43; // eax
  __int64 UnbiasedInterruptTime; // rax
  signed __int32 v45[8]; // [rsp+0h] [rbp-100h] BYREF
  PVOID P; // [rsp+30h] [rbp-D0h]
  int v47; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+40h] [rbp-C0h]
  _QWORD v49[10]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v50[96]; // [rsp+A0h] [rbp-60h] BYREF

  memset(v50, 0, sizeof(v50));
  memset(v49, 0, sizeof(v49));
  v7 = 1;
  if ( *(_QWORD *)(a1 + 208) )
  {
    v34 = 10;
    goto LABEL_34;
  }
  v8 = 1;
  if ( *(_QWORD *)(a2 + 17216) < 0x420uLL )
  {
    v34 = 20;
LABEL_66:
    LOBYTE(v6) = 1;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v6);
    if ( !UnbiasedInterruptTime )
      UnbiasedInterruptTime = 1LL;
    *(_QWORD *)(a1 + 208) = UnbiasedInterruptTime;
LABEL_69:
    if ( !v7 )
    {
      v35 = (volatile signed __int32 *)(a1 + 104);
      goto LABEL_35;
    }
LABEL_34:
    v35 = (volatile signed __int32 *)(a1 + 100);
LABEL_35:
    _InterlockedIncrement(v35);
    MiLogSlabEntryAllocateFailure(a1, v34, a3, HIDWORD(v49[6]), v7);
    return 0LL;
  }
  v9 = 512LL;
  if ( (int)MiAcquireNonPagedResources(a2, 0x200uLL, 0LL, 2u) < 0 )
  {
    v34 = 30;
    goto LABEL_66;
  }
  Pool = (char *)MiAllocatePool(64, 0x90uLL, 0x6553694Du);
  P = Pool;
  v12 = Pool;
  if ( !Pool )
  {
    v34 = 40;
LABEL_41:
    MiReturnCommit(a2, 512LL, v11);
    if ( (_UNKNOWN *)a2 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 512) <= 0x100 )
        {
          while ( 1 )
          {
            v6 = (unsigned int)(CachedResidentAvailable + 512);
            v39 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    v6,
                    CachedResidentAvailable);
            v38 = (_DWORD)CachedResidentAvailable == v39;
            LODWORD(CachedResidentAvailable) = v39;
            if ( v38 )
              break;
            if ( v39 == -1 || (unsigned __int64)(v39 + 512LL) > 0x100 )
              goto LABEL_47;
          }
LABEL_52:
          if ( !v8 )
            goto LABEL_69;
          goto LABEL_66;
        }
LABEL_47:
        v6 = 192LL;
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v6 = (int)CachedResidentAvailable - 192;
          v9 = v6 + 512;
        }
        if ( !v9 )
          goto LABEL_52;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 17280), v9);
    goto LABEL_52;
  }
  *((_QWORD *)Pool + 5) = a1;
  *((_DWORD *)Pool + 12) = 512;
  *((_QWORD *)Pool + 7) = Pool + 64;
  *((_DWORD *)Pool + 33) = 512;
  v13 = *(_DWORD *)(a2 + 16236);
  if ( _bittest(&v13, *(_DWORD *)(a1 + 80)) )
    *((_DWORD *)v12 + 35) |= 2u;
  v14 = *(_DWORD *)(a1 + 84);
  v15 = LODWORD(v49[0]) | 0x30;
  v49[2] = 512LL;
  v49[3] = 512LL;
  LODWORD(v16) = 4;
  v49[4] = v14 | 0x400000000LL;
  v17 = *(_DWORD *)(a1 + 88);
  v49[1] = a2;
  v49[5] = -1LL;
  LODWORD(v49[0]) |= 0x30u;
  HIDWORD(v49[6]) = a3;
  if ( (v17 & 4) == 0 )
    LODWORD(v49[0]) = v15 | 8;
  MiInitializeLargePfnList(v50);
  v49[9] = v50;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)&KeSwapProcessOrStackThread )
  {
    v18 = a3 | 8;
    HIDWORD(v49[6]) = a3 | 8;
  }
  else
  {
    v18 = HIDWORD(v49[6]);
  }
  v19 = v18 & 0x40;
  if ( (v18 & 0x40) == 0 )
    HIDWORD(v49[6]) = v18 | 0x40;
  v7 = v19 != 0;
  v8 = v19 == 0;
  v20 = v19 != 0;
  while ( 1 )
  {
    MiAllocateLargeZeroPages(v49);
    if ( v49[8] )
      break;
    HIDWORD(v49[6]) &= ~0x40u;
    ++v20;
    LODWORD(v49[0]) &= ~0x10u;
    if ( v20 >= 2 )
    {
      v34 = 50;
      ExFreePoolWithTag(P, 0);
      v9 = 512LL;
      goto LABEL_41;
    }
  }
  v21 = MiPopLargePfnList(v50, 1LL);
  v22 = P;
  *((_QWORD *)P + 3) = v21;
  v22[4] = v21 + 511;
  RtlInterlockedSetClearRunEx((__int64)&unk_140C6EFE8, v21 >> 9, 1uLL);
  v23 = (LODWORD(v49[0]) >> 3) & 1;
  v24 = 48LL * v22[3] - 0x220000000000LL;
  v25 = 48LL * v22[4] - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v48 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql != 2 )
      v16 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v16;
  }
  if ( v24 <= v25 )
  {
    v27 = (_BYTE *)(v24 + 34);
    do
    {
      v47 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 - 10), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v47);
        while ( *(__int64 *)(v27 - 10) < 0 );
      }
      *((_WORD *)v27 - 1) = 0;
      _InterlockedOr(v45, 0);
      v28 = v23 | *v27 & 0xF8;
      *(_QWORD *)(v27 - 10) ^= (*(_QWORD *)(v27 - 10) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0x3800000000000000LL;
      *v27 = v28;
      v29 = -1LL;
      if ( *(_DWORD *)(a1 + 80) == 2 )
        v29 = -2LL;
      *(_QWORD *)(v27 - 26) = v29;
      *(_QWORD *)(v27 - 10) &= 0xFFFFFF0000000000uLL;
      *(_QWORD *)(v27 - 18) = ZeroPte;
      v30 = *v27 & 7;
      *(_QWORD *)(v27 - 34) = 0LL;
      if ( v30 == 1 )
        MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v27 - 18));
      *v27 = *v27 & 0xF8 | 5;
      v31 = *(_DWORD *)(a1 + 80);
      if ( v31 <= 3 && v31 != 2 )
      {
        MiSetPfnIdentity(v27 - 34, 3LL);
        MiAbortCombineScan((__int64)(v27 - 34));
      }
      _InterlockedAnd64((volatile signed __int64 *)(v27 - 10), 0x7FFFFFFFFFFFFFFFuLL);
      v27 += 48;
    }
    while ( (unsigned __int64)(v27 - 34) <= v25 );
    v22 = P;
    LOBYTE(CurrentIrql) = v48;
  }
  if ( KiIrqlFlags )
  {
    v40 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v40 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v40 >= 2u )
    {
      v41 = KeGetCurrentPrcb();
      v42 = v41->SchedulerAssist;
      v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
      v38 = (v43 & v42[5]) == 0;
      v42[5] &= v43;
      if ( v38 )
      {
        KiRemoveSystemWorkPriorityKick(v41);
        LOBYTE(CurrentIrql) = v48;
      }
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  MiUpdateSlabPagePlaceholderState(a1, v22[3], 512LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 92));
  return v22;
}
