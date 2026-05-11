/*
 * XREFs of USBD_QueryUsbCapability @ 0x1C0011954
 * Callers:
 *     USBDeviceGetOffloadCapability @ 0x1C002C6B0 (USBDeviceGetOffloadCapability.c)
 * Callees:
 *     USBDInternal_BuildandSendIoctlSynchronously @ 0x1C001090C (USBDInternal_BuildandSendIoctlSynchronously.c)
 *     __security_check_cookie @ 0x1C0011C50 (__security_check_cookie.c)
 */

NTSTATUS __stdcall USBD_QueryUsbCapability(
        USBD_HANDLE USBDHandle,
        const GUID *CapabilityType,
        ULONG OutputBufferLength,
        PUCHAR OutputBuffer,
        PULONG ResultLength)
{
  NTSTATUS v5; // ebx
  int v6; // eax
  __int64 v7; // rax
  struct _DEVICE_OBJECT *v8; // rdx
  struct _DEVICE_OBJECT *v9; // rcx
  _DWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+38h] [rbp-30h]
  GUID v13; // [rsp+40h] [rbp-28h]
  int v14; // [rsp+50h] [rbp-18h]
  ULONG v15; // [rsp+54h] [rbp-14h]

  if ( ResultLength )
    *ResultLength = 0;
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
  if ( !OutputBuffer )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "OutputBuffer cant be NULL if OutputBufferLength is not zero\n");
    return -1073741811;
  }
  v6 = *((_DWORD *)USBDHandle + 54);
  if ( v6 == -1 )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(
        0x4Du,
        0,
        "Could not exchange an interface with the Underlying USB core stack, querrying for capability is not possible\n");
    return -1073741822;
  }
  if ( v6 == 1536 )
  {
    if ( RtlCompareMemory(
           &GUID_USB_CAPABILITY_ENDPOINT_OFFLOAD,
           &GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE,
           0x10uLL) == 16 )
    {
      v5 = -1073741811;
      if ( g_EnableDbgPrints )
        DbgPrintEx(
          0x4Du,
          0,
          "OutputBuffer must be NULL for GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE\n");
    }
    else
    {
      if ( RtlCompareMemory(&GUID_USB_CAPABILITY_ENDPOINT_OFFLOAD, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0x10uLL) != 16 )
      {
        if ( g_EnableDbgPrints )
          DbgPrintEx(0x4Du, 0, "QueryUsbCapability not supported/implemented by core stack\n");
        return -1073741822;
      }
      v5 = -1073741811;
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "OutputBuffer must be NULL for GUID_USB_CAPABILITY_SELECTIVE_SUSPEND\n");
    }
  }
  else
  {
    v7 = *((_QWORD *)USBDHandle + 6);
    v8 = (struct _DEVICE_OBJECT *)*((_QWORD *)USBDHandle + 26);
    v9 = (struct _DEVICE_OBJECT *)*((_QWORD *)USBDHandle + 7);
    v11[1] = 0;
    v15 = 0;
    v13 = GUID_USB_CAPABILITY_ENDPOINT_OFFLOAD;
    v11[0] = 2621441;
    v12 = v7;
    v14 = 4;
    v5 = USBDInternal_BuildandSendIoctlSynchronously(v9, v8, (struct _IRP *)OutputBuffer, (ULONG_PTR)v11);
    if ( v5 >= 0 && ResultLength )
      *ResultLength = v15;
  }
  return v5;
}
