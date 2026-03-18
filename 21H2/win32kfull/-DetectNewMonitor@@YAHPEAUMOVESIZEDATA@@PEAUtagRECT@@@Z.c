/*
 * XREFs of ?DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x1C01DE8CC
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C020C464 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1C0063604 (GetMonitorRectForWindow.c)
 *     GetInheritedMonitor @ 0x1C006F4F4 (GetInheritedMonitor.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01DEE00 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAUMOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01DEEF0 (-TransformRectAroundCursor@@YAXPEAUMOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 */

__int64 __fastcall DetectNewMonitor(struct tagWND **a1, struct tagRECT *a2)
{
  __int64 InheritedMonitor; // rax
  struct tagRECT v5; // xmm0
  struct tagWND *v6; // rax
  __int64 v7; // rbx
  struct tagWND *v8; // rax
  INT v9; // esi
  INT v10; // r8d
  int v11; // ecx
  __int64 v12; // rbx
  INT v13; // esi
  INT v14; // r8d
  int v15; // ecx
  int v16; // ebx
  struct tagRECT *MonitorRectForWindow; // rax
  const struct tagWND *v18; // r8
  struct tagRECT v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  LONG v23; // r8d
  int v24; // ecx
  __int64 v26[2]; // [rsp+30h] [rbp-39h] BYREF
  struct tagRECT v27; // [rsp+40h] [rbp-29h] BYREF
  struct tagWND *v28; // [rsp+50h] [rbp-19h] BYREF
  LONG left; // [rsp+58h] [rbp-11h] BYREF
  LONG top; // [rsp+5Ch] [rbp-Dh]
  __int64 v31; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT v32; // [rsp+70h] [rbp+7h] BYREF
  struct tagRECT v33; // [rsp+80h] [rbp+17h] BYREF
  struct tagRECT v34; // [rsp+90h] [rbp+27h] BYREF

  InheritedMonitor = GetInheritedMonitor(a1[2]);
  v5 = *a2;
  v26[0] = InheritedMonitor;
  v28 = a1[26];
  v6 = a1[2];
  v34 = v5;
  v32 = v5;
  LogicalToPhysicalDPIRect(&v34, &v34, *(unsigned int *)(*((_QWORD *)v6 + 5) + 288LL), &v28);
  v7 = v26[0];
  if ( !v26[0] )
  {
    v7 = MonitorFromRect(&v34, 0, 0x12u);
    v26[0] = v7;
  }
  if ( v28 && v7 && v28 != (struct tagWND *)v7 )
  {
    if ( (unsigned int)(*((_DWORD *)a1 + 44) - 9) <= 1 )
    {
      v20 = *(_QWORD *)(v7 + 40);
      v21 = *((_QWORD *)v28 + 5);
      v27 = 0LL;
      TransformRectAroundCursor((struct MOVESIZEDATA *)a1, &v34, *(_WORD *)(v21 + 60), 0LL, &v27, *(_WORD *)(v20 + 60));
      v7 = (__int64)v28;
      if ( (unsigned int)IsNewMonitorRectMostOccupied(
                           &v27,
                           (const struct tagRECT *)(*(_QWORD *)(v26[0] + 40) + 28LL),
                           (const struct tagRECT *)(*((_QWORD *)v28 + 5) + 28LL)) )
      {
        left = v27.left;
        top = v27.top;
        PhysicalToLogicalDPIPoint(&left, &left, *(unsigned int *)(*((_QWORD *)a1[2] + 5) + 288LL), v26);
        v27.left = left;
        v27.top = top;
        v22 = *(unsigned int *)(*((_QWORD *)a1[2] + 5) + 288LL);
        if ( (*(_DWORD *)(*((_QWORD *)a1[2] + 5) + 288LL) & 0xF) != 2 )
        {
          v31 = 0LL;
          *(_QWORD *)&v33.left = v26[0];
          PhysicalToLogicalDPIPoint(&v31, a1 + 34, v22, &v33);
          v23 = HIDWORD(v31) + *((_DWORD *)a1 + 43);
          v27.left = v31 + *((_DWORD *)a1 + 42);
          v27.top = v23;
          v27.bottom = v32.bottom + v23 - v32.top;
          v27.right = v32.right + v27.left - v32.left;
        }
        v19 = v27;
        goto LABEL_26;
      }
    }
    else
    {
      v8 = a1[2];
      v33 = v34;
      PhysicalToLogicalDPIRect(&v33, &v33, *(unsigned int *)(*((_QWORD *)v8 + 5) + 288LL), v26);
      v9 = *((_DWORD *)a1 + 28);
      v10 = v33.right - v33.left;
      v11 = v33.right - v33.left;
      if ( v33.right - v33.left <= *((_DWORD *)a1 + 26) )
        v11 = *((_DWORD *)a1 + 26);
      v12 = *(_QWORD *)(gpsi + 4960LL);
      v31 = v12;
      if ( v11 < v9 )
        v9 = v11;
      if ( v9 != v10 )
      {
        v33.left = v12 - EngMulDiv(v12 - v34.left, v9, v10);
        v33.right = v33.left + v9;
      }
      v13 = *((_DWORD *)a1 + 29);
      v14 = v33.bottom - v33.top;
      v15 = v33.bottom - v33.top;
      if ( v33.bottom - v33.top <= *((_DWORD *)a1 + 27) )
        v15 = *((_DWORD *)a1 + 27);
      if ( v15 < v13 )
        v13 = v15;
      if ( v13 != v14 )
      {
        v16 = HIDWORD(v31);
        v33.top = v16 - EngMulDiv(HIDWORD(v31) - v34.top, v13, v14);
        v33.bottom = v33.top + v13;
      }
      MonitorRectForWindow = (struct tagRECT *)GetMonitorRectForWindow((__int64)&v32, v26[0], a1[2]);
      v18 = a1[2];
      v27 = *MonitorRectForWindow;
      v32 = *(struct tagRECT *)GetMonitorRectForWindow((__int64)&v32, (__int64)v28, v18);
      if ( (unsigned int)IsNewMonitorRectMostOccupied(&v33, &v27, &v32) )
      {
        v19 = v33;
LABEL_26:
        v7 = v26[0];
        *a2 = v19;
        goto LABEL_27;
      }
      v7 = (__int64)v28;
    }
  }
LABEL_27:
  if ( (struct tagWND *)v7 == a1[26] || !v7 )
    return 0LL;
  v24 = *((_DWORD *)a1 + 50);
  a1[26] = (struct tagWND *)v7;
  if ( (v24 & 0x20) == 0 )
    *((_DWORD *)a1 + 50) = v24 | 0x8000000;
  return 1LL;
}
