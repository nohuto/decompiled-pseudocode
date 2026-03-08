/*
 * XREFs of HalpPostSleepMP @ 0x140A93F28
 * Callers:
 *     HaliAcpiSleep @ 0x140525AD0 (HaliAcpiSleep.c)
 * Callees:
 *     HalpHvIsReferenceTscConfigured @ 0x140377E60 (HalpHvIsReferenceTscConfigured.c)
 *     HalpInterruptReinitializeThisProcessor @ 0x140377F50 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpInterruptEnableNmi @ 0x140378254 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403789F8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpMcUpdateMicrocode @ 0x14037CB18 (HalpMcUpdateMicrocode.c)
 *     HalpTscSynchronizationWorker @ 0x140387F60 (HalpTscSynchronizationWorker.c)
 *     HalpTscInitializeSynchronizationContext @ 0x140396E74 (HalpTscInitializeSynchronizationContext.c)
 *     HalpInterruptRestoreClock @ 0x140503318 (HalpInterruptRestoreClock.c)
 *     HalpRestartProfiling @ 0x140505F14 (HalpRestartProfiling.c)
 *     HalpTimerMarkWake @ 0x140506BAC (HalpTimerMarkWake.c)
 *     HalpTimerRestoreProcessorCounter @ 0x140508DAC (HalpTimerRestoreProcessorCounter.c)
 *     HalpHvSetMachineCheckHandlerState @ 0x140509C30 (HalpHvSetMachineCheckHandlerState.c)
 *     HalpSetResumeTime @ 0x14051A258 (HalpSetResumeTime.c)
 *     HalpErrataApplyPerProcessor @ 0x140A87B18 (HalpErrataApplyPerProcessor.c)
 *     KeLoadMTRR @ 0x140A8C4C0 (KeLoadMTRR.c)
 *     HalpMcaResumeProcessorConfig @ 0x140A9218C (HalpMcaResumeProcessorConfig.c)
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
