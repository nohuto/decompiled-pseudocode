/*
 * XREFs of KeStallExecutionProcessor @ 0x14022A1F0
 * Callers:
 *     HalpInterruptWaitForProcessorStartUp @ 0x1403A0E0C (HalpInterruptWaitForProcessorStartUp.c)
 *     HalpApicStartProcessor @ 0x1403A6180 (HalpApicStartProcessor.c)
 *     HalpTimerWaitForPhase0Interrupt @ 0x1403AF6F0 (HalpTimerWaitForPhase0Interrupt.c)
 *     HalpTimerMeasureFrequencies @ 0x1403B0A68 (HalpTimerMeasureFrequencies.c)
 *     HalpInterruptResetThisProcessor @ 0x1404BC3D0 (HalpInterruptResetThisProcessor.c)
 *     HalpPowerWriteResetCommand @ 0x1404BE25C (HalpPowerWriteResetCommand.c)
 *     HalpTimerTestHypervisorTimer @ 0x1404C1A6C (HalpTimerTestHypervisorTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404C3500 (HalpTimerMeasureProcessorsWorker.c)
 *     HalpNmiReboot @ 0x1404D2BC8 (HalpNmiReboot.c)
 *     HalpSfiTimerArm @ 0x1404D56B0 (HalpSfiTimerArm.c)
 *     HalpSfiTimerInitialize @ 0x1404D57B0 (HalpSfiTimerInitialize.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x1404D72BC (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpUsbLegacyStopUhciInterrupt @ 0x1404D73E8 (HalpUsbLegacyStopUhciInterrupt.c)
 *     IvtUpdateGlobalCommand @ 0x1404E0F90 (IvtUpdateGlobalCommand.c)
 *     HsaGetPageFault @ 0x1404E3720 (HsaGetPageFault.c)
 *     HvlPrepareForRootCrashdump @ 0x1404F5BDC (HvlPrepareForRootCrashdump.c)
 *     IoWriteCrashDump @ 0x140502950 (IoWriteCrashDump.c)
 *     KeBugCheck2 @ 0x140516A10 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x14051D630 (KeFreezeExecution.c)
 *     ExpWaitForBootDevices @ 0x1405B32E0 (ExpWaitForBootDevices.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x1405C5480 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1405C5644 (BgpFwDisplayBugCheckScreen.c)
 *     IvtInitializeIommu @ 0x1409A9A90 (IvtInitializeIommu.c)
 *     HdlspBugCheckProcessing @ 0x1409EED54 (HdlspBugCheckProcessing.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022A3A0 (HalpTimerGetInternalData.c)
 *     KeQueryActiveProcessorCountEx @ 0x140344620 (KeQueryActiveProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035C8F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035CA50 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HalpProcessorFence @ 0x1403F9340 (HalpProcessorFence.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     KiCheckStall @ 0x14051DC60 (KiCheckStall.c)
 */

void __stdcall KeStallExecutionProcessor(ULONG MicroSeconds)
{
  __int64 v2; // rsi
  char v3; // r13
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r14
  unsigned __int64 v8; // rdi
  unsigned int v9; // ebx
  unsigned __int64 v10; // rbp
  unsigned __int64 Mask; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  ULONG_PTR v14; // rdi
  __int64 InternalData; // rax
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // r9
  signed __int64 v20; // rax
  int v21; // r8d
  __int64 v22; // rdx
  bool v23; // zf
  __int64 v24; // r8
  unsigned __int64 v25; // r8
  signed __int64 v26; // rcx
  unsigned int v27; // edx
  signed __int32 v28[8]; // [rsp+0h] [rbp-78h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF
  int v31; // [rsp+70h] [rbp-8h]

  if ( HalpTimerProcessorsFrozen )
  {
    v14 = HalpAlwaysOnCounter;
    if ( HalpAlwaysOnCounter )
    {
      if ( *(_DWORD *)(HalpAlwaysOnCounter + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(HalpAlwaysOnCounter);
        (*(void (__fastcall **)(__int64))(v14 + 112))(InternalData);
      }
      else
      {
        do
        {
          v16 = *(_QWORD *)(v14 + 208);
          do
          {
            v17 = *(_QWORD *)(v14 + 200);
            v18 = HalpTimerGetInternalData(v14);
            v19 = (*(__int64 (__fastcall **)(__int64))(v14 + 112))(v18);
            _InterlockedOr(v28, 0);
            v20 = *(_QWORD *)(v14 + 200);
          }
          while ( v17 != v20 );
        }
        while ( v16 != *(_QWORD *)(v14 + 208) );
        v21 = *(_DWORD *)(v14 + 220);
        if ( ((v17 ^ v19) & (1LL << ((unsigned __int8)v21 - 1))) != 0 )
        {
          v22 = 1LL << v21;
          v23 = v21 == 64;
          v24 = -1LL;
          if ( !v23 )
            v24 = v22 - 1;
          v25 = v17 & v24;
          v26 = v19 | v17 ^ v25;
          if ( v19 < v25 )
            v26 += v22;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 200), v26, v20);
        }
      }
    }
    KiCheckStall(KeGetCurrentPrcb(), 0LL);
  }
  v2 = HalpStallCounter;
  v3 = 0;
  Affinity = 0LL;
  v4 = *(_DWORD *)(HalpStallCounter + 224);
  PreviousAffinity = 0LL;
  if ( (v4 & 1) != 0
    && KeQueryActiveProcessorCountEx(0xFFFFu) >= 2
    && KeGetCurrentIrql() < 2u
    && (v31 & 0x200) != 0
    && (*(_DWORD *)(v2 + 184) & 0x20) == 0 )
  {
    v3 = 1;
    v27 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v27 >> 6);
    Affinity.Mask = 1LL << (v27 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  v5 = HalpTimerGetInternalData(v2);
  v6 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(v5);
  HalpProcessorFence();
  v7 = 0LL;
  Affinity.Mask = 1LL << *(_DWORD *)(v2 + 220);
  v8 = v6;
  v9 = 0;
  v10 = (*(_QWORD *)(v2 + 192) * (unsigned __int64)(10 * MicroSeconds) + 9999999) / 0x989680 + 1;
  if ( (*(_QWORD *)(v2 + 192) * (unsigned __int64)(10 * MicroSeconds) + 9999999) / 0x989680 != -1LL )
  {
    Mask = Affinity.Mask;
    do
    {
      if ( (++v9 & dword_140C4A1FC) == 0 && qword_140C4A200 )
        qword_140C4A200(v9);
      else
        _mm_pause();
      v12 = HalpTimerGetInternalData(v2);
      v13 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(v12);
      if ( v13 < v8 )
        v7 += Mask;
      v8 = v13;
    }
    while ( v13 + v7 - v6 < v10 );
  }
  if ( v3 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
