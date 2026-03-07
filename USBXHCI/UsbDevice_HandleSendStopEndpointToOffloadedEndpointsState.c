__int64 __fastcall UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rbx

  result = UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList(a2);
  v8 = 0LL;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a1 + 580) = result;
    if ( *(_DWORD *)(a2 + 40) )
    {
      do
      {
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v8),
                   off_1C00631A8);
        if ( *(_DWORD *)(result + 1360) == 2 )
          result = UsbDevice_SendStopEndpointToOffloadedEndpoint(a1, result);
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < *(_DWORD *)(a2 + 40) );
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v5, v6, v7);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    if ( *(_DWORD *)(a1 + 448) == 259 )
      *(_DWORD *)(a1 + 448) = -1073741595;
    return UsbDevice_QueueConfigureEndpointEvent(a1, 2);
  }
  return result;
}
