void __fastcall xxxCommitMoveSize(struct tagWND *a1, struct MOVESIZEDATA *a2)
{
  _DWORD *v2; // r14
  int v3; // ebx
  int v4; // edi
  struct MOVESIZEDATA *v7; // rdx
  int v8; // r8d
  unsigned __int8 v9; // al
  int v10; // r12d
  _DWORD *Prop; // rdi
  struct tagMONITOR *v12; // r8
  int v13; // edx
  __int64 v14; // rcx
  char v15; // dl
  struct tagWND *v16; // rbx
  int v17; // eax
  int v18; // edx
  struct tagMONITOR *v19; // r8
  char v20; // dl
  __int64 v21; // rdx
  __int64 v22; // rcx
  char v23; // dl
  int v24; // edx
  int v25; // edx
  struct tagRECT *v26; // rbp
  int v27; // eax
  int v28; // ebp
  char v29; // dl
  _DWORD *v30; // rcx
  int v31; // [rsp+20h] [rbp-E8h]
  int v32; // [rsp+28h] [rbp-E0h]
  int v33; // [rsp+38h] [rbp-D0h]
  __int64 v34; // [rsp+40h] [rbp-C8h]
  __int64 v35; // [rsp+48h] [rbp-C0h]
  __int64 v36; // [rsp+50h] [rbp-B8h]
  __int64 v37; // [rsp+58h] [rbp-B0h]
  __int64 v38; // [rsp+60h] [rbp-A8h]
  __int64 v39; // [rsp+68h] [rbp-A0h]
  struct tagRECT v40; // [rsp+80h] [rbp-88h] BYREF
  __int64 v41; // [rsp+90h] [rbp-78h] BYREF
  __int128 v42; // [rsp+98h] [rbp-70h]
  int v43; // [rsp+A8h] [rbp-60h]
  char v44; // [rsp+ACh] [rbp-5Ch]
  __int128 v45; // [rsp+B0h] [rbp-58h]

  v2 = (_DWORD *)((char *)a2 + 200);
  v3 = 0;
  v4 = 0;
  if ( *((_QWORD *)a1 + 13) != GetDesktopWindow((__int64)a1) )
    goto LABEL_82;
  v9 = ShouldGoMonitorMaximizedMoveSizeData(v7);
  v10 = v9;
  if ( (*v2 & 0x300) != 0 || v9 )
    v3 = 1;
  Prop = (_DWORD *)GetProp((__int64)a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
  if ( Prop )
  {
    if ( (unsigned int)(*((_DWORD *)a2 + 44) - 1) <= 1
      && (v13 = 24576, (*v2 & 0x6000) == 0x6000)
      && (*v2 & 0x300) == 0x300 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
          (_DWORD)v12,
          (unsigned int)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
          4,
          1,
          51,
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
      }
      *Prop = *((_DWORD *)a2 + 6);
      Prop[2] = *((_DWORD *)a2 + 8);
    }
    else if ( *((_QWORD *)a2 + 27) == *((_QWORD *)a2 + 29) )
    {
      if ( (*v2 & 0x1000) == 0 && v3 )
      {
        *(_OWORD *)Prop = *(_OWORD *)((char *)a2 + 136);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (v23 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v23 = 0;
        }
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v23,
            (char)v12,
            (__int64)gFullLog,
            4u,
            1u,
            0x36u,
            (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
        AdvancedWindowPos::MigrateCheckpoint(a1, *((struct tagWND **)a2 + 29), v12);
      }
    }
    else if ( v10 || IsSemiMaximized(a1) )
    {
      if ( (*v2 & 0x800000) != 0 )
      {
        v14 = *(_QWORD *)Prop - *((_QWORD *)a2 + 19);
        if ( *(_QWORD *)Prop == *((_QWORD *)a2 + 19) )
          v14 = *((_QWORD *)Prop + 1) - *((_QWORD *)a2 + 20);
        if ( v14 )
        {
          *(_OWORD *)Prop = *(_OWORD *)((char *)a2 + 152);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v15 = 0;
          }
          if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v15,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)gFullLog,
              4u,
              1u,
              0x34u,
              (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
        }
      }
      if ( IsVerticallyMaximized(a1) )
        MonitorFromRect((__int64)Prop, 2u, 0);
      v16 = (struct tagWND *)*((_QWORD *)a2 + 29);
      if ( (*v2 & 0x300) == 0x300 )
      {
        v17 = *((_DWORD *)a2 + 65);
        if ( *Prop <= v17 && v17 < Prop[2] )
          v16 = (struct tagWND *)MonitorFromRect((__int64)Prop, 2u, 0);
      }
      if ( IsVerticallyMaximized(a1) && ((unsigned __int16)v19 & 0x300) == 0x300 )
      {
        LODWORD(v19) = (unsigned int)v19 | 0x40000;
        *v2 = (_DWORD)v19;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v18) = 0;
      }
      LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v18,
          (_DWORD)v19,
          (unsigned int)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
          4,
          1,
          53,
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
      AdvancedWindowPos::MigrateCheckpoint(a1, v16, v19);
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v20 = 0;
    }
    if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v20,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        1u,
        0x37u,
        (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
  }
  if ( ((*(_QWORD *)v2 ^ (*(_QWORD *)v2 >> 5)) & 0x300LL) != 0 || (*(_QWORD *)v2 & 0x40000) != 0 )
  {
    v3 = 1;
  }
  else
  {
    v21 = *((_QWORD *)a1 + 5);
    v3 = 0;
    v22 = *((_QWORD *)a2 + 3) - *(_QWORD *)(v21 + 88);
    if ( !v22 )
      v22 = *((_QWORD *)a2 + 4) - *(_QWORD *)(v21 + 96);
    if ( v22 )
    {
      v4 = 1;
      goto LABEL_73;
    }
  }
  v4 = 0;
LABEL_73:
  MakeArrangedStateObservable(a2);
  if ( v10 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v24) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v24) = 0;
    }
    if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v24,
        v8,
        (unsigned int)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
        4,
        1,
        56,
        (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
    }
    v41 = *((_QWORD *)a2 + 29);
    v42 = 0LL;
    v43 = 0;
    v44 = 0;
    v45 = 0LL;
    xxxMinMaximizeEx((unsigned __int64)a1, 3u, gdwPUDFlags & 0x10000 | 6, (__int64)&v41);
    *((_DWORD *)a2 + 50) |= 0x20000000u;
    return;
  }
LABEL_82:
  v25 = *v2;
  if ( (*v2 & 0x7000) == 0x1000 && (v25 & 0x20) == 0
    || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 && (v25 & 0x80000) == 0 )
  {
    v26 = (struct tagRECT *)GetProp((__int64)a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
    if ( v26 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v25) = 0;
      }
      if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v25,
          v8,
          (_DWORD)WPP_GLOBAL_Control,
          4,
          1,
          57,
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
      }
      v40 = *(struct tagRECT *)((char *)a2 + 24);
      SwapRect(v26, &v40);
      xxxMinMaximize(*((_QWORD *)a2 + 2), 9LL, 4LL);
      SwapRect(&v40, v26);
      MakeArrangedStateObservable(a2);
    }
  }
  v27 = *((_DWORD *)a2 + 44);
  v28 = 516;
  if ( (v27 == 9 && !v4 || v27 == 10) && !v3 )
    v28 = 517;
  if ( (*v2 & 0x300) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v25) = 0;
    }
    if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v25,
        v8,
        (unsigned int)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
        4,
        1,
        58,
        (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
    }
    UpdateDwmSnapArrangedInitiated(*((struct tagWND **)a2 + 2));
  }
  *v2 |= 0x20000000u;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v25) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v8) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v8) = 0;
  }
  if ( (_BYTE)v25 || (_BYTE)v8 )
    WPP_RECORDER_AND_TRACE_SF_ddddddD(
      WPP_GLOBAL_Control->AttachedDevice,
      v25,
      v8,
      (_DWORD)gFullLog,
      v31,
      v32,
      59,
      v33,
      *((_DWORD *)a2 + 6),
      *((_DWORD *)a2 + 7),
      *((_DWORD *)a2 + 8),
      *((_DWORD *)a2 + 9),
      *((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6),
      *((_BYTE *)a2 + 36) - *((_DWORD *)a2 + 7),
      v28);
  xxxSetWindowPos(
    a1,
    0LL,
    *((unsigned int *)a2 + 6),
    *((unsigned int *)a2 + 7),
    *((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6),
    *((_DWORD *)a2 + 9) - *((_DWORD *)a2 + 7),
    v28);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v29 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v29 = 0;
  }
  if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v30 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 40LL);
    LODWORD(v39) = v30[25] - v30[23];
    LODWORD(v38) = v30[24] - v30[22];
    LODWORD(v37) = v30[25];
    LODWORD(v36) = v30[24];
    LODWORD(v35) = v30[23];
    LODWORD(v34) = v30[22];
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v29,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      1u,
      0x3Cu,
      (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
    CkptRestore(a1, (struct MOVESIZEDATA *)((char *)a2 + 24));
}
