/*
 * XREFs of UsbDevice_HandleUnassignPinsForOffloadedEndpointsState @ 0x1C0049384
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0008958 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 *     UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList @ 0x1C0049558 (UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList.c)
 *     UsbDevice_SetResourceAssignment @ 0x1C0049ABC (UsbDevice_SetResourceAssignment.c)
 */

char __fastcall UsbDevice_HandleUnassignPinsForOffloadedEndpointsState(__int64 a1, __int64 a2, int a3, int a4)
{
  int v6; // esi
  __int64 v7; // rax
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdi
  int i; // ebp

  if ( !*(_DWORD *)(a2 + 40) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v6 = 0;
  LODWORD(v7) = UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList(a2);
  v11 = 0LL;
  *(_DWORD *)(a1 + 580) = v7;
  for ( i = v7; (unsigned int)v11 < *(_DWORD *)(a2 + 40); v11 = (unsigned int)(v11 + 1) )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
           WdfDriverGlobals,
           *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v11),
           off_1C00631A8);
    if ( *(_DWORD *)(v7 + 1360) == 2 )
    {
      ++v6;
      LOBYTE(v7) = UsbDevice_SetResourceAssignment(a1, v7, 0LL);
    }
  }
  if ( v6 != i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v8, v9, v10);
    LOBYTE(v7) = KdRefreshDebuggerNotPresent();
    if ( !(_BYTE)v7 )
      __debugbreak();
  }
  return v7;
}
