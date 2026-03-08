/*
 * XREFs of Usbh_SetWAKE_ON_CONNECT @ 0x1C0047C60
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C003B830 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall Usbh_SetWAKE_ON_CONNECT(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  __int64 result; // rax
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rbx
  unsigned int v11; // ecx
  __int64 v12; // [rsp+28h] [rbp-20h]

  result = (__int64)FdoExt(a1);
  v10 = result;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = WPP_RECORDER_SF_S(
                 WPP_GLOBAL_Control->DeviceExtension,
                 v8,
                 v9,
                 14,
                 (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
                 a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v12) = a4;
      result = WPP_RECORDER_SF_d(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 0,
                 1u,
                 0xFu,
                 (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
                 v12);
    }
  }
  v11 = *(_DWORD *)(v10 + 2560) & 0xFEFFFFFF;
  *(_DWORD *)(v10 + 2560) = v11;
  if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) < 2 || *(&WPP_MAIN_CB.AlignmentRequirement + 1) == 3 && a4 == 4 && *a3 )
    *(_DWORD *)(v10 + 2560) = v11 | 0x1000000;
  return result;
}
