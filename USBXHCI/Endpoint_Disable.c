/*
 * XREFs of Endpoint_Disable @ 0x1C000B0AC
 * Callers:
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0008B14 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C000BBEC (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C000D070 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000FD4C (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C0013210 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0018D30 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_EnableCompletion @ 0x1C0019560 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0048620 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0048860 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0049D80 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     Endpoint_Disable_Internal @ 0x1C000B8A4 (Endpoint_Disable_Internal.c)
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x1C0032DE0 (Controller_DecrementNumberOfEndpointsOffloaded.c)
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
