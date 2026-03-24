/*
 * XREFs of Usbh_SetHUB_SELECTIVE_SUSPEND @ 0x1C0048200
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C003C0E0 (WPP_RECORDER_SF_S.c)
 */

_DWORD *__fastcall Usbh_SetHUB_SELECTIVE_SUSPEND(__int64 a1, const wchar_t *a2, _DWORD *a3, int a4)
{
  _DWORD *result; // rax
  __int64 v8; // [rsp+28h] [rbp-20h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        (__int64)a3,
        0x10u,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v8) = a4;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x11u,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        v8);
    }
  }
  if ( a4 == 4 && *a3 )
  {
    result = FdoExt(a1);
    result[820] = 4;
  }
  else
  {
    result = FdoExt(a1);
    result[820] = 5;
  }
  return result;
}
