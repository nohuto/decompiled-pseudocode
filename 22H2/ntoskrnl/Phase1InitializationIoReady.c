/*
 * XREFs of Phase1InitializationIoReady @ 0x140A4C104
 * Callers:
 *     Phase1Initialization @ 0x1407B3EE0 (Phase1Initialization.c)
 * Callees:
 *     ExNotifyCallback @ 0x140307D90 (ExNotifyCallback.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1403B4040 (RtlpInitializeNonVolatileFlush.c)
 *     InbvSetProgressBarSubset @ 0x1403B40C4 (InbvSetProgressBarSubset.c)
 *     ExLogTimeZoneInformation @ 0x1403B443C (ExLogTimeZoneInformation.c)
 *     FsRtlInitSystem2 @ 0x1403F01EC (FsRtlInitSystem2.c)
 *     KeBugCheck @ 0x1403FD550 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     VfClearVerifierSettings @ 0x1405A0220 (VfClearVerifierSettings.c)
 *     ExQueryBootEntropyInformation @ 0x14079EFC4 (ExQueryBootEntropyInformation.c)
 *     ExInitLicenseData @ 0x1407AB138 (ExInitLicenseData.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C6060 (VfNotifyVerifierOfEvent.c)
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 *     BootApplicationPersistentDataProcess @ 0x140A405AC (BootApplicationPersistentDataProcess.c)
 *     EmInitSystem @ 0x140A4528C (EmInitSystem.c)
 *     VmInitSystem @ 0x140A47B1C (VmInitSystem.c)
 *     CmInitSystem2 @ 0x140A4B3D4 (CmInitSystem2.c)
 *     SmInitSystem @ 0x140A4B43C (SmInitSystem.c)
 *     SaveNodeDistanceInformation @ 0x140A4B6F0 (SaveNodeDistanceInformation.c)
 *     KeInitializeClock @ 0x140A4B7CC (KeInitializeClock.c)
 *     MmInitSystemDll @ 0x140A4B9EC (MmInitSystemDll.c)
 *     SeRmInitPhase1 @ 0x140A4BA3C (SeRmInitPhase1.c)
 *     StartFirstUserProcess @ 0x140A4BB74 (StartFirstUserProcess.c)
 *     PsInitSystem @ 0x140A4C2F8 (PsInitSystem.c)
 *     KeInitSystem @ 0x140A4C33C (KeInitSystem.c)
 *     MmInitSystem @ 0x140A53D6C (MmInitSystem.c)
 *     InitSafeBoot @ 0x140A8C3D0 (InitSafeBoot.c)
 *     ExInitTraceLogging @ 0x140A94604 (ExInitTraceLogging.c)
 */

__int64 __fastcall Phase1InitializationIoReady(__int64 a1, char a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int inited; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax

  RtlpInitializeNonVolatileFlush();
  LOBYTE(v4) = CmStateSeparationEnabled != 0;
  v5 = ExpInitializeStateSeparationPhase1(v4);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  CmInitSystem2();
  inited = EmInitSystem(1, a1);
  if ( inited < 0 )
    KeBugCheckEx(0x32u, inited, 8uLL, 1uLL, 0LL);
  TmInitSystemPhase2();
  InbvSetProgressBarSubset();
  if ( InitSafeBootMode )
  {
    LOBYTE(v7) = a2;
    InitSafeBoot(v7);
  }
  SmInitSystem(2);
  VmInitSystem(2, v8);
  MmInitSystem(2LL, a1);
  SaveNodeDistanceInformation();
  if ( !PoInitSystem(3, a1) )
    KeBugCheck(0xA0u);
  KeInitializeClock(2uLL, a1);
  KeInitSystem(3LL);
  ExInitTraceLogging();
  ExLogTimeZoneInformation(v10, v9);
  ExInitLicenseData(v12, v11);
  if ( !(unsigned __int8)PsInitSystem(2LL, a1) )
    goto LABEL_21;
  MmInitSystemDll();
  if ( !SeRmInitPhase1() )
    KeBugCheck(0x6Cu);
  BootApplicationPersistentDataProcess(2LL);
  if ( !(unsigned __int8)PsInitSystem(3LL, a1) )
LABEL_21:
    KeBugCheck(0x6Bu);
  FsRtlInitSystem2();
  StartFirstUserProcess();
  LODWORD(InitializationPhase) = InitializationPhase + 1;
  ExNotifyCallback(ExCbPhase1InitComplete, 0LL, 0LL);
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(5);
  if ( VfClearanceFlag )
    VfClearVerifierSettings();
  ExQueryBootEntropyInformation(0LL);
  result = KeInitSystem(4LL);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  return result;
}
