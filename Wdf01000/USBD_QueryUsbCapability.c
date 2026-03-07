__int64 __fastcall USBD_QueryUsbCapability(
        USBD_HANDLE__ *USBDHandle,
        const _GUID *CapabilityType,
        unsigned int OutputBufferLength,
        unsigned __int8 *OutputBuffer,
        unsigned int *ResultLength)
{
  int v9; // ebx
  int v10; // eax
  USBDI_HANDLE__ *v11; // rax
  _DEVICE_OBJECT *v12; // rdx
  _DEVICE_OBJECT *v13; // rcx
  _QUERY_USB_CAPABILITY usbCapability; // [rsp+30h] [rbp-58h] BYREF

  if ( ResultLength )
    *ResultLength = 0;
  if ( KeGetCurrentIrql() )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "PASSIVE_LEVEL required\n");
    return (unsigned int)-1073741811;
  }
  if ( !USBDHandle )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "USBDHandle cant be NULL\n");
    return (unsigned int)-1073741811;
  }
  if ( !CapabilityType )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "CapabilityType cant be NULL\n");
    return (unsigned int)-1073741811;
  }
  if ( OutputBufferLength )
  {
    if ( !OutputBuffer )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "OutputBuffer cant be NULL if OutputBufferLength is not zero\n");
      return (unsigned int)-1073741811;
    }
  }
  else if ( OutputBuffer )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "OutputBuffer must be NULL if OutputBufferLength is zero\n");
    return (unsigned int)-1073741811;
  }
  v10 = *((_DWORD *)USBDHandle + 54);
  if ( v10 == -1 )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(
        0x4Du,
        0,
        "Could not exchange an interface with the Underlying USB core stack, querrying for capability is not possible\n");
    return (unsigned int)-1073741822;
  }
  if ( v10 == 1536 )
  {
    if ( RtlCompareMemory(CapabilityType, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE, 0x10uLL) == 16 )
    {
      if ( OutputBuffer )
      {
        v9 = -1073741811;
        if ( g_EnableDbgPrints )
          DbgPrintEx(
            0x4Du,
            0,
            "OutputBuffer must be NULL for GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE\n");
        return (unsigned int)v9;
      }
      if ( !*((_BYTE *)USBDHandle + 224) )
      {
        if ( g_EnableDbgPrints )
          DbgPrintEx(0x4Du, 3u, "Device is not High Speed\n");
        return (unsigned int)-1073741637;
      }
      return 0;
    }
    if ( RtlCompareMemory(CapabilityType, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0x10uLL) != 16 )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "QueryUsbCapability not supported/implemented by core stack\n");
      return (unsigned int)-1073741822;
    }
    if ( !OutputBuffer )
      return 0;
    v9 = -1073741811;
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "OutputBuffer must be NULL for GUID_USB_CAPABILITY_SELECTIVE_SUSPEND\n");
  }
  else
  {
    v11 = (USBDI_HANDLE__ *)*((_QWORD *)USBDHandle + 6);
    v12 = (_DEVICE_OBJECT *)*((_QWORD *)USBDHandle + 26);
    v13 = (_DEVICE_OBJECT *)*((_QWORD *)USBDHandle + 7);
    usbCapability.CapabilityType = *CapabilityType;
    *(_QWORD *)&usbCapability.Version = 2621441LL;
    usbCapability.ResultLength = 0;
    usbCapability.USBDIHandle = v11;
    usbCapability.OutputBufferLength = OutputBufferLength;
    v9 = USBDInternal_BuildandSendIoctlSynchronously(
           v13,
           v12,
           (_IRP::<unnamed_type_AssociatedIrp>)OutputBuffer,
           (unsigned __int64)&usbCapability);
    if ( v9 >= 0 && ResultLength )
      *ResultLength = usbCapability.ResultLength;
  }
  return (unsigned int)v9;
}
