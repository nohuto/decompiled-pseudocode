/*
 * XREFs of xxxRemoteStopScreenUpdates @ 0x1C01284B0
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C01280E0 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C0161DA0 (xxxRemoteReconnect.c)
 *     NtUserRemoteStopScreenUpdates @ 0x1C0200A80 (NtUserRemoteStopScreenUpdates.c)
 *     xxxRemotePassthruEnable @ 0x1C0226C60 (xxxRemotePassthruEnable.c)
 *     xxxRemoteShadowSetup @ 0x1C0226DD0 (xxxRemoteShadowSetup.c)
 *     xxxRemoteShadowStop @ 0x1C0226E50 (xxxRemoteShadowStop.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     RemoteDisableScreen @ 0x1C01286A0 (RemoteDisableScreen.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteStopScreenUpdates(int a1, __int16 a2)
{
  __int16 v2; // di
  unsigned __int16 v3; // dx
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v8; // r8
  _QWORD v9[10]; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+88h] [rbp-80h] BYREF
  __int128 v11; // [rsp+8Ch] [rbp-7Ch]
  __int64 v12; // [rsp+9Ch] [rbp-6Ch]
  int v13; // [rsp+A4h] [rbp-64h]
  int v14; // [rsp+A8h] [rbp-60h]
  __int128 v15; // [rsp+ACh] [rbp-5Ch]
  __int64 v16; // [rsp+BCh] [rbp-4Ch]
  int v17; // [rsp+C4h] [rbp-44h]
  int v18; // [rsp+C8h] [rbp-40h]
  __int128 v19; // [rsp+CCh] [rbp-3Ch]
  __int64 v20; // [rsp+DCh] [rbp-2Ch]
  int v21; // [rsp+E4h] [rbp-24h]
  int v22; // [rsp+E8h] [rbp-20h]
  __int128 v23; // [rsp+ECh] [rbp-1Ch]
  __int64 v24; // [rsp+FCh] [rbp-Ch]
  int v25; // [rsp+104h] [rbp-4h]
  int v26; // [rsp+108h] [rbp+0h]
  __int128 v27; // [rsp+10Ch] [rbp+4h]
  __int64 v28; // [rsp+11Ch] [rbp+14h]
  int v29; // [rsp+124h] [rbp+1Ch]
  int v30; // [rsp+128h] [rbp+20h]
  __int128 v31; // [rsp+12Ch] [rbp+24h]
  __int64 v32; // [rsp+13Ch] [rbp+34h]
  int v33; // [rsp+144h] [rbp+3Ch]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(a1, a2, 9, 19, (__int64)&WPP_a65f4517be503488af1f6543f5ef864f_Traceguids);
  }
  if ( !gbFreezeScreenUpdates )
  {
    if ( (unsigned int)UserRemoteConnectedSessionUsingWddm() )
    {
      memset(v9, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v9[1]);
      LOBYTE(v8) = 1;
      v9[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v9[3]) = 65;
      LOBYTE(v9[6]) = -1;
      DrvSetMonitorPowerState(*(_QWORD *)(gpDispInfo + 16LL), 4LL, v8, v9);
    }
    else
    {
      KeSetEvent(gpRemoteSessionOcclusionEvent, 1, 0);
    }
    if ( gspdeskDisconnect )
    {
      v2 = gwMKButtonState & ~gwMKCurrentButton;
      v3 = (v2 ^ gwMKButtonState) & 1 | 2;
      if ( (((unsigned __int8)v2 ^ gwMKButtonState) & 2) == 0 )
        v3 = (v2 ^ gwMKButtonState) & 1;
      if ( v3 )
        ReleaseMouseButton(v3);
      v10 = -2136735560;
      v11 = 0LL;
      v14 = -2119892808;
      gwMKButtonState &= ~gwMKCurrentButton;
      v12 = 0LL;
      v4 = 0;
      v13 = 0;
      v16 = 0LL;
      v17 = 0;
      v20 = 0LL;
      v21 = 0;
      v24 = 0LL;
      v25 = 0;
      v28 = 0LL;
      v29 = 0;
      v32 = 0LL;
      v33 = 0;
      v15 = 0LL;
      v18 = -2136866659;
      v19 = 0LL;
      v22 = -2120023907;
      v23 = 0LL;
      v26 = -2136997718;
      v27 = 0LL;
      v30 = -2120154954;
      v31 = 0LL;
      do
        xxxProcessKeyEvent(&v10 + 8 * (int)v4++, 0LL, 1LL, 0LL, 0LL, 0LL);
      while ( v4 < 6 );
      UpdateKeyLights(1LL);
      RemoteDisableScreen(grpdeskRitInput, v5, v6, gbDesktopLocked);
      gbFreezeScreenUpdates = 1;
    }
  }
  return 0LL;
}
