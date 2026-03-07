__int64 __fastcall MiDeleteSegmentPages(__int64 *a1)
{
  __int16 v1; // dx
  BOOL v3; // esi
  __int64 v4; // rbp
  __int64 v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // r15
  int v8; // ebx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r15
  char v11; // di
  volatile LONG *v12; // rcx
  unsigned __int64 v13; // rax
  __int64 CommittedPages; // rdi
  unsigned __int64 v15; // r8
  void *v17; // rcx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // edx
  bool v22; // zf
  unsigned __int8 v23; // dl
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  struct _KPRCB *v26; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v28; // eax
  int v29; // [rsp+78h] [rbp+10h] BYREF
  __int64 v30; // [rsp+80h] [rbp+18h] BYREF
  __int64 v31; // [rsp+88h] [rbp+20h]

  v1 = *((_WORD *)a1 + 30);
  v30 = 0LL;
  v3 = 0;
  v4 = *(_QWORD *)(qword_140C67048 + 8LL * (v1 & 0x3FF));
  if ( a1[8] )
    v3 = (a1[7] & 0x20) == 0;
  v5 = *a1;
  v6 = a1 + 16;
  v31 = 0LL;
  v7 = 0LL;
  v8 = *(_DWORD *)(v5 + 12);
  if ( a1 != (__int64 *)-128LL )
  {
    do
    {
      v7 += MiDeleteSubsectionPages(v6, &v30);
      if ( v3 )
      {
        if ( *(_QWORD *)(*v6 + 64LL) )
        {
          if ( (*(_BYTE *)(*v6 + 62LL) & 0xC) == 8 )
          {
            v17 = (void *)v6[14];
            if ( v17 )
            {
              MiDeleteFileExtentList(v17);
              v6[14] = 0LL;
            }
          }
        }
      }
      v6 = (_QWORD *)v6[2];
    }
    while ( v6 );
    v31 = v7;
  }
  v29 = 0;
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a1 + 18);
  v10 = v9;
  v11 = v9 + 1;
  while ( 1 )
  {
    v12 = (volatile LONG *)(a1 + 9);
    if ( !a1[4] )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(v12);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << v11);
        v22 = (v21 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    v10 = v9;
    __writecr8(v9);
    KeYieldProcessorEx(&v29);
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a1 + 18);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v12);
  v13 = v9;
  if ( KiIrqlFlags )
  {
    v23 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v13 = v10;
      if ( v23 <= 0xFu )
      {
        v13 = v9;
        if ( (unsigned __int8)v9 <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v22 = (~(unsigned __int16)(-1LL << v11) & v25[5]) == 0;
          v13 = v9;
          v25[5] &= ~(unsigned __int16)(-1LL << v11);
          if ( v22 )
          {
            KiRemoveSystemWorkPriorityKick(v24);
            v13 = v9;
          }
        }
      }
    }
  }
  __writecr8(v13);
  CommittedPages = MiGetCommittedPages(a1);
  if ( CommittedPages )
  {
    if ( (v8 & 0x1000) != 0 )
    {
      v15 = CommittedPages - v30;
      if ( (_UNKNOWN *)v4 == &MiSystemPartition )
      {
        v26 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v26->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v15 + CachedResidentAvailable <= 0x100 && v15 < 0x80000 )
          {
            do
            {
              v28 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v26->CachedResidentAvailable,
                      CachedResidentAvailable + v15,
                      CachedResidentAvailable);
              v22 = (_DWORD)CachedResidentAvailable == v28;
              LODWORD(CachedResidentAvailable) = v28;
              if ( v22 )
                goto LABEL_15;
            }
            while ( v28 != -1 && v15 + v28 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v26->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v15 += (int)CachedResidentAvailable - 192;
          }
        }
      }
      if ( v15 )
        v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 17280), v15);
    }
LABEL_15:
    MiReturnCommit(v4, CommittedPages - v30, v15);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 17848), -CommittedPages);
  }
  return v31;
}
