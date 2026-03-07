__int64 __fastcall xxxTrackInitSize(struct tagWND *a1, int a2, unsigned __int64 a3, int a4, struct MOVESIZEDATA *a5)
{
  unsigned __int64 v6; // rbp
  char v9; // dl
  void *v10; // r9
  int v11; // edx
  int v12; // esi
  int v13; // r8d
  int v14; // r9d
  int v15; // r15d
  int v16; // r12d
  char v17; // dl
  char v18; // r8
  int v20; // eax
  int v21; // r9d
  int v22; // r10d
  char v23; // dl
  char v24; // r8
  int v25; // r8d
  unsigned __int64 v26; // rdx
  int v27; // ecx
  int v28; // eax
  int v29; // r11d
  __int64 v30; // rax
  int v31; // r9d
  char v32; // dl
  char v33; // r8
  __int64 v34; // [rsp+40h] [rbp-68h]
  int v35; // [rsp+48h] [rbp-60h]
  int v36; // [rsp+50h] [rbp-58h]
  unsigned __int64 v37; // [rsp+60h] [rbp-48h] BYREF
  __int128 v38; // [rsp+68h] [rbp-40h] BYREF

  v6 = a3;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v9 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  v10 = &WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids;
  if ( v9 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_D(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      a3,
      (__int64)gFullLog,
      5u,
      1u,
      0x44u,
      (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
      a2);
  if ( a2 != 256 && a2 != 512 && (unsigned int)(a2 - 513) > 1 )
    return 1LL;
  LODWORD(v37) = (__int16)a4;
  HIDWORD(v37) = SHIWORD(a4);
  ClientToScreen(a1, &v37, a3, v10);
  _InterlockedIncrement(&glSendMessage);
  v12 = xxxSendTransformableMessageTimeout(
          a1,
          0x84u,
          0LL,
          (__int128 *)((unsigned __int16)v37 | (WORD2(v37) << 16)),
          0,
          0,
          0LL,
          1,
          0);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v11) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v13) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v13) = 0;
  }
  v15 = HIDWORD(v37);
  v16 = v37;
  if ( (_BYTE)v11 || (_BYTE)v13 )
  {
    v36 = HIDWORD(v37);
    v35 = v37;
    WPP_RECORDER_AND_TRACE_SF_ddd(WPP_GLOBAL_Control->AttachedDevice, v11, v13, v14);
  }
  switch ( a2 )
  {
    case 256:
      if ( *((_DWORD *)a5 + 44) == 9 )
        xxxSendMessage(a1, 0x20u);
      if ( v6 <= 0x28
        && ((_DWORD)v6 == 13 || (_DWORD)v6 == 27 || (_DWORD)v6 == 37 || (_DWORD)v6 == 38 || (unsigned int)(v6 - 39) <= 1) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (v32 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          v32 = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (v33 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          v33 = 0;
        }
        if ( v32 || v33 )
        {
          LODWORD(v34) = v6;
          WPP_RECORDER_AND_TRACE_SF_D(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v32,
            v33,
            (__int64)gFullLog,
            5u,
            1u,
            0x46u,
            (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
            v34,
            v35,
            v36);
        }
        *((_DWORD *)a5 + 50) &= ~1u;
      }
      return 1LL;
    case 512:
      if ( v6 != 1 )
      {
        v38 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
        if ( PtInRect(&v38, v37) && (unsigned int)(v12 - 10) <= 7 )
          xxxSendMessage(a1, 0x20u);
        else
          zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 4976LL));
        return 1LL;
      }
      goto LABEL_44;
    case 513:
      if ( !PtInRect((_DWORD *)a5 + 6, v37) )
        goto LABEL_30;
LABEL_44:
      v20 = *((_DWORD *)a5 + 44);
      if ( v20 )
      {
        if ( v20 == 9 && v12 == 2 )
        {
          xxxSendMessage(a1, 0x20u);
          v21 = *((_DWORD *)a5 + 30) - v16;
          v22 = *((_DWORD *)a5 + 31) - v15;
          *((_DWORD *)a5 + 42) = v21;
          *((_DWORD *)a5 + 50) &= ~1u;
          *((_DWORD *)a5 + 43) = v22;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (v23 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            v23 = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (v24 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            v24 = 0;
          }
          if ( v23 || v24 )
          {
            LODWORD(v34) = v21;
            WPP_RECORDER_AND_TRACE_SF_dd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v23,
              v24,
              (__int64)gFullLog,
              5u,
              1u,
              0x48u,
              (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
              v34,
              v22,
              v36);
          }
        }
      }
      else if ( (unsigned int)(v12 - 10) <= 7 )
      {
        xxxSendMessage(a1, 0x20u);
        *((_DWORD *)a5 + 50) &= ~1u;
        v26 = 0x1C0000000uLL;
        v27 = dword_1C0322694[v12];
        v28 = *(_DWORD *)&aFromStateWithC[4 * v12 + 12];
        *((_DWORD *)a5 + 46) = v28;
        *((_DWORD *)a5 + 45) = v27;
        v29 = v28 + v27;
        *((_DWORD *)a5 + 44) = v28 + v27;
        v30 = dword_1C0322688[v28 + v27];
        v31 = *((_DWORD *)a5 + dword_1C03226F8[v29] + 30) - v16;
        *((_DWORD *)a5 + 42) = v31;
        *((_DWORD *)a5 + 43) = *((_DWORD *)a5 + v30 + 30) - v15;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v26) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v25) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v25) = 0;
        }
        if ( (_BYTE)v26 || (_BYTE)v25 )
          WPP_RECORDER_AND_TRACE_SF_ddd(WPP_GLOBAL_Control->AttachedDevice, v26, v25, v31);
      }
      return 1LL;
  }
  if ( a2 != 514 )
    return 1LL;
LABEL_30:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v17 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v18 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v18 = 0;
  }
  if ( v17 || v18 )
  {
    LODWORD(v34) = a2;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v17,
      v18,
      (__int64)gFullLog,
      5u,
      1u,
      0x47u,
      (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
      v34,
      v35,
      v36);
  }
  bSetDevDragRect(*(Gre::Base **)(gpDispInfo + 40LL), 0LL, 0LL, 0);
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x10) != 0 )
  {
    xxxDrawDragRect(a5, 0LL, 2u);
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x10u;
  }
  *((_DWORD *)a5 + 50) &= ~1u;
  CCursorClip::ClearClip(gpCursorClip);
  xxxReleaseCapture();
  *((_DWORD *)a5 + 50) |= 8u;
  return 0LL;
}
