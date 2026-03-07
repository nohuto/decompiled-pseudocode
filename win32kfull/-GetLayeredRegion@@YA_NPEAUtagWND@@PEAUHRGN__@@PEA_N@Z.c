char __fastcall GetLayeredRegion(struct tagWND *a1, HRGN a2, bool *a3)
{
  bool v3; // bl
  __int64 v5; // rdx
  char v8; // r14
  __int64 DesktopWindow; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  char v13; // di
  int v14; // ecx
  int WindowRgn; // edi
  const struct tagWND *TopLevelWindow; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax

  v3 = 0;
  v5 = *((_QWORD *)a1 + 13);
  v8 = 1;
  if ( v5 && (DesktopWindow = GetDesktopWindow(a1, v5), v10 == DesktopWindow) )
  {
    v11 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL);
    if ( !v11 )
      goto LABEL_4;
    WindowRgn = GreCombineRgn(a2, v11, 0LL, 5LL);
    if ( !WindowRgn )
      goto LABEL_4;
    v17 = *((_QWORD *)a1 + 5);
    if ( (*(_WORD *)(v17 + 42) & 0x2FFF) != 0x29D )
      WindowRgn = GreOffsetRgn(a2, (unsigned int)-*(_DWORD *)(v17 + 88), (unsigned int)-*(_DWORD *)(v17 + 92));
    if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
    {
      if ( *((_QWORD *)PtiCurrentShared() + 57) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) != 0 )
        {
          v18 = *((_QWORD *)a1 + 5);
          v19 = *(_DWORD *)(v18 + 288);
          if ( (v19 & 0xF) == 0 && (v19 & 0x40000000) != 0 )
            GreScaleRgnToDestLogPixel(*(unsigned __int16 *)(v18 + 284), a2);
        }
      }
    }
    if ( !WindowRgn )
    {
LABEL_4:
      v8 = 0;
      goto LABEL_5;
    }
  }
  else
  {
    v13 = 2 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4 | 1);
    if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
    {
      if ( *((_QWORD *)PtiCurrentShared() + 57) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) != 0 )
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
    TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)a1);
    if ( TopLevelWindow )
      v3 = _GhostWindowFromHungWindow(TopLevelWindow) != 0LL;
  }
LABEL_5:
  *a3 = v3;
  return v8;
}
