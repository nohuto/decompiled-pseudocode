/*
 * XREFs of ApiSetEditionGetActiveHKL @ 0x1C0098278
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C004C1F0 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01B0394 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     xxxProcessKeyEvent @ 0x1C01B1220 (xxxProcessKeyEvent.c)
 *     VKFromVSC @ 0x1C01B1770 (VKFromVSC.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionGetActiveHKL()
{
  __int64 v0; // rbx
  int v1; // eax

  v0 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      396,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  if ( qword_1C02584A8 )
    v1 = qword_1C02584A8();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C02584B0 )
    v0 = qword_1C02584B0();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      397,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v0;
}
