__int64 __fastcall XilDeviceSlot_Create(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rcx
  char v6; // dl
  _QWORD *XilCoreDeviceSlotData; // rax
  __int64 v8; // rcx
  int SecureObject; // ebx
  int v11; // edx
  int v12; // r8d
  int v13; // r9d

  v5 = a1 + 16;
  *(_QWORD *)(v5 + 72) = a1;
  v6 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 601LL);
  *(_BYTE *)(v5 + 64) = v6;
  if ( v6 )
  {
    SecureObject = XilDeviceSlot_CreateSecureObject();
    if ( SecureObject < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v11, v12, v13);
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
  }
  else
  {
    XilCoreDeviceSlotData = (_QWORD *)DeviceSlot_GetXilCoreDeviceSlotData(a1, 0, a3, a4);
    *XilCoreDeviceSlotData = a1;
    v8 = *(_QWORD *)(a1 + 8);
    SecureObject = 0;
    XilCoreDeviceSlotData[1] = v8;
  }
  return (unsigned int)SecureObject;
}
