/*
 * XREFs of Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED @ 0x1C0047B60
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C003B830 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        int a4)
{
  __int64 result; // rax
  __int64 v8; // [rsp+28h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = WPP_RECORDER_SF_S(
                 WPP_GLOBAL_Control->DeviceExtension,
                 a2,
                 (_DWORD)a3,
                 28,
                 (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
                 a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v8) = a4;
      result = WPP_RECORDER_SF_d(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 0,
                 1u,
                 0x1Du,
                 (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
                 v8);
    }
  }
  if ( a4 == 4 )
  {
    result = *a3;
    if ( (_DWORD)result )
    {
      PdoExt(a1)[742] = 1000 * result;
      result = (__int64)PdoExt(a1);
      if ( *(int *)(result + 2968) > 30000 )
      {
        result = (__int64)PdoExt(a1);
        *(_DWORD *)(result + 2968) = 30000;
      }
    }
  }
  return result;
}
