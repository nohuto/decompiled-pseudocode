void ***__fastcall MmAllocateSecureKernelPages(
        void **BugCheckParameter2,
        unsigned __int64 a2,
        int a3,
        __int64 a4,
        _DWORD *a5)
{
  unsigned __int64 v5; // r14
  void **v6; // r13
  unsigned __int64 v7; // rsi
  signed __int32 v8; // eax
  unsigned int v9; // r12d
  void ***result; // rax
  void ***v11; // rbp
  _QWORD *Pool; // rax
  __int64 v13; // r8
  _QWORD *PartitionNodePagesForMdl; // r15
  _QWORD *v15; // r13
  __int64 v16; // r12
  __int64 *v17; // r14
  __int64 v18; // rax
  __int64 SlabPage; // rax
  __int64 v20; // r13
  unsigned __int8 v21; // al
  __int64 v22; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  __int64 v28; // rdx
  __int64 v29; // r14
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // rax
  struct _KPRCB *v32; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v34; // eax
  struct _KPRCB *v35; // r8
  __int64 v36; // rdx
  signed __int32 v37; // eax
  char v38[4]; // [rsp+40h] [rbp-88h] BYREF
  int v39; // [rsp+44h] [rbp-84h]
  unsigned int v40; // [rsp+48h] [rbp-80h]
  _QWORD *v41; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v42; // [rsp+58h] [rbp-70h]
  unsigned __int64 v43; // [rsp+60h] [rbp-68h]
  __int128 v44; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int8 v48; // [rsp+E8h] [rbp+20h]

  v41 = 0LL;
  v5 = a2;
  v6 = BugCheckParameter2;
  v38[0] = 0;
  v42 = 0LL;
  v44 = 0LL;
  v7 = 0LL;
  *a5 = 0;
  MiInitializePageColorBase(0LL, 0, (__int64)&v44);
  v8 = _InterlockedExchangeAdd((volatile signed __int32 *)v44, 1u);
  v9 = DWORD2(v44) & v8 | HIDWORD(v44);
  v40 = v9;
  result = MiPartitionObjectToPartition(v6, 0, v38);
  v11 = result;
  if ( !result )
    return result;
  if ( (*((_DWORD *)result + 1) & 8) == 0 || (int)MiAcquireNonPagedResources((unsigned __int64)result, v5, 0LL, 2u) < 0 )
    goto LABEL_46;
  v7 = v5;
  Pool = MiAllocatePool(64, 8 * v5 + 48, 0x69646D4Du);
  PartitionNodePagesForMdl = Pool;
  if ( !Pool )
    goto LABEL_30;
  v15 = Pool + 6;
  v39 = 64;
  v16 = v5;
  v17 = Pool + 6;
  v43 = (unsigned __int64)&Pool[v16 + 6];
  if ( (unsigned __int64)(Pool + 6) < v43 )
  {
    v18 = a3;
    do
    {
      SlabPage = MiGetSlabPage((__int64)v11, *((_DWORD *)MmSlabTypeToMiSlabType + v18), v40, 10LL, (__int64 *)&v41);
      *v17 = SlabPage;
      if ( SlabPage == -1 )
      {
        if ( !v41 )
          break;
        while ( !(unsigned int)MiReplenishSlabAllocator(v41, (v16 * 8) >> 3) )
        {
          if ( v17 != PartitionNodePagesForMdl + 6 )
            goto LABEL_26;
          if ( (v39 & 0x40) == 0 )
            break;
          v39 &= ~0x40u;
        }
        --v17;
        ++v16;
      }
      else
      {
        v20 = 48 * SlabPage - 0x220000000000LL;
        v21 = MiLockPageInline(v20);
        v22 = *(_QWORD *)(v20 + 40);
        v48 = v21;
        *(_QWORD *)v20 = 0LL;
        *(_QWORD *)(v20 + 40) = v22 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFELL;
        *(_QWORD *)(v20 + 16) = ZeroPte;
        MiInitializeMdlPfn(v20, 512);
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v48 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << (v48 + 1));
            v27 = (v26 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v26;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v48);
        if ( (unsigned int)MiCheckSlabPfnBitmap(v20, 1LL, 1) )
        {
          v28 = 7LL;
        }
        else
        {
          --v7;
          v28 = 3LL;
          ++v42;
        }
        *(_QWORD *)(v20 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v20 + 16), v28);
      }
      v18 = a3;
      ++v17;
      --v16;
    }
    while ( (unsigned __int64)v17 < v43 );
LABEL_26:
    v15 = PartitionNodePagesForMdl + 6;
  }
  v29 = v17 - v15;
  if ( !v29 )
  {
    v5 = a2;
    v9 = v40;
    v6 = BugCheckParameter2;
LABEL_30:
    if ( !v7 )
      goto LABEL_44;
    MiReturnCommit((__int64)v11, v7, v13);
    if ( v11 != (void ***)MiSystemPartition )
      goto LABEL_42;
    v32 = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)v32->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_42;
    if ( v7 + CachedResidentAvailable <= 0x100 && v7 < 0x80000 )
    {
      do
      {
        v34 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&v32->CachedResidentAvailable,
                v7 + CachedResidentAvailable,
                CachedResidentAvailable);
        v27 = (_DWORD)CachedResidentAvailable == v34;
        LODWORD(CachedResidentAvailable) = v34;
        if ( v27 )
          goto LABEL_43;
      }
      while ( v34 != -1 && v7 + v34 <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v32->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v7 += (int)CachedResidentAvailable - 192;
    }
    if ( v7 )
LABEL_42:
      _InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 2160, v7);
LABEL_43:
    v7 = 0LL;
LABEL_44:
    if ( PartitionNodePagesForMdl )
      ExFreePoolWithTag(PartitionNodePagesForMdl, 0);
LABEL_46:
    PartitionNodePagesForMdl = (_QWORD *)MmAllocatePartitionNodePagesForMdlEx(
                                           0,
                                           -1,
                                           0LL,
                                           v5 << 12,
                                           1,
                                           v9 >> byte_140C6570D,
                                           513,
                                           v6);
    goto LABEL_47;
  }
  v30 = v29 << 12;
  *PartitionNodePagesForMdl = 0LL;
  PartitionNodePagesForMdl[4] = 0LL;
  *((_WORD *)PartitionNodePagesForMdl + 4) = 8 * ((v30 >> 12) + 6);
  *((_WORD *)PartitionNodePagesForMdl + 5) = 2;
  v31 = v42;
  PartitionNodePagesForMdl[5] = (unsigned int)v30;
  _InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 2235, v31);
  *a5 = 1;
LABEL_47:
  if ( v7 )
  {
    MiReturnCommit((__int64)v11, v7, v13);
    if ( v11 != (void ***)MiSystemPartition )
      goto LABEL_59;
    v35 = KeGetCurrentPrcb();
    v36 = (int)v35->CachedResidentAvailable;
    if ( (_DWORD)v36 == -1 )
      goto LABEL_59;
    if ( v7 + v36 <= 0x100 && v7 < 0x80000 )
    {
      do
      {
        v37 = _InterlockedCompareExchange((volatile signed __int32 *)&v35->CachedResidentAvailable, v7 + v36, v36);
        v27 = (_DWORD)v36 == v37;
        LODWORD(v36) = v37;
        if ( v27 )
          goto LABEL_60;
      }
      while ( v37 != -1 && v7 + v37 <= 0x100 );
    }
    if ( (int)v36 > 192
      && (_DWORD)v36 == _InterlockedCompareExchange((volatile signed __int32 *)&v35->CachedResidentAvailable, 192, v36) )
    {
      v7 += (int)v36 - 192;
    }
    if ( v7 )
LABEL_59:
      _InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 2160, v7);
  }
LABEL_60:
  if ( v38[0] )
    PsDereferencePartition((__int64)v11[25]);
  return (void ***)PartitionNodePagesForMdl;
}
