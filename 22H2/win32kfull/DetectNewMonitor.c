/*
 * XREFs of DetectNewMonitor @ 0x1C01E4B14
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C0210F44 (xxxDrawDragRectEx.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C0042270 (_MonitorFromRect.c)
 *     GetMonitorRectForWindow @ 0x1C00427D4 (GetMonitorRectForWindow.c)
 *     GetInheritedMonitor @ 0x1C006C0E4 (GetInheritedMonitor.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01E3C20 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01E3D5C (-TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z.c)
 */

__int64 __fastcall DetectNewMonitor(struct tagWND **a1, struct tagRECT *a2)
{
  __int64 InheritedMonitor; // rax
  struct tagRECT v5; // xmm0
  struct tagWND *v6; // rax
  __int64 v7; // rbx
  struct tagWND *v8; // rax
  INT v9; // r8d
  INT v10; // esi
  INT v11; // eax
  __int64 v12; // rbx
  INT v13; // r8d
  INT v14; // esi
  int v15; // ebx
  struct tagRECT *MonitorRectForWindow; // rax
  const struct tagWND *v17; // r8
  struct tagRECT v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  LONG v22; // r8d
  int v23; // ecx
  __int64 v25[2]; // [rsp+30h] [rbp-39h] BYREF
  struct tagRECT v26; // [rsp+40h] [rbp-29h] BYREF
  struct tagWND *v27; // [rsp+50h] [rbp-19h] BYREF
  LONG left; // [rsp+58h] [rbp-11h] BYREF
  LONG top; // [rsp+5Ch] [rbp-Dh]
  __int64 v30; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT v31; // [rsp+70h] [rbp+7h] BYREF
  struct tagRECT v32; // [rsp+80h] [rbp+17h] BYREF
  struct tagRECT v33; // [rsp+90h] [rbp+27h] BYREF

  InheritedMonitor = GetInheritedMonitor(a1[2]);
  v5 = *a2;
  v25[0] = InheritedMonitor;
  v27 = a1[26];
  v6 = a1[2];
  v33 = v5;
  v31 = v5;
  LogicalToPhysicalDPIRect(&v33, &v33, *(unsigned int *)(*((_QWORD *)v6 + 5) + 288LL), &v27);
  v7 = v25[0];
  if ( !v25[0] )
  {
    v7 = MonitorFromRect(&v33, 0, 0x12u);
    v25[0] = v7;
  }
  if ( v27 && v7 && v27 != (struct tagWND *)v7 )
  {
    if ( (unsigned int)(*((_DWORD *)a1 + 44) - 9) <= 1 )
    {
      v19 = *(_QWORD *)(v7 + 40);
      v20 = *((_QWORD *)v27 + 5);
      v26 = 0LL;
      TransformRectAroundCursor((struct _MOVESIZEDATA *)a1, &v33, *(_WORD *)(v20 + 64), 0LL, &v26, *(_WORD *)(v19 + 64));
      v7 = (__int64)v27;
      if ( IsNewMonitorRectMostOccupied(
             &v26,
             (const struct tagRECT *)(*(_QWORD *)(v25[0] + 40) + 28LL),
             (const struct tagRECT *)(*((_QWORD *)v27 + 5) + 28LL)) )
      {
        left = v26.left;
        top = v26.top;
        PhysicalToLogicalDPIPoint(&left, &left, *(unsigned int *)(*((_QWORD *)a1[2] + 5) + 288LL), v25);
        v26.left = left;
        v26.top = top;
        v21 = *(unsigned int *)(*((_QWORD *)a1[2] + 5) + 288LL);
        if ( (*(_DWORD *)(*((_QWORD *)a1[2] + 5) + 288LL) & 0xF) != 2 )
        {
          v30 = 0LL;
          *(_QWORD *)&v32.left = v25[0];
          PhysicalToLogicalDPIPoint(&v30, (char *)a1 + 308, v21, &v32);
          v22 = HIDWORD(v30) + *((_DWORD *)a1 + 43);
          v26.left = v30 + *((_DWORD *)a1 + 42);
          v26.top = v22;
          v26.bottom = v31.bottom + v22 - v31.top;
          v26.right = v31.right + v26.left - v31.left;
        }
        v18 = v26;
        goto LABEL_26;
      }
    }
    else
    {
      v8 = a1[2];
      v32 = v33;
      PhysicalToLogicalDPIRect(&v32, &v32, *(unsigned int *)(*((_QWORD *)v8 + 5) + 288LL), v25);
      v9 = v32.right - v32.left;
      v10 = v32.right - v32.left;
      if ( v32.right - v32.left <= *((_DWORD *)a1 + 26) )
        v10 = *((_DWORD *)a1 + 26);
      v11 = *((_DWORD *)a1 + 28);
      v12 = *(_QWORD *)(gpsi + 4960LL);
      v30 = v12;
      if ( v10 >= v11 )
        v10 = v11;
      if ( v10 != v9 )
      {
        v32.left = v12 - EngMulDiv(v12 - v33.left, v10, v9);
        v32.right = v32.left + v10;
      }
      v13 = v32.bottom - v32.top;
      v14 = v32.bottom - v32.top;
      if ( v32.bottom - v32.top <= *((_DWORD *)a1 + 27) )
        v14 = *((_DWORD *)a1 + 27);
      if ( v14 >= *((_DWORD *)a1 + 29) )
        v14 = *((_DWORD *)a1 + 29);
      if ( v14 != v13 )
      {
        v15 = HIDWORD(v30);
        v32.top = v15 - EngMulDiv(HIDWORD(v30) - v33.top, v14, v13);
        v32.bottom = v32.top + v14;
      }
      MonitorRectForWindow = (struct tagRECT *)GetMonitorRectForWindow(&v31, v25[0], a1[2]);
      v17 = a1[2];
      v26 = *MonitorRectForWindow;
      v31 = (struct tagRECT)*GetMonitorRectForWindow(&v31, (__int64)v27, v17);
      if ( IsNewMonitorRectMostOccupied(&v32, &v26, &v31) )
      {
        v18 = v32;
LABEL_26:
        v7 = v25[0];
        *a2 = v18;
        goto LABEL_27;
      }
      v7 = (__int64)v27;
    }
  }
LABEL_27:
  if ( (struct tagWND *)v7 == a1[26] || !v7 )
    return 0LL;
  v23 = *((_DWORD *)a1 + 49);
  a1[26] = (struct tagWND *)v7;
  if ( (v23 & 0x20) == 0 )
    *((_DWORD *)a1 + 49) = v23 | 0x10000000;
  return 1LL;
}
