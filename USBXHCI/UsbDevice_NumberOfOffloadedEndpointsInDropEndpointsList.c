/*
 * XREFs of UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList @ 0x1C0049558
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0008958 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x1C0049284 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnassignPinsForOffloadedEndpointsState @ 0x1C0049384 (UsbDevice_HandleUnassignPinsForOffloadedEndpointsState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList(__int64 a1)
{
  __int64 result; // rax
  unsigned int i; // esi
  unsigned int v4; // ebx
  int v5; // ecx

  result = 0LL;
  for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
  {
    v4 = result;
    v5 = *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                       WdfDriverGlobals,
                       *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * i),
                       off_1C00631A8)
                   + 1360);
    result = v4 + 1;
    if ( v5 != 2 )
      result = v4;
  }
  return result;
}
