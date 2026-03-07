void __fastcall HandleSizingAwayFromDockTarget(struct MOVESIZEDATA *this, const struct tagRECT *a2, unsigned int *a3)
{
  __m128i *MonitorWorkRectForWindow; // rax
  struct tagRECT *v7; // rdx
  struct tagRECT v8; // xmm0
  __int64 v9; // rax
  struct tagRECT *v10; // rax
  int v11; // edx
  int v12; // esi
  int v13; // r8d
  bool v14; // dl
  int v15; // eax
  char v16; // di
  __int128 v17; // xmm0
  int v18; // eax
  struct tagRECT v19; // [rsp+40h] [rbp-78h] BYREF
  struct tagRECT v20; // [rsp+50h] [rbp-68h] BYREF
  __m128i si128; // [rsp+60h] [rbp-58h]
  __m128i v22; // [rsp+70h] [rbp-48h]

  MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(
                               (__m128i *)&v19,
                               *((_QWORD *)this + 27),
                               *((const struct tagWND **)this + 2));
  v7 = (struct tagRECT *)*((_QWORD *)this + 2);
  v8 = (struct tagRECT)*MonitorWorkRectForWindow;
  v9 = *((_QWORD *)this + 27);
  v20 = v8;
  v10 = WindowMargins::ReduceRect(
          &v19,
          v7,
          (struct MOVESIZEDATA *)((char *)this + 40),
          (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 60LL));
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v19 = *v10;
  v22 = _mm_load_si128((const __m128i *)&_xmm);
  v12 = ~*(&v20.bottom + *((int *)this + 44)) & GetFrameBoundsOverlapInfo(&v20, &v19, 0);
  v14 = v12 && v12 != 15 && ((v12 - 1) & v12) != 0;
  v15 = *((_DWORD *)this + 50);
  if ( (v15 & 0x1000000) == 0 && (v15 & 0x6000) != 0 && (v15 & 0x300) != 0 )
  {
    v16 = 1;
  }
  else
  {
    v16 = 0;
    if ( (*((_DWORD *)this + 50) & 0x1000000) != 0 )
    {
      v17 = *(_OWORD *)((char *)this + 40);
      *((_DWORD *)this + 50) = v15 & 0xFEFFFFFF;
      *(_OWORD *)((char *)this + 72) = v17;
      if ( a3 )
        *a3 |= 1u;
    }
  }
  if ( v14 )
  {
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v13,
        34,
        4,
        1,
        34,
        (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
    }
    *((_DWORD *)this + 50) ^= (*((_DWORD *)this + 50) ^ ((unsigned int)ArrangementStyleFromOverlap(v12) << 8)) & 0x300;
    SetDragOutToDragInThreshold(this);
  }
  else
  {
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v13,
        35,
        4,
        1,
        35,
        (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
    }
    if ( v16 )
    {
      UpdateDragRectForSizingAway(this, &v20, a2);
      SetDragInThresholdAlways(this);
    }
    *((_DWORD *)this + 50) &= 0xFFFFFCFF;
    MOVESIZEDATA::SHData_ResetRuntimeState(this);
    v18 = *((_DWORD *)this + 50);
    if ( (v18 & 0x200000) != 0 )
    {
      v18 &= 0xFFDFFBFF;
      *((_DWORD *)this + 50) = v18;
    }
    if ( (v18 & 0x400000) != 0 )
      *((_DWORD *)this + 50) = v18 & 0xFFBFF7FF;
  }
  MakeArrangedStateObservable(this);
  *((_DWORD *)this + 60) = 4;
}
