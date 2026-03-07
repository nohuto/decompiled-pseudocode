char __fastcall UsbDevice_HandleAssignPinsForEndpointsToOffloadState(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // ebp
  int v5; // r14d
  unsigned int v6; // eax
  unsigned int *v8; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned int v14; // [rsp+70h] [rbp+8h]

  v4 = 0;
  *(_DWORD *)(a1 + 580) = *(_DWORD *)(a2 + 84);
  v5 = 0;
  v6 = *(_DWORD *)(a2 + 84);
  v8 = *(unsigned int **)(a2 + 88);
  v14 = 0;
  if ( v6 )
  {
    do
    {
      v10 = 0LL;
      if ( *(_DWORD *)(a2 + 24) )
      {
        do
        {
          v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                  WdfDriverGlobals,
                  *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v10),
                  off_1C00631A8);
          v12 = v11;
          if ( *(unsigned __int8 *)(v11 + 98) == *((_WORD *)v8 + 2) )
          {
            ++v5;
            if ( *(_DWORD *)(v11 + 1360) )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
              if ( !KdRefreshDebuggerNotPresent() )
                __debugbreak();
            }
            else
            {
              *(_DWORD *)(v11 + 1360) = 1;
            }
            UsbDevice_SetResourceAssignment(a1, v12, *(unsigned int *)((char *)v8 + 6));
          }
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (unsigned int)v10 < *(_DWORD *)(a2 + 24) );
        v4 = v14;
      }
      ++v4;
      v8 = (unsigned int *)((char *)v8 + *v8);
      v14 = v4;
      v6 = *(_DWORD *)(a2 + 84);
    }
    while ( v4 < v6 );
  }
  if ( v5 != v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    LOBYTE(v6) = KdRefreshDebuggerNotPresent();
    if ( !(_BYTE)v6 )
      __debugbreak();
  }
  return v6;
}
