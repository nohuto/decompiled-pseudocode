__int64 __fastcall MiConvertEntireLargePageToSmall(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r14
  ULONG_PTR v12; // rdi
  char v13; // r10
  unsigned __int8 CurrentIrql; // r15
  char v15; // al
  char v16; // al
  __int64 v17; // rax
  bool v18; // zf
  __int64 result; // rax
  int v20; // eax
  __int64 v21; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  int v23; // r8d
  __int64 v24; // r9
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // r15d
  unsigned int DpcTimeCount; // r12d
  _KTHREAD *NextThread; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v30; // rdx
  unsigned int v31; // r14d
  unsigned __int8 v32; // r14
  unsigned __int8 v33; // r8
  _DWORD *v34; // r10
  __int64 v35; // rdx
  struct _KPRCB *v36; // rcx
  signed __int32 *v37; // r8
  signed __int32 v38; // eax
  signed __int32 v39; // ett
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  unsigned __int8 v44; // cl
  struct _KPRCB *v45; // r9
  _DWORD *v46; // r8
  int v47; // eax
  signed __int32 v48[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v49; // [rsp+20h] [rbp-78h]
  __int128 v50; // [rsp+28h] [rbp-70h]
  __int128 v51; // [rsp+38h] [rbp-60h]
  __int64 v52; // [rsp+48h] [rbp-50h]
  unsigned __int64 v53; // [rsp+50h] [rbp-48h]
  unsigned __int8 v54; // [rsp+A0h] [rbp+8h]
  char v55; // [rsp+A8h] [rbp+10h]
  int v56; // [rsp+B0h] [rbp+18h] BYREF
  int v57; // [rsp+B8h] [rbp+20h]

  v57 = a4;
  v9 = MiLargePageSizes[a2];
  v55 = 0;
  v10 = a1 + 48 * v9;
  v11 = 0x3FFFFFFFFFLL;
  v12 = v9 - 0x5555555555555555LL * ((a1 + 0x220000000000LL) >> 4);
  v49 = 0x3FFFFFFFFFLL;
  v13 = 0;
  if ( a3 == 1 )
  {
    v55 = (a4 != 0) + 1;
    v13 = v55;
    if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    {
      v55 = (a4 != 0) + 1;
      if ( (unsigned int)MiIsFreeZeroPfnCold(a1) )
        v55 = v13;
    }
    if ( a6 )
      *a6 = 0LL;
    if ( a7 )
      *a7 = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  v54 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v30) = 4;
    else
      v30 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v30;
    a4 = v57;
  }
  do
  {
    v10 -= 48LL;
    v56 = 0;
    --v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v56);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
      a4 = v57;
      v13 = v55;
    }
    v15 = *(_BYTE *)(v10 + 34);
    *(_BYTE *)(v10 + 35) &= 0xF8u;
    v16 = v15 & 0xEF;
    *(_BYTE *)(v10 + 34) = v16;
    if ( v10 != a1 )
    {
      *(_BYTE *)(v10 + 34) = v16 ^ (*(_BYTE *)(a1 + 34) ^ v16) & 7;
      *(_QWORD *)(v10 + 16) = *(_QWORD *)(a1 + 16);
    }
    v17 = *(_QWORD *)(v10 + 40);
    *(_BYTE *)(v10 + 36) &= 0xFCu;
    v52 = 0LL;
    v53 = v17 & 0xFFFFFEFFFFFFFFFFuLL;
    v50 = 0LL;
    v51 = 0LL;
    *(_QWORD *)(v10 + 40) = v17 & 0xFFFFFEFFFFFFFFFFuLL;
    if ( a4 <= 1 )
    {
      *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
      v18 = *(_WORD *)(v10 + 32) == 2;
      *(_WORD *)(v10 + 32) -= 2;
      if ( v18 )
      {
        _InterlockedOr(v48, 0);
        *(_QWORD *)(v10 + 24) ^= (*(_QWORD *)(v10 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0x3800000000000000LL;
      }
    }
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        if ( v10 == a5 )
        {
          *(_QWORD *)(v10 + 8) |= 0x8000000000000000uLL;
          *(_QWORD *)v10 = 0LL;
          *(_QWORD *)(v10 + 16) = ZeroPte;
          if ( (v13 & 1) != 0 )
          {
            if ( (MiFlags & 0x80u) != 0LL && (++dword_140C67BE0 & MmPageValidationFrequency) == 0 )
              MiArePageContentsZero(v12);
          }
          else
          {
            MiSetOriginalPtePfnFromFreeList(v10 + 16, 0x3800000000000000LL, 0xFFFFFEFFFFFFFFFFuLL);
          }
        }
        else
        {
          if ( a7 && (*(_BYTE *)(v10 + 35) & 0x40) != 0 )
            ++*a7;
          if ( *(_WORD *)(v10 + 32) )
          {
            if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) == 0 )
              *(_QWORD *)(v10 + 24) |= 0x4000000000000000uLL;
            *(_BYTE *)(v10 + 34) |= 7u;
          }
          else
          {
            if ( a6 )
              ++*a6;
            MiInsertPageInFreeOrZeroedList(v12);
          }
        }
      }
      else if ( a3 == 2 )
      {
        v20 = *(_DWORD *)(v10 + 16);
        *(_QWORD *)v10 = 0LL;
        if ( (v20 & 0x3E0) == 0 && (MiFlags & 0x80u) != 0LL && (++dword_140C67BE0 & MmPageValidationFrequency) == 0 )
          MiArePageContentsZero(v12);
        v21 = (*(_QWORD *)(v10 + 24) ^ v11) & 0xFFFFFFFFFFLL;
        v49 = v12;
        *(_QWORD *)(v10 + 24) ^= v21;
        v11 = v12;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v12 & 0xF) != 0 || CurrentIrql >= 2u )
      goto LABEL_11;
    CurrentPrcb = KeGetCurrentPrcb();
    v23 = 0;
    v24 = 0LL;
    DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
    DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
    DpcTimeCount = CurrentPrcb->DpcTimeCount;
    if ( (DpcRequestSummary & 1) != 0 )
    {
      v23 = 1;
      if ( DpcTimeCount > 7 )
      {
        if ( CurrentPrcb->QuantumEnd )
        {
          v31 = 1;
          goto LABEL_51;
        }
        goto LABEL_93;
      }
    }
    else
    {
      if ( CurrentPrcb->NestingLevel )
      {
        v24 = 1LL;
        if ( DpcWatchdogCount <= 7 )
          goto LABEL_32;
        if ( CurrentPrcb->QuantumEnd )
        {
          v31 = 7;
          goto LABEL_51;
        }
        goto LABEL_93;
      }
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v31 = 2;
        goto LABEL_51;
      }
      if ( CurrentPrcb->QuantumEnd )
      {
        v31 = 3;
        goto LABEL_51;
      }
      NextThread = CurrentPrcb->NextThread;
      if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
      {
        v31 = 4;
        goto LABEL_51;
      }
    }
    if ( DpcWatchdogCount <= 7 )
      goto LABEL_32;
    if ( !v23 )
    {
LABEL_66:
      _disable();
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      v36 = KeGetCurrentPrcb();
      v37 = (signed __int32 *)v36->SchedulerAssist;
      if ( v37 )
      {
        _m_prefetchw(v37);
        v38 = *v37;
        do
        {
          v39 = v38;
          v38 = _InterlockedCompareExchange(v37, v38 & 0xFFDFFFFF, v38);
        }
        while ( v39 != v38 );
        if ( (v38 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v36);
      }
      _enable();
      v31 = 0;
      goto LABEL_51;
    }
LABEL_93:
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v31 = 5;
    }
    else
    {
      if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
        goto LABEL_66;
      v31 = 6;
    }
LABEL_51:
    if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
      EtwTraceShouldYieldProcessor(v31, DpcWatchdogCount, DpcTimeCount, v24);
    if ( !v31 )
    {
      v11 = v49;
LABEL_32:
      CurrentIrql = v54;
      goto LABEL_11;
    }
    if ( KiIrqlFlags && (v40 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) )
    {
      v32 = v54;
      if ( (unsigned __int8)(v40 - 2) <= 0xDu )
      {
        v41 = KeGetCurrentPrcb();
        v42 = v41->SchedulerAssist;
        v43 = ~(unsigned __int16)(-1LL << (v54 + 1));
        v18 = (v43 & v42[5]) == 0;
        v42[5] &= v43;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v41);
      }
    }
    else
    {
      v32 = v54;
    }
    __writecr8(v32);
    v33 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v33 <= 0xFu )
    {
      v34 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v33 == 2 )
        LODWORD(v35) = 4;
      else
        v35 = (-1LL << (v33 + 1)) & 4;
      v34[5] |= v35;
    }
    v11 = v49;
    CurrentIrql = v33;
    v54 = v33;
LABEL_11:
    a4 = v57;
    v13 = v55;
  }
  while ( v10 != a1 );
  if ( KiIrqlFlags )
  {
    v44 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v44 <= 0xFu && CurrentIrql <= 0xFu && v44 >= 2u )
    {
      v45 = KeGetCurrentPrcb();
      v46 = v45->SchedulerAssist;
      v47 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v18 = (v47 & v46[5]) == 0;
      v46[5] &= v47;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(v45);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
