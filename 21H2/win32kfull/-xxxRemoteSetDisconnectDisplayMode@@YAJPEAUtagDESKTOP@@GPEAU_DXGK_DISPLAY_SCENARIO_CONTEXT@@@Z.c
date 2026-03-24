/*
 * XREFs of ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0128D24
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C0128460 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C0162570 (xxxRemoteReconnect.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C003AD34 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall xxxRemoteSetDisconnectDisplayMode(
        struct tagDESKTOP *a1,
        unsigned __int16 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  int v6; // edx
  int v7; // ecx
  int v8; // ebx
  __int64 v10; // [rsp+28h] [rbp-30h]
  char v11; // [rsp+68h] [rbp+10h] BYREF

  v11 = 0;
  SetProtocolType(0xFFFFLL);
  if ( (unsigned int)DrvIsNotUsingGraphicsDevice(*(_QWORD *)(gpDispInfo + 16LL)) )
    return 0LL;
  v8 = xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 2LL, a1, 0, 0LL, &v11, 0LL, a3);
  if ( v8 < 0 )
  {
    v8 = v11 != 0 ? -1073741267 : -1073741823;
    SetProtocolType(a2);
  }
  else if ( !a2 )
  {
    RtlSetActiveConsoleId(0xFFFFFFFFLL);
  }
  if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = v8;
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_d(v7, v6, 9, 14, (__int64)&WPP_a65f4517be503488af1f6543f5ef864f_Traceguids, v10);
  }
  return (unsigned int)v8;
}
