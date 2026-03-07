void __fastcall KiSoftParkElectionDpcRoutine(__int64 a1, __int64 a2)
{
  char v3; // r12
  char v4; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v6; // rbp
  char v7; // si
  __int64 v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  _DWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v12[6]; // [rsp+28h] [rbp-30h] BYREF
  char v13; // [rsp+68h] [rbp+10h]

  v12[0] = 0LL;
  v3 = 0;
  v4 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = *(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64
                                                                       * (unsigned __int64)*(unsigned __int16 *)(a2 + 662)
                                                                       + *(unsigned __int8 *)(a2 + 657)]]
                 + 192);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v6 + 112));
  v7 = 1;
  if ( (unsigned int)Feature_Servicing_SoftParkFixes__private_IsEnabledDeviceUsage() )
  {
    KiAcquireSoftParkElectionLock(a2);
    v4 = 1;
  }
  else
  {
    v11[0] = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)a2, 0LL) )
    {
      do
        KeYieldProcessorEx(v11);
      while ( *(_QWORD *)a2 );
    }
    v3 = 1;
  }
  *(_BYTE *)(a2 + 708) = 0;
  if ( KiShouldSoftParkElectionBePerformed(a2) )
  {
    if ( (unsigned int)Feature_Servicing_SoftParkFixes__private_IsEnabledDeviceUsage() )
    {
      v8 = 0LL;
      v13 = 1;
      v9 = KiPerformMultiRoundSoftParkElection(v6, a2);
    }
    else
    {
      v13 = 0;
      v8 = KiPerformSoftParkElection(v6, a2);
      v9 = 0LL;
    }
    KiAdvanceSoftParkElectionGeneration(a2);
    if ( v8 || v9 )
    {
      if ( v4 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 688), 0LL);
        v4 = 0;
      }
      if ( v3 )
      {
        _InterlockedAnd64((volatile signed __int64 *)a2, 0LL);
        v3 = 0;
      }
      if ( v13 )
      {
        while ( v9 )
        {
          _BitScanForward64(&v10, v9);
          v9 &= ~(1LL << v10);
          v11[1] = v10;
          KiSoftParkElectionUnparkProcessor(
            CurrentPrcb,
            KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int16 *)(v6 + 136)
                                                                + (unsigned int)v10]],
            v6,
            v12);
        }
      }
      else if ( v8 )
      {
        KiSoftParkElectionUnparkProcessor(CurrentPrcb, v8, v6, v12);
      }
      KiReleaseParkSummaryLockExclusive(v6);
      v7 = 0;
      KiFlushSoftwareInterruptBatch((__int64)&CurrentPrcb->DeferredDispatchInterrupts);
      KiReadyDeferredReadyList((__int64)CurrentPrcb, v12);
      if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
  }
  if ( v4 )
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 688), 0LL);
  if ( v3 )
    _InterlockedAnd64((volatile signed __int64 *)a2, 0LL);
  if ( v7 )
    KiReleaseParkSummaryLockExclusive(v6);
}
