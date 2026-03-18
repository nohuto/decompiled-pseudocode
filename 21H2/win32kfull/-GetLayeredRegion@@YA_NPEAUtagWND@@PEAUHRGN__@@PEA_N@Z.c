/*
 * XREFs of ?GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z @ 0x1C00B478C
 * Callers:
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x1C00B4534 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x1C00B4AAC (-GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z.c)
 *     _GhostWindowFromHungWindow @ 0x1C00B4C0C (_GhostWindowFromHungWindow.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C029D948 (GreScaleRgnToDestLogPixel.c)
 */

char __fastcall GetLayeredRegion(struct tagWND *a1, HRGN a2, bool *a3)
{
  bool v3; // bl
  __int64 v5; // rdx
  char v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v13; // edi
  int v14; // ecx
  int WindowRgn; // edi
  __int64 TopLevelWindow; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax

  v3 = 0;
  v5 = *((_QWORD *)a1 + 13);
  v8 = 1;
  if ( v5 && (v9 = *((_QWORD *)a1 + 3)) != 0 && (v10 = *(_QWORD *)(v9 + 8)) != 0 && v5 == *(_QWORD *)(v10 + 24) )
  {
    v11 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL);
    if ( !v11 )
      goto LABEL_6;
    WindowRgn = GreCombineRgn(a2, v11, 0LL, 5LL);
    if ( !WindowRgn )
      goto LABEL_6;
    v20 = *((_QWORD *)a1 + 5);
    if ( (*(_WORD *)(v20 + 42) & 0x2FFF) != 0x29D )
      WindowRgn = GreOffsetRgn(a2, (unsigned int)-*(_DWORD *)(v20 + 88), (unsigned int)-*(_DWORD *)(v20 + 92));
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                        + 64LL) & 1) != 0 )
        {
          v21 = *((_QWORD *)a1 + 5);
          v22 = *(_DWORD *)(v21 + 288);
          if ( (v22 & 0xF) == 0 && (v22 & 0x40000000) != 0 )
            GreScaleRgnToDestLogPixel(*(unsigned __int16 *)(v21 + 284), a2);
        }
      }
    }
    if ( !WindowRgn )
    {
LABEL_6:
      v8 = 0;
      goto LABEL_7;
    }
  }
  else
  {
    v13 = 2 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4 | 1);
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                        + 64LL) & 1) != 0 )
        {
          v14 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
          if ( (v14 & 0xF) == 0 && (v14 & 0x40000000) != 0 )
            v13 |= 0x20u;
        }
      }
    }
    WindowRgn = GetWindowRgn(a1, a2, v13);
  }
  if ( WindowRgn == 1 )
  {
    TopLevelWindow = GetTopLevelWindow((__int64)a1);
    if ( TopLevelWindow )
      v3 = GhostWindowFromHungWindow(TopLevelWindow, v17, v18, v19) != 0;
  }
LABEL_7:
  *a3 = v3;
  return v8;
}
