/*
 * XREFs of CalcForegroundInsertAfter @ 0x1C0041090
 * Callers:
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C0026330 (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C0026674 (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01B65B8 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 * Callees:
 *     GetLastTopMostWindow @ 0x1C0044610 (GetLastTopMostWindow.c)
 *     ?GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z @ 0x1C012A388 (-GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z.c)
 */

struct tagWND *__fastcall CalcForegroundInsertAfter(struct tagWND *a1)
{
  struct tagWND *LastNonBottomMostWindow; // rax
  struct tagWND *v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rdi
  struct tagWND *v6; // rdx
  struct tagWND *v7; // rcx
  struct tagWND *v8; // rsi
  _BYTE *v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x20) != 0 )
    LastNonBottomMostWindow = GetLastNonBottomMostWindow(a1, 1);
  else
    LastNonBottomMostWindow = (struct tagWND *)GetLastTopMostWindow(a1);
  v3 = LastNonBottomMostWindow;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
  {
    v4 = *((_QWORD *)a1 + 2);
    if ( (*(_DWORD *)(v4 + 488) & 0x20) != 0 || (*(_DWORD *)(*(_QWORD *)(v4 + 424) + 12LL) & 0x80100) != 0 )
      return v3;
  }
  if ( !gpqForeground )
    return v3;
  v5 = *((_QWORD *)a1 + 2);
  if ( *(_QWORD *)(v5 + 432) == gpqForeground )
    return v3;
  v6 = LastNonBottomMostWindow;
  if ( LastNonBottomMostWindow )
  {
    v7 = LastNonBottomMostWindow;
    goto LABEL_13;
  }
  v7 = *(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL);
  if ( !v7 )
    goto LABEL_22;
LABEL_13:
  while ( 1 )
  {
    v8 = v7;
    if ( v7 == a1 )
      break;
    v9 = (_BYTE *)*((_QWORD *)v7 + 5);
    if ( (v9[20] & 0x20) == 0
      && (*((_QWORD *)v7 + 2) != v5 || (v9[24] & 8) != 0 || (v9[31] & 0xC0) != 0x40 && (v9[31] & 0x10) == 0) )
    {
      v7 = (struct tagWND *)*((_QWORD *)v7 + 11);
      v3 = v8;
      if ( v7 )
        continue;
    }
    if ( !v7 )
      goto LABEL_22;
    break;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v7 + 5) + 20LL) & 0x20) != 0 )
  {
LABEL_22:
    v3 = LastNonBottomMostWindow;
    if ( !LastNonBottomMostWindow )
      v6 = *(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL);
    v10 = *(_QWORD *)(gpqForeground + 128LL);
    v11 = 0LL;
    if ( v10 )
      v11 = *(_QWORD *)(v10 + 16);
    while ( v6 )
    {
      v12 = *((_QWORD *)v6 + 5);
      if ( (*(_BYTE *)(v12 + 20) & 0x20) != 0 )
        break;
      if ( *((_QWORD *)v6 + 2) == v11 )
      {
        if ( *((_QWORD *)v6 + 15) )
        {
          v3 = v6;
        }
        else if ( (*(_BYTE *)(v12 + 31) & 0x10) != 0 )
        {
          v3 = v6;
        }
      }
      v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
    }
  }
  return v3;
}
