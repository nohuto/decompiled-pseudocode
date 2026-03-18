/*
 * XREFs of ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C00BA5DC
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004DF70 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     UpdateMonitorForWindowAndChildren @ 0x1C006A424 (UpdateMonitorForWindowAndChildren.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C007563C (xxxNotifyMonitorChanged.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x1C00B2180 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     GetWindowDpiLastNotify @ 0x1C00BBEF0 (GetWindowDpiLastNotify.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddd @ 0x1C01CCA28 (WPP_RECORDER_AND_TRACE_SF_qdddddddd.c)
 */

void __fastcall xxxProcessPreemptiveDpiChange(struct tagWND *this, struct tagCVR *a2)
{
  __int64 v4; // r9
  unsigned int v5; // r10d
  char v6; // si
  LONG v7; // edx
  LONG v8; // ecx
  __int64 v9; // r12
  __int16 WindowDpiLastNotify; // r10
  __int16 v11; // r8
  bool v12; // al
  LONG bottom; // edx
  int v14; // r8d
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  _QWORD *v18; // rdx
  __int64 v19; // rax
  PDEVICE_OBJECT v20; // rcx
  char v21; // r12
  __int64 v22; // rcx
  __int64 v23; // rax
  char v24; // [rsp+20h] [rbp-89h]
  __int16 v25; // [rsp+30h] [rbp-79h]
  __int64 v26; // [rsp+40h] [rbp-69h]
  __int64 v27; // [rsp+48h] [rbp-61h]
  __int64 v28; // [rsp+50h] [rbp-59h]
  __int64 v29; // [rsp+58h] [rbp-51h]
  __int64 v30; // [rsp+60h] [rbp-49h]
  __int64 v31; // [rsp+68h] [rbp-41h]
  struct tagBWL *v32; // [rsp+98h] [rbp-11h] BYREF
  struct tagRECT v33; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v34; // [rsp+B0h] [rbp+7h]

  if ( (*((_DWORD *)a2 + 8) & 0x80000) == 0 )
    return;
  if ( (*((_DWORD *)a2 + 39) & 0x20) == 0 )
    return;
  if ( (*(_DWORD *)(*((_QWORD *)this + 5) + 288LL) & 0xF) != 2 )
    return;
  if ( (*((_DWORD *)this + 80) & 0x100000) == 0 )
    return;
  if ( !IsTopLevelWindow((__int64)this) )
    return;
  v6 = 1;
  if ( (*(_BYTE *)(v4 + 31) & 1) != 0 )
    return;
  v7 = *((_DWORD *)a2 + 5);
  v33.left = *((_DWORD *)a2 + 4);
  v33.right = *((_DWORD *)a2 + 6) + v33.left;
  v8 = v7 + *((_DWORD *)a2 + 7);
  v33.top = v7;
  v33.bottom = v8;
  v9 = MonitorFromRect(&v33, 0, v5);
  WindowDpiLastNotify = GetWindowDpiLastNotify(this);
  if ( !v9 )
    return;
  v11 = *(_WORD *)(*(_QWORD *)(v9 + 40) + 60LL);
  if ( v11 == WindowDpiLastNotify )
    return;
  v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000000) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    bottom = v33.bottom;
    LOBYTE(bottom) = v12;
    WPP_RECORDER_AND_TRACE_SF_qdddddddd(
      WPP_GLOBAL_Control->AttachedDevice,
      bottom,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      28,
      10,
      (__int64)&WPP_b070418cf9b83e0c1c6b283a126581e8_Traceguids,
      *(_QWORD *)this,
      WindowDpiLastNotify,
      v11,
      v33.left,
      v33.top,
      v33.right,
      v33.bottom,
      LOBYTE(v33.right) - LOBYTE(v33.left),
      LOBYTE(v33.bottom) - LOBYTE(v33.top));
  }
  v32 = 0LL;
  if ( !(unsigned int)UpdateMonitorForWindowAndChildren((struct tagWND **)this, v9, (__int64 *)&v32, 0) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v6 = 0;
    }
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 11;
      LOBYTE(v15) = v6;
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v14,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        28,
        11,
        (__int64)&WPP_b070418cf9b83e0c1c6b283a126581e8_Traceguids,
        *(_QWORD *)this,
        v9);
    }
    return;
  }
  v34 = *(_OWORD *)(*((_QWORD *)this + 5) + 88LL);
  xxxNotifyMonitorChanged(this, &v33, v32, 0);
  v18 = (_QWORD *)*((_QWORD *)this + 5);
  v19 = v18[11] - *(_QWORD *)&v33.left;
  if ( !v19 )
    v19 = v18[12] - *(_QWORD *)&v33.right;
  if ( !v19 )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v6 = 0;
    }
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_55;
    v18 = &WPP_b070418cf9b83e0c1c6b283a126581e8_Traceguids;
    v25 = 12;
    v24 = 4;
LABEL_54:
    LOBYTE(v18) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      v20->AttachedDevice,
      (_DWORD)v18,
      v16,
      v17,
      v24,
      28,
      v25,
      (__int64)&WPP_b070418cf9b83e0c1c6b283a126581e8_Traceguids);
LABEL_55:
    *((_DWORD *)a2 + 8) |= 0x403u;
    return;
  }
  v21 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000000) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v31) = *((_DWORD *)v18 + 25) - *((_DWORD *)v18 + 23);
    LODWORD(v30) = *((_DWORD *)v18 + 24) - *((_DWORD *)v18 + 22);
    LODWORD(v29) = *((_DWORD *)v18 + 25);
    LODWORD(v28) = *((_DWORD *)v18 + 24);
    LODWORD(v27) = *((_DWORD *)v18 + 23);
    LODWORD(v26) = *((_DWORD *)v18 + 22);
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v21,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      3u,
      0x1Cu,
      0xDu,
      (__int64)&WPP_b070418cf9b83e0c1c6b283a126581e8_Traceguids,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v22 = *((_QWORD *)this + 5);
  v23 = *(_QWORD *)(v22 + 88) - v34;
  if ( !v23 )
    v23 = *(_QWORD *)(v22 + 96) - *((_QWORD *)&v34 + 1);
  if ( v23 )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v6 = 0;
    }
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_55;
    v25 = 14;
    v24 = 3;
    goto LABEL_54;
  }
}
