/*
 * XREFs of ACPIRootInitialize @ 0x1C0093768
 * Callers:
 *     ACPITableLoad @ 0x1C003F170 (ACPITableLoad.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     _ACPIInternalError @ 0x1C0001B74 (_ACPIInternalError.c)
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C002D594 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C002EF0C (ACPIInternalSetDeviceInterface.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C003C8FC (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1C003CA48 (ACPIEvaluateDsmEmcaMethodOnRootBus.c)
 *     ACPIFixedFeatureButtonInitialize @ 0x1C003CBA8 (ACPIFixedFeatureButtonInitialize.c)
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C003CE7C (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIVerifyUSB4Presence @ 0x1C003D85C (ACPIVerifyUSB4Presence.c)
 *     IsHypervisorLpiCapable @ 0x1C003DA5C (IsHypervisorLpiCapable.c)
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C00483B8 (AMLIGetNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 *     AMLIGetParent @ 0x1C0048724 (AMLIGetParent.c)
 *     AMLISetNSObjectContext @ 0x1C0048E8C (AMLISetNSObjectContext.c)
 *     HviGetHypervisorFeatures @ 0x1C005ED10 (HviGetHypervisorFeatures.c)
 *     ACPIAmliEvaluateOsc @ 0x1C007C7D8 (ACPIAmliEvaluateOsc.c)
 *     ACPIPccLegacyInitialize @ 0x1C00897A8 (ACPIPccLegacyInitialize.c)
 *     OSCreateHandle @ 0x1C008DB54 (OSCreateHandle.c)
 *     OSOpenHandle @ 0x1C008DF10 (OSOpenHandle.c)
 *     OSReadRegValue @ 0x1C008E6A0 (OSReadRegValue.c)
 *     OSWriteRegValue @ 0x1C008EC30 (OSWriteRegValue.c)
 *     ACPIEvaluateOscMethodOnRootBus @ 0x1C0093580 (ACPIEvaluateOscMethodOnRootBus.c)
 *     ACPIEvaluateOscWheaMethodOnRootBus @ 0x1C00935E8 (ACPIEvaluateOscWheaMethodOnRootBus.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1C0094AA0 (ACPIWriteOscSupportToRegistry.c)
 *     IsHypervisorCpcCapable @ 0x1C0094B98 (IsHypervisorCpcCapable.c)
 */

__int64 ACPIRootInitialize()
{
  unsigned __int16 v0; // r15
  unsigned int v1; // r12d
  int v2; // edi
  int v3; // r14d
  unsigned int v4; // r13d
  int v5; // edx
  __int64 v6; // rbx
  __int64 *v7; // rcx
  volatile signed __int32 *v8; // rbx
  __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  bool v16; // al
  bool v17; // bl
  unsigned __int16 v18; // si
  unsigned __int16 v19; // bx
  USHORT ActiveGroupCount; // ax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // ebx
  _QWORD *v27; // rcx
  __int64 v28; // r8
  int v29; // r9d
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  unsigned __int8 v33; // al
  bool v34; // cc
  _QWORD *v35; // rax
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  int v38; // [rsp+38h] [rbp-48h] BYREF
  int v39[4]; // [rsp+40h] [rbp-40h] BYREF
  int v40[4]; // [rsp+50h] [rbp-30h] BYREF
  __int64 Data; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v42[8]; // [rsp+68h] [rbp-18h] BYREF

  v0 = 0;
  v38 = 0;
  Data = 0LL;
  v42[0] = 0;
  *(_QWORD *)v39 = 0LL;
  v1 = 0;
  Usb4ControlGranted = 0;
  v2 = 0;
  v3 = 0;
  LOBYTE(v4) = 0;
  if ( (int)AMLIGetNameSpaceObject("\\_SB", 0LL, (__int64)v39, 0) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        22,
        30,
        (__int64)&WPP_751107becb7a3b7b48760ac4afe26340_Traceguids);
    }
    ACPIInternalError(0x110B98uLL);
  }
  ACPIInitReferenceDeviceExtension(RootDeviceExtension);
  v6 = *(_QWORD *)v39;
  v7 = *(__int64 **)v39;
  *(_QWORD *)(RootDeviceExtension + 760) = *(_QWORD *)v39;
  AMLISetNSObjectContext(v7, RootDeviceExtension);
  ACPIRootDeviceNotifyPepDiscoverDevice();
  ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice();
  ACPIFixedFeatureButtonInitialize();
  v8 = (volatile signed __int32 *)AMLIGetParent(v6);
  v9 = AMLIGetNamedChild(v8, 1229867359);
  AMLIDereferenceHandleEx(v8, v10);
  if ( v9 )
  {
    AMLIAsyncEvalObject(v9, 0LL, 0, 0LL, 0LL, 0LL);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v9, v15);
  }
  if ( (AcpiOverrideAttributes & 0x4000) == 0 )
  {
    v39[0] = 0;
    if ( !(unsigned int)ACPIEvaluateOscWheaMethodOnRootBus(v12, v11, v13, v14, v39) )
      v2 = 1;
  }
  ACPIPccLegacyInitialize(v12);
  v16 = IsHypervisorLpiCapable();
  *(_OWORD *)v40 = 0LL;
  v17 = v16;
  HviGetHypervisorFeatures();
  if ( (*(_QWORD *)v40 & 0x100000000000LL) != 0 )
  {
    if ( !(unsigned __int8)IsHypervisorCpcCapable() )
      AcpiRootFeaturesSupported &= 0xFFFEEF9F;
    if ( !v17 )
      AcpiRootFeaturesSupported &= ~1u;
    v38 |= 1u;
  }
  v18 = KeQueryHighestNodeNumber() + 1;
  v19 = 0;
  if ( v18 )
  {
    do
    {
      if ( (unsigned int)KeQueryNodeActiveProcessorCount(v19) )
        ++v0;
      ++v19;
    }
    while ( v19 < v18 );
    v3 = 0;
  }
  ActiveGroupCount = KeQueryActiveGroupCount();
  if ( v0 > 1u || ActiveGroupCount > 1u )
    AcpiRootFeaturesSupported &= ~0x1000u;
  LODWORD(Handle) = 4;
  *(_QWORD *)v40 = 0LL;
  v39[0] = 0;
  if ( (int)OSOpenHandle(
              "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters",
              0LL,
              (__int64)v40) >= 0
    && (int)OSReadRegValue("USB4OSNativeCMPresent", *(void **)v40, v39, (unsigned int *)&Handle) >= 0 )
  {
    if ( v39[0] )
      AcpiRootFeaturesSupported |= 0x40000u;
    else
      AcpiRootFeaturesSupported &= ~0x40000u;
  }
  if ( (AcpiOverrideAttributes & 0x8000000) != 0 )
    AcpiRootFeaturesSupported &= ~0x200000u;
  if ( !(unsigned int)ACPIEvaluateOscMethodOnRootBus(v21, 0, v22) )
  {
    v26 = ((unsigned int)AcpiRootFeaturesSupported >> 4) & 1;
    AcpiRootFeaturesGranted = AcpiRootFeaturesSupported;
    if ( v26 )
      v2 = 1;
    if ( (AcpiRootFeaturesSupported & 0x20) != 0 )
    {
      LOBYTE(v24) = -(AcpiRootFeaturesSupported & 0x40);
      v3 = ((AcpiRootFeaturesSupported & 0x40) != 0) + 1;
    }
    if ( (AcpiRootFeaturesSupported & 0x40000) != 0 )
    {
      if ( (int)ACPIVerifyUSB4Presence(v24, v23, v25) < 0 )
      {
        Usb4ControlGranted = 0;
        Usb4ControlRetained = 0;
      }
      else
      {
        Usb4ControlGranted = 1;
        Usb4ControlRetained = 1;
      }
    }
    v1 = v26;
    v4 = ((unsigned int)AcpiRootFeaturesSupported >> 19) & 1;
    if ( (AcpiRootFeaturesSupported & 0x200000) != 0 && (AcpiOverrideAttributes & 0x8000000) == 0 )
      AcpiPrmSupportGranted = 1;
  }
  v27 = *(_QWORD **)(RootDeviceExtension + 760);
  *(_OWORD *)v40 = SB_OSC_IOV_UUID;
  ACPIAmliEvaluateOsc(v27, (__int64)v40, v25, 1u, &v38);
  Handle = 0LL;
  *(_OWORD *)v40 = SB_OSC_VSM_UUID;
  ACPIAmliEvaluateOsc(*(_QWORD **)(RootDeviceExtension + 760), (__int64)v40, v28, 2u, &Handle);
  ACPIWriteOscSupportToRegistry(v2, v1, v3, v29, v4, AcpiPrmSupportGranted);
  if ( v2 )
  {
    ACPIEvaluateDsmEmcaMethodOnRootBus(v30, (__int64)&Data);
    Handle = 0LL;
    if ( (int)OSCreateHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters", 0LL, &Handle) >= 0 )
    {
      OSWriteRegValue("EMcaLoggingSupport", Handle, &Data, 1u);
      OSWriteRegValue("EMcaL1DirectoryBase", Handle, v42, 8u);
      if ( Handle )
        ZwClose(Handle);
    }
  }
  AcpiInterruptCombiningSupported = 0;
  v32 = *((_QWORD *)AcpiInformation + 1);
  v33 = *(_BYTE *)(v32 + 8);
  v34 = v33 <= 6u;
  if ( v33 == 6 )
  {
    if ( *(_BYTE *)(v32 + 131) >= 2u )
    {
LABEL_51:
      AcpiRootFeaturesSupported |= 0x2000u;
      ACPIEvaluateOscMethodOnRootBus(v32, 1u, v31);
      AcpiInterruptCombiningSupported = (AcpiRootFeaturesSupported & 0x2000) != 0;
      goto LABEL_52;
    }
    v34 = 1;
  }
  if ( !v34 )
    goto LABEL_51;
LABEL_52:
  v35 = (_QWORD *)(RootDeviceExtension + 864);
  *(_QWORD *)(RootDeviceExtension + 872) = RootDeviceExtension + 864;
  *v35 = v35;
  KeInitializeEvent((PRKEVENT)(RootDeviceExtension + 904), SynchronizationEvent, 1u);
  Usb4FeatureControlPushLock = 0LL;
  AcpiUsb4FeatureControlGranted = 0;
  ACPIInternalSetDeviceInterface(*(PDEVICE_OBJECT *)(RootDeviceExtension + 784), &GUID_ACPI_ROOT_DEVICE_UUID);
  return 0LL;
}
