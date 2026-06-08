/*
 * XREFs of PepNotifyPerfSet @ 0x1C000D694
 * Callers:
 *     PepPerfControlHandler @ 0x1C000D750 (PepPerfControlHandler.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall PepNotifyPerfSet(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx
  int v8; // [rsp+28h] [rbp-30h]
  _DWORD v9[6]; // [rsp+30h] [rbp-28h] BYREF

  v9[4] = a5;
  v9[0] = a2;
  v9[1] = a3;
  v9[3] = a6;
  v9[2] = a4;
  v6 = PoFxProcessorNotification(a1, 13LL, v9);
  if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = v6;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x25u,
      (__int64)&WPP_1d6ef99ef6c8303b7a60f04e4b83c2ae_Traceguids,
      v8);
  }
  return (unsigned int)v6;
}
