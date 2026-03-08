/*
 * XREFs of ?DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x1C01B9BC8
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01ED7C0 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     GetInheritedMonitor @ 0x1C00ACC90 (GetInheritedMonitor.c)
 *     _MonitorFromRect @ 0x1C00AEE80 (_MonitorFromRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x1C00F3C7C (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 *     GetMonitorRectForWindow @ 0x1C00FF4DC (GetMonitorRectForWindow.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x1C01A7638 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01BA484 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAUMOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01BA574 (-TransformRectAroundCursor@@YAXPEAUMOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 */

__int64 __fastcall DetectNewMonitor(struct tagWND **a1, struct tagRECT *a2)
{
  __int64 InheritedMonitor; // rax
  struct tagRECT v5; // xmm0
  struct tagWND *v6; // rax
  int v7; // edx
  int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // rbx
  _UNKNOWN **v11; // r8
  struct tagWND *v12; // rax
  INT v13; // esi
  INT v14; // r8d
  int v15; // ecx
  __int64 v16; // rbx
  INT v17; // esi
  INT v18; // r8d
  int v19; // ecx
  int v20; // ebx
  __int64 *MonitorRectForWindow; // rax
  const struct tagWND *v22; // r8
  int v23; // eax
  struct tagRECT v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // edx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // r8
  LONG v31; // edx
  int v32; // eax
  char v33; // dl
  char v34; // dl
  char v35; // r8
  int v37; // [rsp+20h] [rbp-99h]
  __int64 v38; // [rsp+80h] [rbp-39h] BYREF
  struct tagWND *v39; // [rsp+88h] [rbp-31h] BYREF
  struct tagRECT v40; // [rsp+90h] [rbp-29h] BYREF
  LONG left; // [rsp+A0h] [rbp-19h] BYREF
  LONG top; // [rsp+A4h] [rbp-15h]
  __int64 v43; // [rsp+A8h] [rbp-11h] BYREF
  struct tagRECT v44; // [rsp+B0h] [rbp-9h] BYREF
  struct tagRECT v45; // [rsp+C0h] [rbp+7h] BYREF
  struct tagRECT v46; // [rsp+D0h] [rbp+17h] BYREF

  InheritedMonitor = GetInheritedMonitor(a1[2]);
  v5 = *a2;
  v38 = InheritedMonitor;
  v39 = a1[26];
  v6 = a1[2];
  v46 = v5;
  v44 = v5;
  LogicalToPhysicalDPIRect(&v46, &v46, *(unsigned int *)(*((_QWORD *)v6 + 5) + 288LL), &v39);
  v9 = v38;
  if ( !v38 )
  {
    v9 = MonitorFromRect((__int64)&v46, 0, 0x12u);
    v38 = v9;
  }
  v10 = (__int64)v39;
  v11 = &WPP_RECORDER_INITIALIZED;
  if ( v39 && v9 && v39 != (struct tagWND *)v9 )
  {
    if ( (unsigned int)(*((_DWORD *)a1 + 44) - 9) <= 1 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v7) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v11) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v11) = 0;
      }
      if ( (_BYTE)v7 || (_BYTE)v11 )
      {
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v7,
          (_DWORD)v11,
          (_DWORD)WPP_GLOBAL_Control,
          5,
          1,
          19,
          (__int64)&WPP_ef419e50bb4b3068d691848aa4bd044d_Traceguids);
        v9 = v38;
        v10 = (__int64)v39;
      }
      v25 = *(_QWORD *)(v9 + 40);
      v26 = *(_QWORD *)(v10 + 40);
      v40 = 0LL;
      TransformRectAroundCursor((struct MOVESIZEDATA *)a1, &v46, *(_WORD *)(v26 + 60), 0LL, &v40, *(_WORD *)(v25 + 60));
      v10 = (__int64)v39;
      if ( (unsigned int)IsNewMonitorRectMostOccupied(
                           &v40,
                           (const struct tagRECT *)(*(_QWORD *)(v38 + 40) + 28LL),
                           (const struct tagRECT *)(*((_QWORD *)v39 + 5) + 28LL)) )
      {
        left = v40.left;
        top = v40.top;
        PhysicalToLogicalDPIPoint(&left, &left, *(unsigned int *)(*((_QWORD *)a1[2] + 5) + 288LL), &v38);
        v40.left = left;
        v40.top = top;
        v30 = *(unsigned int *)(*((_QWORD *)a1[2] + 5) + 288LL);
        if ( (*(_DWORD *)(*((_QWORD *)a1[2] + 5) + 288LL) & 0xF) != 2 )
        {
          *(_QWORD *)&v45.left = v38;
          v43 = 0LL;
          PhysicalToLogicalDPIPoint(&v43, (char *)a1 + 268, v30, &v45);
          v31 = HIDWORD(v43) + *((_DWORD *)a1 + 43);
          v40.left = v43 + *((_DWORD *)a1 + 42);
          v40.top = v31;
          v40.bottom = v31 + v44.bottom - v44.top;
          v40.right = v44.right + v40.left - v44.left;
        }
        v24 = v40;
        v10 = (__int64)v39;
        goto LABEL_56;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v27) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v27) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v28) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v28) = 0;
      }
      if ( (_BYTE)v27 || (_BYTE)v28 )
      {
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v27,
          v28,
          v29,
          5,
          1,
          20,
          (__int64)&WPP_ef419e50bb4b3068d691848aa4bd044d_Traceguids);
        v10 = (__int64)v39;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v7) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v11) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v11) = 0;
      }
      if ( (_BYTE)v7 || (_BYTE)v11 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v7,
          (_DWORD)v11,
          v8,
          5,
          1,
          21,
          (__int64)&WPP_ef419e50bb4b3068d691848aa4bd044d_Traceguids);
      v12 = a1[2];
      v45 = v46;
      PhysicalToLogicalDPIRect(&v45, &v45, *(unsigned int *)(*((_QWORD *)v12 + 5) + 288LL), &v38);
      v13 = *((_DWORD *)a1 + 28);
      v14 = v45.right - v45.left;
      v15 = v45.right - v45.left;
      if ( v45.right - v45.left <= *((_DWORD *)a1 + 26) )
        v15 = *((_DWORD *)a1 + 26);
      v16 = *(_QWORD *)(gpsi + 4960LL);
      v43 = v16;
      if ( v15 < v13 )
        v13 = v15;
      if ( v13 != v14 )
      {
        v45.left = v16 - EngMulDiv(v16 - v46.left, v13, v14);
        v45.right = v45.left + v13;
      }
      v17 = *((_DWORD *)a1 + 29);
      v18 = v45.bottom - v45.top;
      v19 = v45.bottom - v45.top;
      if ( v45.bottom - v45.top <= *((_DWORD *)a1 + 27) )
        v19 = *((_DWORD *)a1 + 27);
      if ( v19 < v17 )
        v17 = v19;
      if ( v17 != v18 )
      {
        v20 = HIDWORD(v43);
        v45.top = v20 - EngMulDiv(HIDWORD(v43) - v46.top, v17, v18);
        v45.bottom = v45.top + v17;
      }
      MonitorRectForWindow = GetMonitorRectForWindow((__int64 *)&v44.left, v38, a1[2]);
      v22 = a1[2];
      v40 = *(struct tagRECT *)MonitorRectForWindow;
      v44 = *(struct tagRECT *)GetMonitorRectForWindow((__int64 *)&v44.left, (__int64)v39, v22);
      v23 = IsNewMonitorRectMostOccupied(&v45, &v40, &v44);
      v10 = (__int64)v39;
      if ( v23 )
      {
        v24 = v45;
LABEL_56:
        v9 = v38;
        *a2 = v24;
        goto LABEL_57;
      }
    }
    v9 = v10;
    v38 = v10;
  }
LABEL_57:
  if ( (struct tagWND *)v9 == a1[26] || !v9 )
    return 0LL;
  v32 = *((_DWORD *)a1 + 50);
  a1[26] = (struct tagWND *)v9;
  if ( (v32 & 0x20) == 0 )
    *((_DWORD *)a1 + 50) = v32 | 0x4000000;
  if ( v10 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v33 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v33 = 0;
    }
    if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dddddddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v33,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        v37,
        1u,
        0x16u,
        (__int64)&WPP_ef419e50bb4b3068d691848aa4bd044d_Traceguids);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v34 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v34 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v35 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v35 = 0;
  }
  if ( v34 || v35 )
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v34,
      v35,
      (__int64)gFullLog,
      5u,
      1u,
      0x17u,
      (__int64)&WPP_ef419e50bb4b3068d691848aa4bd044d_Traceguids,
      a2->left,
      a2->top,
      a2->right,
      a2->bottom,
      a2->right - a2->left,
      a2->bottom - a2->top);
  return 1LL;
}
