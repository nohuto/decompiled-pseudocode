/*
 * XREFs of CkptUpdate @ 0x1C0100B24
 * Callers:
 *     _GetWindowPlacement @ 0x1C0006898 (_GetWindowPlacement.c)
 *     CkptRestore @ 0x1C0100A4C (CkptRestore.c)
 * Callees:
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C0031BD4 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C00A1EF8 (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     _MonitorFromRect @ 0x1C00AEE80 (_MonitorFromRect.c)
 */

char __fastcall CkptUpdate(struct tagWND *a1, _DWORD *a2, _DWORD *a3)
{
  char v6; // cl
  int v7; // eax
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
    a3[8] = *a2;
    v7 = a2[1];
    a3[9] = v7;
  }
  else if ( (v6 & 1) != 0 )
  {
    a3[12] |= 0x40u;
    if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL) & 0x40) != 0 )
      {
        v7 = -1;
        *(_DWORD *)(v12 + 48) = v11 & 0xFFFFFFBF;
        *(_DWORD *)(v12 + 40) = -1;
      }
      else
      {
        v13 = (struct tagMONITOR *)MonitorFromRect((__int64)a2, 1u, 0);
        MonitorMaxArea = GetMonitorMaxArea(&v17, a1, v13);
        v15 = *MonitorMaxArea;
        a3[10] = *a2 - *(_OWORD *)MonitorMaxArea;
        v7 = a2[1] - v15.top;
      }
    }
    else
    {
      *(_DWORD *)(v12 + 40) = *a2;
      v7 = a2[1];
    }
    a3[11] = v7;
  }
  else
  {
    LOBYTE(v7) = IsSemiMaximized(a1);
    v10 = *v9;
    if ( (_BYTE)v7 )
      v8[1] = v10;
    else
      *v8 = v10;
  }
  return v7;
}
