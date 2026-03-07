__int64 __fastcall UsbDevice_EvtUsbDeviceCleanupCallback(__int64 a1)
{
  __int64 result; // rax
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C00632C0);
  v5 = result;
  if ( *(_QWORD *)result == a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = *(_QWORD *)((*(_BYTE *)(result + 657) != 0 ? 8 : 0) + result + 640);
      if ( v6 )
        v7 = *(_QWORD *)(v6 + 16);
      else
        LODWORD(v7) = 0;
      WPP_RECORDER_SF_dqqq(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL), v7, v3, v4);
    }
    if ( *(_BYTE *)(v5 + 657) )
      XilUsbDevice_DestroySecureObject((__int64 *)(v5 + 608));
    XilUsbDevice_FreeResources(v5 + 608);
    if ( *(_QWORD *)(v5 + 72) || *(_QWORD *)(v5 + 80) )
      Controller_RemoveDeviceFromControllerDeviceList(*(_QWORD *)(v5 + 8), *(_QWORD *)v5, (_QWORD *)(v5 + 72));
    return Etw_DeviceDelete(v8, v5);
  }
  return result;
}
