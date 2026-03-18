/*
 * XREFs of xxxSimpleDoSyncPaint @ 0x1C0118654
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C008B690 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxGetUpdateRgn @ 0x1C008B918 (xxxGetUpdateRgn.c)
 *     xxxGetUpdateRect @ 0x1C008BB5C (xxxGetUpdateRect.c)
 *     xxxDispatchMessage @ 0x1C0117884 (xxxDispatchMessage.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C00C8EAC (DwmAsyncChildStyleChange.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00CE6B0 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     xxxSendEraseBkgnd @ 0x1C00CE7E4 (xxxSendEraseBkgnd.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00CE8F8 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EE714 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 *     GetStyleWindow @ 0x1C0119070 (GetStyleWindow.c)
 */

char __fastcall xxxSimpleDoSyncPaint(struct tagWND *a1)
{
  __int64 StyleWindow; // rax
  __int64 v3; // rax
  int v4; // ebx
  int v5; // ebp
  int v6; // r12d
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rax
  int v10; // r14d
  int v11; // ecx
  int v12; // edx
  int v13; // esi
  int v14; // eax
  int v15; // r15d
  __int64 v16; // rdx
  int v17; // ebx
  int v18; // ebp
  __int64 v19; // rbx
  __int64 v20; // rcx
  void *v21; // rax
  unsigned __int64 NCUpdateRgn; // rax
  unsigned __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9

  StyleWindow = GetStyleWindow(a1, 2818LL);
  if ( StyleWindow )
    return StyleWindow;
  v3 = *((_QWORD *)a1 + 5);
  v4 = *(_DWORD *)(v3 + 28);
  v5 = *(_DWORD *)(v3 + 24);
  v6 = *(_DWORD *)(v3 + 232);
  *(_BYTE *)(v3 + 18) &= ~0x40u;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v9 = (_DWORD *)*((_QWORD *)a1 + 5);
    v10 = v9[7];
    v11 = v9[6];
    v12 = v9[58];
    v13 = v5 ^ v11;
    v14 = v6 ^ v12;
    v15 = v4 ^ v10;
    if ( v4 == v10 )
    {
      if ( v13 )
        goto LABEL_12;
      if ( !v14 )
        goto LABEL_6;
    }
    if ( (v15 & 0xB1CF0000) != 0 )
    {
      v18 = -16;
      goto LABEL_16;
    }
LABEL_12:
    if ( (v13 & 0x4E27A9) != 0 )
    {
      v18 = -20;
      v10 = v11;
    }
    else
    {
      if ( (v14 & 0x12C0) == 0 )
        goto LABEL_17;
      v18 = -268435456;
      v10 = v12;
    }
LABEL_16:
    DirtyVisRgnTrackers((__int64)a1);
    v19 = *(_QWORD *)a1;
    v21 = (void *)ReferenceDwmApiPort(v20);
    DwmAsyncChildStyleChange(v21, v19, v18, v10);
LABEL_17:
    if ( (v13 & 0x200A0381) != 0 || (v15 & 0xC40000) != 0 )
      WindowMargins::CheckForChanges(a1, 1);
  }
LABEL_6:
  v16 = *((_QWORD *)a1 + 5);
  LOBYTE(StyleWindow) = *(_BYTE *)(v16 + 17);
  v17 = ((unsigned __int8)StyleWindow >> 2) & 2 | 1;
  if ( (StyleWindow & 2) == 0 )
    v17 = (*(unsigned __int8 *)(v16 + 17) >> 2) & 2;
  if ( v17 )
  {
    if ( (*(_BYTE *)(v16 + 31) & 0x10) != 0 )
    {
      LOBYTE(StyleWindow) = gptiCurrent;
      if ( !*(_QWORD *)(v16 + 136) )
      {
        SetOrClrWF(0, a1, 0x102u, 1);
        LOBYTE(StyleWindow) = SetOrClrWF(0, a1, 0x104u, 1);
        LOBYTE(v17) = v17 & 0xFE;
      }
      if ( *((_QWORD *)a1 + 2) == gptiCurrent )
      {
        NCUpdateRgn = GetNCUpdateRgn(a1, 1LL, v7, v8);
        v23 = NCUpdateRgn;
        if ( (v17 & 2) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 8) != 0 )
          xxxSendNCPaint(a1, NCUpdateRgn);
        if ( (v17 & 1) != 0 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 8) != 0 )
          {
            DeleteMaybeSpecialRgn(v23);
            v23 = GetNCUpdateRgn(a1, 0LL, v24, v25);
          }
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 2) != 0 )
          {
            SetOrClrWF(0, a1, 0x102u, 1);
            SetOrClrWF(0, a1, 0x104u, 1);
            xxxSendEraseBkgnd((__int64)a1, 0LL, v23);
          }
        }
        LOBYTE(StyleWindow) = DeleteMaybeSpecialRgn(v23);
      }
    }
    else
    {
      SetOrClrWF(0, a1, 0x108u, 1);
      SetOrClrWF(0, a1, 0x102u, 1);
      SetOrClrWF(0, a1, 0x680u, 1);
      LOBYTE(StyleWindow) = SetOrClrWF(0, a1, 0x104u, 1);
    }
  }
  return StyleWindow;
}
