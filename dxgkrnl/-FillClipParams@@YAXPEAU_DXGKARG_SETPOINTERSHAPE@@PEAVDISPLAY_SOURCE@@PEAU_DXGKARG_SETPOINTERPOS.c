/*
 * XREFs of ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C03344B8
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1C01E4050 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C0335294 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall FillClipParams(
        struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct DISPLAY_SOURCE *a2,
        struct _DXGKARG_SETPOINTERPOSITION *a3,
        struct CURSOR_CLIP_PARAMS *a4)
{
  signed int v7; // edi
  int v8; // r14d
  signed int v9; // esi
  int v10; // r12d
  UINT *p_Height; // r13
  UINT Width; // r10d
  int v13; // edx
  UINT v14; // eax
  INT v15; // eax
  int v16; // ecx
  INT X; // r9d
  INT v18; // eax
  int v19; // edx
  INT Y; // r9d
  int v21; // esi
  char v22; // cl
  char v23; // al
  __int128 v24; // [rsp+50h] [rbp-48h]
  struct _DXGKARG_SETPOINTERPOSITION *v25; // [rsp+B0h] [rbp+18h]

  v25 = a3;
  if ( *((_BYTE *)a2 + 704) )
  {
    v7 = *((_DWORD *)a2 + 177);
    v8 = 0;
    v9 = *((_DWORD *)a2 + 178);
    v10 = 0;
    DWORD1(v24) = 0;
    HIDWORD(v24) = v9;
  }
  else
  {
    v24 = *((_OWORD *)a2 + 43);
    v9 = HIDWORD(v24);
    v7 = *((_QWORD *)a2 + 87);
    v10 = HIDWORD(*((_QWORD *)a2 + 86));
    v8 = v24;
  }
  p_Height = &a1->Height;
  if ( v7 - v8 < (signed int)a1->Width || HIDWORD(v24) - DWORD1(v24) < (int)*p_Height )
  {
    WdLogSingleEntry1(1LL, 221LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"((ClipBoxRect.right - ClipBoxRect.left) >= (LONG)(pSavedCursor->Width)) && ((ClipBoxRect.bottom - ClipBox"
                "Rect.top) >= (LONG)(pSavedCursor->Height))",
      221LL,
      0LL,
      0LL,
      0LL,
      0LL);
    a3 = v25;
  }
  Width = a1->Width;
  *(_OWORD *)a4 = 0LL;
  v13 = 4;
  *((_QWORD *)a4 + 2) = 0LL;
  *((_DWORD *)a4 + 5) = 0;
  v14 = *p_Height;
  *(_DWORD *)a4 = Width;
  *((_DWORD *)a4 + 1) = v14;
  if ( v8 && (v15 = a3->X, v15 < v8) )
  {
    *((_DWORD *)a4 + 5) = 4;
    v16 = 4;
    *(_DWORD *)a4 = Width + v15 - v8;
  }
  else
  {
    v16 = 0;
    v13 = 0;
    if ( *((_DWORD *)a2 + 252) != v7 )
    {
      X = a3->X;
      if ( (int)(X + Width) > v7 )
      {
        if ( v7 - X < 0 )
        {
          WdLogSingleEntry1(1LL, 241LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(ClipBoxRect.right - pPointerPos->X) >= 0",
            241LL,
            0LL,
            0LL,
            0LL,
            0LL);
          a3 = v25;
        }
        v16 = 8;
        *(_DWORD *)a4 = v7 - a3->X;
        v13 = 8;
        *((_DWORD *)a4 + 5) = 8;
      }
    }
  }
  if ( v10 && (v18 = a3->Y, v18 < v10) )
  {
    v19 = v13 | 1;
    *((_DWORD *)a4 + 1) = *p_Height + v18 - v10;
    *((_DWORD *)a4 + 5) = v19;
  }
  else
  {
    v19 = v16;
    if ( v9 != *((_DWORD *)a2 + 253) )
    {
      Y = a3->Y;
      if ( (int)(Y + *p_Height) > v9 )
      {
        if ( v9 - Y < 0 )
        {
          WdLogSingleEntry1(1LL, 258LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(ClipBoxRect.bottom - pPointerPos->Y) >= 0",
            258LL,
            0LL,
            0LL,
            0LL,
            0LL);
          a3 = v25;
        }
        v21 = v9 - a3->Y;
        *((_DWORD *)a4 + 5) |= 2u;
        v19 = *((_DWORD *)a4 + 5);
        *((_DWORD *)a4 + 1) = v21;
      }
    }
  }
  if ( v19 )
  {
    *((_DWORD *)a4 + 2) = a1->Pitch;
    if ( (a1->Flags.Value & 1) != 0 )
    {
      if ( (v19 & 4) != 0 )
      {
        v22 = 0;
        v23 = (*(_BYTE *)a4 - LOBYTE(a1->Width)) & 7;
      }
      else
      {
        v23 = 0;
        v22 = *(_BYTE *)a4 & 7;
      }
      *((_BYTE *)a4 + 16) = v23;
      *((_BYTE *)a4 + 17) = v22;
      if ( *((_BYTE *)a4 + 16) )
      {
        if ( *((_BYTE *)a4 + 17) )
        {
          WdLogSingleEntry1(1LL, 293LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pClipParams->ExtraPixelsLeftMono == 0 || pClipParams->ExtraPixelsRightMono == 0",
            293LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      *((_DWORD *)a4 + 3) = 1;
    }
    else
    {
      *((_DWORD *)a4 + 3) = 0;
    }
  }
}
