/*
 * XREFs of XilUsbDevice_GetDeviceContextBufferVA @ 0x1C0007FF0
 * Callers:
 *     UsbDevice_InitializeInputContextForDropEndpoints @ 0x1C000D024 (UsbDevice_InitializeInputContextForDropEndpoints.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C000D0A0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_GetXhciEndpointDequeuePointer @ 0x1C001117C (UsbDevice_GetXhciEndpointDequeuePointer.c)
 *     UsbDevice_GetEndpointState @ 0x1C00111E4 (UsbDevice_GetEndpointState.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0018D80 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0019A50 (UsbDevice_SetAddressCompletion.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C0019E94 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C003A6B4 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C003AC30 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C003C068 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C0048C9C (UsbDevice_GetEndpointOffloadInformation.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C004C584 (Crashdump_InitializeDeviceContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilUsbDevice_GetDeviceContextBufferVA(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 0LL;
  if ( *(_BYTE *)(a1 + 657) )
    v2 = *(_QWORD *)(a1 + 640);
  else
    v2 = *(_QWORD *)(a1 + 632);
  if ( v2 )
    return *(_QWORD *)(v2 + 16);
  return result;
}
