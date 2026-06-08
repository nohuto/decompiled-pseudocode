/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0001FD0
 * Callers:
 *     AcpiNotifyCallback @ 0x1C0001D00 (AcpiNotifyCallback.c)
 *     EvtDeviceD0Entry @ 0x1C00038A0 (EvtDeviceD0Entry.c)
 *     GetProcessorStatusInfo @ 0x1C0004FD0 (GetProcessorStatusInfo.c)
 *     AcpiOSCNotifyWorker @ 0x1C00058A0 (AcpiOSCNotifyWorker.c)
 *     Display_CPC @ 0x1C0005BBC (Display_CPC.c)
 *     Display_CSD @ 0x1C0005D84 (Display_CSD.c)
 *     Display_CST @ 0x1C0006094 (Display_CST.c)
 *     Display_LPI @ 0x1C0006330 (Display_LPI.c)
 *     Display_PCT_PTC @ 0x1C0006774 (Display_PCT_PTC.c)
 *     Display_PSS @ 0x1C00068E0 (Display_PSS.c)
 *     Display_TSS @ 0x1C0006BD8 (Display_TSS.c)
 *     Display_xSD @ 0x1C0006E8C (Display_xSD.c)
 *     DisplayKernelIdleStates @ 0x1C0008290 (DisplayKernelIdleStates.c)
 *     DisplayKernelPerfStates @ 0x1C000840C (DisplayKernelPerfStates.c)
 *     DisplayPPMFlags @ 0x1C0008558 (DisplayPPMFlags.c)
 *     UpdateKernelPlatformStates @ 0x1C000B38C (UpdateKernelPlatformStates.c)
 *     DecodeMWaitIdleState @ 0x1C001FC80 (DecodeMWaitIdleState.c)
 *     CpcConnectNativeInterrupt @ 0x1C0021714 (CpcConnectNativeInterrupt.c)
 *     InitAcpiCpc @ 0x1C0021EB8 (InitAcpiCpc.c)
 *     AcpiCStateNotifyWorker @ 0x1C0024710 (AcpiCStateNotifyWorker.c)
 *     AcpiEval_CPC @ 0x1C00249AC (AcpiEval_CPC.c)
 *     AcpiEval_CSD @ 0x1C00250B0 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C00253C8 (AcpiEval_CST.c)
 *     AcpiEval_PCCP @ 0x1C00258E0 (AcpiEval_PCCP.c)
 *     AcpiEval_PPC @ 0x1C0025DEC (AcpiEval_PPC.c)
 *     AcpiEval_PSS @ 0x1C00262C4 (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x1C002668C (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x1C00267EC (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C0026AFC (AcpiEval_XPSS.c)
 *     AcpiPStateNotifyWorker @ 0x1C0027310 (AcpiPStateNotifyWorker.c)
 *     AcpiParseCore @ 0x1C0027514 (AcpiParseCore.c)
 *     AcpiParseRegister @ 0x1C0028160 (AcpiParseRegister.c)
 *     AcpiParseRegisterOrQword @ 0x1C0028220 (AcpiParseRegisterOrQword.c)
 *     AcpiParseULong64 @ 0x1C0028360 (AcpiParseULong64.c)
 *     AcpiTStateNotifyWorker @ 0x1C00283F0 (AcpiTStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x1C0028EB0 (ProcLibDeviceStart.c)
 *     InitAcpiIdleDomain @ 0x1C002A0EC (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C002A254 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C002A4D4 (InitAcpiThrottleDomain.c)
 *     RegisterXsdDomain @ 0x1C002A624 (RegisterXsdDomain.c)
 *     ValidateAcpiCStates @ 0x1C002ACAC (ValidateAcpiCStates.c)
 *     ValidateLpiState @ 0x1C002BA78 (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x1C002BD40 (ValidatePccEntry.c)
 *     ValidatePccHeader @ 0x1C002BE18 (ValidatePccHeader.c)
 *     InitCpcStatesInternal @ 0x1C002D198 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002E704 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C002EAC0 (InitPerfStatesInternal.c)
 *     RegisterIdleComplete @ 0x1C002F398 (RegisterIdleComplete.c)
 *     RegisterKernelPepPerf @ 0x1C00308F0 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C0030FB4 (RegisterKernelPlatformStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C0031AA4 (InitAcpi3ThrottleStates.c)
 *     InitAcpiPerfStates @ 0x1C0031BE8 (InitAcpiPerfStates.c)
 *     InitAcpi2CStates @ 0x1C0032404 (InitAcpi2CStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C00330C8 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C003338C (PepNotifyQueryProcessorIdleStatesV2.c)
 *     InitPepPerfStates @ 0x1C0034860 (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C0035390 (PepUpdatePerformanceConstraintWorker.c)
 *     QueryPepCapabilites @ 0x1C00359B0 (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x1C0035DB4 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C0035FE0 (InitAcpiLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C0036620 (LpiTranslateCoordinatedIdleStates.c)
 *     ProcLibGlobalInit @ 0x1C003778C (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
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
