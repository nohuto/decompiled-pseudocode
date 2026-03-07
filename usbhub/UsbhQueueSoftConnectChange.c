__int64 __fastcall UsbhQueueSoftConnectChange(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
{
  int v4; // esi
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned __int16 v10; // dx
  int v11; // ecx
  __int64 v12; // [rsp+28h] [rbp-50h]
  int v13; // [rsp+28h] [rbp-50h]
  int v14; // [rsp+50h] [rbp-28h] BYREF
  int v15; // [rsp+54h] [rbp-24h] BYREF
  __int64 v16; // [rsp+58h] [rbp-20h]

  v4 = a2;
  v16 = 1LL;
  v15 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = a2;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x54u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v13);
  }
  result = UsbhGetPortData(a1, v4);
  v9 = result;
  if ( result )
  {
    if ( a4
      && (UsbhDisablePort(a1), (FdoExt(a1)[640] & 1) != 0)
      && ((v10 = *(_WORD *)(v9 + 4), v14 = 0, v11 = UsbhQueryPortState(a1, v10, (__int64)&v14, &v15), v11 < 0)
       || (v14 & 2) != 0
       && ((UsbhWait(a1, 0xAu), v11 = UsbhQueryPortState(a1, *(_WORD *)(v9 + 4), (__int64)&v14, &v15), v11 < 0)
        || (v14 & 2) != 0)) )
    {
      result = UsbhException(a1, *(unsigned __int16 *)(v9 + 4), 20, 0, 0, v11, v15, usbfile_pchange_c, 5286, 0);
    }
    else
    {
      result = (__int64)UsbhDispatch_PortChangeQueueEventEx(a1, v9, 4, a3, v16, 0, 0LL, 0LL);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v12) = v4;
      return WPP_RECORDER_SF_d(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               0,
               1u,
               0x55u,
               (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
               v12);
    }
  }
  return result;
}
