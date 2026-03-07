__int64 __fastcall Controller_DecrementNumberOfEndpointsOffloaded(__int64 a1)
{
  int v2; // edx
  int v3; // r8d
  int v4; // r9d
  int v5; // eax
  int v6; // edx
  int v7; // eax
  __int64 v8; // rdx

  DynamicLock_Acquire(*(_QWORD *)(a1 + 648));
  v5 = *(_DWORD *)(a1 + 640);
  if ( v5 )
  {
    v7 = v5 - 1;
    *(_DWORD *)(a1 + 640) = v7;
    if ( !v7 && *(_DWORD *)(a1 + 636) == 1 )
    {
      Interrupter_DeInitializeAfterOffload(*(_QWORD *)(a1 + 128));
      if ( *(_DWORD *)(a1 + 636) == 1 )
      {
        v8 = *(_QWORD *)(a1 + 832);
        *(_BYTE *)(a1 + 840) = 0;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3040))(WdfDriverGlobals, v8);
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v2, v3, v4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v6, 4, 313, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids);
    }
  }
  return DynamicLock_Release(*(_QWORD *)(a1 + 648));
}
