/*
 * XREFs of UsbhReset1CompleteOvercurrent @ 0x1C004DB70
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhReset1CompleteOvercurrent(__int64 a1, __int64 a2)
{
  int v5; // [rsp+28h] [rbp-10h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v5 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x22u,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v5);
  }
  Log(a1, 1024, 1884450405, a2, 0LL);
  return 1LL;
}
