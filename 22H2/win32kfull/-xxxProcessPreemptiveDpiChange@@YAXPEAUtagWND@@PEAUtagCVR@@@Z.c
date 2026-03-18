/*
 * XREFs of ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C0123BD4
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0123FE0 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     UpdateMonitorForWindowAndChildren @ 0x1C008E52C (UpdateMonitorForWindowAndChildren.c)
 *     xxxNotifyMonitorChanged @ 0x1C008E76C (xxxNotifyMonitorChanged.c)
 *     _MonitorFromRect @ 0x1C00D0160 (_MonitorFromRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00E4DF4 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     GetWindowDpiLastNotify @ 0x1C00F0740 (GetWindowDpiLastNotify.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x1C01A6410 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddd @ 0x1C01A6554 (WPP_RECORDER_AND_TRACE_SF_qdddddddd.c)
 */

void __fastcall xxxProcessPreemptiveDpiChange(struct tagWND *a1, struct tagCVR *a2)
{
  __int64 v4; // r8
  unsigned int v5; // r9d
  char v6; // si
  LONG v7; // edx
  LONG v8; // ecx
  __int64 v9; // r12
  __int16 WindowDpiLastNotify; // r10
  __int16 v11; // r8
  bool v12; // al
  LONG bottom; // edx
  int v14; // r8d
  int v15; // r9d
  _QWORD *v16; // rdx
  __int64 v17; // rax
  PDEVICE_OBJECT v18; // rcx
  bool v19; // r12
  int v20; // ebx
  int v21; // r11d
  int v22; // r10d
  int v23; // edi
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rax
  char v27; // [rsp+20h] [rbp-89h]
  __int16 v28; // [rsp+30h] [rbp-79h]
  struct tagBWL *v29; // [rsp+98h] [rbp-11h] BYREF
  struct tagRECT v30; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v31; // [rsp+B0h] [rbp+7h]

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
  v6 = 1;
  if ( (*(_BYTE *)(v4 + 31) & 1) != 0 )
    return;
  v7 = *((_DWORD *)a2 + 5);
  v30.left = *((_DWORD *)a2 + 4);
  v30.right = *((_DWORD *)a2 + 6) + v30.left;
  v8 = v7 + *((_DWORD *)a2 + 7);
  v30.top = v7;
  v30.bottom = v8;
  v9 = MonitorFromRect((__int64)&v30, 0, v5);
  WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
  if ( !v9 )
    return;
  v11 = *(_WORD *)(*(_QWORD *)(v9 + 40) + 60LL);
  if ( v11 == WindowDpiLastNotify )
    return;
  v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    bottom = v30.bottom;
    LOBYTE(bottom) = v12;
    WPP_RECORDER_AND_TRACE_SF_qdddddddd(
      WPP_GLOBAL_Control->AttachedDevice,
      bottom,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gFullLog,
      4,
      14,
      10,
      (__int64)&WPP_73d000ae97953ecf03a093158984409f_Traceguids,
      *(_QWORD *)a1,
      WindowDpiLastNotify,
      v11,
      v30.left,
      v30.top,
      v30.right,
      v30.bottom,
      LOBYTE(v30.right) - LOBYTE(v30.left),
      LOBYTE(v30.bottom) - LOBYTE(v30.top));
  }
  v29 = 0LL;
  if ( !(unsigned int)UpdateMonitorForWindowAndChildren((struct tagWND **)a1, v9, (__int64 *)&v29, 0) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v6 = 0;
    }
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v6,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        2u,
        0xEu,
        0xBu,
        (__int64)&WPP_73d000ae97953ecf03a093158984409f_Traceguids,
        *(_QWORD *)a1,
        v9);
    return;
  }
  v31 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  xxxNotifyMonitorChanged(a1, &v30, v29, 0);
  v16 = (_QWORD *)*((_QWORD *)a1 + 5);
  v17 = v16[11] - *(_QWORD *)&v30.left;
  if ( !v17 )
    v17 = v16[12] - *(_QWORD *)&v30.right;
  if ( !v17 )
  {
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v6 = 0;
    }
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_55;
    v16 = &WPP_73d000ae97953ecf03a093158984409f_Traceguids;
    v28 = 12;
    v27 = 4;
LABEL_54:
    LOBYTE(v16) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      v18->AttachedDevice,
      (_DWORD)v16,
      v14,
      v15,
      v27,
      14,
      v28,
      (__int64)&WPP_73d000ae97953ecf03a093158984409f_Traceguids);
LABEL_55:
    *((_DWORD *)a2 + 8) |= 0x403u;
    return;
  }
  v19 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = *((_DWORD *)v16 + 22);
    v21 = *((_DWORD *)v16 + 25);
    v22 = *((_DWORD *)v16 + 24);
    v23 = *((_DWORD *)v16 + 23);
    v24 = 13;
    LOBYTE(v24) = v19;
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      WPP_GLOBAL_Control->AttachedDevice,
      v24,
      v14,
      (_DWORD)gFullLog,
      3,
      14,
      13,
      (__int64)&WPP_73d000ae97953ecf03a093158984409f_Traceguids,
      v20,
      v23,
      v22,
      v21,
      v22 - v20,
      v21 - v23);
  }
  v25 = *((_QWORD *)a1 + 5);
  v26 = *(_QWORD *)(v25 + 88) - v31;
  if ( !v26 )
    v26 = *(_QWORD *)(v25 + 96) - *((_QWORD *)&v31 + 1);
  if ( v26 )
  {
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v6 = 0;
    }
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_55;
    v28 = 14;
    v27 = 3;
    goto LABEL_54;
  }
}
