/*
 * XREFs of ACPIVerifyUSB4Presence @ 0x1C003D85C
 * Callers:
 *     ACPIRootInitialize @ 0x1C0093768 (ACPIRootInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_i @ 0x1C002293C (WPP_RECORDER_SF_i.c)
 *     ACPIAmliEvaluateOsc @ 0x1C007C7D8 (ACPIAmliEvaluateOsc.c)
 */

__int64 __fastcall ACPIVerifyUSB4Presence(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  int v4; // edx
  unsigned int v5; // ebx
  int v7[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v8[4]; // [rsp+40h] [rbp-28h] BYREF

  v8[1] = 0;
  v8[0] = 1;
  v8[2] = 15;
  v3 = *(_QWORD *)(RootDeviceExtension + 760);
  *(_OWORD *)v7 = SB_OSC_USB4_UUID;
  v5 = ACPIAmliEvaluateOsc(v3, (int)v7, a3, 3, v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_i(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      10,
      29,
      (__int64)&WPP_751107becb7a3b7b48760ac4afe26340_Traceguids,
      v5);
  }
  return v5;
}
