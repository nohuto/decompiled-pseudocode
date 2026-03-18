/*
 * XREFs of Endpoint_Disable @ 0x1C000B0DC
 * Callers:
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0008B44 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C000BC1C (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C000D0A0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000FD7C (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0013260 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0018D80 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_EnableCompletion @ 0x1C00195B0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0048520 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0048760 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0049C80 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     Endpoint_Disable_Internal @ 0x1C000B8D4 (Endpoint_Disable_Internal.c)
 *     ESM_AddEvent @ 0x1C000C418 (ESM_AddEvent.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x1C0032CE0 (Controller_DecrementNumberOfEndpointsOffloaded.c)
 */

__int64 __fastcall Endpoint_Disable(__int64 a1, __int64 a2)
{
  char v2; // di

  v2 = a2;
  if ( *(_DWORD *)(a1 + 1360) == 2 )
  {
    *(_DWORD *)(a1 + 1360) = 0;
    Controller_DecrementNumberOfEndpointsOffloaded(*(_QWORD *)a1);
  }
  LOBYTE(a2) = v2;
  Endpoint_Disable_Internal(a1, a2);
  return ESM_AddEvent((PVOID)(a1 + 296));
}
