__int64 __fastcall MiGetLargePage(
        __int64 a1,
        unsigned __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        __int64 a7)
{
  int v8; // r15d
  __int64 v10; // rdi
  int v11; // r12d
  __int64 v12; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  BOOL v15; // r15d
  int v16; // r13d
  __int64 v17; // rdi
  volatile signed __int32 *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r14
  unsigned int v21; // r14d
  __int64 v22; // rsi
  unsigned __int8 v23; // di
  _DWORD *v24; // rbp
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  bool v29; // zf
  int v30; // [rsp+50h] [rbp-1D8h] BYREF
  unsigned int v31; // [rsp+54h] [rbp-1D4h]
  unsigned __int64 v32; // [rsp+58h] [rbp-1D0h] BYREF
  __int64 CurrentIrql; // [rsp+60h] [rbp-1C8h]
  __int64 v34; // [rsp+68h] [rbp-1C0h]
  __int64 v35; // [rsp+70h] [rbp-1B8h]
  __int64 v36[24]; // [rsp+80h] [rbp-1A8h] BYREF
  _DWORD v37[36]; // [rsp+140h] [rbp-E8h] BYREF
  void *retaddr; // [rsp+228h] [rbp+0h]

  v8 = a2;
  v30 = a3;
  v32 = a2;
  v35 = a7;
  v10 = a4;
  v31 = a5;
  memset(v37, 0, 0x8CuLL);
  v34 = 25408 * v10 + *(_QWORD *)(a1 + 16);
  if ( !*(_QWORD *)(v34 + 22832) && (MiFlags & 0x30) != 0 )
    return 0LL;
  v11 = a3 + 1;
  CurrentIrql = KeGetCurrentIrql();
  v12 = 0LL;
  while ( 1 )
  {
    --v11;
    memset(v36, 0, 0xB8uLL);
    if ( (unsigned int)MiInitializeLargePageAllocationPacket(
                         (unsigned int)v36,
                         a1,
                         v8,
                         v11,
                         1LL,
                         v10,
                         4,
                         a5,
                         a6 | 0x102u,
                         v12) )
    {
      do
      {
        if ( !(unsigned int)MiLockFreeLargePageLists(v36) )
          break;
        MiGetFreeLargePagesSearchTypes(v36);
        MiReleaseLargePageAllocationLocks(v36);
      }
      while ( !LOBYTE(v36[7]) );
      v12 = v36[14];
      if ( v36[14] )
        break;
    }
    if ( !v11 )
      return 0LL;
  }
  v13 = *(_QWORD *)(v36[14] + 16);
  v14 = 0LL;
  v15 = (v13 & 0x3E0) != 0;
  if ( qword_140C657C0 && (v13 & 0x10) == 0 )
    v13 &= ~qword_140C657C0;
  if ( HIDWORD(v13) != 4294967293 || (v16 = 1, (HvlEnlightenments & 0x200000) == 0) )
    v16 = 0;
  if ( v11 == v30 )
  {
    v17 = 25408 * v10 + *(_QWORD *)(a1 + 16);
    v18 = (volatile signed __int32 *)(v17 + 23104);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(v14) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v17 + 23104, v14);
    }
    else
    {
      LODWORD(v32) = 0;
      if ( _interlockedbittestandset(v18, 0x1Fu) )
        LODWORD(v32) = ExpWaitForSpinLockExclusiveAndAcquire(v17 + 23104);
      while ( 1 )
      {
        v19 = *(unsigned int *)v18;
        if ( (*v18 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v19 & 0x40000000) == 0 )
          _InterlockedOr(v18, 0x40000000u);
        KeYieldProcessorEx(&v32);
      }
      v12 = v36[14];
    }
    --*(_DWORD *)(v17 + 23004);
    v20 = *(_QWORD *)(v17 + 23008);
    *(_QWORD *)(v17 + 23008) = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v17 + 23104, retaddr);
    else
      *v18 = 0;
    if ( v20 )
      MiWakeLargePageWaiters(v20);
    v21 = v30;
    v22 = v12;
  }
  else
  {
    v21 = v30;
    v22 = v36[14] + 48 * MiLargePageSizes[v30] * (v32 % (MiLargePageSizes[v11] << 12) / (MiLargePageSizes[v30] << 12));
    MiInsertDemotedPages(v34, v36[14], v11, v30, v22);
    v30 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v30);
      while ( *(__int64 *)(v22 + 24) < 0 );
    }
    *(_BYTE *)(v22 + 34) = *(_BYTE *)(v22 + 34) & 0xF8 | 5;
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v23 = CurrentIrql;
  if ( KiIrqlFlags )
  {
    v19 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)v19 <= 0xFu
      && (unsigned __int8)CurrentIrql <= 0xFu
      && (unsigned __int8)v19 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v19 = (unsigned int)(unsigned __int8)CurrentIrql + 1;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
      v29 = (v28 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v28;
      if ( v29 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v23);
  if ( (a6 & 8) != 0 )
  {
    if ( v11 != v21 )
    {
      v19 = v22 + 16;
      if ( v15 )
        MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)v19);
      else
        *(_QWORD *)v19 &= 0xFFFFFFFFFFFFFC1FuLL;
    }
  }
  else
  {
    *(_QWORD *)(v22 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
  }
  v24 = v37;
  if ( v16 )
  {
    if ( !v35 )
    {
      v37[0] = 1;
      v37[2] = 16;
    }
    v24 = v37;
    if ( v35 )
      v24 = (_DWORD *)v35;
    if ( (unsigned int)MiAddPageToHeatRanges(v24, 0xAAAAAAAAAAAAAAABuLL * ((v22 + 0x220000000000LL) >> 4), v21) )
      MiNotifyPageHeat(v24);
    if ( v24[1] && v24 == v37 )
      MiNotifyPageHeat(v24);
    *(_QWORD *)(v22 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v22 + 16), 0LL);
  }
  if ( (a6 & 8) == 0 && v15 )
  {
    if ( v24[1] )
      MiNotifyPageHeat(v24);
    if ( v11 == 3 )
      MiZeroPhysicalPage(v19, 0xAAAAAAAAAAAAAAABuLL * ((v22 + 0x220000000000LL) >> 4), 0LL, v31);
    else
      MiZeroLargePage(v19, v22, v21, v31);
  }
  return v22;
}
