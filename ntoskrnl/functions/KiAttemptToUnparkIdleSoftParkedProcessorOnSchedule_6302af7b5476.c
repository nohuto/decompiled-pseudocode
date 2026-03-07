char __fastcall KiAttemptToUnparkIdleSoftParkedProcessorOnSchedule(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  struct _KPRCB *CurrentPrcb; // rbp
  volatile LONG *v5; // r12
  char v10; // di
  char v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  char v17; // al
  char v18; // al
  bool v19; // bl
  unsigned __int8 TargetType; // al
  int SingleTargetIndex; // edx
  _KAFFINITY_EX *p_MultipleTargetAffinity; // rbx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v27[2]; // [rsp+30h] [rbp-38h] BYREF
  int v28; // [rsp+78h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = (volatile LONG *)(a2 + 112);
  v27[0] = 0LL;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 112));
  v10 = 1;
  v11 = 1;
  KiAcquirePrcbLocksForIsolationUnit(a1, a3, v27);
  if ( (unsigned int)KiIsIsolationUnitIdleByHandle(v27, v12, v13, v14)
    && (*(_BYTE *)(a1 + 35) & 5) == 4
    && (*(_BYTE *)(a1 + 35) & 8) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 200);
    _InterlockedXor64((volatile signed __int64 *)(a2 + 80), v15);
    KiAdjustReadyQueueScanOwnerOnParkingChange(a1, a2, 0, 0LL);
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    v17 = *(_BYTE *)(a1 + 35) & 0xF7;
    *(_BYTE *)(a1 + 35) = v17;
    if ( (v17 & 1) != 0 )
    {
      v18 = 0;
      v19 = 0;
    }
    else
    {
      v28 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)a2, 0LL) )
      {
        do
          KeYieldProcessorEx(&v28);
        while ( *(_QWORD *)a2 );
      }
      *(_QWORD *)(a2 + 8) ^= v15;
      _InterlockedAnd64((volatile signed __int64 *)a2, 0LL);
      *(_BYTE *)(a1 + 13243) = 1;
      v18 = 1;
      v19 = a1 != (_QWORD)CurrentPrcb;
    }
    KiUpdateThreadPriority(a1, v16, *(_QWORD *)(a1 + 24), 0, v18);
    _InterlockedAdd16((volatile signed __int16 *)(MmWriteableSharedUserData + 874), 1u);
    v11 = 0;
    if ( !v19 )
      goto LABEL_22;
    TargetType = CurrentPrcb->DeferredDispatchInterrupts.TargetType;
    if ( !TargetType )
    {
      CurrentPrcb->DeferredDispatchInterrupts.TargetType = 1;
      CurrentPrcb->DeferredDispatchInterrupts.SingleTargetIndex = *(_DWORD *)(a1 + 36);
LABEL_22:
      v25 = v27[0];
      v27[0] = 0LL;
      *a4 = v25;
      goto LABEL_24;
    }
    if ( TargetType == 1 )
    {
      SingleTargetIndex = CurrentPrcb->DeferredDispatchInterrupts.SingleTargetIndex;
      if ( SingleTargetIndex == *(_DWORD *)(a1 + 36) )
        goto LABEL_22;
      p_MultipleTargetAffinity = &CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity;
      CurrentPrcb->DeferredDispatchInterrupts.TargetType = 2;
      KeAddProcessorAffinityEx(&CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Count, SingleTargetIndex);
    }
    else
    {
      p_MultipleTargetAffinity = &CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity;
    }
    v23 = *(unsigned __int8 *)(a1 + 208);
    v24 = *(_QWORD *)(a1 + 200);
    if ( p_MultipleTargetAffinity->Count <= (unsigned __int16)v23 )
    {
      if ( p_MultipleTargetAffinity->Size <= (unsigned __int16)v23 )
        goto LABEL_22;
      p_MultipleTargetAffinity->Count = v23 + 1;
    }
    p_MultipleTargetAffinity->Bitmap[v23] |= v24;
    goto LABEL_22;
  }
  v10 = 0;
LABEL_24:
  if ( v27[0] )
    KiReleasePrcbLocksForIsolationUnit(v27);
  if ( v11 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  return v10;
}
