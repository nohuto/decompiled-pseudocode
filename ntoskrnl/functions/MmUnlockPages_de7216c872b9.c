void __stdcall MmUnlockPages(PMDL MemoryDescriptorList)
{
  unsigned int MdlFlags; // r12d
  PMDL v2; // rbx
  unsigned __int64 v4; // r15
  PMDL v5; // r8
  int v6; // r13d
  __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // r14
  char v9; // di
  unsigned __int64 Next; // rdx
  unsigned __int64 v11; // r14
  PMDL v12; // rdi
  unsigned __int64 v13; // r15
  __int64 v14; // rbx
  PMDL v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rcx
  int v19; // r12d
  unsigned __int64 v20; // r14
  __int64 v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  PMDL v25; // r9
  _DWORD *SchedulerAssist; // r10
  __int64 v27; // rdx
  struct _KPRCB *v28; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v30; // zf
  signed __int32 v31; // eax
  LOGICAL ShouldYieldProcessor; // eax
  unsigned __int8 v33; // cl
  _DWORD *v34; // r9
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned __int64 *p_Size; // r11
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r10
  unsigned __int8 v40; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v42; // r9
  int v43; // edx
  unsigned __int8 v44; // dl
  struct _KPRCB *v45; // r9
  _DWORD *v46; // r8
  int v47; // eax
  unsigned __int8 v48; // [rsp+30h] [rbp-68h]
  __int64 v49; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v50; // [rsp+48h] [rbp-50h]
  unsigned __int64 v51; // [rsp+50h] [rbp-48h]
  struct _EPROCESS *Process; // [rsp+58h] [rbp-40h]
  PMDL v53; // [rsp+A0h] [rbp+8h] BYREF
  int v54; // [rsp+A8h] [rbp+10h]
  int v55; // [rsp+B0h] [rbp+18h] BYREF
  PMDL v56; // [rsp+B8h] [rbp+20h]

  v53 = MemoryDescriptorList;
  MdlFlags = MemoryDescriptorList->MdlFlags;
  v2 = MemoryDescriptorList + 1;
  Process = MemoryDescriptorList->Process;
  if ( (MdlFlags & 0x200) != 0 )
    MiRetardMdl(MemoryDescriptorList);
  v4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v51 = v4;
  if ( (MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  if ( (MmTrackLockedPages & 1) != 0 )
    MiFreeMdlTracker((ULONG_PTR)MemoryDescriptorList);
  v5 = (PMDL)((char *)v2 + 8 * v4);
  v6 = 1;
  v56 = v5;
  v55 = 1;
  v7 = 0LL;
  v49 = 0x3FFFFFFFFFLL;
  CurrentIrql = KeGetCurrentIrql();
  v48 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v27) = 4;
    else
      v27 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v27;
  }
  v54 = CurrentIrql + 1;
  v9 = CurrentIrql + 1;
  while ( 1 )
  {
    Next = (unsigned __int64)v2->Next;
    if ( v2->Next == (struct _MDL *)-1LL )
      break;
    v11 = 1LL;
    if ( Next > qword_140C65820 )
      goto LABEL_80;
    if ( (*(_QWORD *)(48 * Next - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
    {
      v5 = v56;
LABEL_80:
      v36 = 512 - ((__int64)v2->Next & 0x1FF);
      v50 = v36;
      if ( v36 > 1 )
      {
        p_Size = (unsigned __int64 *)&v2->Size;
        v38 = Next;
        do
        {
          if ( p_Size == (unsigned __int64 *)v5 )
            break;
          v39 = *p_Size;
          if ( *p_Size == -1LL || v39 != v38 + 1 )
            break;
          if ( v39 <= qword_140C65820 )
          {
            if ( _bittest64((const signed __int64 *)(48 * v39 - 0x21FFFFFFFFD8LL), 0x36u) )
              break;
            v36 = v50;
          }
          ++v11;
          ++p_Size;
          v38 = v39;
        }
        while ( v11 < v36 );
        v9 = v54;
      }
      MiDereferenceIoPages(0LL, Next, v11);
      goto LABEL_13;
    }
    MiProbeUnlockPage(48 * Next - 0x220000000000LL, MdlFlags, &v49, &v55);
LABEL_13:
    ++v7;
    v2 = (PMDL)((char *)v2 + 8 * v11);
    if ( (v7 & 0x3F) != 0 || v48 >= 2u )
    {
      v5 = v56;
      if ( v2 >= v56 )
        break;
    }
    else
    {
      if ( v2 >= v56 )
        break;
      ShouldYieldProcessor = KeShouldYieldProcessor();
      v5 = v56;
      if ( ShouldYieldProcessor )
      {
        if ( KiIrqlFlags )
        {
          v40 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v40 - 2) <= 0xDu )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v42 = CurrentPrcb->SchedulerAssist;
            v43 = ~(unsigned __int16)(-1LL << v9);
            v30 = (v43 & v42[5]) == 0;
            v42[5] &= v43;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v48);
        v33 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v5 = v56;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v33 <= 0xFu )
        {
          v34 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v33 == 2 )
            LODWORD(v35) = 4;
          else
            v35 = (-1LL << (v33 + 1)) & 4;
          v34[5] |= v35;
          v5 = v56;
        }
      }
    }
  }
  v12 = v53;
  v13 = v51;
  if ( v49 != 0x3FFFFFFFFFLL )
  {
    v14 = 48 * v49 - 0x220000000000LL;
    v15 = 0LL;
    v56 = 0LL;
    if ( v55 == 2 )
    {
      if ( (*(_BYTE *)(v14 + 34) & 7) != 6
        || (*(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
        || (v16 = *(_QWORD *)(v14 + 8) | 0x8000000000000000uLL, v16 < 0xFFFFF68000000000uLL)
        || v16 > 0xFFFFF6FFFFFFFFFFuLL
        || (v17 = (__int64)(v16 << 25) >> 16, v17 < 0xFFFFF68000000000uLL)
        || v17 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v6 = 0;
      }
      v18 = (_QWORD *)(v14 + 24);
      v19 = 3;
      if ( v6 )
        goto LABEL_24;
      goto LABEL_78;
    }
    v19 = 1;
    if ( !v55 )
      v19 = 4;
LABEL_24:
    v18 = (_QWORD *)(v14 + 24);
    if ( (*(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_78:
      KeBugCheckEx(
        0x1Au,
        0x41791uLL,
        48 * v49 - 0x220000000000LL,
        *(_QWORD *)(v14 + 8) | 0x8000000000000000uLL,
        *v18 & 0x3FFFFFFFFFFFFFFFLL);
    v20 = 0LL;
    v21 = 0LL;
    while ( 1 )
    {
      v22 = *(_QWORD *)(v14 + 40) & 0xFFFFFFFFFFLL;
      LODWORD(v53) = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v53);
          while ( *(__int64 *)(v14 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) );
        v15 = v56;
      }
      v23 = *(_QWORD *)(v14 + 24) ^ ((*(_QWORD *)(v14 + 24) - 0x10000LL) ^ *(_QWORD *)(v14 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v14 + 24) = v23;
      v24 = v23 & 0x3FFFFFFFFFFFFFFFLL;
      if ( v24 >= 0x10000 )
        break;
      if ( !v15 )
        v56 = *(PMDL *)(qword_140C67048 + 8 * ((*(_QWORD *)(v14 + 40) >> 43) & 0x3FFLL));
      ++v20;
      if ( !v24 && (unsigned int)MiPfnShareCountIsZero(v14) != 3 )
        ++v21;
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !--v19 )
        goto LABEL_34;
      v15 = v56;
      v14 = 48 * v22 - 0x220000000000LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_34:
    v25 = v56;
    if ( v20 )
    {
      if ( v56 == (PMDL)&MiSystemPartition )
      {
        v28 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v28->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v20 + CachedResidentAvailable <= 0x100 && v20 < 0x80000 )
          {
            do
            {
              v31 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v28->CachedResidentAvailable,
                      v20 + CachedResidentAvailable,
                      CachedResidentAvailable);
              v30 = (_DWORD)CachedResidentAvailable == v31;
              LODWORD(CachedResidentAvailable) = v31;
              if ( v30 )
                goto LABEL_35;
            }
            while ( v31 != -1 && v20 + v31 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v28->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v20 += (int)CachedResidentAvailable - 192;
          }
          if ( !v20 )
            goto LABEL_35;
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v25[360], v20);
    }
LABEL_35:
    if ( v21 )
      MiReturnCommit(v25, v21);
  }
  if ( KiIrqlFlags )
  {
    v44 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v44 <= 0xFu && v48 <= 0xFu && v44 >= 2u )
    {
      v45 = KeGetCurrentPrcb();
      v46 = v45->SchedulerAssist;
      v47 = ~(unsigned __int16)(-1LL << v54);
      v30 = (v47 & v46[5]) == 0;
      v46[5] &= v47;
      if ( v30 )
        KiRemoveSystemWorkPriorityKick(v45);
    }
  }
  __writecr8(v48);
  if ( Process )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process->NumberOfLockedPages, -(__int64)v13);
  v12->MdlFlags &= 0xF6FDu;
}
