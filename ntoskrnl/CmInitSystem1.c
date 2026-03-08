/*
 * XREFs of CmInitSystem1 @ 0x140B51500
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ExInitializeLookasideListExInternal @ 0x1402A8000 (ExInitializeLookasideListExInternal.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x14030FAB0 (ExInitializeResourceLite.c)
 *     CmpInitializeLoadOptions @ 0x140388708 (CmpInitializeLoadOptions.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpLockRegistryExclusive @ 0x1406B6454 (CmpLockRegistryExclusive.c)
 *     CmpInitializeParseContext @ 0x1406BC030 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x1406BD6A8 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x1406C39E0 (ObOpenObjectByName.c)
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 *     CmpLinkHiveToMaster @ 0x140731250 (CmpLinkHiveToMaster.c)
 *     CmpInitializeKcbCache @ 0x14073163C (CmpInitializeKcbCache.c)
 *     CmpAddToHiveFileList @ 0x140732E68 (CmpAddToHiveFileList.c)
 *     CmpHashUnicodeComponent @ 0x1407A480C (CmpHashUnicodeComponent.c)
 *     CmpInitializeDelayedCloseTable @ 0x140812D20 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitCallbacks @ 0x140813390 (CmpInitCallbacks.c)
 *     CmpInitializeMachineHiveLoadedCallbacks @ 0x140813414 (CmpInitializeMachineHiveLoadedCallbacks.c)
 *     CmpInitializeNameCache @ 0x14081347C (CmpInitializeNameCache.c)
 *     CmpInitializeFreezeThaw @ 0x1408134C4 (CmpInitializeFreezeThaw.c)
 *     CmpVolumeManagerInitialize @ 0x1408134FC (CmpVolumeManagerInitialize.c)
 *     CmpInitializeGlobalKeyLockTracker @ 0x140813524 (CmpInitializeGlobalKeyLockTracker.c)
 *     CmpValidateGlobalFlushControlFlags @ 0x14081354C (CmpValidateGlobalFlushControlFlags.c)
 *     CmpInitSIDToHiveMapping @ 0x14081356C (CmpInitSIDToHiveMapping.c)
 *     CmpMarkCurrentProfileDirty @ 0x140814218 (CmpMarkCurrentProfileDirty.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140815AD8 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140816360 (CmpHiveRootSecurityDescriptor.c)
 *     CmpInitSiloSupport @ 0x140816810 (CmpInitSiloSupport.c)
 *     HvInitializeHashLibrary @ 0x140816840 (HvInitializeHashLibrary.c)
 *     CmpInitializeLightWeightTransactionType @ 0x140816960 (CmpInitializeLightWeightTransactionType.c)
 *     CmpInitializeRegistryProcess @ 0x140817300 (CmpInitializeRegistryProcess.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 *     CmpInitializeRegistryNames @ 0x140B50758 (CmpInitializeRegistryNames.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140B50998 (CmpInitGlobalQuotaAllowed.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140B50A80 (CmpInitializeTrustedInstallerSid.c)
 *     CmpCreateHardwareProfiles @ 0x140B50B04 (CmpCreateHardwareProfiles.c)
 *     CmpCreateControlSet @ 0x140B5107C (CmpCreateControlSet.c)
 *     CmpCreateRegistryRoot @ 0x140B5131C (CmpCreateRegistryRoot.c)
 *     CmpInitializePreloadedHives @ 0x140B51BF0 (CmpInitializePreloadedHives.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x140B51CDC (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpCreateExtendedControlSets @ 0x140B51D50 (CmpCreateExtendedControlSets.c)
 *     CmFcInitSystem2 @ 0x140B51DC0 (CmFcInitSystem2.c)
 *     CmpCreateObjectTypes @ 0x140B51E7C (CmpCreateObjectTypes.c)
 *     CmpInitializeHardwareConfiguration @ 0x140B51F64 (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B520BC (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemValues @ 0x140B52A70 (CmpSetSystemValues.c)
 *     CmpInitializeDriverStores @ 0x140B52CE0 (CmpInitializeDriverStores.c)
 *     CmpInitializeTransactions @ 0x140B6D49C (CmpInitializeTransactions.c)
 *     CmpSetNetworkValue @ 0x140B95094 (CmpSetNetworkValue.c)
 *     CmpUpdateStateSeparationHiveOptions @ 0x140B95180 (CmpUpdateStateSeparationHiveOptions.c)
 */

char __fastcall CmInitSystem1(ULONG_PTR BugCheckParameter3)
{
  int *v2; // rdi
  __int64 v3; // rsi
  int ObjectTypes; // eax
  int v5; // eax
  int v6; // eax
  int Hive; // eax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int inited; // eax
  ACL *v12; // rdi
  NTSTATUS v13; // eax
  ULONG_PTR v14; // rsi
  NTSTATUS v15; // eax
  ULONG_PTR v16; // rsi
  int v17; // eax
  ULONG_PTR v18; // rsi
  NTSTATUS v19; // eax
  ULONG_PTR v20; // rsi
  int v21; // eax
  int ControlSet; // eax
  int v23; // eax
  ULONG_PTR v24; // rsi
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int ExtendedControlSets; // eax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  int v35; // eax
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  int v38[2]; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v40; // [rsp+B8h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v42[76]; // [rsp+F8h] [rbp-10h] BYREF
  _OWORD BugCheckParameter4[27]; // [rsp+228h] [rbp+120h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)v38 = 0LL;
  v40 = 0LL;
  memset(v42, 0, 0x128uLL);
  DestinationString = 0LL;
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((__int64)&v40);
  CmpInitializeParseContext((__int64)v42);
  CmIoFileObjectType = (__int64)&IoFileObjectType;
  if ( InitIsWinPEMode )
  {
    CmpMiniNTBoot = InitIsWinPEMode;
    CmpShareSystemHives = 1;
    CmpForceSynchronousMachineHiveLoad = 1;
  }
  if ( CmpVolatileBoot )
    CmpShareSystemHives = 1;
  CmpInitializeRegistryNames();
  CmpInitGlobalQuotaAllowed();
  CmpHiveListHeadLock = 0LL;
  qword_140D54C90 = (__int64)&CmpHiveListHead;
  CmpHiveListHead = (__int64)&CmpHiveListHead;
  qword_140C13D08 = (__int64)&CmpAppHiveLoadList;
  CmpAppHiveLoadList = (__int64)&CmpAppHiveLoadList;
  CmpLoadHiveLock = 0LL;
  CmpShutdownRundown.Count = 0LL;
  CmpHiveLoadUnloadRundown.Count = 0LL;
  CmpActiveHiveRundownEvent = 0LL;
  CmpActiveAppHiveUnloadEvent = 0LL;
  CmpAppHiveLoadListLock = 0LL;
  ExInitializeResourceLite((PERESOURCE)&CmpRegistryLock);
  CmpPostLock.Count = 1;
  CmpPostLock.Event.Header.WaitListHead.Blink = &CmpPostLock.Event.Header.WaitListHead;
  CmpPostLock.Event.Header.WaitListHead.Flink = &CmpPostLock.Event.Header.WaitListHead;
  qword_140D53640 = (__int64)&CmpAsyncKernelPostList;
  CmpAsyncKernelPostList = (__int64)&CmpAsyncKernelPostList;
  CmpPostLock.Owner = 0LL;
  CmpPostLock.Contention = 0;
  LOWORD(CmpPostLock.Event.Header.Lock) = 1;
  CmpPostLock.Event.Header.Size = 6;
  CmpPostLock.Event.Header.SignalState = 0;
  CmpInitializeNameCache();
  ExInitializeLookasideListExInternal(
    &CmpKcbLookaside.L.ListHead,
    (__int64 (__fastcall *)())CmpAllocatePoolLookaside,
    CmSiFreeMemory,
    1,
    0,
    0x138uLL,
    1651199299,
    0,
    0);
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
  v2 = dword_140C02C5C;
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
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistryExclusive();
  CmpInitializePreloadedHives(BugCheckParameter3, 0LL);
  Hive = CmpCreateHive(&CmpMasterHive, 0, 1, 0, 0LL, 0LL, 0LL, 0x20000, 0LL, 0LL, 0LL, (__int64)BugCheckParameter4);
  if ( Hive < 0 )
    KeBugCheckEx(0x67u, 1uLL, 2uLL, Hive, (ULONG_PTR)BugCheckParameter4);
  v8 = CmpInitializeKcbCache(CmpMasterHive, 0x80u);
  if ( v8 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 3uLL, v8, 0LL);
  if ( (int)CmpCreateRegistryRoot(v10, v9) < 0 )
    KeBugCheckEx(0x67u, 1uLL, 4uLL, 0LL, 0LL);
  inited = CmpInitSiloSupport(0LL);
  if ( inited < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, inited, 0LL);
  v12 = CmpHiveRootSecurityDescriptor();
  ObjectAttributes.ObjectName = &CmRegistryMachineName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v12;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v13 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v14 = v13;
  if ( v13 < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    KeBugCheckEx(0x67u, 1uLL, 5uLL, v14, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryUserName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v12;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v15 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v16 = v15;
  if ( v15 < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    KeBugCheckEx(0x67u, 1uLL, 6uLL, v16, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryAppName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v12;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v42[0] = 65;
  v17 = ObOpenObjectByName(
          (__int64)&ObjectAttributes,
          (__int64)CmKeyObjectType,
          0,
          0LL,
          131103,
          (__int64)v42,
          (__int64)&KeyHandle);
  v18 = v17;
  if ( v17 < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    CmpCleanupParseContext(v42, 0LL);
    KeBugCheckEx(0x67u, 1uLL, 7uLL, v18, 0LL);
  }
  CmpCleanupParseContext(v42, 0LL);
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryContainersName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v12;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v19 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v20 = v19;
  if ( v19 < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    KeBugCheckEx(0x67u, 1uLL, 8uLL, v20, 0LL);
  }
  ZwClose(KeyHandle);
  CmpNoMasterCreates = 1;
  CmpInitializeLoadOptions(BugCheckParameter3);
  v21 = CmpInitializePreloadedHives(BugCheckParameter3, 1LL);
  if ( v21 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x14uLL, v21, 0LL);
  ControlSet = CmpCreateControlSet((__int64)L"SYSTEM", 0);
  if ( ControlSet < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0xDuLL, ControlSet, 0LL);
  if ( CmpLKGEnabled )
    *(_DWORD *)(MmWriteableSharedUserData + 752) |= 0x10u;
  if ( CmStateSeparationEnabled )
    CmpUpdateStateSeparationHiveOptions();
  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  v23 = CmpCreateHive((ULONG_PTR *)v38, 0, 1, 0, 0LL, 0LL, 0LL, 0x20000, 0LL, 0LL, 0LL, (__int64)BugCheckParameter4);
  v24 = v23;
  if ( v23 < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    KeBugCheckEx(0x67u, 1uLL, 0x10uLL, v24, (ULONG_PTR)BugCheckParameter4);
  }
  v25 = CmpLinkHiveToMaster(
          (__int64)&CmRegistryMachineHardwareName,
          0LL,
          *(__int64 *)v38,
          1,
          dword_140C026B8,
          0,
          0LL,
          (__int64)v12,
          0LL,
          0LL,
          1,
          BugCheckParameter4);
  if ( v25 )
    KeBugCheckEx(0x67u, 1uLL, 0x11uLL, v25, 0LL);
  CmpAddToHiveFileList(*(__int64 *)v38);
  ExFreePoolWithTag(v12, 0);
  qword_140C026A8 = *(_QWORD *)v38;
  v26 = CmpInitializeHardwareConfiguration(BugCheckParameter3);
  if ( v26 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x12uLL, v26, 0LL);
  v27 = CmpInitializeDriverStores(BugCheckParameter3);
  if ( v27 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x13uLL, v27, 0LL);
  ExtendedControlSets = CmpCreateExtendedControlSets(BugCheckParameter3);
  if ( ExtendedControlSets < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1BuLL, ExtendedControlSets, 0LL);
  CmpCreateHardwareProfiles(BugCheckParameter3);
  CmSetInitMachineConfig(BugCheckParameter3);
  CmpUnlockRegistry();
  CmpMarkCurrentProfileDirty(v29);
  v30 = CmpInitializeMachineDependentConfiguration(BugCheckParameter3);
  if ( v30 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x15uLL, v30, 0LL);
  v31 = CmpSetSystemValues(BugCheckParameter3);
  if ( v31 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x16uLL, v31, 0LL);
  CmpMigrateOOBELanguageToInstallationLanguage();
  ExFreePoolWithTag(CmpLoadOptions.Buffer, 0);
  v32 = *(_QWORD *)(BugCheckParameter3 + 240);
  if ( *(_DWORD *)v32 >= 0x68u )
  {
    if ( *(_QWORD *)(v32 + 96) )
    {
      v35 = CmpSetNetworkValue();
      if ( v35 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0x17uLL, v35, 0LL);
    }
  }
  v33 = CmFcInitSystem2();
  if ( v33 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, v33, 0LL);
  CmpDetachFromRegistryProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  *(_QWORD *)&KeGetCurrentThread()[1].ResourceIndex = v40;
  return 1;
}
