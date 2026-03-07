_DWORD *__fastcall Usbh_USB_DEVICE_POWER_UP_DELAY(__int64 a1, __int64 a2, unsigned __int8 *a3, int a4)
{
  _DWORD *result; // rax
  __int16 v8; // bx
  __int64 v9; // [rsp+28h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        (_DWORD)a3,
        36,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v9) = a4;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x25u,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        v9);
    }
  }
  result = (_DWORD *)*a3;
  if ( (_BYTE)result )
  {
    v8 = 2 * (_WORD)result;
    result = PdoExt(a1);
    *((_WORD *)result + 718) = v8;
  }
  return result;
}
