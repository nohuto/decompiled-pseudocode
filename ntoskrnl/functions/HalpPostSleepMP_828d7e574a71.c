char __fastcall HalpPostSleepMP(ULONG a1, __int64 a2)
{
  bool IsReferenceTscConfigured; // al
  bool v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  ULONG v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h]

  v10 = a2;
  v9 = a1;
  LODWORD(v10) = KeGetCurrentPrcb()->Number;
  if ( (_DWORD)v10 )
  {
    HalpInterruptReinitializeThisProcessor();
    while ( (_DWORD)v10 != HalpBarrier )
      _mm_pause();
    __writecr8(0xFuLL);
  }
  if ( (HalpFeatureBits & 0xC) != 0 )
    HalpMcaResumeProcessorConfig(0);
  if ( (HalpFeatureBits & 1) != 0 )
    HalpInterruptEnablePerformanceEvents(0LL);
  IsReferenceTscConfigured = HalpHvIsReferenceTscConfigured();
  v3 = IsReferenceTscConfigured;
  if ( !(_DWORD)v10 )
  {
    dword_140D18ACC = 0;
    dword_140D18A7C = 0;
    qword_140D18AC0 = (__int64)&dword_140D18A7C;
    dword_140D18AB4 = v9 - 1;
    if ( !IsReferenceTscConfigured )
      HalpTscInitializeSynchronizationContext((__int64)&Argument, 0, 0LL, &v9);
  }
  _InterlockedIncrement(&HalpBarrier);
  while ( HalpBarrier != v9 )
    ;
  if ( !(_DWORD)v10 && HalpHvWheaEnlightenedCpuManager && HalpMceEnabled )
    HalpHvSetMachineCheckHandlerState();
  if ( !(_DWORD)v10 )
    HalpSetResumeTime(0LL, 1);
  HalpTimerMarkWake();
  HalpTimerRestoreProcessorCounter(v5, v4);
  if ( !(_DWORD)v10 )
  {
    SystemPowerPhase = 1;
    HalpSetResumeTime(0LL, 2);
    HalpInterruptRestoreClock();
    HalpHiberInProgress = 0;
    dword_140D18AC8 = 0;
  }
  _InterlockedIncrement(&dword_140D18ACC);
  while ( dword_140D18ACC != v9 )
    ;
  while ( dword_140D18AC8 < (int)v10 )
    ;
  HalpMcUpdateMicrocode((unsigned int)dword_140D18AC8, v6, v7);
  HalpErrataApplyPerProcessor();
  _InterlockedIncrement(&dword_140D18AC8);
  while ( dword_140D18AC8 != v9 )
    ;
  HalpRestartProfiling();
  HalpInterruptEnableNmi();
  KeLoadMTRR((__int64)&unk_140D18AB0);
  if ( !v3 )
    HalpTscSynchronizationWorker((ULONG_PTR)&Argument);
  return HalpMcaResumeProcessorConfig(1);
}
