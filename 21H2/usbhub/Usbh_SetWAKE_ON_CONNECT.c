/*
 * XREFs of Usbh_SetWAKE_ON_CONNECT @ 0x1C00473B0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C003ADD0 (WPP_RECORDER_SF_S.c)
 */

unsigned int __fastcall Usbh_SetWAKE_ON_CONNECT(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  int v7; // edx
  _DWORD *v8; // rbx
  int v9; // r8d
  unsigned int result; // eax
  __int64 v11; // [rsp+28h] [rbp-20h]

  v8 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        v9,
        14,
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
  if ( *((int *)&WPP_MAIN_CB.AlignmentRequirement + 1) >= 0
    && (*((int *)&WPP_MAIN_CB.AlignmentRequirement + 1) <= 1
     || *(&WPP_MAIN_CB.AlignmentRequirement + 1) == 3 && a4 == 4 && *a3) )
  {
    result |= 0x1000000u;
    v8[640] = result;
  }
  return result;
}
