/*
 * XREFs of CmInitSystem1 @ 0x140A59F78
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021CC10 (ExInitializeResourceLite.c)
 *     HalSystemVectorDispatchEntry @ 0x1402526A0 (HalSystemVectorDispatchEntry.c)
 *     ExInitializePushLock @ 0x140341EF0 (ExInitializePushLock.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     KeInitializeGuardedMutex @ 0x1403609E0 (KeInitializeGuardedMutex.c)
 *     CmpInitializeLoadOptions @ 0x1403B7680 (CmpInitializeLoadOptions.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwCreateKey @ 0x1403F9DC0 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpAddToHiveFileList @ 0x1406A1CFC (CmpAddToHiveFileList.c)
 *     CmpCleanupParseContext @ 0x1406CE840 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x1406CEA10 (ObOpenObjectByName.c)
 *     CmpHashUnicodeComponent @ 0x1406E3014 (CmpHashUnicodeComponent.c)
 *     CmpInitializeParseContext @ 0x1406E89A8 (CmpInitializeParseContext.c)
 *     CmpLockRegistryExclusive @ 0x1406EB57C (CmpLockRegistryExclusive.c)
 *     CmpLinkHiveToMaster @ 0x14071D600 (CmpLinkHiveToMaster.c)
 *     CmpCreateHive @ 0x14071D9E8 (CmpCreateHive.c)
 *     CmpInitializeKcbCache @ 0x140720298 (CmpInitializeKcbCache.c)
 *     CmpInitializeRegistryProcess @ 0x140799280 (CmpInitializeRegistryProcess.c)
 *     CmpInitializeFreezeThaw @ 0x1407A5978 (CmpInitializeFreezeThaw.c)
 *     HvInitializeHashLibrary @ 0x1407A59B0 (HvInitializeHashLibrary.c)
 *     CmpValidateGlobalFlushControlFlags @ 0x1407A59F4 (CmpValidateGlobalFlushControlFlags.c)
 *     CmpInitializeGlobalKeyLockTracker @ 0x1407A5A14 (CmpInitializeGlobalKeyLockTracker.c)
 *     CmpVolumeManagerInitialize @ 0x1407A5A3C (CmpVolumeManagerInitialize.c)
 *     CmpInitializeLightWeightTransactionType @ 0x1407A5A64 (CmpInitializeLightWeightTransactionType.c)
 *     CmpInitSiloSupport @ 0x1407A5B28 (CmpInitSiloSupport.c)
 *     CmpMarkCurrentProfileDirty @ 0x1407A5BEC (CmpMarkCurrentProfileDirty.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407A74D0 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407A884C (CmpHiveRootSecurityDescriptor.c)
 *     CmpInitializeNameCache @ 0x1407B9710 (CmpInitializeNameCache.c)
 *     CmpInitializeMachineHiveLoadedCallbacks @ 0x1407CB4D8 (CmpInitializeMachineHiveLoadedCallbacks.c)
 *     CmpInitializeDelayedCloseTable @ 0x1407D3214 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitCallbacks @ 0x1407D3A90 (CmpInitCallbacks.c)
 *     CmpInitSIDToHiveMapping @ 0x1407D5534 (CmpInitSIDToHiveMapping.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     CmFcInitSystem2 @ 0x140A38398 (CmFcInitSystem2.c)
 *     CmpInitializeTransactions @ 0x140A57C9C (CmpInitializeTransactions.c)
 *     CmpCreateObjectTypes @ 0x140A57F98 (CmpCreateObjectTypes.c)
 *     CmpCreateControlSet @ 0x140A58080 (CmpCreateControlSet.c)
 *     CmpInitializeDriverStores @ 0x140A5831C (CmpInitializeDriverStores.c)
 *     CmpCreateExtendedControlSets @ 0x140A584D0 (CmpCreateExtendedControlSets.c)
 *     CmpCreateHardwareProfiles @ 0x140A58540 (CmpCreateHardwareProfiles.c)
 *     CmpInitializeHardwareConfiguration @ 0x140A58AB0 (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A58C04 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemValues @ 0x140A59CB0 (CmpSetSystemValues.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x140A59EEC (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpInitializePreloadedHives @ 0x140A5A924 (CmpInitializePreloadedHives.c)
 *     CmpCreateRegistryRoot @ 0x140A5AED4 (CmpCreateRegistryRoot.c)
 *     CmpInitializeRegistryNames @ 0x140A6C314 (CmpInitializeRegistryNames.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140A7199C (CmpInitializeTrustedInstallerSid.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140A723C4 (CmpInitGlobalQuotaAllowed.c)
 *     CmpSetNetworkValue @ 0x140A8EA30 (CmpSetNetworkValue.c)
 *     CmpUpdateStateSeparationHiveOptions @ 0x140A8EB1C (CmpUpdateStateSeparationHiveOptions.c)
 *     CmpInitCmPrivateAlloc @ 0x140A8EB7C (CmpInitCmPrivateAlloc.c)
 */

char __fastcall CmInitSystem1(ULONG_PTR BugCheckParameter3)
{
  int *v2; // rdi
  __int64 v3; // rsi
  int ObjectTypes; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  int Hive; // eax
  int v11; // eax
  __int64 v12; // rax
  int inited; // eax
  ACL *v14; // rdi
  NTSTATUS v15; // eax
  ULONG_PTR v16; // rsi
  NTSTATUS v17; // eax
  ULONG_PTR v18; // rsi
  int v19; // eax
  ULONG_PTR v20; // rsi
  NTSTATUS v21; // eax
  ULONG_PTR v22; // rsi
  int v23; // eax
  int ControlSet; // eax
  int v25; // eax
  ULONG_PTR v26; // rsi
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  struct _LOOKASIDE_LIST_EX *v30; // r9
  NTSTATUS v31; // eax
  int v32; // eax
  int ExtendedControlSets; // eax
  __int64 v34; // rcx
  NTSTATUS v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+70h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v45[3]; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v46[76]; // [rsp+E8h] [rbp-20h] BYREF
  _OWORD BugCheckParameter4[27]; // [rsp+218h] [rbp+110h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v42 = 0LL;
  memset(v46, 0, 0x128uLL);
  DestinationString = 0LL;
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  memset(v45, 0, sizeof(v45));
  CmpInitializeParseContext((__int64)v46);
  CmIoFileObjectType = (__int64)&IoFileObjectType;
  if ( InitIsWinPEMode )
  {
    CmpMiniNTBoot = InitIsWinPEMode;
    BYTE4(NlsMbCodePageTag) = 1;
    CmpForceSynchronousMachineHiveLoad = 1;
  }
  if ( CmpVolatileBoot )
    BYTE4(NlsMbCodePageTag) = 1;
  CmpInitializeRegistryNames();
  CmpInitGlobalQuotaAllowed();
  CmpHiveListHeadLock = 0LL;
  qword_140D2E918 = (__int64)&CmpHiveListHead;
  CmpHiveListHead = (__int64)&CmpHiveListHead;
  CmpLoadHiveLock = 0LL;
  CmpShutdownLock = 0LL;
  ExInitializePushLock(&CmpShutdownRundown);
  CmpActiveHiveRundownEvent = 0LL;
  qword_140C480B8 = (__int64)&CmpAppHiveLoadList;
  CmpAppHiveLoadList = (__int64)&CmpAppHiveLoadList;
  CmpActiveAppHiveUnloadEvent = 0LL;
  CmpAppHiveLoadListLock = 0LL;
  ExInitializeResourceLite((PERESOURCE)&CmpRegistryLock);
  CmpPostLock.Count = 1;
  CmpPostLock.Event.Header.WaitListHead.Blink = &CmpPostLock.Event.Header.WaitListHead;
  CmpPostLock.Event.Header.WaitListHead.Flink = &CmpPostLock.Event.Header.WaitListHead;
  qword_140D2D698 = (__int64)&CmpAsyncKernelPostList;
  CmpAsyncKernelPostList = (__int64)&CmpAsyncKernelPostList;
  CmpWorkerEngineWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpWorkerEngineWorker;
  CmpPostLock.Owner = 0LL;
  CmpPostLock.Contention = 0;
  LOWORD(CmpPostLock.Event.Header.Lock) = 1;
  CmpPostLock.Event.Header.Size = 6;
  CmpPostLock.Event.Header.SignalState = 0;
  CmpWorkerEngineWorkItem.Parameter = 0LL;
  CmpWorkerEngineWorkItem.List.Flink = 0LL;
  KeInitializeGuardedMutex(&CmpWorkerEngineLock);
  CmpWorkerEngineFinishedEvent = 0LL;
  qword_140C48148 = (__int64)&CmpWorkerEngineListHead;
  CmpWorkerEngineListHead = &CmpWorkerEngineListHead;
  CmpInitializeNameCache();
  CmpInitCmPrivateAlloc();
  CmpInitSIDToHiveMapping();
  CmpAdminSystemFileSecurityDescriptor = CmpAdminSystemSecurityDescriptor();
  CmpInitializeTrustedInstallerSid();
  CmpInitializeDelayedCloseTable();
  CmpInitCallbacks();
  CmpInitializeMachineHiveLoadedCallbacks();
  CmpInitializeFreezeThaw();
  HvInitializeHashLibrary();
  CmpValidateGlobalFlushControlFlags();
  CmpInitializeGlobalKeyLockTracker();
  CmpInitializeTransactions();
  CmpVolumeManagerInitialize();
  v2 = dword_140C0154C;
  v3 = 8LL;
  do
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v2 - 3));
    *v2 = CmpHashUnicodeComponent((__m128i *)&DestinationString);
    v2 += 6;
    --v3;
  }
  while ( v3 );
  ObjectTypes = CmpCreateObjectTypes();
  if ( ObjectTypes < 0 )
    KeBugCheckEx(0x67u, 1uLL, 1uLL, ObjectTypes, 0LL);
  v5 = CmpInitializeLightWeightTransactionType();
  if ( v5 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x18uLL, v5, 0LL);
  v6 = CmpInitializeRegistryProcess();
  if ( v6 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x19uLL, v6, 0LL);
  CmpAttachToRegistryProcess((__int64)v45, v7, v8, v9);
  CmpLockRegistryExclusive();
  CmpInitializePreloadedHives(BugCheckParameter3, 0LL);
  Hive = CmpCreateHive(
           (ULONG_PTR *)&CmpMasterHive,
           0,
           1,
           0,
           0LL,
           0LL,
           0LL,
           0x20000,
           0LL,
           0LL,
           0LL,
           (__int64)BugCheckParameter4);
  if ( Hive < 0 )
    KeBugCheckEx(0x67u, 1uLL, 2uLL, Hive, (ULONG_PTR)BugCheckParameter4);
  v11 = CmpInitializeKcbCache(CmpMasterHive, 0x80u);
  if ( v11 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 3uLL, v11, 0LL);
  if ( !(unsigned __int8)CmpCreateRegistryRoot() )
    KeBugCheckEx(0x67u, 1uLL, 4uLL, 0LL, 0LL);
  v12 = HalSystemVectorDispatchEntry();
  inited = CmpInitSiloSupport(v12);
  if ( inited < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, inited, 0LL);
  v14 = CmpHiveRootSecurityDescriptor();
  ObjectAttributes.ObjectName = &CmRegistryMachineName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v14;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v15 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v16 = v15;
  if ( v15 < 0 )
  {
    ExFreePoolWithTag(v14, 0);
    KeBugCheckEx(0x67u, 1uLL, 5uLL, v16, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryUserName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v14;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v17 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v18 = v17;
  if ( v17 < 0 )
  {
    ExFreePoolWithTag(v14, 0);
    KeBugCheckEx(0x67u, 1uLL, 6uLL, v18, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryAppName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v14;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v46[0] = 65;
  v19 = ObOpenObjectByName(
          (__int64)&ObjectAttributes,
          (__int64)CmKeyObjectType,
          0,
          0LL,
          131103,
          (__int64)v46,
          (__int64)&KeyHandle);
  v20 = v19;
  if ( v19 < 0 )
  {
    ExFreePoolWithTag(v14, 0);
    CmpCleanupParseContext((__int64)v46, 0);
    KeBugCheckEx(0x67u, 1uLL, 7uLL, v20, 0LL);
  }
  CmpCleanupParseContext((__int64)v46, 0);
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryContainersName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v14;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v21 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v22 = v21;
  if ( v21 < 0 )
  {
    ExFreePoolWithTag(v14, 0);
    KeBugCheckEx(0x67u, 1uLL, 8uLL, v22, 0LL);
  }
  ZwClose(KeyHandle);
  CmpNoMasterCreates = 1;
  CmpInitializeLoadOptions(BugCheckParameter3);
  v23 = CmpInitializePreloadedHives(BugCheckParameter3, 1LL);
  if ( v23 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x14uLL, v23, 0LL);
  ControlSet = CmpCreateControlSet((__int64)L"SYSTEM", 0);
  if ( ControlSet < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0xDuLL, ControlSet, 0LL);
  if ( CmpLKGEnabled )
    MEMORY[0xFFFFF780000002F0] |= 0x10u;
  if ( CmStateSeparationEnabled )
    CmpUpdateStateSeparationHiveOptions();
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  v25 = CmpCreateHive((ULONG_PTR *)&v42, 0, 1, 0, 0LL, 0LL, 0LL, 0x20000, 0LL, 0LL, 0LL, (__int64)BugCheckParameter4);
  v26 = v25;
  if ( v25 < 0 )
  {
    ExFreePoolWithTag(v14, 0);
    KeBugCheckEx(0x67u, 1uLL, 0x10uLL, v26, (ULONG_PTR)BugCheckParameter4);
  }
  v27 = CmpLinkHiveToMaster(
          (__int64)&CmRegistryMachineHardwareName,
          0LL,
          v42,
          1,
          dword_140C00F28,
          0,
          0LL,
          (__int64)v14,
          0LL,
          0LL,
          1,
          BugCheckParameter4);
  if ( v27 )
    KeBugCheckEx(0x67u, 1uLL, 0x11uLL, v27, 0LL);
  CmpAddToHiveFileList(v42, v28, v29, v30);
  ExFreePoolWithTag(v14, 0);
  qword_140C00F18 = v42;
  v31 = CmpInitializeHardwareConfiguration(BugCheckParameter3);
  if ( v31 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x12uLL, v31, 0LL);
  v32 = CmpInitializeDriverStores(BugCheckParameter3);
  if ( v32 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x13uLL, v32, 0LL);
  ExtendedControlSets = CmpCreateExtendedControlSets(BugCheckParameter3);
  if ( ExtendedControlSets < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1BuLL, ExtendedControlSets, 0LL);
  CmpCreateHardwareProfiles(BugCheckParameter3);
  CmSetInitMachineConfig(BugCheckParameter3);
  CmpUnlockRegistry();
  CmpMarkCurrentProfileDirty(v34);
  v35 = CmpInitializeMachineDependentConfiguration(BugCheckParameter3);
  if ( v35 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x15uLL, v35, 0LL);
  v36 = CmpSetSystemValues(BugCheckParameter3);
  if ( v36 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x16uLL, v36, 0LL);
  CmpMigrateOOBELanguageToInstallationLanguage();
  ExFreePoolWithTag(CmpLoadOptions.Buffer, 0);
  v37 = *(_QWORD *)(BugCheckParameter3 + 240);
  if ( *(_DWORD *)v37 >= 0x68u )
  {
    if ( *(_QWORD *)(v37 + 96) )
    {
      v38 = CmpSetNetworkValue();
      if ( v38 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0x17uLL, v38, 0LL);
    }
  }
  v39 = CmFcInitSystem2();
  if ( v39 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, v39, 0LL);
  CmpDetachFromRegistryProcess((__int64)v45);
  return 1;
}
