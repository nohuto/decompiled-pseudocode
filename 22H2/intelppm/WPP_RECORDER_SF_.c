/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0003718
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C0001720 (EvtDeviceD0Entry.c)
 *     SetGV3PerfState @ 0x1C00019F0 (SetGV3PerfState.c)
 *     Display_xSD @ 0x1C0002088 (Display_xSD.c)
 *     Display_PSS @ 0x1C0002238 (Display_PSS.c)
 *     Display_PCT_PTC @ 0x1C0002404 (Display_PCT_PTC.c)
 *     Display_CST @ 0x1C0002500 (Display_CST.c)
 *     DisplayPPMFlags @ 0x1C0002788 (DisplayPPMFlags.c)
 *     DisplayKernelPerfStates @ 0x1C0003A54 (DisplayKernelPerfStates.c)
 *     DisplayKernelIdleStates @ 0x1C00040E4 (DisplayKernelIdleStates.c)
 *     ConnectHwpInterrupt @ 0x1C0006770 (ConnectHwpInterrupt.c)
 *     SetGV3PerfStateAndTurbo @ 0x1C00075A0 (SetGV3PerfStateAndTurbo.c)
 *     SetTurboDisablePolicy @ 0x1C00077B0 (SetTurboDisablePolicy.c)
 *     GetProcessorStatusInfo @ 0x1C000B260 (GetProcessorStatusInfo.c)
 *     AcpiNotifyCallback @ 0x1C000B990 (AcpiNotifyCallback.c)
 *     AcpiOSCNotifyWorker @ 0x1C000BB20 (AcpiOSCNotifyWorker.c)
 *     Display_CPC @ 0x1C000BB80 (Display_CPC.c)
 *     Display_CSD @ 0x1C000BD48 (Display_CSD.c)
 *     Display_LPI @ 0x1C000C058 (Display_LPI.c)
 *     Display_TSS @ 0x1C000C49C (Display_TSS.c)
 *     UpdateKernelPlatformStates @ 0x1C000E52C (UpdateKernelPlatformStates.c)
 *     AcpiEval_PPC @ 0x1C00213A0 (AcpiEval_PPC.c)
 *     InitAcpiCpc @ 0x1C00220D8 (InitAcpiCpc.c)
 *     InitAcpiIdleDomain @ 0x1C00222C0 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C0022358 (InitAcpiPerfDomain.c)
 *     InitAcpi2CStates @ 0x1C00224DC (InitAcpi2CStates.c)
 *     ValidateAcpiCStates @ 0x1C0022558 (ValidateAcpiCStates.c)
 *     InitAcpiPerfStates @ 0x1C00225FC (InitAcpiPerfStates.c)
 *     QueryPepCapabilites @ 0x1C002294C (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x1C0022ACC (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C0022B4C (InitAcpiLpiStates.c)
 *     ProcLibDeviceStart @ 0x1C0022D64 (ProcLibDeviceStart.c)
 *     InitAcpi3ThrottleStates @ 0x1C0023710 (InitAcpi3ThrottleStates.c)
 *     AcpiEval_CSD @ 0x1C0023BF0 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C0023D60 (AcpiEval_CPC.c)
 *     AcpiEval_CST @ 0x1C0024228 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C0024514 (AcpiEval_PSS.c)
 *     AcpiParseCore @ 0x1C00247A4 (AcpiParseCore.c)
 *     AcpiEval_TSS @ 0x1C00248D4 (AcpiEval_TSS.c)
 *     RegisterXsdDomain @ 0x1C0024F40 (RegisterXsdDomain.c)
 *     InitPerfStatesInternal @ 0x1C0025BB0 (InitPerfStatesInternal.c)
 *     RegisterIdleComplete @ 0x1C00267F4 (RegisterIdleComplete.c)
 *     DecodeMWaitIdleState @ 0x1C0027500 (DecodeMWaitIdleState.c)
 *     AcpiParseRegister @ 0x1C0027840 (AcpiParseRegister.c)
 *     CpcConnectNativeInterrupt @ 0x1C002E910 (CpcConnectNativeInterrupt.c)
 *     ValidateLpiState @ 0x1C002FFB0 (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x1C0030278 (ValidatePccEntry.c)
 *     ValidatePccHeader @ 0x1C0030350 (ValidatePccHeader.c)
 *     AcpiCStateNotifyWorker @ 0x1C00329C0 (AcpiCStateNotifyWorker.c)
 *     AcpiEval_PCCP @ 0x1C0032C5C (AcpiEval_PCCP.c)
 *     AcpiEval_TPC @ 0x1C0032F6C (AcpiEval_TPC.c)
 *     AcpiEval_XPSS @ 0x1C00330CC (AcpiEval_XPSS.c)
 *     AcpiPStateNotifyWorker @ 0x1C0033730 (AcpiPStateNotifyWorker.c)
 *     AcpiParseRegisterOrQword @ 0x1C00342E0 (AcpiParseRegisterOrQword.c)
 *     AcpiParseULong64 @ 0x1C0034400 (AcpiParseULong64.c)
 *     AcpiTStateNotifyWorker @ 0x1C0034490 (AcpiTStateNotifyWorker.c)
 *     InitAcpiThrottleDomain @ 0x1C00348A8 (InitAcpiThrottleDomain.c)
 *     InitCpcStatesInternal @ 0x1C0035000 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0036570 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0037A50 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C00380AC (RegisterKernelPlatformStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0039490 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0039768 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     InitPepPerfStates @ 0x1C003A37C (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C003AED0 (PepUpdatePerformanceConstraintWorker.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C003B588 (LpiTranslateCoordinatedIdleStates.c)
 *     ProcLibGlobalInit @ 0x1C003C8F0 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5)
{
  unsigned __int64 v7; // rdi
  unsigned int v9; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-28h]

  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v12, 0LL);
}
