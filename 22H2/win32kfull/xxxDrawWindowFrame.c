/*
 * XREFs of xxxDrawWindowFrame @ 0x1C00C6FE0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0156B26 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0222580 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 * Callees:
 *     xxxDrawScrollBar @ 0x1C00149D0 (xxxDrawScrollBar.c)
 *     DrawEdge @ 0x1C002995C (DrawEdge.c)
 *     xxxDrawCaptionBar @ 0x1C00C689C (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C00C6A7C (GetWindowBorders.c)
 *     IsVisible @ 0x1C00C719C (IsVisible.c)
 *     GetRect @ 0x1C00C7BD0 (GetRect.c)
 *     GetCaptionHeight @ 0x1C00ECE00 (GetCaptionHeight.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     DrawSize @ 0x1C0229DC8 (DrawSize.c)
 *     xxxMenuBarDraw @ 0x1C0235E48 (xxxMenuBarDraw.c)
 */

void __fastcall xxxDrawWindowFrame(struct tagWND *a1, HDC a2, __int16 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int WindowBorders; // r14d
  unsigned int v12; // r12d
  _BYTE *v13; // rdx
  char v14; // r8
  bool v15; // cl
  LONG v16; // r12d
  __int64 v17; // rax
  unsigned __int8 v18; // dl
  unsigned int v19; // r8d
  int v20; // r8d
  RECT v21; // [rsp+20h] [rbp-30h] BYREF
  __int128 v22; // [rsp+30h] [rbp-20h] BYREF

  v22 = 0LL;
  if ( (unsigned int)IsVisible(a1) )
  {
    v7 = *(_QWORD *)(v6 + 40);
    v8 = *(_BYTE *)(v7 + 17);
    if ( (v8 & 1) == 0 || v8 < 0 )
    {
      v9 = *(_QWORD *)(v7 + 88) - *(_QWORD *)(v7 + 104);
      if ( !v9 )
        v9 = *(_QWORD *)(v7 + 96) - *(_QWORD *)(v7 + 112);
      if ( v9 && (*(_QWORD *)(v7 + 136) || (unsigned int)GreGetClipBox(a2, &v22, 1LL) != 1) )
      {
        v10 = *((_QWORD *)a1 + 5);
        v21 = 0LL;
        if ( (*(_BYTE *)(v10 + 31) & 0x20) == 0 || (*(_BYTE *)(v10 + 17) & 1) != 0 )
        {
          WindowBorders = GetWindowBorders(*(unsigned int *)(v10 + 28), *(unsigned int *)(v10 + 24));
          GetRect(a1, &v21, 34LL);
          v21.left += WindowBorders;
          v12 = v21.top + WindowBorders;
          v21.right -= WindowBorders;
          v21.bottom -= WindowBorders;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 1) != 0 && (a3 & 0x2000) == 0 )
            v12 += xxxMenuBarDraw(
                     a1,
                     a2,
                     WindowBorders,
                     WindowBorders,
                     *(_QWORD *)&v21.left,
                     *(_QWORD *)&v21.right,
                     v22,
                     *((_QWORD *)&v22 + 1));
          v13 = (_BYTE *)*((_QWORD *)a1 + 5);
          v14 = v13[30];
          if ( (v14 & 0xC0) != 0 )
            goto LABEL_34;
          v15 = 0;
          if ( (v14 & 4) == 0 )
            v15 = (v13[24] & 1) == 0;
          if ( !v15 || (v13[25] & 1) != 0 || (v13[26] & 2) != 0 && (v13[17] & 1) == 0 )
          {
LABEL_34:
            v20 = a3 & 0x2000 | 0x900D;
            if ( (a3 & 1) == 0 )
              v20 = a3 & 0x2000 | 0x900C;
            xxxDrawCaptionBar((__int64)a1, a2, v20 | 0x800);
          }
          v16 = GetCaptionHeight(a1) + v12;
          v17 = *((_QWORD *)a1 + 5);
          v21.top = v16;
          if ( (*(_BYTE *)(v17 + 20) & 0x10) != 0 )
          {
            WindowBorders += 2;
            DrawEdge(a2, &v21, 10, 8207);
          }
          v18 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL);
          if ( (((a3 & 0x2000) == 0) & (v18 >> 1)) != 0 )
          {
            if ( (v18 & 4) != 0 )
              DrawSize(a1, a2, WindowBorders, WindowBorders);
            xxxDrawScrollBar(a1, a2, 1u);
          }
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 4) != 0 && (a3 & 0x2000) == 0 )
            xxxDrawScrollBar(a1, a2, 0);
        }
        else
        {
          v19 = ((*(_BYTE *)(v10 + 16) & 0x40 | 0x240300u) >> 6) | 0x2000;
          if ( (a3 & 0x2000) == 0 )
            v19 = (*(_BYTE *)(v10 + 16) & 0x40 | 0x240300u) >> 6;
          xxxDrawCaptionBar((__int64)a1, a2, v19);
        }
      }
    }
  }
}
