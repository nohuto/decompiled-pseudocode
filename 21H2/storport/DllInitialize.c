/*
 * XREFs of DllInitialize @ 0x1C004C5C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     memset @ 0x1C0020540 (memset.c)
 *     RaidLoadATADeviceIdMappings @ 0x1C0035730 (RaidLoadATADeviceIdMappings.c)
 *     RaidLoadEnclosureIdMappings @ 0x1C003594C (RaidLoadEnclosureIdMappings.c)
 *     StorpUpdateDynamicRegistrySettings @ 0x1C00362C0 (StorpUpdateDynamicRegistrySettings.c)
 *     StorpWatchForRegistryChanges @ 0x1C00363F0 (StorpWatchForRegistryChanges.c)
 *     RaidpIsControlledUpdateOSEnvironment @ 0x1C004D2E8 (RaidpIsControlledUpdateOSEnvironment.c)
 *     RaidpIsControlledWinPEEnvironment @ 0x1C004D4CC (RaidpIsControlledWinPEEnvironment.c)
 *     RaidpIsCurrentOsInstallationUpgrade @ 0x1C004D564 (RaidpIsCurrentOsInstallationUpgrade.c)
 *     RaidCheckD3AllowedOnCurrentPlatform @ 0x1C0058D78 (RaidCheckD3AllowedOnCurrentPlatform.c)
 *     RaidDecodeSmRegistryBlob @ 0x1C0058E20 (RaidDecodeSmRegistryBlob.c)
 *     StorpWheaAddErrorSource @ 0x1C007B094 (StorpWheaAddErrorSource.c)
 *     SpVerifierInitialization @ 0x1C007BC7C (SpVerifierInitialization.c)
 *     StorpRegisterShim @ 0x1C007C11C (StorpRegisterShim.c)
 *     wil_InitializeFeatureStaging @ 0x1C0081078 (wil_InitializeFeatureStaging.c)
 */

__int64 DllInitialize()
{
  int v0; // ecx
  int v1; // eax
  __int64 v2; // rax
  __int64 v3; // rax
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *DestinationString[3]; // [rsp+40h] [rbp-C8h] BYREF
  int OutputBuffer; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v8; // [rsp+5Ch] [rbp-ACh] BYREF
  int v9; // [rsp+60h] [rbp-A8h] BYREF
  int v10; // [rsp+64h] [rbp-A4h] BYREF
  int v11; // [rsp+68h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  struct _UNICODE_STRING v13; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD P[10]; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD SystemInformation[16]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+148h] [rbp+40h] BYREF
  int v17; // [rsp+14Ch] [rbp+44h]
  unsigned int Buffer[65]; // [rsp+154h] [rbp+4Ch] BYREF

  memset(DestinationString, 0, sizeof(DestinationString));
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength[0] = 0;
  LOBYTE(OutputBuffer) = 0;
  v13 = 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v10 = 0;
  v8 = 4;
  v9 = 0;
  v11 = 0;
  memset(P, 0, 0x48uLL);
  wil_InitializeFeatureStaging();
  if ( ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u) >= 0 && (_BYTE)OutputBuffer )
    IsSystemAoAC = 1;
  g_InWinPE = RaidpIsControlledWinPEEnvironment();
  RaidpIsControlledUpdateOSEnvironment();
  g_OSisUpgrade = RaidpIsCurrentOsInstallationUpgrade();
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"SMR-HostManaged-Enabled");
  if ( (int)ZwQueryLicenseValue(&DestinationString[1], &v10, &v9, v8, &v8) >= 0 && v9 == 1 )
    IsSMREnabled = 1;
  if ( !_InterlockedExchangeAdd(&NumDllInitialize, 1u) )
  {
    StorpRegisterShim();
    qword_1C0069838 = (__int64)&EnclosureIdList;
    EnclosureIdList = (__int64)&EnclosureIdList;
    ExInitializeResourceLite((PERESOURCE)&WPP_MAIN_CB.Dpc.DpcData);
    RaidLoadEnclosureIdMappings();
    WPP_MAIN_CB.DeviceQueue.Lock = (unsigned __int64)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
    WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = (_LIST_ENTRY *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
    ExInitializeResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension);
    RaidLoadATADeviceIdMappings();
    StorpWheaAddErrorSource();
  }
  RtlInitUnicodeString(&v13, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v13;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(DestinationString, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"LogControlEnable");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v17 == 11
      && ResultLength[0] >= 8 )
    {
      qword_1C0069310 = *(_QWORD *)Buffer;
      if ( !*(_QWORD *)Buffer )
        RaidLogListSize = 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"LogSize");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v17 == 4
      && ResultLength[0] >= 4 )
    {
      v0 = Buffer[0];
      RaidLogListSize = Buffer[0];
      if ( Buffer[0] <= 0x60000 )
      {
        if ( !Buffer[0] )
          goto LABEL_24;
        if ( Buffer[0] < 0x40 )
        {
          RaidLogListSize = 64;
          v0 = 64;
        }
        if ( !v0 )
LABEL_24:
          qword_1C0069310 = 0LL;
      }
      else
      {
        RaidLogListSize = 393216;
      }
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"DpcCompletionLimit");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v17 == 4
      && ResultLength[0] >= 4 )
    {
      DpcCompletionLimit = Buffer[0];
      if ( !Buffer[0] )
        DpcCompletionLimit = -1;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HiberFileHybridPriority");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v17 == 3 )
    {
      HiberFileHybridPriority = RaidDecodeSmRegistryBlob((PUCHAR)Buffer);
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HmbAllocationPolicy");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v17 == 4 )
    {
      HmbAllocationPolicy = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HmbMaximumSizeInBytes");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v17 == 4 )
    {
      v1 = Buffer[0];
      HmbMaximumSize = Buffer[0];
      if ( Buffer[0] > 0x4000000 )
      {
        HmbMaximumSize = 0x4000000;
        v1 = 0x4000000;
      }
      if ( (v1 & 0xFFF) != 0 )
        HmbMaximumSize = v1 & 0xFFFFF000;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"MiniportBugActionPolicy");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v17 == 4 )
    {
      MiniportBugActionPolicy = Buffer[0];
      if ( Buffer[0] >= 3 )
        MiniportBugActionPolicy = 1;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"AsyncStart");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v17 == 4 )
    {
      StorageAsyncStart = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryPerformanceHighResolutionTimer");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v17 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingPerformanceHighResolutionTimer = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryPerformanceEnabled");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v17 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingPerformanceEnabled = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryPerformancePeriod");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v17 == 4
      && ResultLength[0] >= 4 )
    {
      v2 = Buffer[0];
      if ( Buffer[0] )
      {
        if ( Buffer[0] >= 0x18uLL )
          v2 = 24LL;
        g_StorpTraceLoggingPerformancePeriod = 36000000000LL * v2;
      }
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryErrorDataEnabled");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v17 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingErrorDataEnabled = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryDeviceHealthEnabled");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v17 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingDeviceHealthEnabled = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryDeviceHealthPeriod");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v17 == 4
      && ResultLength[0] >= 4 )
    {
      v3 = Buffer[0];
      if ( Buffer[0] )
      {
        if ( Buffer[0] >= 0x18uLL )
          v3 = 24LL;
        g_StorpTraceLoggingDeviceHealthTick = v3;
        g_StorpTraceLoggingDeviceHealthPeriod = 36000000000LL * v3;
      }
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryCriticalEventEnabled");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v17 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingCriticalEventEnabled = Buffer[0];
      g_StorpTraceLoggingCriticalEventEnabledSetByRegistry = 1;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryCriticalEventMaximum");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v17 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingCriticalEventMaximum = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ExtendedDSMCommandsSupported");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v17 == 4
      && ResultLength[0] >= 4 )
    {
      ExtendedDSMCommandsSupported = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"FUAEnable");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v17 == 4
      && ResultLength[0] >= 4 )
    {
      FUAEnabled = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"QoSFlags");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v17 == 4
      && ResultLength[0] >= 4 )
    {
      g_QosFlags = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"MaxPreAllocatedIoResourceCount");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v17 == 4
      && ResultLength[0] >= 4
      && Buffer[0] )
    {
      StorPreAllocatedMaxIoResourceCount = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"DFxEnable");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v17 == 4
      && ResultLength[0] >= 4 )
    {
      DFxEnabled = Buffer[0] != 0;
    }
    P[6] = v13.Buffer;
    LODWORD(P[5]) = *(_DWORD *)&v13.Length;
    P[7] = DestinationString[0];
    StorpUpdateDynamicRegistrySettings((__int64)P);
    BYTE1(P[4]) = 1;
    P[8] = StorpUpdateDynamicRegistrySettings;
    P[7] = 0LL;
    StorpWatchForRegistryChanges((char *)P);
    ZwClose(DestinationString[0]);
  }
  if ( SpVrfyLevel != -1 )
  {
    RtlInitUnicodeString(
      (PUNICODE_STRING)&DestinationString[1],
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\Verifier");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(DestinationString, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"VerifyLevel");
      if ( ZwQueryValueKey(
             DestinationString[0],
             (PUNICODE_STRING)&DestinationString[1],
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             ResultLength) >= 0
        && v17 == 4
        && ResultLength[0] >= 4 )
      {
        SpVrfyLevel |= Buffer[0];
        if ( SpVrfyLevel != -1 && !StorPortVerifierInitialized && (unsigned __int8)SpVerifierInitialization() )
        {
          StorPortVerifierInitialized = 1;
          RaidVerifierEnabled = 1;
        }
      }
      ZwClose(DestinationString[0]);
    }
    if ( (unsigned __int8)RaidCheckD3AllowedOnCurrentPlatform() )
      StorageD3AllowedOnCurrentPlatform = 1;
    RtlInitUnicodeString(
      (PUNICODE_STRING)&DestinationString[1],
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Storage");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(DestinationString, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"StorageD3InModernStandby");
      if ( ZwQueryValueKey(
             DestinationString[0],
             (PUNICODE_STRING)&DestinationString[1],
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             ResultLength) >= 0
        && v17 == 4
        && ResultLength[0] >= 4 )
      {
        StorageD3RegistryState = Buffer[0] != 0;
      }
      ZwClose(DestinationString[0]);
    }
    if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
    {
      HighestPhysicalAddress = (unsigned __int64)SystemInformation[5] << 12;
      PhysicalMemorySize = (unsigned __int64)SystemInformation[3] << 12;
    }
    ExQueryTimerResolution(&StorMaximumTimeInterval, &StorMinimumTimeInterval, &v11);
  }
  return 0LL;
}
