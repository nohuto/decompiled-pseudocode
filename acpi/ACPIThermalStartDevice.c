__int64 __fastcall ACPIThermalStartDevice(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rbx
  const char *v5; // rbp
  __int64 v6; // rcx
  const char *v7; // rcx
  const char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  struct _KEVENT *v11; // r12
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  int SensorDevice; // edi
  __int64 v15; // rcx
  const char *v16; // rax
  PVOID *v17; // r14
  PIRP *v18; // rsi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  PIRP v20; // rax
  __int64 Pool2; // rax
  struct _DEVICE_OBJECT *v22; // rcx
  __int64 v23; // rcx
  const char *v24; // rax
  void *v25; // rcx
  __int64 v27; // [rsp+50h] [rbp-98h] BYREF
  __int128 v28; // [rsp+60h] [rbp-88h] BYREF
  _OWORD v29[3]; // [rsp+70h] [rbp-78h] BYREF

  DWORD1(v29[0]) = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v5 = byte_1C00622D0;
  v6 = *(_QWORD *)(DeviceExtension + 200);
  *(_DWORD *)(v6 + 92) = -1;
  *(_DWORD *)(v6 + 96) = 100;
  v7 = byte_1C00622D0;
  *(_DWORD *)(DeviceExtension + 192) |= 0x8000000u;
  v8 = byte_1C00622D0;
  v9 = *(_QWORD *)(DeviceExtension + 8);
  if ( (v9 & 0x200000000000LL) != 0 )
  {
    v7 = *(const char **)(DeviceExtension + 608);
    if ( (v9 & 0x400000000000LL) != 0 )
      v8 = *(const char **)(DeviceExtension + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x14u,
      (__int64)&WPP_93ea93d83ec03a4680542420a9c7ec01_Traceguids,
      (char)Irp,
      DeviceExtension,
      v7,
      v8);
  v10 = *(_QWORD *)(DeviceExtension + 200);
  v11 = (struct _KEVENT *)(v10 + 280);
  KeClearEvent((PRKEVENT)(v10 + 280));
  *(_QWORD *)(v10 + 112) = AMLIGetNamedChild(*(_QWORD **)(DeviceExtension + 760), 1347245151);
  memset(v29, 0, sizeof(v29));
  v12 = *(_QWORD **)(DeviceExtension + 760);
  v27 = 0LL;
  v28 = THRM_EXTENSIONS_DSM_UUID;
  if ( (int)ACPIAmliEvaluateDsm(v12, (__int64)&v28, 0, 0, v29, &v27) < 0 )
  {
    *(_DWORD *)(v10 + 128) = 0;
  }
  else
  {
    v13 = v27;
    if ( *(_WORD *)(v27 + 2) == 3 && *(_DWORD *)(v27 + 24) )
      *(_DWORD *)(v10 + 128) = **(unsigned __int8 **)(v27 + 32);
    AMLIFreeDataBuffs(v13);
  }
  SensorDevice = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVICE_THERMAL_ZONE);
  if ( SensorDevice < 0 )
  {
    v15 = *(_QWORD *)(DeviceExtension + 8);
    v16 = byte_1C00622D0;
    if ( (v15 & 0x200000000000LL) != 0 )
    {
      v5 = *(const char **)(DeviceExtension + 608);
      if ( (v15 & 0x400000000000LL) != 0 )
        v16 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0x15u,
        (__int64)&WPP_93ea93d83ec03a4680542420a9c7ec01_Traceguids,
        SensorDevice,
        DeviceExtension,
        v5,
        v16);
    v17 = (PVOID *)(v10 + 200);
    v18 = (PIRP *)(v10 + 192);
    goto LABEL_32;
  }
  AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(DeviceExtension + 768));
  v17 = (PVOID *)(v10 + 200);
  *(_QWORD *)(v10 + 200) = AttachedDeviceReference;
  v20 = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  v18 = (PIRP *)(v10 + 192);
  *v18 = v20;
  if ( !v20
    || (ACPIRegisterForDeviceNotifications(
          *(_QWORD *)(DeviceExtension + 768),
          (__int64)ACPIThermalEvent,
          *(_QWORD *)(DeviceExtension + 768)),
        (Pool2 = ExAllocatePool2(256LL, 64LL, 1416651585LL)) == 0) )
  {
    SensorDevice = -1073741670;
LABEL_32:
    if ( *v17 )
    {
      ObfDereferenceObject(*v17);
      *v17 = 0LL;
    }
    if ( *v18 )
    {
      IoFreeIrp(*v18);
      *v18 = 0LL;
    }
    v25 = *(void **)(DeviceExtension + 224);
    if ( v25 )
    {
      ExFreePoolWithTag(v25, 0x54706341u);
      *(_QWORD *)(DeviceExtension + 224) = 0LL;
    }
    KeSetEvent(v11, 0, 0);
    goto LABEL_39;
  }
  *(_QWORD *)(Pool2 + 8) = &ACPIThermalGuidList;
  *(_QWORD *)(Pool2 + 16) = ACPIThermalQueryWmiRegInfo;
  *(_QWORD *)(Pool2 + 24) = ACPIThermalQueryWmiDataBlock;
  *(_DWORD *)Pool2 = 1;
  v22 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 768);
  *(_QWORD *)(DeviceExtension + 224) = Pool2;
  SensorDevice = IoWMIRegistrationControl(v22, 1u);
  if ( SensorDevice < 0 )
    goto LABEL_32;
  SensorDevice = ACPIThermalGetSensorDevice((_QWORD *)DeviceExtension);
  if ( SensorDevice < 0 )
  {
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(DeviceExtension + 768), 2u);
    v23 = *(_QWORD *)(DeviceExtension + 8);
    v24 = byte_1C00622D0;
    if ( (v23 & 0x200000000000LL) != 0 )
    {
      v5 = *(const char **)(DeviceExtension + 608);
      if ( (v23 & 0x400000000000LL) != 0 )
        v24 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0x16u,
        (__int64)&WPP_93ea93d83ec03a4680542420a9c7ec01_Traceguids,
        SensorDevice,
        DeviceExtension,
        v5,
        v24);
    goto LABEL_32;
  }
  ACPIThermalAcquireCoolingInterfaces(DeviceExtension);
  *(_DWORD *)(DeviceExtension + 368) = 2;
  SensorDevice = ACPIDeviceInternalDeviceRequest((_QWORD *)DeviceExtension, 1LL, 0LL, 0LL, 0);
  if ( SensorDevice == 259 )
    SensorDevice = 0;
  ACPIThermalLoopEx(DeviceExtension, 0x8000000, 0x10000000);
  if ( SensorDevice < 0 )
    goto LABEL_32;
LABEL_39:
  Irp->IoStatus.Status = SensorDevice;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)SensorDevice;
}
