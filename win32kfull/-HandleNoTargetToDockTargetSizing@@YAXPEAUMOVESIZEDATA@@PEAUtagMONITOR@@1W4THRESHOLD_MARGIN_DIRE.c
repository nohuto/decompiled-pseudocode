/*
 * XREFs of ?HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C01EAB38
 * Callers:
 *     ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01EBD54 (-SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1C01EB47C (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C01EB8FC (-SetCurrentHitTargetMonitor@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SetDragInToDragOutThreshold@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01EB980 (-SetDragInToDragOutThreshold@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01EC3A8 (-VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTIO.c)
 */

void __fastcall HandleNoTargetToDockTargetSizing(
        __int64 a1,
        struct tagMONITOR *a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  int v5; // r14d
  struct tagMONITOR *v7; // rbp
  PDEVICE_OBJECT v9; // rcx
  bool v10; // r8
  int v11; // r9d
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  __int128 v17; // xmm6
  struct MOVESIZEDATA *v18; // rcx

  v5 = 0;
  v7 = a2;
  if ( a4 == 3 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 176) - 3) <= 2 )
    {
      v9 = WPP_GLOBAL_Control;
      LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)a2 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v11 = 36;
LABEL_37:
      WPP_RECORDER_AND_TRACE_SF_(
        v9->AttachedDevice,
        (_DWORD)a2,
        v10,
        v11,
        4,
        1,
        v11,
        (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
LABEL_38:
      *(_QWORD *)(a1 + 232) = v7;
      return;
    }
  }
  else if ( !a4 && (unsigned int)(*(_DWORD *)(a1 + 176) - 6) <= 2 )
  {
    v9 = WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)a2 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_38;
    v11 = 37;
    goto LABEL_37;
  }
  v12 = *(_DWORD *)(a1 + 176);
  if ( v12 <= 7 && (v13 = 146, _bittest(&v13, v12)) && a4 == 1
    || v12 <= 8 && (v14 = 292, _bittest(&v14, v12)) && a4 == 2 )
  {
    v15 = *(_DWORD *)(a1 + 200);
    LODWORD(a2) = 24576;
    if ( (v15 & 0x6000) == 0x6000 && (v15 & 0x300) == 0x300 )
    {
      v9 = WPP_GLOBAL_Control;
      LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)a2 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v11 = 38;
      goto LABEL_37;
    }
  }
  v16 = *(_DWORD *)(a1 + 200);
  v17 = *(_OWORD *)(a1 + 40);
  if ( (v16 & 0x1000000) == 0 )
  {
    v5 = 1;
    *(_DWORD *)(a1 + 200) = v16 | 0x1000000;
  }
  if ( (unsigned int)VerticalSizeRectFromHitTarget(a1, v7, a4) )
  {
    if ( v5 && a5 )
      *a5 |= 2u;
    if ( !a4 || a4 == 3 )
    {
      *(_DWORD *)(a1 + 200) |= 0x300u;
      MakeArrangedStateObservable((const struct MOVESIZEDATA *)a1);
      SetDragInToDragOutThreshold((struct MOVESIZEDATA *)a1);
      *(_DWORD *)(a1 + 240) = a4;
      SetCurrentHitTargetMonitor(v18, v7, 1);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 200) &= ~0x1000000u;
    *(_QWORD *)(a1 + 232) = v7;
    *(_DWORD *)(a1 + 240) = a4;
    *(_OWORD *)(a1 + 40) = v17;
  }
}
