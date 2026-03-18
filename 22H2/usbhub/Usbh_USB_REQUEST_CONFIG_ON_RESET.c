/*
 * XREFs of Usbh_USB_REQUEST_CONFIG_ON_RESET @ 0x1C0048C90
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C003C0E0 (WPP_RECORDER_SF_S.c)
 */

_UNKNOWN **__fastcall Usbh_USB_REQUEST_CONFIG_ON_RESET(__int64 a1, const wchar_t *a2, _BYTE *a3, int a4)
{
  _UNKNOWN **result; // rax
  __int64 v8; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = (_UNKNOWN **)WPP_RECORDER_SF_S(
                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                              (__int64)a2,
                              (__int64)a3,
                              0x28u,
                              (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
                              a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v8) = a4;
      result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                              0,
                              1u,
                              0x29u,
                              (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
                              v8);
    }
  }
  if ( *a3 )
  {
    result = (_UNKNOWN **)PdoExt(a1);
    *((_DWORD *)result + 358) |= 0x4000u;
  }
  return result;
}
