char __fastcall KiCallInterruptServiceRoutine(__int64 a1, char a2)
{
  unsigned int v2; // eax
  __int64 v5; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *IsrDpcStats; // rbp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r15
  char v10; // r14
  unsigned __int64 v11; // rax
  unsigned int DpcWatchdogSequenceNumber; // edx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  volatile signed __int32 *v16; // rcx
  volatile signed __int64 *v17; // rcx
  unsigned int v18; // r8d
  unsigned int FirstSetRightGroupAffinity; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_DWORD *)(a1 + 88);
  if ( v2 <= 0xCF && !KiForceIdleDisabled && v2 >= 0x30 )
  {
    if ( KiForceIdleState == 4 )
    {
      KiResetForceIdle(1LL, 0LL);
    }
    else if ( (unsigned int)(KiForceIdleState - 1) <= 1 )
    {
      KiCheckAndRearmForceIdle();
    }
  }
  if ( !*(_BYTE *)(a1 + 93) )
    return (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48)) != 0;
  v5 = *(_QWORD *)(a1 + 272);
  if ( v5
    && *(_BYTE *)(v5 + 16)
    && (v18 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number],
        ((v18 >> 6 == *(unsigned __int16 *)(v5 + 8)) & (unsigned int)(*(_QWORD *)v5 >> (v18 & 0x3F))) == 0) )
  {
    FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity(*(_QWORD *)(a1 + 272));
    KiIntRedirectQueueRequestOnProcessor(FirstSetRightGroupAffinity);
    return 2;
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    IsrDpcStats = CurrentPrcb->IsrDpcStats;
    *(_BYTE *)(a1 + 224) = 1;
    CurrentPrcb->IsrDpcStats = (void *)(a1 + 176);
    v8 = __rdtsc();
    *(_QWORD *)(a1 + 184) = v8;
    v9 = v8;
    if ( a2 )
    {
      v16 = *(volatile signed __int32 **)(a1 + 72);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v16);
      }
      else if ( _interlockedbittestandset64(v16, 0LL) )
      {
        KxWaitForSpinLockAndAcquire(v16);
      }
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
      v17 = *(volatile signed __int64 **)(a1 + 72);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v17, retaddr);
      else
        _InterlockedAnd64(v17, 0LL);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
    }
    v11 = __rdtsc();
    DpcWatchdogSequenceNumber = CurrentPrcb->DpcWatchdogSequenceNumber;
    v13 = v11 - *(_QWORD *)(a1 + 184);
    if ( DpcWatchdogSequenceNumber != *(_DWORD *)(a1 + 232) )
    {
      *(_DWORD *)(a1 + 232) = DpcWatchdogSequenceNumber;
      *(_QWORD *)(a1 + 240) = 0LL;
      *(_QWORD *)(a1 + 248) = 0LL;
      *(_QWORD *)(a1 + 256) = 0LL;
      *(_QWORD *)(a1 + 264) = 0LL;
    }
    *(_QWORD *)(a1 + 176) += v13;
    *(_QWORD *)(a1 + 240) += v13;
    ++*(_QWORD *)(a1 + 192);
    ++*(_QWORD *)(a1 + 248);
    if ( IsrDpcStats != (_QWORD *)1 )
    {
      v14 = v11 - v9;
      if ( *((_BYTE *)IsrDpcStats + 48) )
        IsrDpcStats[1] += v14;
      else
        IsrDpcStats[4] += v14;
    }
    CurrentPrcb->IsrDpcStats = IsrDpcStats;
    *(_BYTE *)(a1 + 224) = 0;
    if ( CurrentPrcb == (struct _KPRCB *)KiDeferredDpcWatchdogActivePrcb && CurrentPrcb->NestingLevel == 2 )
    {
      if ( CurrentPrcb->DpcRoutineActive )
        KiProcessDeferredDpcWatchdogViolation(*(_QWORD *)(a1 + 136));
    }
    return v10 != 0;
  }
}
