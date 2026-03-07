NTSTATUS __stdcall USBD_QueryUsbCapability(
        USBD_HANDLE USBDHandle,
        const GUID *CapabilityType,
        ULONG OutputBufferLength,
        PUCHAR OutputBuffer,
        PULONG ResultLength)
{
  NTSTATUS v9; // ebx
  int v10; // eax
  __int64 v11; // rax
  struct _DEVICE_OBJECT *v12; // rdx
  struct _DEVICE_OBJECT *v13; // rcx
  _QWORD v15[2]; // [rsp+30h] [rbp-48h] BYREF
  GUID v16; // [rsp+40h] [rbp-38h]
  ULONG v17; // [rsp+50h] [rbp-28h]
  int v18; // [rsp+54h] [rbp-24h]

  if ( KeGetCurrentIrql() )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "PASSIVE_LEVEL required\n");
    return -1073741811;
  }
  if ( !USBDHandle )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "USBDHandle cant be NULL\n");
    return -1073741811;
  }
  if ( !CapabilityType )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "CapabilityType cant be NULL\n");
    return -1073741811;
  }
  if ( OutputBufferLength )
  {
    if ( !OutputBuffer )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "OutputBuffer cant be NULL if OutputBufferLength is not zero\n");
      return -1073741811;
    }
  }
  else if ( OutputBuffer )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "OutputBuffer must be NULL if OutputBufferLength is zero\n");
    return -1073741811;
  }
  v10 = *((_DWORD *)USBDHandle + 54);
  if ( v10 == -1 )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(
        0x4Du,
        0,
        "Could not exchange an interface with the Underlying USB core stack, querrying for capability is not possible\n");
    return -1073741822;
  }
  if ( v10 != 1536 )
  {
    v11 = *((_QWORD *)USBDHandle + 6);
    v12 = (struct _DEVICE_OBJECT *)*((_QWORD *)USBDHandle + 26);
    v13 = (struct _DEVICE_OBJECT *)*((_QWORD *)USBDHandle + 7);
    v16 = *CapabilityType;
    v15[0] = 2621441LL;
    v18 = 0;
    v15[1] = v11;
    v17 = OutputBufferLength;
    return USBDInternal_BuildandSendIoctlSynchronously(v13, v12, (_IRP *)OutputBuffer, (unsigned __int64)v15);
  }
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
      return v9;
    }
    if ( !*((_BYTE *)USBDHandle + 224) )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 3u, "Device is not High Speed\n");
      return -1073741637;
    }
    return 0;
  }
  if ( RtlCompareMemory(CapabilityType, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0x10uLL) != 16 )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "QueryUsbCapability not supported/implemented by core stack\n");
    return -1073741822;
  }
  if ( !OutputBuffer )
    return 0;
  v9 = -1073741811;
  if ( g_EnableDbgPrints )
    DbgPrintEx(0x4Du, 0, "OutputBuffer must be NULL for GUID_USB_CAPABILITY_SELECTIVE_SUSPEND\n");
  return v9;
}
