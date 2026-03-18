/*
 * XREFs of USBD_CreateHandle @ 0x1C008F69C
 * Callers:
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C0073130 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A4F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001D540 (memset.c)
 *     USBDInternal_BuildAndSendQueryInterfaceSynchronously @ 0x1C008EFB8 (USBDInternal_BuildAndSendQueryInterfaceSynchronously.c)
 *     USBDInternal_BuildServicePath @ 0x1C008F134 (USBDInternal_BuildServicePath.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C008F410 (USBDInternal_QueryUsbVerifierSettings.c)
 */

__int64 __fastcall USBD_CreateHandle(
        _DEVICE_OBJECT *DeviceObject,
        _DEVICE_OBJECT *TargetDeviceObject,
        unsigned int USBDClientContractVersion,
        ULONG PoolTag,
        USBD_HANDLE__ **USBDHandle)
{
  USBD_HANDLE__ *v5; // rdi
  wchar_t *v6; // rsi
  int v11; // ebx
  USBD_HANDLE__ *PoolWithTag; // rax
  int InterfaceSynchronously; // eax
  int v14; // eax
  int v15; // eax
  bool v16; // zf
  unsigned __int8 IsDeviceHighSpeed; // al
  void (__fastcall *v18)(_QWORD); // rax
  char v20; // [rsp+30h] [rbp-D0h]
  wchar_t *servicePath; // [rsp+38h] [rbp-C8h] BYREF
  _USB_BUS_INTERFACE_USBDI_V1 usbBusInterface; // [rsp+40h] [rbp-C0h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+90h] [rbp-70h] BYREF

  v5 = 0LL;
  v20 = 0;
  v6 = 0LL;
  servicePath = 0LL;
  if ( KeGetCurrentIrql() )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "Irql Too High\n");
    v11 = -1073741496;
    goto LABEL_58;
  }
  if ( !g_NonPagedPoolInitialized )
  {
    g_NonPagedPoolType = NonPagedPool;
    memset(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
    VersionInformation.dwOSVersionInfoSize = 284;
    if ( RtlGetVersion(&VersionInformation) >= 0
      && (VersionInformation.dwMajorVersion > 6
       || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
    {
      g_NonPagedPoolType = NonPagedPoolNx;
    }
  }
  g_NonPagedPoolInitialized = 1;
  if ( !DeviceObject )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "DeviceObject cannot be NULL\n");
LABEL_14:
    v11 = -1073741811;
    goto LABEL_58;
  }
  if ( !TargetDeviceObject )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "TargetDeviceObject cannot be NULL\n");
    goto LABEL_14;
  }
  if ( USBDClientContractVersion < 0x602 )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "USBDClientContractVersion %d not supported\n", USBDClientContractVersion);
    goto LABEL_14;
  }
  if ( !PoolTag )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "PoolTag must be specified\n");
    goto LABEL_14;
  }
  if ( USBDHandle )
  {
    USBDInternal_BuildServicePath(DeviceObject, &servicePath, PoolTag);
    PoolWithTag = (USBD_HANDLE__ *)ExAllocatePoolWithTag(g_NonPagedPoolType, 0xE8uLL, PoolTag);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "Allocation Failed\n");
      v6 = servicePath;
      v11 = -1073741670;
      goto LABEL_58;
    }
    memset(PoolWithTag, 0, 0xE8uLL);
    v6 = servicePath;
    if ( servicePath )
      USBDInternal_QueryUsbVerifierSettings(DeviceObject, servicePath, (_USBD_INTERFACE_V3 *)(v5 + 2), PoolTag);
    *(_DWORD *)v5 = 1145197397;
    *((_DWORD *)v5 + 54) = 1539;
    *((_DWORD *)v5 + 2) = 100860104;
    *((_DWORD *)v5 + 10) = USBDClientContractVersion;
    *((_QWORD *)v5 + 7) = DeviceObject;
    *((_DWORD *)v5 + 16) = PoolTag;
    *((_QWORD *)v5 + 9) = v5;
    *((_QWORD *)v5 + 26) = TargetDeviceObject;
    *((_DWORD *)v5 + 55) = 1;
    InterfaceSynchronously = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                               DeviceObject,
                               TargetDeviceObject,
                               &GUID_USBD_INTERFACE,
                               (_INTERFACE *)(v5 + 2));
    v11 = InterfaceSynchronously;
    if ( InterfaceSynchronously < 0 )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(
          0x4Du,
          3u,
          "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_603, 0x%x\n",
          TargetDeviceObject,
          InterfaceSynchronously);
      *((_WORD *)v5 + 4) = 152;
      *((_WORD *)v5 + 5) = 1538;
      *((_DWORD *)v5 + 54) = 1538;
      v15 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
              DeviceObject,
              TargetDeviceObject,
              &GUID_USBD_INTERFACE,
              (_INTERFACE *)(v5 + 2));
      v11 = v15;
      if ( v15 < 0 )
      {
        v16 = g_EnableDbgPrints == 0;
        *((_DWORD *)v5 + 54) = 1536;
        if ( !v16 )
          DbgPrintEx(
            0x4Du,
            3u,
            "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_602, 0x%x\n",
            TargetDeviceObject,
            v15);
        v11 = 0;
LABEL_37:
        if ( g_EnableDbgPrints )
          DbgPrintEx(0x4Du, 3u, "USBD_CreateHandle Successful: usbdHandleInfo 0x%p\n", v5);
        if ( *((_DWORD *)v5 + 54) == 1536 )
        {
          memset(&usbBusInterface, 0, sizeof(usbBusInterface));
          *(_DWORD *)&usbBusInterface.Size = 65608;
          v14 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                  DeviceObject,
                  TargetDeviceObject,
                  &USB_BUS_INTERFACE_USBDI_GUID,
                  (_INTERFACE *)&usbBusInterface);
          v11 = v14;
          if ( v14 < 0 )
          {
            if ( g_EnableDbgPrints )
              DbgPrintEx(
                0x4Du,
                0,
                "Core stack (TargetDevieObject 0x%p) failed query to USB_BUS_INTERFACE_USBDI_GUID : USB_BUSIF_USBDI_VERSION_1, 0x%x\n",
                TargetDeviceObject,
                v14);
            *((_DWORD *)v5 + 54) = -1;
            v11 = 0;
            goto LABEL_59;
          }
          IsDeviceHighSpeed = (unsigned __int8)usbBusInterface.IsDeviceHighSpeed;
          if ( usbBusInterface.IsDeviceHighSpeed )
            IsDeviceHighSpeed = usbBusInterface.IsDeviceHighSpeed(usbBusInterface.BusContext);
          *((_BYTE *)v5 + 224) = IsDeviceHighSpeed;
          usbBusInterface.InterfaceDereference(usbBusInterface.BusContext);
        }
        if ( v11 < 0 )
        {
          if ( v20 )
          {
            v18 = (void (__fastcall *)(_QWORD))*((_QWORD *)v5 + 14);
            if ( v18 )
              v18(*((_QWORD *)v5 + 6));
          }
          ExFreePoolWithTag(v5, PoolTag);
          v5 = 0LL;
LABEL_58:
          if ( !USBDHandle )
            goto LABEL_60;
        }
LABEL_59:
        *USBDHandle = v5;
LABEL_60:
        if ( v6 )
          ExFreePoolWithTag(v6, PoolTag);
        return (unsigned int)v11;
      }
    }
    else
    {
      *((_DWORD *)v5 + 54) = *((unsigned __int16 *)v5 + 5);
    }
    v20 = 1;
    goto LABEL_37;
  }
  if ( g_EnableDbgPrints )
    DbgPrintEx(0x4Du, 0, "USBDHandle cannot be NULL\n");
  return (unsigned int)-1073741811;
}
