__int64 __fastcall UsbDevice_StopEndpointToOffloadedEndpointCompletion(__int64 a1, int a2, int a3, int a4)
{
  __int64 result; // rax
  __int64 v6; // rcx

  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  result = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(result + 16);
  if ( (*(_DWORD *)(v6 + 580))-- == 1 )
    return UsbDevice_QueueConfigureEndpointEvent(v6, 1);
  return result;
}
