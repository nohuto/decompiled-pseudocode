NTSTATUS __stdcall USBD_CreateHandle(
        PDEVICE_OBJECT DeviceObject,
        PDEVICE_OBJECT TargetDeviceObject,
        ULONG USBDClientContractVersion,
        ULONG PoolTag,
        USBD_HANDLE *USBDHandle)
{
  void *v5; // rsi
  NTSTATUS v8; // ebx
  USBD_HANDLE PoolWithTag; // rax
  USBD_HANDLE v10; // rdi
  _WORD *v11; // r14
  int InterfaceSynchronously; // eax
  char v13; // r14
  int v14; // eax
  int v16; // eax
  bool v17; // zf
  char v18; // al
  void (__fastcall *v19)(_QWORD); // rax
  void *v20; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v21[10]; // [rsp+40h] [rbp-C0h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+90h] [rbp-70h] BYREF

  v5 = 0LL;
  v20 = 0LL;
  if ( KeGetCurrentIrql() )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "Irql Too High\n");
    v8 = -1073741496;
LABEL_18:
    if ( !USBDHandle )
      goto LABEL_41;
    goto LABEL_58;
  }
  if ( !byte_1C006DC34 )
  {
    PoolType = NonPagedPool;
    memset(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
    VersionInformation.dwOSVersionInfoSize = 284;
    if ( RtlGetVersion(&VersionInformation) >= 0
      && (VersionInformation.dwMajorVersion > 6
       || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
    {
      PoolType = NonPagedPoolNx;
    }
  }
  byte_1C006DC34 = 1;
  if ( !DeviceObject )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "DeviceObject cannot be NULL\n");
LABEL_17:
    v8 = -1073741811;
    goto LABEL_18;
  }
  if ( !TargetDeviceObject )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "TargetDeviceObject cannot be NULL\n");
    goto LABEL_17;
  }
  if ( USBDHandle )
  {
    USBDInternal_BuildServicePath((__int64)DeviceObject, &v20);
    PoolWithTag = (USBD_HANDLE)ExAllocatePoolWithTag(PoolType, 0xE8uLL, 0x68334855u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "Allocation Failed\n");
      v5 = v20;
      v8 = -1073741670;
LABEL_58:
      *USBDHandle = 0LL;
LABEL_41:
      if ( v5 )
        ExFreePoolWithTag(v5, 0x68334855u);
      return v8;
    }
    memset(PoolWithTag, 0, 0xE8uLL);
    v5 = v20;
    v11 = v10 + 2;
    if ( v20 )
      USBDInternal_QueryUsbVerifierSettings((__int64)DeviceObject, (__int64)v20, (__int64)(v10 + 2));
    *(_DWORD *)v10 = 1145197397;
    *v11 = 200;
    *((_QWORD *)v10 + 7) = DeviceObject;
    *((_WORD *)v10 + 5) = 1539;
    *((_DWORD *)v10 + 16) = 1748191317;
    *((_QWORD *)v10 + 9) = v10;
    *((_QWORD *)v10 + 26) = TargetDeviceObject;
    *((_DWORD *)v10 + 10) = 1538;
    *((_DWORD *)v10 + 54) = 1539;
    *((_DWORD *)v10 + 55) = 1;
    InterfaceSynchronously = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                               DeviceObject,
                               TargetDeviceObject,
                               (unsigned __int64)&GUID_USBD_INTERFACE,
                               (unsigned __int16 *)v10 + 4);
    v8 = InterfaceSynchronously;
    if ( InterfaceSynchronously < 0 )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(
          0x4Du,
          3u,
          "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_603, 0x%x\n",
          TargetDeviceObject,
          InterfaceSynchronously);
      *v11 = 152;
      *((_WORD *)v10 + 5) = 1538;
      *((_DWORD *)v10 + 54) = 1538;
      v16 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
              DeviceObject,
              TargetDeviceObject,
              (unsigned __int64)&GUID_USBD_INTERFACE,
              (unsigned __int16 *)v10 + 4);
      v8 = v16;
      if ( v16 < 0 )
      {
        v17 = g_EnableDbgPrints == 0;
        *((_DWORD *)v10 + 54) = 1536;
        if ( !v17 )
          DbgPrintEx(
            0x4Du,
            3u,
            "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_602, 0x%x\n",
            TargetDeviceObject,
            v16);
        v8 = 0;
        v13 = 0;
LABEL_33:
        if ( g_EnableDbgPrints )
          DbgPrintEx(0x4Du, 3u, "USBD_CreateHandle Successful: usbdHandleInfo 0x%p\n", v10);
        if ( *((_DWORD *)v10 + 54) == 1536 )
        {
          memset(v21, 0, 0x48uLL);
          LODWORD(v21[0]) = 65608;
          v14 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                  DeviceObject,
                  TargetDeviceObject,
                  (unsigned __int64)&USB_BUS_INTERFACE_USBDI_GUID,
                  (unsigned __int16 *)v21);
          v8 = v14;
          if ( v14 >= 0 )
          {
            v18 = v21[8];
            if ( v21[8] )
              v18 = ((__int64 (__fastcall *)(_QWORD))v21[8])(v21[1]);
            *((_BYTE *)v10 + 224) = v18;
            ((void (__fastcall *)(_QWORD))v21[3])(v21[1]);
          }
          else
          {
            if ( g_EnableDbgPrints )
              DbgPrintEx(
                0x4Du,
                0,
                "Core stack (TargetDevieObject 0x%p) failed query to USB_BUS_INTERFACE_USBDI_GUID : USB_BUSIF_USBDI_VERSION_1, 0x%x\n",
                TargetDeviceObject,
                v14);
            *((_DWORD *)v10 + 54) = -1;
            v8 = 0;
          }
        }
        else if ( v8 < 0 )
        {
          if ( v13 )
          {
            v19 = (void (__fastcall *)(_QWORD))*((_QWORD *)v10 + 14);
            if ( v19 )
              v19(*((_QWORD *)v10 + 6));
          }
          ExFreePoolWithTag(v10, 0x68334855u);
          goto LABEL_58;
        }
        *USBDHandle = v10;
        goto LABEL_41;
      }
    }
    else
    {
      *((_DWORD *)v10 + 54) = *((unsigned __int16 *)v10 + 5);
    }
    v13 = 1;
    goto LABEL_33;
  }
  if ( g_EnableDbgPrints )
    DbgPrintEx(0x4Du, 0, "USBDHandle cannot be NULL\n");
  return -1073741811;
}
