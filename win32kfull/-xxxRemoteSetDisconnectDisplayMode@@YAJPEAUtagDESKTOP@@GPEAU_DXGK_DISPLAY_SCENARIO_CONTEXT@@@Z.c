/*
 * XREFs of ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F69C0
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00F7034 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C01267DC (xxxRemoteReconnect.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00200C4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall xxxRemoteSetDisconnectDisplayMode(
        struct tagDESKTOP *a1,
        unsigned __int16 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  int v6; // ebx
  char v8; // dl
  __int64 v9; // [rsp+40h] [rbp-28h]
  char v10; // [rsp+78h] [rbp+10h] BYREF

  v10 = 0;
  SetProtocolType(0xFFFFLL);
  if ( (unsigned int)DrvIsNotUsingGraphicsDevice(*(_QWORD *)(gpDispInfo + 16LL)) )
    return 0LL;
  v6 = xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 2LL, a1, 0, 0LL, &v10, 0LL, a3, 0LL);
  if ( v6 < 0 )
  {
    v6 = v10 != 0 ? -1073741267 : -1073741823;
    SetProtocolType(a2);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v8 = 0;
    }
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v9) = v6;
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        9u,
        0xEu,
        (__int64)&WPP_b175c1f43ecf3cf0d465f249db37b465_Traceguids,
        v9);
    }
  }
  else if ( !a2 )
  {
    RtlSetActiveConsoleId(0xFFFFFFFFLL);
  }
  return (unsigned int)v6;
}
