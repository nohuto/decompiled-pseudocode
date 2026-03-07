unsigned __int64 __fastcall MiDeleteKernelShadowStack(__int64 *a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v4; // r12
  char *AnyMultiplexedVm; // r13
  signed __int64 v6; // r15
  signed __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // r8
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  _BOOL8 v18; // r14
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v21; // r9
  int v22; // eax
  bool v23; // zf
  unsigned __int64 v24; // r8
  struct _KPRCB *v25; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v27; // eax
  int v30; // [rsp+88h] [rbp+10h] BYREF
  __int64 v31; // [rsp+90h] [rbp+18h]
  int v32; // [rsp+98h] [rbp+20h]

  v31 = a3;
  v30 = a2;
  v3 = (unsigned __int64)(a1 + 1);
  LODWORD(v4) = 4;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  LOBYTE(v30) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiLockPageTableInternal((__int64)AnyMultiplexedVm, ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0);
  v6 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v3) >> 12) & 0xFFFFFFFFFFLL);
  v7 = v6 - 0x220000000000LL;
  MiValidateKernelShadowStackPage(v3);
  v8 = *(_QWORD *)(v6 - 0x220000000000LL + 40);
  v9 = ZeroPte;
  v32 = 0;
  v10 = *(_QWORD *)(qword_140C67048 + 8 * ((v8 >> 43) & 0x3FF));
  *(_QWORD *)(v6 - 0x220000000000LL) = 0LL;
  if ( !MiPteInShadowRange(v3) )
  {
    v13 = v32;
    goto LABEL_9;
  }
  if ( MiPteHasShadow() )
  {
    v13 = v12;
    if ( HIBYTE(word_140C6697C) )
      goto LABEL_9;
  }
  else
  {
    v13 = v32;
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      goto LABEL_9;
  }
  if ( ((unsigned __int8)ZeroPte & (unsigned __int8)v12) != 0 )
    v9 = ZeroPte | 0x8000000000000000uLL;
LABEL_9:
  *(_QWORD *)v3 = v9;
  if ( v13 )
    MiWritePteShadow(v3, v9, v11);
  if ( ((v3 >> 9) & 0x7FFFFFFFF8LL) != 0x98000000000LL )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v30);
  if ( v31 )
  {
    if ( (_BYTE)KiKernelCetEnabled )
    {
      v14 = VslFreeKernelShadowStack(v31);
      if ( v14 < 0 )
        KeBugCheckEx(0x1Au, 0x3501uLL, (ULONG_PTR)a1, v14, 0LL);
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql != 2 )
      v4 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v4;
  }
  v17 = MiCheckSlabPfnBitmap(v6 - 0x220000000000LL, 1LL, 1);
  v30 = 0;
  v18 = v17 == 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v30);
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  MiSetPfnIdentity(v6 - 0x220000000000LL, 0);
  *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(v7 + 32) = 0;
  MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * (v6 >> 4), 2);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    v19 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v21 = CurrentPrcb->SchedulerAssist;
      v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v23 = (v22 & v21[5]) == 0;
      v21[5] &= v22;
      if ( v23 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( v18 )
  {
    v24 = v18;
    if ( (unsigned __int16 *)v10 == MiSystemPartition )
    {
      v25 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v25->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(v18 + CachedResidentAvailable) <= 0x100 )
        {
          do
          {
            v27 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v25->CachedResidentAvailable,
                    v18 + CachedResidentAvailable,
                    CachedResidentAvailable);
            v23 = (_DWORD)CachedResidentAvailable == v27;
            LODWORD(CachedResidentAvailable) = v27;
            if ( v23 )
              goto LABEL_45;
          }
          while ( v27 != -1 && (unsigned __int64)(v18 + v27) <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v25->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v24 = (int)CachedResidentAvailable - 192 + (unsigned __int64)v18;
        }
      }
    }
    if ( v24 )
      v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 17280), v24);
LABEL_45:
    MiReturnCommit(v10, v18, v24);
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 17888), 0xFFFFFFFFFFFFFFFFuLL);
  return MiReleasePtes((__int64)&unk_140C680E0, a1, 3u);
}
