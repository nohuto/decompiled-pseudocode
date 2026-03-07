__int64 __fastcall UsbhPdoPnp_StartDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  int v2; // ebx
  _DWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // r14
  _DWORD *v9; // rax
  _QWORD *v10; // r13
  signed int DeviceProperty; // ebp
  _DWORD *v12; // rbx
  void *v13; // rcx
  __int64 v14; // rcx
  void *Pool2; // rbx
  const EVENT_DESCRIPTOR *v16; // r8
  GUID *v17; // rdx
  __int64 v18; // rdx
  ULONG ResultLength; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  ResultLength = 0;
  v5 = PdoExt((__int64)DeviceObject);
  UsbhEtwLogDeviceIrpEvent((__int64)v5, (__int64)Irp, &USBHUB_ETW_EVENT_DEVICE_START_DISPATCH);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      1u,
      0xEu,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
      DeviceObject);
  if ( PdoExt((__int64)DeviceObject)[280] == 101 )
  {
    v8 = (__int64 *)(v5 + 296);
    goto LABEL_32;
  }
  UsbhSetPdo_AllowIo(v7, (__int64)DeviceObject);
  v8 = (__int64 *)(v5 + 296);
  UsbhDisableTimerObject(*((_QWORD *)v5 + 148), (__int64)(v5 + 426));
  v9 = PdoExt((__int64)DeviceObject);
  v10 = (_QWORD *)UsbhIncHubBusy(*((_QWORD *)v5 + 148), (__int64)(v9 + 236), (__int64)DeviceObject, 1346728819, 1);
  KeWaitForSingleObject(v5 + 724, Executive, 0, 0, 0LL);
  DeviceProperty = UsbhPdoPnp_EnablePdo((__int64)DeviceObject);
  if ( PdoExt((__int64)DeviceObject)[280] == 103 || PdoExt((__int64)DeviceObject)[280] == 102 )
  {
    v12 = PdoExt((__int64)DeviceObject);
    IoSetDevicePropertyData(DeviceObject, &DEVPKEY_Device_DriverProblemDesc, 0, 0, 0, 0, 0LL);
    v12[705] = 0;
    if ( (v5[283] & 4) != 0 )
    {
      DeviceProperty = 0;
      goto LABEL_28;
    }
  }
  if ( (DeviceProperty & 0xC0000000) != 0xC0000000 && PdoExt((__int64)DeviceObject)[280] != 103 )
  {
    v13 = (void *)*((_QWORD *)v5 + 280);
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      *((_QWORD *)v5 + 280) = 0LL;
    }
    DeviceProperty = IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, 0, 0LL, &ResultLength);
    if ( DeviceProperty == -1073741789 && ResultLength )
    {
      Pool2 = (void *)ExAllocatePool2(64LL, ResultLength, 1112885333LL);
      if ( !Pool2 )
        goto LABEL_28;
      DeviceProperty = IoGetDeviceProperty(
                         DeviceObject,
                         DevicePropertyDeviceDescription,
                         ResultLength,
                         Pool2,
                         &ResultLength);
      if ( DeviceProperty < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
        goto LABEL_28;
      }
      *((_QWORD *)v5 + 280) = Pool2;
      v5[562] = ResultLength;
      UsbhEtwLogDeviceDescription(v5, &USBHUB_ETW_EVENT_DEVICE_START_DEVICE_DESCRIPTION);
    }
    DeviceProperty = UsbhReadPdoRegistryKeys(v14, DeviceObject);
    if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
    {
      v16 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_DEVICE_START_REGISTRY_FAILURE;
LABEL_22:
      UsbhEtwLogDeviceIrpEvent((__int64)v5, (__int64)Irp, v16);
      goto LABEL_28;
    }
    v17 = &GUID_DEVINTERFACE_USB_HUB;
    if ( (v5[355] & 4) == 0 )
      v17 = &GUID_DEVINTERFACE_USB_DEVICE;
    DeviceProperty = UsbhPdoCreateSymbolicLink(DeviceObject, v17);
    if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
    {
      v16 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_DEVICE_START_SYMBOLIC_LINK_FAILURE;
      goto LABEL_22;
    }
    UsbhPdoRegisterWmi(DeviceObject);
  }
LABEL_28:
  SET_PDO_SWPNPSTATE((__int64)DeviceObject, 101, 1);
  KeSetEvent((PRKEVENT)(v5 + 724), 0, 0);
  PdoExt((__int64)DeviceObject);
  UsbhDecHubBusy(*v8, v18, v10);
  UsbhPdoSetDeviceData(*v8, DeviceObject, DeviceObject);
  v2 = Usbh__TestPoint__Ulong(*v8, 2u, DeviceProperty, *((unsigned __int16 *)v5 + 714));
  if ( v2 < 0 )
  {
    UsbhException(*v8, *((_WORD *)v5 + 714), 0x67u, 0LL, 0, v2, 0, usbfile_pdo_c, 1564, 0);
  }
  else if ( (v5[355] & 1) != 0 )
  {
    UsbhException(*v8, *((_WORD *)v5 + 714), 0x2Au, 0LL, 0, v2, 0, usbfile_pdo_c, 1548, 0);
  }
LABEL_32:
  Log(*v8, 256, 1398035004, (__int64)Irp, v2);
  UsbhEtwLogDeviceIrpEvent((__int64)v5, (__int64)Irp, &USBHUB_ETW_EVENT_DEVICE_START_COMPLETE);
  Irp->IoStatus.Status = v2;
  IofCompleteRequest(Irp, 0);
  UsbhUpdateSqmFlags(DeviceObject);
  return (unsigned int)v2;
}
