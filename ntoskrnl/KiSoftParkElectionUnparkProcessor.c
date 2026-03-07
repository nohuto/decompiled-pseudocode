char __fastcall KiSoftParkElectionUnparkProcessor(struct _KPRCB *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v8; // r14
  __int64 v9; // rdx
  int v10; // r8d
  char v11; // al
  char v12; // r14
  bool v13; // si
  unsigned int v14; // eax
  char v15; // r11
  int SingleTargetIndex; // edx
  unsigned __int16 *p_Count; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int8 v23[336]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v23, 0, sizeof(v23));
  v22 = 0LL;
  KiAcquirePrcbLocksForIsolationUnit(a2, 0, &v22);
  v8 = *(_QWORD *)(a2 + 200);
  _InterlockedXor64((volatile signed __int64 *)(a3 + 80), v8);
  KiAdjustReadyQueueScanOwnerOnParkingChange(a2, a3, 0LL, 0LL);
  v11 = *(_BYTE *)(a2 + 35) & 0xF7;
  *(_BYTE *)(a2 + 35) = v11;
  if ( (v11 & 1) != 0 )
  {
    v12 = 0;
    v13 = 0;
  }
  else
  {
    v21 &= v10;
    while ( _interlockedbittestandset64((volatile signed __int32 *)a3, 0LL) )
    {
      do
        KeYieldProcessorEx(&v21);
      while ( *(_QWORD *)a3 );
    }
    *(_QWORD *)(a3 + 8) ^= v8;
    _InterlockedAnd64((volatile signed __int64 *)a3, 0LL);
    *(_BYTE *)(a2 + 13243) = 1;
    v12 = 1;
    v13 = a2 != (_QWORD)a1;
  }
  KiUpdateThreadPriority(a2, v9, *(_QWORD *)(a2 + 24), 0, v12);
  _InterlockedIncrement16((volatile signed __int16 *)(MmWriteableSharedUserData + 874));
  if ( v12 )
  {
    memset(v23, 0, sizeof(v23));
    KiStartRescheduleContext((__int64)v23, &v22, 0LL);
    KiSearchForNewThreadsForRescheduleContext(v23, (__int64)a4);
    KiCommitRescheduleContext(v23, a1, 0, a4);
  }
  LOBYTE(v14) = KiReleasePrcbLocksForIsolationUnit(&v22);
  if ( v15 )
    LOBYTE(v14) = KiCompleteRescheduleContext(v23, (__int64)a1);
  if ( v13 )
  {
    LOBYTE(v14) = a1->DeferredDispatchInterrupts.TargetType;
    if ( (_BYTE)v14 )
    {
      if ( (_BYTE)v14 == 1 )
      {
        SingleTargetIndex = a1->DeferredDispatchInterrupts.SingleTargetIndex;
        if ( SingleTargetIndex == *(_DWORD *)(a2 + 36) )
          return v14;
        a1->DeferredDispatchInterrupts.TargetType = 2;
        p_Count = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count;
        LOBYTE(v14) = KeAddProcessorAffinityEx(p_Count, SingleTargetIndex);
      }
      else
      {
        p_Count = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count;
      }
      v18 = *(unsigned __int8 *)(a2 + 208);
      v19 = *(_QWORD *)(a2 + 200);
      if ( *p_Count <= (unsigned __int16)v18 )
      {
        if ( p_Count[1] <= (unsigned __int16)v18 )
          return v14;
        LOBYTE(v14) = v18 + 1;
        *p_Count = v18 + 1;
      }
      *(_QWORD *)&p_Count[4 * v18 + 4] |= v19;
      return v14;
    }
    a1->DeferredDispatchInterrupts.TargetType = 1;
    v14 = *(_DWORD *)(a2 + 36);
    a1->DeferredDispatchInterrupts.SingleTargetIndex = v14;
  }
  return v14;
}
