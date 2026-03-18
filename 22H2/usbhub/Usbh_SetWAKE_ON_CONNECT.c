/*
 * XREFs of Usbh_SetWAKE_ON_CONNECT @ 0x1C0048730
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C003C0E0 (WPP_RECORDER_SF_S.c)
 */

unsigned int __fastcall Usbh_SetWAKE_ON_CONNECT(__int64 a1, const wchar_t *a2, _DWORD *a3, int a4)
{
  __int64 v7; // rdx
  _DWORD *v8; // rbx
  __int64 v9; // r8
  unsigned int result; // eax
  __int64 v11; // [rsp+28h] [rbp-20h]

  v8 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v7,
        v9,
        0xEu,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v11) = a4;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0xFu,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        v11);
    }
  }
  result = v8[640] & 0xFEFFFFFF;
  v8[640] = result;
  if ( dword_1C006C4BC >= 0 && (dword_1C006C4BC <= 1 || dword_1C006C4BC == 3 && a4 == 4 && *a3) )
  {
    result |= 0x1000000u;
    v8[640] = result;
  }
  return result;
}
