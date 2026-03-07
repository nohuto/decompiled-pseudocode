__int64 __fastcall XilDeviceSlot_SetDeviceContext(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v6; // r14
  __int64 XilCoreDeviceSlotData; // rax
  int v8; // eax
  int v9; // edx
  int v10; // ebx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // edx
  int v15; // r8d
  int v16; // r9d

  v3 = a1 + 16;
  v4 = a3;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL);
  if ( Controller_IsControllerAccessible(v6) )
  {
    if ( *(_BYTE *)(v3 + 64) )
    {
      v10 = XilDeviceSlot_SendSetDeviceContextRequest(v3, a2, (unsigned int)v4);
      if ( v10 >= 0 )
      {
        v12 = *(_QWORD *)(v3 + 72);
        if ( *(_BYTE *)(v12 + 80) )
          v13 = *(_QWORD *)(v12 + 24);
        else
          v13 = *(_QWORD *)(v12 + 72);
        *(_QWORD *)(v13 + 8 * v4) = a2;
      }
    }
    else
    {
      XilCoreDeviceSlotData = DeviceSlot_GetXilCoreDeviceSlotData(*(_QWORD *)(v3 + 72));
      v8 = XilCoreDeviceSlot_SetDeviceContext(XilCoreDeviceSlotData, a2, (unsigned int)v4, 0LL);
      v10 = v8;
      if ( v8 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v6 + 72),
            v9,
            10,
            25,
            (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
            v8);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v14, v15, v16);
        }
        if ( !KdRefreshDebuggerNotPresent() )
          __debugbreak();
      }
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v10;
}
