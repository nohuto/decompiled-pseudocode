/*
 * XREFs of Endpoint_Disable @ 0x1C000AB88
 * Callers:
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0005C8C (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C00074B0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C0007D58 (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000AA1C (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_EnableCompletion @ 0x1C000E630 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C000E990 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0010610 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0045BB0 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0045DE4 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0047300 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C0008850 (ESM_AddEvent.c)
 *     Endpoint_Disable_Internal @ 0x1C000ABD4 (Endpoint_Disable_Internal.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x1C0031164 (Controller_DecrementNumberOfEndpointsOffloaded.c)
 */

void __fastcall Endpoint_Disable(__int64 a1, __int64 a2)
{
  char v2; // di

  v2 = a2;
  if ( *(_DWORD *)(a1 + 1352) == 2 )
  {
    *(_DWORD *)(a1 + 1352) = 0;
    Controller_DecrementNumberOfEndpointsOffloaded(*(_QWORD *)a1);
  }
  LOBYTE(a2) = v2;
  Endpoint_Disable_Internal(a1, a2);
  ESM_AddEvent((KSPIN_LOCK *)(a1 + 288), 27);
}
