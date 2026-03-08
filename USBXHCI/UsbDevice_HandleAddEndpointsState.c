/*
 * XREFs of UsbDevice_HandleAddEndpointsState @ 0x1C0049038
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0008958 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0008824 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0008958 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x1C000AF50 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 */

__int64 __fastcall UsbDevice_HandleAddEndpointsState(__int64 a1, __int64 a2)
{
  int v3; // eax

  v3 = UsbDevice_InitializeInputContextForAddDropEndpoints(a1, a2, 2u);
  if ( v3 >= 0 )
    return UsbDevice_SendConfigureEndpointCommand(a1, 2);
  if ( *(_DWORD *)(a1 + 448) == 259 )
    *(_DWORD *)(a1 + 448) = v3;
  return UsbDevice_QueueConfigureEndpointEvent(a1, 2);
}
