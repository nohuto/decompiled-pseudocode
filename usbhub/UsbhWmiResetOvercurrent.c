__int64 __fastcall UsbhWmiResetOvercurrent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // edi
  _DWORD *v7; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x13u,
      (__int64)&WPP_ec4ff3de95383249fcb308d84b12865b_Traceguids);
  v6 = *(_DWORD *)(a5 + 4);
  if ( !v6 )
    FdoExt(a1);
  v7 = FdoExt(a1);
  UsbhOvercurrentResetWorker(a1, v6, (__int64)(v7 + 346), 0);
  return 0LL;
}
