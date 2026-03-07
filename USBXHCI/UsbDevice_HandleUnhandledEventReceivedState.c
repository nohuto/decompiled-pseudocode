__int64 __fastcall UsbDevice_HandleUnhandledEventReceivedState(__int64 a1, int a2, int a3, int a4)
{
  int v5; // edx
  int v6; // r8d
  int v7; // r9d

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  if ( *(_DWORD *)(a1 + 448) == 259 )
    *(_DWORD *)(a1 + 448) = -1073741595;
  return UsbDevice_CompleteConfigureEndpointRequest(a1, v5, v6, v7);
}
