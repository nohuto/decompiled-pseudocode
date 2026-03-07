__int64 __fastcall UsbDevice_UcxEvtEndpointsConfigure(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // edx
  __int64 v5; // rbx
  int v6; // r8d
  int v7; // r9d
  bool v8; // zf
  _OWORD v10[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v11; // [rsp+60h] [rbp-28h]

  memset(v10, 0, sizeof(v10));
  v11 = 0LL;
  LOWORD(v10[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v10);
  *(_WORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              a2,
              off_1C0063090) = 0;
  v3 = *((_QWORD *)&v10[0] + 1);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(*((_QWORD *)&v10[0] + 1) + 16LL),
         off_1C00632C0);
  if ( !v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v4, v6, v7);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  *(_QWORD *)(v5 + 440) = a2;
  *(_QWORD *)(v5 + 592) = v3;
  *(_DWORD *)(v5 + 448) = 259;
  v8 = *(_DWORD *)(v5 + 600) == 0;
  *(_BYTE *)(v5 + 432) = *(_DWORD *)(v3 + 24) == 0;
  if ( !v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v4, v6, v7);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  return UsbDevice_QueueConfigureEndpointEvent(v5, 5LL);
}
