/*
 * XREFs of Phase1InitializationIoReady @ 0x140B42D0C
 * Callers:
 *     Phase1Initialization @ 0x14080E810 (Phase1Initialization.c)
 * Callees:
 *     ExNotifyCallback @ 0x1402D2F00 (ExNotifyCallback.c)
 *     MmEncodeExportSection @ 0x14035D5C0 (MmEncodeExportSection.c)
 *     InbvSetProgressBarSubset @ 0x14037FD30 (InbvSetProgressBarSubset.c)
 *     ExLogTimeZoneInformation @ 0x1403AB740 (ExLogTimeZoneInformation.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1403B0730 (RtlpInitializeNonVolatileFlush.c)
 *     Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabledDeviceUsage @ 0x140409A2C (Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabledDeviceUsage.c)
 *     KeBugCheck @ 0x140415FE0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     FsRtlInitSystem2 @ 0x14053A440 (FsRtlInitSystem2.c)
 *     VfClearVerifierSettings @ 0x1405CB9FC (VfClearVerifierSettings.c)
 *     CarInitLogging @ 0x1405D0E40 (CarInitLogging.c)
 *     CarReportUnusualShutdown @ 0x1405D2190 (CarReportUnusualShutdown.c)
 *     ExQueryBootEntropyInformation @ 0x14080F120 (ExQueryBootEntropyInformation.c)
 *     ExInitializeNls @ 0x14080F164 (ExInitializeNls.c)
 *     ExInitLicenseData @ 0x140819CE8 (ExInitLicenseData.c)
 *     VfNotifyVerifierOfEvent @ 0x140ABF120 (VfNotifyVerifierOfEvent.c)
 *     MmInitSystem @ 0x140B393A4 (MmInitSystem.c)
 *     CcInitializeCacheManager @ 0x140B3EB44 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140B403CC (ObInitSystem.c)
 *     SmInitSystem @ 0x140B427B4 (SmInitSystem.c)
 *     PsInitSystem @ 0x140B42F74 (PsInitSystem.c)
 *     KeInitSystem @ 0x140B42FB8 (KeInitSystem.c)
 *     VmInitSystem @ 0x140B43DDC (VmInitSystem.c)
 *     BootApplicationPersistentDataProcess @ 0x140B44538 (BootApplicationPersistentDataProcess.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 *     EmInitSystem @ 0x140B4CBA8 (EmInitSystem.c)
 *     CmInitSystem2 @ 0x140B54728 (CmInitSystem2.c)
 *     SeRmInitPhase1 @ 0x140B614EC (SeRmInitPhase1.c)
 *     StartFirstUserProcess @ 0x140B662B4 (StartFirstUserProcess.c)
 *     SaveNodeDistanceInformation @ 0x140B66ACC (SaveNodeDistanceInformation.c)
 *     KeInitializeClock @ 0x140B67BE8 (KeInitializeClock.c)
 *     MmInitSystemDll @ 0x140B720A8 (MmInitSystemDll.c)
 *     InitSafeBoot @ 0x140B8D8D4 (InitSafeBoot.c)
 *     PfInitializeTraceLogging @ 0x140B93160 (PfInitializeTraceLogging.c)
 *     ExInitTraceLogging @ 0x140B94C64 (ExInitTraceLogging.c)
 */

__int64 __fastcall Phase1InitializationIoReady(ULONG_PTR a1, char a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  int inited; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 result; // rax

  RtlpInitializeNonVolatileFlush();
  v4 = ExInitializeNls();
  if ( v4 < 0 )
    KeBugCheckEx(0x32u, v4, 7uLL, 0LL, 0LL);
  LOBYTE(v5) = CmStateSeparationEnabled != 0;
  v6 = ExpInitializeStateSeparationPhase1(v5);
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  CmInitSystem2();
  inited = EmInitSystem(1LL, a1);
  if ( inited < 0 )
    KeBugCheckEx(0x32u, inited, 8uLL, 1uLL, 0LL);
  TmInitSystemPhase2();
  InbvSetProgressBarSubset();
  if ( (_DWORD)InitSafeBootMode )
  {
    LOBYTE(v8) = a2;
    InitSafeBoot(v8);
  }
  PfInitializeTraceLogging();
  SmInitSystem(2);
  VmInitSystem(2LL);
  MmInitSystem(2LL, a1, v9);
  if ( (unsigned int)Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabledDeviceUsage() )
    CcInitializeCacheManager(2);
  ObInitSystem(2);
  SaveNodeDistanceInformation();
  if ( !(unsigned __int8)PoInitSystem(3LL, a1) )
    KeBugCheck(0xA0u);
  KeInitializeClock(2uLL);
  KeInitSystem(3LL);
  ExInitTraceLogging();
  ExLogTimeZoneInformation();
  ExInitLicenseData();
  if ( !(unsigned __int8)PsInitSystem(2LL, a1) )
    goto LABEL_28;
  MmInitSystemDll();
  if ( !(unsigned __int8)SeRmInitPhase1() )
    KeBugCheck(0x6Cu);
  BootApplicationPersistentDataProcess(2LL);
  if ( !(unsigned __int8)PsInitSystem(3LL, a1) )
LABEL_28:
    KeBugCheck(0x6Bu);
  MmEncodeExportSection();
  FsRtlInitSystem2();
  StartFirstUserProcess();
  LODWORD(InitializationPhase) = InitializationPhase + 1;
  ExNotifyCallback(ExCbPhase1InitComplete, 0LL, 0LL);
  if ( ViVerifierEnabled )
  {
    CarInitLogging();
    VfNotifyVerifierOfEvent(5);
  }
  if ( VfClearanceFlag )
    VfClearVerifierSettings();
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 2) == 0 && !(_DWORD)InitSafeBootMode )
    CarReportUnusualShutdown();
  ExQueryBootEntropyInformation(0LL);
  result = KeInitSystem(4LL);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  return result;
}
