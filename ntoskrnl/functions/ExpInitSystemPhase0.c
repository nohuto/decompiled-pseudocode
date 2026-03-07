char ExpInitSystemPhase0()
{
  int IsEnabledDeviceUsage; // eax
  int v1; // ecx
  unsigned __int64 v2; // rbx
  __int64 v3; // rdx
  __int128 v5; // [rsp+20h] [rbp-18h]

  ExpTimeout = -40000000LL;
  *(_WORD *)(MmWriteableSharedUserData + 726) = 10;
  qword_140C2D278 = (__int64)&ExpSystemResourcesList;
  ExpSystemResourcesList = (__int64)&ExpSystemResourcesList;
  IsEnabledDeviceUsage = Feature_FastResource2__private_IsEnabledDeviceUsage();
  ExpEnvironmentLock.Count = 1;
  LOWORD(ExpEnvironmentLock.Event.Header.Lock) = 1;
  FeatureFastResource2 = IsEnabledDeviceUsage != 0;
  ExpEnvironmentLock.Event.Header.WaitListHead.Blink = &ExpEnvironmentLock.Event.Header.WaitListHead;
  ExpEnvironmentLock.Owner = 0LL;
  ExpEnvironmentLock.Contention = 0;
  ExpEnvironmentLock.Event.Header.SignalState = 0;
  ExNPagedLookasideLock = 0LL;
  ExPagedLookasideLock = 0LL;
  ExpEnvironmentLock.Event.Header.WaitListHead.Flink = &ExpEnvironmentLock.Event.Header.WaitListHead;
  qword_140C2D208 = (__int64)&ExNPagedLookasideListHead;
  ExNPagedLookasideListHead = (__int64)&ExNPagedLookasideListHead;
  qword_140C2D228 = (__int64)&ExPagedLookasideListHead;
  ExPagedLookasideListHead = (__int64)&ExPagedLookasideListHead;
  qword_140C31798 = (__int64)&ExpFirmwareTableProviderListHead;
  ExpFirmwareTableProviderListHead = (__int64)&ExpFirmwareTableProviderListHead;
  ExpEnvironmentLock.Event.Header.Size = 6;
  ExInitializeResourceLite(&ExpFirmwareTableResource);
  v1 = *(_DWORD *)(KeLoaderBlock_0 + 264);
  ExpConDrvLoadLock = 0LL;
  ExpFirmwarePageProtectionSupported = (v1 & 4) != 0;
  if ( CmSuiteBufferType == 7 )
    *(_DWORD *)(MmWriteableSharedUserData + 720) = ExGetSuiteMask((__int64)CmSuiteBuffer, ExpMultiUserTS);
  v2 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  RtlpHeapKey = v2 | (unsigned int)ExGenRandom(1);
  RtlHpGlobalsInitialize();
  v5 = 0LL;
  LOBYTE(v5) = 2;
  v3 = *(_QWORD *)(KeLoaderBlock_0 + 240);
  RtlpHpLegacyEnvHandle = v5;
  if ( *(_QWORD *)(v3 + 3760) )
    ExpLuid = *(_QWORD *)(v3 + 3760);
  return 1;
}
