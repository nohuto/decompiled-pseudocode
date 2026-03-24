/*
 * XREFs of xxxDrawWindowFrame @ 0x1C004BA7C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C010BE7C (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxRedrawHungWindow @ 0x1C0240D14 (xxxRedrawHungWindow.c)
 * Callees:
 *     DrawEdge @ 0x1C0045148 (DrawEdge.c)
 *     GetCaptionHeight @ 0x1C0047254 (GetCaptionHeight.c)
 *     GetRect @ 0x1C0063E88 (GetRect.c)
 *     IsVisible @ 0x1C00680C4 (IsVisible.c)
 *     xxxDrawCaptionBar @ 0x1C00DCAB8 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C00DCF9C (GetWindowBorders.c)
 *     xxxDrawScrollBar @ 0x1C0157970 (xxxDrawScrollBar.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     DrawSize @ 0x1C0244F00 (DrawSize.c)
 *     xxxMenuBarDraw @ 0x1C024CF54 (xxxMenuBarDraw.c)
 */

char __fastcall xxxDrawWindowFrame(__int64 a1, HDC a2, __int16 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int WindowBorders; // esi
  _BYTE *v12; // rdx
  unsigned int v13; // r15d
  char v14; // r8
  __int64 v15; // r8
  int CaptionHeight; // eax
  __int64 v17; // rcx
  bool v18; // r14
  bool v19; // cl
  unsigned int v20; // eax
  __int64 v21; // r8
  int v22; // eax
  RECT v24; // [rsp+20h] [rbp-30h] BYREF
  __int128 v25; // [rsp+30h] [rbp-20h] BYREF

  v25 = 0LL;
  LODWORD(v6) = IsVisible(a1);
  if ( (_DWORD)v6 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    LOBYTE(v6) = *(_BYTE *)(v8 + 17);
    if ( (v6 & 1) == 0 || (v6 & 0x80u) != 0LL )
    {
      v9 = *(_QWORD *)(v8 + 88) - *(_QWORD *)(v8 + 104);
      if ( !v9 )
        v9 = *(_QWORD *)(v8 + 96) - *(_QWORD *)(v8 + 112);
      if ( v9 )
      {
        if ( *(_QWORD *)(v8 + 136) || (LODWORD(v6) = GreGetClipBox(a2, &v25, 1LL), (_DWORD)v6 != 1) )
        {
          v10 = *(_QWORD *)(a1 + 40);
          v24 = 0LL;
          if ( (*(_BYTE *)(v10 + 31) & 0x20) == 0 || (*(_BYTE *)(v10 + 17) & 1) != 0 )
          {
            WindowBorders = GetWindowBorders(*(unsigned int *)(v10 + 28), *(unsigned int *)(v10 + 24));
            GetRect(a1, &v24, 34LL);
            v12 = *(_BYTE **)(a1 + 40);
            v24.left += WindowBorders;
            v13 = v24.top + WindowBorders;
            v24.right -= WindowBorders;
            v24.bottom -= WindowBorders;
            if ( (v12[16] & 1) != 0 && (a3 & 0x2000) == 0 )
            {
              v22 = xxxMenuBarDraw(
                      a1,
                      a2,
                      WindowBorders,
                      WindowBorders,
                      *(_QWORD *)&v24.left,
                      *(_QWORD *)&v24.right,
                      v25,
                      *((_QWORD *)&v25 + 1));
              v12 = *(_BYTE **)(a1 + 40);
              v13 += v22;
            }
            v14 = v12[30];
            if ( (v14 & 0xC0) != 0 )
              goto LABEL_10;
            v19 = 0;
            if ( (v14 & 4) == 0 )
              v19 = (v12[24] & 1) == 0;
            if ( !v19 || (v12[25] & 1) != 0 || (v12[26] & 2) != 0 && (v12[17] & 1) == 0 )
            {
LABEL_10:
              v15 = a3 & 0x2000 | 0x900Du;
              if ( (a3 & 1) == 0 )
                v15 = a3 & 0x2000 | 0x900Cu;
              LODWORD(v15) = v15 | 0x800;
              xxxDrawCaptionBar(a1, a2, v15);
            }
            CaptionHeight = GetCaptionHeight(a1);
            v17 = *(_QWORD *)(a1 + 40);
            v24.top = CaptionHeight + v13;
            if ( (*(_BYTE *)(v17 + 20) & 0x10) != 0 )
            {
              WindowBorders += 2;
              DrawEdge(a2, &v24, 10, 8207);
              v17 = *(_QWORD *)(a1 + 40);
            }
            v18 = (a3 & 0x2000) == 0;
            if ( (v18 & (*(_BYTE *)(v17 + 16) >> 1) & 1) != 0 )
            {
              if ( (*(_BYTE *)(v17 + 16) & 4) != 0 )
                DrawSize(a1, a2, WindowBorders, WindowBorders);
              xxxDrawScrollBar((struct tagWND *)a1, a2, 1);
            }
            v6 = *(_QWORD *)(a1 + 40);
            if ( (v18 & (*(_BYTE *)(v6 + 16) >> 2) & 1) != 0 )
              LOBYTE(v6) = xxxDrawScrollBar((struct tagWND *)a1, a2, 0);
          }
          else
          {
            v20 = (*(_BYTE *)(v10 + 16) & 0x40 | 0x240300u) >> 6;
            v21 = v20;
            LODWORD(v21) = v20 | 0x2000;
            if ( (a3 & 0x2000) == 0 )
              v21 = v20;
            LOBYTE(v6) = xxxDrawCaptionBar(a1, a2, v21);
          }
        }
      }
    }
  }
  return v6;
}
