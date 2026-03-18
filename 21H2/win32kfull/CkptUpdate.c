/*
 * XREFs of CkptUpdate @ 0x1C007CA54
 * Callers:
 *     _GetWindowPlacement @ 0x1C007C658 (_GetWindowPlacement.c)
 *     CkptRestore @ 0x1C007C97C (CkptRestore.c)
 * Callees:
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C006F980 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C010435C (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 */

char __fastcall CkptUpdate(struct tagWND *a1, struct tagRECT *a2, _DWORD *a3)
{
  char v6; // cl
  LONG top; // eax
  _OWORD *v8; // r8
  __int128 *v9; // rdx
  __int128 v10; // xmm0
  int v11; // edx
  __int64 v12; // r8
  struct tagMONITOR *v13; // rax
  struct tagRECT *MonitorMaxArea; // rax
  struct tagRECT v15; // xmm0
  struct tagRECT v17; // [rsp+20h] [rbp-18h] BYREF

  v6 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v6 & 0x20) != 0 )
  {
    a3[12] |= 0x20u;
    a3[8] = a2->left;
    top = a2->top;
    a3[9] = top;
  }
  else if ( (v6 & 1) != 0 )
  {
    a3[12] |= 0x40u;
    if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL) & 0x40) != 0 )
      {
        top = -1;
        *(_DWORD *)(v12 + 48) = v11 & 0xFFFFFFBF;
        *(_DWORD *)(v12 + 40) = -1;
      }
      else
      {
        v13 = (struct tagMONITOR *)MonitorFromRect(a2, 1u, 0);
        MonitorMaxArea = GetMonitorMaxArea(&v17, a1, v13);
        v15 = *MonitorMaxArea;
        a3[10] = a2->left - *(_OWORD *)MonitorMaxArea;
        top = a2->top - v15.top;
      }
    }
    else
    {
      *(_DWORD *)(v12 + 40) = a2->left;
      top = a2->top;
    }
    a3[11] = top;
  }
  else
  {
    LOBYTE(top) = IsSemiMaximized(a1);
    v10 = *v9;
    if ( (_BYTE)top )
      v8[1] = v10;
    else
      *v8 = v10;
  }
  return top;
}
