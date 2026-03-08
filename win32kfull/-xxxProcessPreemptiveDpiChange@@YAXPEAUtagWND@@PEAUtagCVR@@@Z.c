/*
 * XREFs of ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C006A4D8
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006A610 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003E858 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00991CC (UpdateMonitorForWindowAndChildren.c)
 *     xxxNotifyMonitorChanged @ 0x1C0099554 (xxxNotifyMonitorChanged.c)
 *     GetWindowDpiLastNotify @ 0x1C00A3A34 (GetWindowDpiLastNotify.c)
 *     _MonitorFromRect @ 0x1C00AEE80 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x1C01A7638 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddd @ 0x1C01A777C (WPP_RECORDER_AND_TRACE_SF_qdddddddd.c)
 */

void __fastcall xxxProcessPreemptiveDpiChange(struct tagWND *a1, struct tagCVR *a2)
{
  __int64 v4; // r8
  char v5; // si
  LONG v6; // edx
  LONG v7; // ecx
  __int64 v8; // r12
  __int16 WindowDpiLastNotify; // r10
  __int16 v10; // r8
  bool v11; // al
  LONG bottom; // edx
  int v13; // r8d
  int v14; // r9d
  _QWORD *v15; // rdx
  __int64 v16; // rax
  PDEVICE_OBJECT v17; // rcx
  bool v18; // r12
  int v19; // ebx
  int v20; // r11d
  int v21; // r10d
  int v22; // edi
  int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rax
  char v26; // [rsp+20h] [rbp-89h]
  __int16 v27; // [rsp+30h] [rbp-79h]
  struct tagRECT v28; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v29; // [rsp+B0h] [rbp+7h]

  if ( (*((_DWORD *)a2 + 8) & 0x80000) == 0 )
    return;
  if ( (*((_DWORD *)a2 + 39) & 0x20) == 0 )
    return;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 )
    return;
  if ( (*((_DWORD *)a1 + 80) & 0x100000) == 0 )
    return;
  if ( !IsTopLevelWindow((__int64)a1) )
    return;
  v5 = 1;
  if ( (*(_BYTE *)(v4 + 31) & 1) != 0 )
    return;
  v6 = *((_DWORD *)a2 + 5);
  v28.left = *((_DWORD *)a2 + 4);
  v28.right = *((_DWORD *)a2 + 6) + v28.left;
  v7 = v6 + *((_DWORD *)a2 + 7);
  v28.top = v6;
  v28.bottom = v7;
  v8 = MonitorFromRect(&v28, 0LL);
  WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  if ( !v8 )
    return;
  v10 = *(_WORD *)(*(_QWORD *)(v8 + 40) + 60LL);
  if ( v10 == WindowDpiLastNotify )
    return;
  v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000000) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    bottom = v28.bottom;
    LOBYTE(bottom) = v11;
    WPP_RECORDER_AND_TRACE_SF_qdddddddd(
      WPP_GLOBAL_Control->AttachedDevice,
      bottom,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gFullLog,
      4,
      28,
      10,
      (__int64)&WPP_79e939fa1d4d36fcf42089c5c6e082fd_Traceguids,
      *(_QWORD *)a1,
      WindowDpiLastNotify,
      v10,
      v28.left,
      v28.top,
      v28.right,
      v28.bottom,
      LOBYTE(v28.right) - LOBYTE(v28.left),
      LOBYTE(v28.bottom) - LOBYTE(v28.top));
  }
  if ( !(unsigned int)UpdateMonitorForWindowAndChildren(a1) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        2u,
        0x1Cu,
        0xBu,
        (__int64)&WPP_79e939fa1d4d36fcf42089c5c6e082fd_Traceguids,
        *(_QWORD *)a1,
        v8);
    return;
  }
  v29 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  xxxNotifyMonitorChanged(a1, &v28, 0LL);
  v15 = (_QWORD *)*((_QWORD *)a1 + 5);
  v16 = v15[11] - *(_QWORD *)&v28.left;
  if ( !v16 )
    v16 = v15[12] - *(_QWORD *)&v28.right;
  if ( !v16 )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v5 = 0;
    }
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_55;
    v15 = &WPP_79e939fa1d4d36fcf42089c5c6e082fd_Traceguids;
    v27 = 12;
    v26 = 4;
LABEL_54:
    LOBYTE(v15) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      v17->AttachedDevice,
      (_DWORD)v15,
      v13,
      v14,
      v26,
      28,
      v27,
      (__int64)&WPP_79e939fa1d4d36fcf42089c5c6e082fd_Traceguids);
LABEL_55:
    *((_DWORD *)a2 + 8) |= 0x403u;
    return;
  }
  v18 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000000) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = *((_DWORD *)v15 + 22);
    v20 = *((_DWORD *)v15 + 25);
    v21 = *((_DWORD *)v15 + 24);
    v22 = *((_DWORD *)v15 + 23);
    v23 = 13;
    LOBYTE(v23) = v18;
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      WPP_GLOBAL_Control->AttachedDevice,
      v23,
      v13,
      (_DWORD)gFullLog,
      3,
      28,
      13,
      (__int64)&WPP_79e939fa1d4d36fcf42089c5c6e082fd_Traceguids,
      v19,
      v22,
      v21,
      v20,
      v21 - v19,
      v20 - v22);
  }
  v24 = *((_QWORD *)a1 + 5);
  v25 = *(_QWORD *)(v24 + 88) - v29;
  if ( !v25 )
    v25 = *(_QWORD *)(v24 + 96) - *((_QWORD *)&v29 + 1);
  if ( v25 )
  {
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v5 = 0;
    }
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_55;
    v27 = 14;
    v26 = 3;
    goto LABEL_54;
  }
}
