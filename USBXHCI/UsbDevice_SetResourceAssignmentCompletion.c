void __fastcall UsbDevice_SetResourceAssignmentCompletion(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // ecx
  __int64 v7; // rcx
  int v8; // edx

  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v4 + 16);
  --*(_DWORD *)(v5 + 580);
  if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    if ( *(_DWORD *)(v5 + 600) == 8 )
    {
      v6 = *(_DWORD *)(v4 + 1360);
      if ( v6 == 2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
        if ( !KdRefreshDebuggerNotPresent() )
          __debugbreak();
      }
      else
      {
        if ( *(_DWORD *)(*(_QWORD *)v4 + 636LL) == 2 && v6 != 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
          if ( !KdRefreshDebuggerNotPresent() )
            __debugbreak();
        }
        v7 = *(_QWORD *)v4;
        *(_DWORD *)(v4 + 1360) = 2;
        Controller_IncrementNumberOfEndpointsOffloaded(v7);
      }
    }
  }
  else
  {
    if ( *(_DWORD *)(v5 + 448) == 259 )
      *(_DWORD *)(v5 + 448) = -1073741823;
    *(_BYTE *)(v5 + 584) = 1;
  }
  if ( !*(_DWORD *)(v5 + 580) )
  {
    v8 = 1;
    if ( *(_BYTE *)(v5 + 584) )
      v8 = 2;
    UsbDevice_QueueConfigureEndpointEvent(v5, v8);
  }
}
