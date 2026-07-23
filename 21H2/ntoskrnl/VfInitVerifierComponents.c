/*
 * XREFs of VfInitVerifierComponents @ 0x1409C7E70
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1409C7D40 (VfInitSystemNoRebootNeeded.c)
 *     VfInitBootDriversLoaded @ 0x140A4FD74 (VfInitBootDriversLoaded.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140346E30 (ExAllocatePoolWithTagPriority.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     VfAvlInitializeTree @ 0x1405A281C (VfAvlInitializeTree.c)
 *     ExSetPoolFlags @ 0x1405B3E08 (ExSetPoolFlags.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     VfHalVerifierInitialize @ 0x1409CD708 (VfHalVerifierInitialize.c)
 *     VfPendingCheckForChanges @ 0x1409D66EC (VfPendingCheckForChanges.c)
 *     VfMajorRegisterHandlers @ 0x1409D8B5C (VfMajorRegisterHandlers.c)
 *     VfKeCheckForChanges @ 0x1409DCCF8 (VfKeCheckForChanges.c)
 *     ViFaultsInitializeAppsList @ 0x1409DDFD0 (ViFaultsInitializeAppsList.c)
 *     ViFaultsInitializeTagsList @ 0x1409DE0A4 (ViFaultsInitializeTagsList.c)
 *     VfDeadlockInitialize @ 0x1409DEEE0 (VfDeadlockInitialize.c)
 *     VfPoolInitPhase0 @ 0x1409E1190 (VfPoolInitPhase0.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x1409E1440 (VfSettingsApplyMiscellaneousChecks.c)
 *     ViSettingsIoCheckForChanges @ 0x1409E1600 (ViSettingsIoCheckForChanges.c)
 *     VfIrpDatabaseInit @ 0x1409E1AC4 (VfIrpDatabaseInit.c)
 *     VfWdInit @ 0x1409E1C28 (VfWdInit.c)
 *     VfCtxInit @ 0x1409E516C (VfCtxInit.c)
 */

__int64 __fastcall VfInitVerifierComponents(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rax
  bool v7; // sf
  volatile __int32 *v8; // rcx
  volatile __int32 *v9; // rcx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  _DWORD *PoolWithTag; // rax
  _QWORD *v15; // rax
  volatile __int32 *v16; // rcx
  volatile __int32 *v17; // rcx
  __int64 result; // rax
  __int16 v19; // [rsp+30h] [rbp-68h]
  int v20; // [rsp+30h] [rbp-68h]
  int v21; // [rsp+30h] [rbp-68h]
  int v22; // [rsp+30h] [rbp-68h]

  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 0x10) != 0 || (VfFlightOptions & 9) != 0 )
    ExSetPoolFlags(0x10u);
  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 0x10) != 0 )
    VfIrpDatabaseInit();
  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 0x10) != 0 )
    VfWdInit();
  VfKeCheckForChanges(a1);
  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 0x10) != 0 )
    ViSettingsIoCheckForChanges(a1);
  if ( (a1 & 8) != 0 )
    MmTrackLockedPages = 1;
  VfPendingCheckForChanges(a1);
  VfPoolInitPhase0();
  v6 = (unsigned int)ViFaultTracesLength;
  ViRequiredTimeSinceBootInMsecs = 60000LL * (unsigned int)VfFaultInjectionBootMinutes;
  ViFaultInjectionLock = 0LL;
  if ( (unsigned int)ViFaultTracesLength > 0x101000 )
  {
    v6 = 1052672LL;
    ViFaultTracesLength = 1052672;
  }
  ViFaultTraces = (__int64)ExAllocatePoolWithTagPriority(NonPagedPoolNx, 72 * v6, 0x74746C46u, HighPoolPriority);
  ViFaultsInitializeTagsList();
  ViFaultsInitializeAppsList();
  ViFaultsInitialized = 1;
  v7 = (int)VfAvlInitializeTree(
              &ViLookasideAvl,
              96LL,
              0LL,
              (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))ViRemLockDelayFreeAvlNode) < 0;
  v8 = &ViLookasideInitialized;
  if ( v7 )
    v8 = &ViLookasideAllocationFailures;
  _InterlockedExchange(v8, 1);
  v19 = 16;
  pXdvExInitializeNPagedLookasideList(
    (int)&ViSessionDataLookaside,
    0,
    (int)VfUtilFreePoolDispatchLevel,
    512,
    2600LL,
    1936749129,
    v19,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  _InterlockedExchange(&ViSessionDataInitialized, 1);
  LOWORD(v20) = 16;
  pXdvExInitializeNPagedLookasideList(
    (int)&ViPacketLookaside,
    0,
    (int)VfUtilFreePoolCheckIRQL,
    512,
    256LL,
    1953526345,
    v20,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  v7 = (int)VfAvlInitializeTree(
              &ViResourceAvl,
              104LL,
              0LL,
              (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))ViRemLockDelayFreeAvlNode) < 0;
  v9 = &ViResourceInitialized;
  if ( v7 )
    v9 = &ViResourceNotTracked;
  _InterlockedExchange(v9, 1);
  LOWORD(v21) = 16;
  pXdvExInitializeNPagedLookasideList(
    (int)&ViIrpCallDriverDataList,
    0,
    (int)VfUtilFreePoolCheckIRQL,
    512,
    192LL,
    1131442761,
    v21,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  memset(&ViMajorVerifierRoutines, 0, 0xB40uLL);
  LOBYTE(v10) = 27;
  VfMajorRegisterHandlers(
    v10,
    (unsigned int)VfPnpDumpIrpStack,
    (unsigned int)VfPnpVerifyNewRequest,
    (unsigned int)VfPnpVerifyIrpStackDownward,
    (__int64)VfPnpVerifyIrpStackUpward,
    (__int64)VfPnpIsSystemRestrictedIrp,
    (__int64)VfPnpAdvanceIrpStatus,
    0LL,
    0LL,
    0LL,
    0LL,
    (__int64)VfPnpTestStartedPdoStack,
    0LL);
  LOBYTE(v11) = 22;
  VfMajorRegisterHandlers(
    v11,
    (unsigned int)VfPowerDumpIrpStack,
    (unsigned int)VfPowerVerifyNewRequest,
    (unsigned int)VfPowerVerifyIrpStackDownward,
    (__int64)VfPowerVerifyIrpStackUpward,
    (__int64)VfPowerIsSystemRestrictedIrp,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    (__int64)VfPowerTestStartedPdoStack,
    0LL);
  LOBYTE(v12) = 23;
  VfMajorRegisterHandlers(
    v12,
    (unsigned int)VfWmiDumpIrpStack,
    (unsigned int)VfWmiVerifyNewRequest,
    (unsigned int)VfWmiVerifyIrpStackDownward,
    (__int64)VfWmiVerifyIrpStackUpward,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    (__int64)VfWmiTestStartedPdoStack,
    0LL);
  LOBYTE(v13) = -1;
  VfMajorRegisterHandlers(
    v13,
    (unsigned int)ViGenericDumpIrpStack,
    (unsigned int)ViGenericVerifyNewRequest,
    (unsigned int)ViGenericVerifyIrpStackDownward,
    (__int64)ViGenericVerifyIrpStackUpward,
    0LL,
    0LL,
    (__int64)ViGenericIsValidIrpStatus,
    (__int64)ViGenericIsNewRequest,
    (__int64)ViGenericVerifyNewIrp,
    (__int64)ViGenericVerifyNewRequest,
    0LL,
    (__int64)ViGenericBuildIrpLogEntry);
  VfHalVerifierInitialize();
  ViIrpLogDatabaseLock = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x64496656u);
  ViIrpLogDatabase = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    v15 = PoolWithTag + 2;
    v15[1] = v15;
    *v15 = v15;
  }
  ViDdiInitialized = 1;
  v7 = (int)VfAvlInitializeTree(
              &ViRemLockAvl,
              32LL,
              136LL,
              (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))ViRemLockDelayFreeAvlNode) < 0;
  v16 = &ViRemLockInitialized;
  if ( v7 )
    v16 = &ViRemLockAllocationFailures;
  _InterlockedExchange(v16, 1);
  v7 = (int)VfAvlInitializeTree(
              &ViDevObjAvl,
              336LL,
              24LL,
              (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))ViRemLockDelayFreeAvlNode) < 0;
  v17 = &ViDevObjInitialized;
  if ( v7 )
    v17 = &ViDevObjAllocationFailures;
  _InterlockedExchange(v17, 1);
  LOWORD(v22) = 16;
  pXdvExInitializeNPagedLookasideList(
    (int)&ViIoCallbackStateLookaside,
    0,
    (int)VfUtilFreePoolCheckIRQL,
    512,
    8LL,
    1330202198,
    v22,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  _InterlockedExchange(&ViIoCallbacksInitialized, 1);
  VfCtxInit();
  VfDeadlockInitialize(a2, a3);
  VfSettingsApplyMiscellaneousChecks(a1);
  result = (unsigned int)MmVerifierData;
  IovUtilVerifierEnabled = 1;
  if ( (MmVerifierData & 0x10) != 0 )
    PpvUtilVerifierEnabled = 1;
  ViVerifierEnabled = 1;
  return result;
}
