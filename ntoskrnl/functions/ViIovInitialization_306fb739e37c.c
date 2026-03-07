void ViIovInitialization()
{
  _QWORD *Pool2; // rax
  __int64 v1; // rcx

  ExSetPoolFlags(0x10u);
  if ( !VfIrpDatabaseInitialized )
  {
    ViIrpDatabaseLock = 0;
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 0x2000uLL, 0x74546F49u);
    ViIrpDatabase = Pool2;
    if ( Pool2 )
    {
      v1 = 256LL;
      do
      {
        Pool2[1] = Pool2;
        *Pool2 = Pool2;
        Pool2 += 2;
        --v1;
      }
      while ( v1 );
      ViIrpDatabaseAddressRanges = (__int64)Pool2;
      _InterlockedExchange(&VfIrpDatabaseInitialized, 1);
    }
  }
  if ( (VfRuleClasses & 0x400000) == 0 )
    VfWdInit();
  if ( !ViSessionDataInitialized )
  {
    ExInitializeNPagedLookasideListInternal(
      (__int64)&ViSessionDataLookaside,
      0LL,
      (void (__stdcall *)(PVOID))VfUtilFreePoolDispatchLevel,
      512,
      2600,
      1936749129,
      16,
      VfInitializedWithoutReboot);
    _InterlockedExchange(&ViSessionDataInitialized, 1);
  }
  if ( !ViPacketLookasideInitialized )
  {
    ExInitializeNPagedLookasideListInternal(
      (__int64)&ViPacketLookaside,
      0LL,
      (void (__stdcall *)(PVOID))VfUtilFreePoolCheckIRQL,
      512,
      256,
      1953526345,
      16,
      VfInitializedWithoutReboot);
    ViPacketLookasideInitialized = 1;
  }
  if ( !ViIsIrpCallDriverDataInitialized )
  {
    ExInitializeNPagedLookasideListInternal(
      (__int64)&ViIrpCallDriverDataList,
      0LL,
      (void (__stdcall *)(PVOID))VfUtilFreePoolCheckIRQL,
      512,
      192,
      1131442761,
      16,
      VfInitializedWithoutReboot);
    ViIsIrpCallDriverDataInitialized = 1;
  }
  VfMajorRegisterHandlers(
    0x1Bu,
    (__int64)VfPnpDumpIrpStack,
    (__int64)VfPnpVerifyNewRequest,
    (__int64)VfPnpVerifyIrpStackDownward,
    (__int64)VfPnpVerifyIrpStackUpward,
    (__int64)VfPnpIsSystemRestrictedIrp,
    (__int64)VfPnpAdvanceIrpStatus,
    0LL,
    0LL,
    0LL,
    0LL,
    (__int64)VfPnpTestStartedPdoStack,
    0LL);
  VfMajorRegisterHandlers(
    0x16u,
    (__int64)VfPowerDumpIrpStack,
    (__int64)VfPowerVerifyNewRequest,
    (__int64)VfPowerVerifyIrpStackDownward,
    (__int64)VfPowerVerifyIrpStackUpward,
    (__int64)VfPowerIsSystemRestrictedIrp,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    (__int64)VfPowerTestStartedPdoStack,
    0LL);
  VfMajorRegisterHandlers(
    0x17u,
    (__int64)VfWmiDumpIrpStack,
    (__int64)VfWmiVerifyNewRequest,
    (__int64)VfWmiVerifyIrpStackDownward,
    (__int64)VfWmiVerifyIrpStackUpward,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    (__int64)VfWmiTestStartedPdoStack,
    0LL);
  VfMajorRegisterHandlers(
    0xFFu,
    (__int64)ViGenericDumpIrpStack,
    (__int64)ViGenericVerifyNewRequest,
    (__int64)ViGenericVerifyIrpStackDownward,
    (__int64)ViGenericVerifyIrpStackUpward,
    0LL,
    0LL,
    (__int64)ViGenericIsValidIrpStatus,
    (__int64)ViGenericIsNewRequest,
    (__int64)ViGenericVerifyNewIrp,
    (__int64)ViGenericVerifyNewRequest,
    0LL,
    (__int64)ViGenericBuildIrpLogEntry);
  if ( !ViRemLockInitialized )
  {
    if ( (int)VfAvlInitializeTree(&ViRemLockAvl, 32LL, 136LL, (RTL_AVL_FREE_ROUTINE *)ViRemLockDelayFreeAvlNode) < 0 )
      _InterlockedExchange(&ViRemLockAllocationFailures, 1);
    else
      _InterlockedExchange(&ViRemLockInitialized, 1);
  }
  if ( !ViDevObjInitialized )
  {
    if ( (int)VfAvlInitializeTree(ViDevObjAvl, 336LL, 24LL, (RTL_AVL_FREE_ROUTINE *)ViRemLockDelayFreeAvlNode) < 0 )
      _InterlockedExchange(&ViDevObjAllocationFailures, 1);
    else
      _InterlockedExchange(&ViDevObjInitialized, 1);
  }
  if ( !ViIoCallbacksInitialized )
  {
    ExInitializeNPagedLookasideListInternal(
      (__int64)&ViIoCallbackStateLookaside,
      0LL,
      (void (__stdcall *)(PVOID))VfUtilFreePoolCheckIRQL,
      512,
      8,
      1330202198,
      16,
      VfInitializedWithoutReboot);
    _InterlockedExchange(&ViIoCallbacksInitialized, 1);
  }
  IovUtilVerifierEnabled = 1;
  IoVerifierInit(MmVerifierData);
}
