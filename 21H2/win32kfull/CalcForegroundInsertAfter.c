/*
 * XREFs of CalcForegroundInsertAfter @ 0x1C0085330
 * Callers:
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C008176C (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C0081A44 (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     ?CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0085304 (-CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01DBB94 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 * Callees:
 *     ?GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z @ 0x1C0082518 (-GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z.c)
 *     GetLastTopMostWindow @ 0x1C0085494 (GetLastTopMostWindow.c)
 */

struct tagWND *__fastcall CalcForegroundInsertAfter(struct tagWND *a1)
{
  struct tagWND *LastNonBottomMostWindow; // rax
  __int64 v3; // r11
  struct tagWND *v4; // r8
  __int64 v5; // rcx
  __int64 v7; // rdi
  struct tagWND *v8; // rdx
  struct tagWND *v9; // rcx
  struct tagWND *v10; // rsi
  _BYTE *v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r9

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x20) != 0 )
  {
    LastNonBottomMostWindow = GetLastNonBottomMostWindow(a1, 1);
  }
  else
  {
    LastNonBottomMostWindow = (struct tagWND *)GetLastTopMostWindow(a1);
    v3 = *((_QWORD *)a1 + 5);
  }
  v4 = LastNonBottomMostWindow;
  if ( (*(_BYTE *)(v3 + 31) & 0xC0) != 0x40 )
  {
    v5 = *((_QWORD *)a1 + 2);
    if ( (*(_DWORD *)(v5 + 488) & 0x20) != 0 || (*(_DWORD *)(*(_QWORD *)(v5 + 424) + 12LL) & 0x80100) != 0 )
      return v4;
  }
  if ( !gpqForeground )
    return v4;
  v7 = *((_QWORD *)a1 + 2);
  if ( *(_QWORD *)(v7 + 432) == gpqForeground )
    return v4;
  v8 = LastNonBottomMostWindow;
  if ( LastNonBottomMostWindow )
  {
    v9 = LastNonBottomMostWindow;
    goto LABEL_12;
  }
  v9 = *(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL);
  if ( !v9 )
    goto LABEL_22;
LABEL_12:
  while ( 1 )
  {
    v10 = v9;
    if ( v9 == a1 )
      break;
    v11 = (_BYTE *)*((_QWORD *)v9 + 5);
    if ( (v11[20] & 0x20) == 0
      && (*((_QWORD *)v9 + 2) != v7 || (v11[24] & 8) != 0 || (v11[31] & 0xC0) != 0x40 && (v11[31] & 0x10) == 0) )
    {
      v9 = (struct tagWND *)*((_QWORD *)v9 + 11);
      v4 = v10;
      if ( v9 )
        continue;
    }
    if ( !v9 )
      goto LABEL_22;
    break;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v9 + 5) + 20LL) & 0x20) != 0 )
  {
LABEL_22:
    v4 = LastNonBottomMostWindow;
    if ( !LastNonBottomMostWindow )
      v8 = *(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL);
    v12 = *(_QWORD *)(gpqForeground + 120LL);
    v13 = 0LL;
    if ( v12 )
      v13 = *(_QWORD *)(v12 + 16);
    while ( v8 )
    {
      v14 = *((_QWORD *)v8 + 5);
      if ( (*(_BYTE *)(v14 + 20) & 0x20) != 0 )
        break;
      if ( *((_QWORD *)v8 + 2) == v13 )
      {
        if ( *((_QWORD *)v8 + 15) )
        {
          v4 = v8;
        }
        else if ( (*(_BYTE *)(v14 + 31) & 0x10) != 0 )
        {
          v4 = v8;
        }
      }
      v8 = (struct tagWND *)*((_QWORD *)v8 + 11);
    }
  }
  return v4;
}
