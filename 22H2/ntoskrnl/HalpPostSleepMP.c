/*
 * XREFs of HalpPostSleepMP @ 0x140A97068
 * Callers:
 *     HaliAcpiSleep @ 0x140528000 (HaliAcpiSleep.c)
 * Callees:
 *     HalpHvIsReferenceTscConfigured @ 0x14037B810 (HalpHvIsReferenceTscConfigured.c)
 *     HalpInterruptReinitializeThisProcessor @ 0x14037B900 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpInterruptEnableNmi @ 0x14037BC04 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x14037C3A8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpMcUpdateMicrocode @ 0x1403805A8 (HalpMcUpdateMicrocode.c)
 *     HalpTscSynchronizationWorker @ 0x14038B020 (HalpTscSynchronizationWorker.c)
 *     HalpTscInitializeSynchronizationContext @ 0x14039AA74 (HalpTscInitializeSynchronizationContext.c)
 *     HalpInterruptRestoreClock @ 0x1405053F8 (HalpInterruptRestoreClock.c)
 *     HalpRestartProfiling @ 0x140507FF4 (HalpRestartProfiling.c)
 *     HalpTimerMarkWake @ 0x140508C8C (HalpTimerMarkWake.c)
 *     HalpTimerRestoreProcessorCounter @ 0x14050AE8C (HalpTimerRestoreProcessorCounter.c)
 *     HalpHvSetMachineCheckHandlerState @ 0x14050BD10 (HalpHvSetMachineCheckHandlerState.c)
 *     HalpSetResumeTime @ 0x14051C788 (HalpSetResumeTime.c)
 *     HalpErrataApplyPerProcessor @ 0x140A8B128 (HalpErrataApplyPerProcessor.c)
 *     KeLoadMTRR @ 0x140A8F950 (KeLoadMTRR.c)
 *     HalpMcaResumeProcessorConfig @ 0x140A952C0 (HalpMcaResumeProcessorConfig.c)
 */

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
    dword_140D18E0C = 0;
    dword_140D18DBC = 0;
    qword_140D18E00 = (__int64)&dword_140D18DBC;
    dword_140D18DF4 = v9 - 1;
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
    dword_140D18E08 = 0;
  }
  _InterlockedIncrement(&dword_140D18E0C);
  while ( dword_140D18E0C != v9 )
    ;
  while ( dword_140D18E08 < (int)v10 )
    ;
  HalpMcUpdateMicrocode((unsigned int)dword_140D18E08, v6, v7);
  HalpErrataApplyPerProcessor();
  _InterlockedIncrement(&dword_140D18E08);
  while ( dword_140D18E08 != v9 )
    ;
  HalpRestartProfiling();
  HalpInterruptEnableNmi();
  KeLoadMTRR((__int64)&unk_140D18DF0);
  if ( !v3 )
    HalpTscSynchronizationWorker((ULONG_PTR)&Argument);
  return HalpMcaResumeProcessorConfig(1);
}
