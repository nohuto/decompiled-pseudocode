char __fastcall xxxSizeOrMoveRect(struct MOVESIZEDATA *this, struct tagPOINT a2, struct tagRECT *a3, unsigned int *a4)
{
  unsigned int v5; // edx
  int v8; // eax
  int v9; // ecx
  PDEVICE_OBJECT v10; // rcx
  int v11; // r9d
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned int v14; // r15d
  int v15; // eax
  unsigned int v16; // r12d
  __int64 v17; // rcx
  bool v18; // al
  char v19; // r13
  _DWORD *Prop; // rax
  int v21; // edx
  int v22; // r8d
  unsigned int v23; // r8d
  char v24; // r8
  bool v25; // [rsp+40h] [rbp-58h]
  __int64 v26[10]; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+A0h] [rbp+8h] BYREF
  struct tagPOINT v28; // [rsp+A8h] [rbp+10h]
  struct tagRECT *v29; // [rsp+B0h] [rbp+18h]
  _DWORD *v30; // [rsp+B8h] [rbp+20h]

  v30 = a4;
  v29 = a3;
  v28 = a2;
  *a4 = 534;
  v5 = *((_DWORD *)this + 50);
  if ( (v5 & 0x800) == 0 )
    return MoveDragRect(this, a2, 0, a3);
  v8 = a2.x - *((_DWORD *)this + 42);
  v9 = v28.y - *((_DWORD *)this + 43);
  v27 = __PAIR64__(v9, v8);
  if ( v8 == *((_DWORD *)this + 65) && v9 == *((_DWORD *)this + 66) )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v5) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(a3) = 0;
    }
    if ( !(_BYTE)v5 && !(_BYTE)a3 )
      return 0;
    v11 = 44;
LABEL_15:
    WPP_RECORDER_AND_TRACE_SF_(
      v10->AttachedDevice,
      v5,
      (_DWORD)a3,
      v11,
      5,
      1,
      v11,
      (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
    return 0;
  }
  v12 = v27;
  v13 = *(_QWORD *)((char *)this + 268);
  *(_QWORD *)((char *)this + 260) = v27;
  v26[0] = 0LL;
  LODWORD(v27) = 0;
  HitTargetAndMonitorFromPoint(v13, (v5 >> 15) & 7, v26, &v27);
  v14 = v27;
  if ( (_DWORD)v27 == 3 )
    v14 = 4;
  if ( *((_DWORD *)this + 60) == 3 )
  {
    LODWORD(v27) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3760);
  }
  v15 = *((_DWORD *)this + 51);
  v16 = *((_DWORD *)this + 60);
  LOBYTE(v27) = v14 != v16;
  *((_DWORD *)this + 51) = v15 ^ (v15 ^ (v15 | (v14 != v16))) & 1;
  v17 = v26[0];
  v18 = v26[0] != *((_QWORD *)this + 29);
  v25 = v18;
  if ( v16 == 4 || (v19 = 1, v14 != 4) )
    v19 = 0;
  *((_DWORD *)this + 60) = v14;
  *((_QWORD *)this + 29) = v17;
  if ( v14 != v16 || v18 )
  {
    if ( v16 == 4 )
    {
      if ( v14 == 4 )
        goto LABEL_35;
LABEL_33:
      SetDragInToDragOutThreshold(this);
      goto LABEL_35;
    }
    if ( v14 != 4 )
    {
      if ( v14 )
      {
        SetDragOutThresholdAlways(this);
        goto LABEL_35;
      }
      goto LABEL_33;
    }
    if ( v16 )
      SetDragOutToDragInThreshold(this);
    else
      SetDragInThresholdAlways(this);
  }
LABEL_35:
  if ( v19 && (*((_DWORD *)this + 50) & 0x80u) != 0 )
  {
    Prop = (_DWORD *)GetProp(*((_QWORD *)this + 2), *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
    xxxMoveDragRectFromMaximize((__int64)this, v12, Prop, v16, v29, v30);
LABEL_67:
    if ( (*((_DWORD *)this + 50) & 0x400000) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v21) = 0;
      }
      if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v21,
          v22,
          47,
          4,
          1,
          47,
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
      }
      *((_DWORD *)this + 50) &= 0xFFBFF7FF;
    }
    goto LABEL_76;
  }
  LODWORD(a3) = *((_DWORD *)this + 50);
  v5 = (unsigned __int16)a3 & 0x300;
  if ( (char)a3 < 0 && (*((_BYTE *)this + 204) & 1) == 0 && ((unsigned __int16)a3 & 0x300) == 0 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v5) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(a3) = 0;
    }
    if ( !(_BYTE)v5 && !(_BYTE)a3 )
      return 0;
    v11 = 45;
    goto LABEL_15;
  }
  v24 = 0;
  if ( !v14 && !v16 && ((unsigned __int16)a3 & 0x300) != 0 )
  {
    v23 = (unsigned int)a3 & 0x38000;
    if ( v23 == 0x20000 || v23 == 163840 )
      v24 = 1;
  }
  if ( !MoveDragRect(this, a2, v24, v29) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v21) = 0;
    }
    if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v21,
        v22,
        46,
        3,
        1,
        46,
        (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
    }
    return 0;
  }
  if ( v19 )
    goto LABEL_67;
LABEL_76:
  if ( (_BYTE)v27 || v25 || (unsigned __int8)MOVESIZEDATA::SHData_NeedsArrangementCallout(this, v14, (char *)this + 268) )
    xxxUpdateArrangeDataForMove(this, v26[0], v14, v16);
  return 1;
}
