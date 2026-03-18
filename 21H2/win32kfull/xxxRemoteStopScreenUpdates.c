/*
 * XREFs of xxxRemoteStopScreenUpdates @ 0x1C0123460
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C0123098 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C01528E0 (xxxRemoteReconnect.c)
 *     NtUserRemoteStopScreenUpdates @ 0x1C01FC020 (NtUserRemoteStopScreenUpdates.c)
 *     xxxRemotePassthruEnable @ 0x1C0220C50 (xxxRemotePassthruEnable.c)
 *     xxxRemoteShadowSetup @ 0x1C0220E00 (xxxRemoteShadowSetup.c)
 *     xxxRemoteShadowStop @ 0x1C0220EC4 (xxxRemoteShadowStop.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RemoteDisableScreen @ 0x1C012368C (RemoteDisableScreen.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteStopScreenUpdates(__int64 a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v3; // rcx
  __int16 v4; // bx
  unsigned __int16 v5; // dx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v10; // r8
  _QWORD v11[10]; // [rsp+48h] [rbp-C0h] BYREF
  int v12; // [rsp+98h] [rbp-70h] BYREF
  __int128 v13; // [rsp+9Ch] [rbp-6Ch]
  __int64 v14; // [rsp+ACh] [rbp-5Ch]
  int v15; // [rsp+B4h] [rbp-54h]
  int v16; // [rsp+B8h] [rbp-50h]
  __int128 v17; // [rsp+BCh] [rbp-4Ch]
  __int64 v18; // [rsp+CCh] [rbp-3Ch]
  int v19; // [rsp+D4h] [rbp-34h]
  int v20; // [rsp+D8h] [rbp-30h]
  __int128 v21; // [rsp+DCh] [rbp-2Ch]
  __int64 v22; // [rsp+ECh] [rbp-1Ch]
  int v23; // [rsp+F4h] [rbp-14h]
  int v24; // [rsp+F8h] [rbp-10h]
  __int128 v25; // [rsp+FCh] [rbp-Ch]
  __int64 v26; // [rsp+10Ch] [rbp+4h]
  int v27; // [rsp+114h] [rbp+Ch]
  int v28; // [rsp+118h] [rbp+10h]
  __int128 v29; // [rsp+11Ch] [rbp+14h]
  __int64 v30; // [rsp+12Ch] [rbp+24h]
  int v31; // [rsp+134h] [rbp+2Ch]
  int v32; // [rsp+138h] [rbp+30h]
  __int128 v33; // [rsp+13Ch] [rbp+34h]
  __int64 v34; // [rsp+14Ch] [rbp+44h]
  int v35; // [rsp+154h] [rbp+4Ch]

  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      19,
      4,
      9,
      19,
      (__int64)&WPP_03c1e4e6de07312e2b7c2fd77d6d27b0_Traceguids);
  if ( !gbFreezeScreenUpdates )
  {
    if ( (unsigned int)UserRemoteConnectedSessionUsingWddm(v3, a2, a3) )
    {
      memset(v11, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v11[1]);
      LOBYTE(v10) = 1;
      v11[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v11[3]) = 65;
      LOBYTE(v11[6]) = -1;
      DrvSetMonitorPowerState(*(_QWORD *)(gpDispInfo + 16LL), 4LL, v10, v11);
    }
    else
    {
      KeSetEvent(gpRemoteSessionOcclusionEvent, 1, 0);
    }
    if ( gspdeskDisconnect )
    {
      v4 = gwMKButtonState & ~gwMKCurrentButton;
      v5 = (v4 ^ gwMKButtonState) & 1 | 2;
      if ( (((unsigned __int8)v4 ^ gwMKButtonState) & 2) == 0 )
        v5 = (v4 ^ gwMKButtonState) & 1;
      if ( v5 )
        ReleaseMouseButton(v5);
      v12 = -2136735560;
      v13 = 0LL;
      v16 = -2119892808;
      gwMKButtonState &= ~gwMKCurrentButton;
      v14 = 0LL;
      v6 = 0;
      v15 = 0;
      v18 = 0LL;
      v19 = 0;
      v22 = 0LL;
      v23 = 0;
      v26 = 0LL;
      v27 = 0;
      v30 = 0LL;
      v31 = 0;
      v34 = 0LL;
      v35 = 0;
      v17 = 0LL;
      v20 = -2136866659;
      v21 = 0LL;
      v24 = -2120023907;
      v25 = 0LL;
      v28 = -2136997718;
      v29 = 0LL;
      v32 = -2120154954;
      v33 = 0LL;
      do
        xxxProcessKeyEvent(&v12 + 8 * (int)v6++, 0LL, 1LL, 0LL, 0LL, 0LL);
      while ( v6 < 6 );
      UpdateKeyLights(1LL);
      RemoteDisableScreen(grpdeskRitInput, v7, v8, gbDesktopLocked);
      gbFreezeScreenUpdates = 1;
    }
  }
  return 0LL;
}
