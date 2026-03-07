// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteStopScreenUpdates(__int64 a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v3; // rcx
  __int64 v4; // r8
  __int16 v5; // bx
  unsigned __int16 v6; // dx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v11; // r8
  _BYTE v12[8]; // [rsp+48h] [rbp-C0h] BYREF
  GUID ActivityId; // [rsp+50h] [rbp-B8h] BYREF
  int v14; // [rsp+60h] [rbp-A8h]
  char v15; // [rsp+78h] [rbp-90h]
  __int64 v16; // [rsp+88h] [rbp-80h]
  int v17; // [rsp+98h] [rbp-70h] BYREF
  __int128 v18; // [rsp+9Ch] [rbp-6Ch]
  __int64 v19; // [rsp+ACh] [rbp-5Ch]
  int v20; // [rsp+B4h] [rbp-54h]
  int v21; // [rsp+B8h] [rbp-50h]
  __int128 v22; // [rsp+BCh] [rbp-4Ch]
  __int64 v23; // [rsp+CCh] [rbp-3Ch]
  int v24; // [rsp+D4h] [rbp-34h]
  int v25; // [rsp+D8h] [rbp-30h]
  __int128 v26; // [rsp+DCh] [rbp-2Ch]
  __int64 v27; // [rsp+ECh] [rbp-1Ch]
  int v28; // [rsp+F4h] [rbp-14h]
  int v29; // [rsp+F8h] [rbp-10h]
  __int128 v30; // [rsp+FCh] [rbp-Ch]
  __int64 v31; // [rsp+10Ch] [rbp+4h]
  int v32; // [rsp+114h] [rbp+Ch]
  int v33; // [rsp+118h] [rbp+10h]
  __int128 v34; // [rsp+11Ch] [rbp+14h]
  __int64 v35; // [rsp+12Ch] [rbp+24h]
  int v36; // [rsp+134h] [rbp+2Ch]
  int v37; // [rsp+138h] [rbp+30h]
  __int128 v38; // [rsp+13Ch] [rbp+34h]
  __int64 v39; // [rsp+14Ch] [rbp+44h]
  int v40; // [rsp+154h] [rbp+4Ch]

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
      (__int64)&WPP_b175c1f43ecf3cf0d465f249db37b465_Traceguids);
  if ( !gbFreezeScreenUpdates )
  {
    if ( (unsigned int)UserRemoteConnectedSessionUsingWddm(v3, a2, a3) )
    {
      memset_0(v12, 0, 0x48uLL);
      EtwActivityIdControl(3u, &ActivityId);
      LOBYTE(v11) = 1;
      v16 = MEMORY[0xFFFFF78000000014];
      v14 = 65;
      v15 = -1;
      DrvSetMonitorPowerState(*(_QWORD *)(gpDispInfo + 16LL), 4LL, v11, v12);
    }
    else
    {
      KeSetEvent(gpRemoteSessionOcclusionEvent, 1, 0);
    }
    if ( gspdeskDisconnect )
    {
      v5 = gwMKButtonState & ~gwMKCurrentButton;
      v6 = (v5 ^ gwMKButtonState) & 1 | 2;
      if ( (((unsigned __int8)v5 ^ gwMKButtonState) & 2) == 0 )
        v6 = (v5 ^ gwMKButtonState) & 1;
      if ( v6 )
        ReleaseMouseButton(v6);
      v17 = -2136735560;
      v18 = 0LL;
      v21 = -2119892808;
      gwMKButtonState &= ~gwMKCurrentButton;
      v19 = 0LL;
      v7 = 0;
      v20 = 0;
      v23 = 0LL;
      v24 = 0;
      v27 = 0LL;
      v28 = 0;
      v31 = 0LL;
      v32 = 0;
      v35 = 0LL;
      v36 = 0;
      v39 = 0LL;
      v40 = 0;
      v22 = 0LL;
      v25 = -2136866659;
      v26 = 0LL;
      v29 = -2120023907;
      v30 = 0LL;
      v33 = -2136997718;
      v34 = 0LL;
      v37 = -2120154954;
      v38 = 0LL;
      do
      {
        LOBYTE(v4) = 1;
        xxxProcessKeyEvent(&v17 + 8 * (int)v7++, 0LL, v4, 0LL, 0LL, 0LL);
      }
      while ( v7 < 6 );
      UpdateKeyLights(1LL);
      RemoteDisableScreen(grpdeskRitInput, v8, v9, gbDesktopLocked);
      gbFreezeScreenUpdates = 1;
    }
  }
  return 0LL;
}
