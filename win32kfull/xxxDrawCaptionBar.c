/*
 * XREFs of xxxDrawCaptionBar @ 0x1C0021730
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C00245B8 (xxxDWP_DoNCActivate.c)
 *     xxxDrawWindowFrame @ 0x1C00A64E4 (xxxDrawWindowFrame.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     xxxRedrawTitle @ 0x1C01097D0 (xxxRedrawTitle.c)
 * Callees:
 *     PrepareHDCBITSBitmap @ 0x1C00162BC (PrepareHDCBITSBitmap.c)
 *     GetWindowBorders @ 0x1C0021910 (GetWindowBorders.c)
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     GetRect @ 0x1C0067778 (GetRect.c)
 *     GrePolyPatBlt @ 0x1C0088258 (GrePolyPatBlt.c)
 *     DrawEdge @ 0x1C0088404 (DrawEdge.c)
 *     NtGdiPatBlt @ 0x1C008B370 (NtGdiPatBlt.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     GetWindowDpiLastNotify @ 0x1C00A3A34 (GetWindowDpiLastNotify.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     xxxMNCanClose @ 0x1C00A4C44 (xxxMNCanClose.c)
 *     IsVisible @ 0x1C00A66A0 (IsVisible.c)
 *     BitBltSysBmp @ 0x1C00D04B0 (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00D05EC (GetOemBitmapInfoForDpi.c)
 *     IS_UI_LANGID @ 0x1C00D0648 (IS_UI_LANGID.c)
 *     GetResizeBorderWidthForDpi @ 0x1C00D8FEC (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C00E2334 (GetWindowFrameMetricForDpi.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     xxxDrawCaptionTemp @ 0x1C022EDB4 (xxxDrawCaptionTemp.c)
 *     DrawFrame @ 0x1C024F2F8 (DrawFrame.c)
 */

char __fastcall xxxDrawCaptionBar(struct tagWND *a1, HDC a2, int a3)
{
  char v3; // bl
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ecx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v11; // rdx
  unsigned int v12; // edi
  unsigned int v13; // r13d
  __int64 v14; // rcx
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int DpiForSystem; // eax
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // r8d
  __int64 v24; // rcx
  unsigned int v25; // eax
  int v26; // ebx
  int v27; // ebx
  __int64 v28; // rcx
  unsigned int v29; // eax
  int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // rcx
  int v33; // r15d
  unsigned int v34; // eax
  unsigned int DpiDependentMetric; // ebx
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // rdx
  LONG right; // edx
  unsigned int v42; // eax
  unsigned int v43; // r15d
  int v44; // eax
  __int64 v45; // r13
  __int16 *OemBitmapInfoForDpi; // r15
  _BOOL8 v47; // rcx
  int v49; // [rsp+20h] [rbp-B9h]
  int v50; // [rsp+20h] [rbp-B9h]
  int v51; // [rsp+20h] [rbp-B9h]
  unsigned int v52; // [rsp+60h] [rbp-79h]
  unsigned int v53; // [rsp+64h] [rbp-75h]
  int v54; // [rsp+68h] [rbp-71h]
  int v56; // [rsp+70h] [rbp-69h]
  int v57; // [rsp+74h] [rbp-65h]
  int v58; // [rsp+78h] [rbp-61h]
  __int64 v59; // [rsp+80h] [rbp-59h]
  __int64 v60; // [rsp+90h] [rbp-49h]
  struct tagRECT v61; // [rsp+E0h] [rbp+7h] BYREF

  v54 = 0;
  v3 = a3;
  v60 = 0LL;
  v61 = 0LL;
  if ( (a3 & 0x800) == 0 )
  {
    LODWORD(ThreadWin32Thread) = IsVisible(a1);
    if ( !(_DWORD)ThreadWin32Thread )
      return ThreadWin32Thread;
  }
  GetRect(a1, &v61, 34LL);
  if ( !gbDisableAlpha && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) == 0x80000010 )
  {
    v57 = v3 & 1;
    if ( (v3 & 1) != 0 )
      v7 = *(_QWORD *)(gpsi + 4912LL);
    else
      v7 = *(_QWORD *)(gpsi + 4920LL);
    v58 = 1;
    goto LABEL_8;
  }
  v58 = 0;
  v57 = v3 & 1;
  if ( (v3 & 1) == 0 )
  {
    v7 = *(_QWORD *)(gpsi + 4720LL);
    v58 = 0;
    v57 = v3 & 1;
LABEL_8:
    v59 = v7;
    goto LABEL_9;
  }
  v59 = *(_QWORD *)(gpsi + 4712LL);
LABEL_9:
  v8 = *((_QWORD *)a1 + 5);
  v9 = *(_DWORD *)(v8 + 288) & 0xF;
  if ( v9 == 3 )
  {
    v52 = (*(_DWORD *)(v8 + 288) >> 8) & 0x1FF;
  }
  else
  {
    if ( (*(_DWORD *)(v8 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
LABEL_12:
      v52 = WindowDpiLastNotify;
      goto LABEL_13;
    }
    if ( v9
      || (v18 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) == 0
      || (*(_DWORD *)(**(_QWORD **)(v18 + 8) + 64LL) & 1) == 0 )
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      goto LABEL_12;
    }
    v52 = 96;
  }
LABEL_13:
  v12 = 0;
  v13 = 8;
  if ( !(unsigned int)xxxMNCanClose(a1) )
    v12 = 16;
  v14 = *((_QWORD *)a1 + 5);
  LOBYTE(v11) = *(_BYTE *)(v14 + 30);
  v15 = *(_BYTE *)(v14 + 31);
  if ( (v11 & 1) != 0 )
  {
    if ( (v15 & 1) != 0 )
      v12 |= 2u;
  }
  else
  {
    v12 |= 8u;
  }
  if ( (v11 & 2) == 0 )
  {
    v12 |= 4u;
    if ( (v15 & 0x20) == 0 )
      goto LABEL_19;
LABEL_37:
    if ( (a3 & 0x8000) != 0 )
    {
      DrawEdge(a2);
      DrawFrame(a2);
      ++v61.left;
      --v61.right;
      ++v61.top;
    }
    else
    {
      v61.left += 3;
      v61.right -= 3;
      v61.top += 3;
    }
    DpiForSystem = GetDpiForSystem(v14, v11);
    v61.bottom = v61.top + GetDpiDependentMetric(13LL, DpiForSystem);
    v60 = GreSelectBrush(a2, v59);
LABEL_57:
    v32 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v32 + 30) & 8) == 0 && (*(_BYTE *)(v32 + 21) & 2) != 0 )
    {
LABEL_94:
      LOBYTE(ThreadWin32Thread) = a3;
      if ( (a3 & 0xC) != 0 )
      {
        v47 = (unsigned int)xxxDrawCaptionTemp(a1, a2, &v61, 0LL, 0LL, a3 | (32 * v58) | (v12 >> 4) & 2) == 0;
        LOBYTE(ThreadWin32Thread) = SetOrClrWF(v47, a1, 1800LL, 1LL);
      }
      return ThreadWin32Thread;
    }
    v33 = 1;
    v34 = GetDpiForSystem(v32, v20);
    DpiDependentMetric = GetDpiDependentMetric(12LL, v34);
    v38 = GetDpiForSystem(v37, v36);
    v39 = GetDpiDependentMetric(23LL, v38);
    if ( (a3 & 0x1000) != 0 )
    {
      if ( v12 )
      {
        if ( v12 != 12 )
        {
          v61.bottom -= 2;
          v50 = v61.bottom - (v61.top + 2);
          v61.top += 2;
          v61.right -= 2;
          NtGdiPatBlt(a2, v61.right, v61.top, 2, v50, 15728673);
          v42 = v54;
          if ( (v12 & 0x10) != 0 )
            v42 = v54 + 3;
          v61.right -= *(__int16 *)(GetOemBitmapInfoForDpi(v42, v52) + 4);
          BitBltSysBmp(a2, 1);
          if ( (v12 & 0xC) != 12 && (v12 & 0x20) == 0 )
          {
            v61.right -= 2;
            NtGdiPatBlt(a2, v61.right, v61.top, 2, v61.bottom - v61.top, 15728673);
            if ( (v12 & 2) != 0 )
              v43 = 8;
            else
              v43 = (v12 & 8) != 0 ? 17 : 14;
            v61.right -= *(__int16 *)(GetOemBitmapInfoForDpi(v43, v52) + 4);
            BitBltSysBmp(a2, 1);
            if ( (v12 & 1) == 0 )
              v13 = (v12 & 4) != 0 ? 7 : 4;
            v61.right -= *(__int16 *)(GetOemBitmapInfoForDpi(v13, v52) + 4);
            BitBltSysBmp(a2, 1);
            v61.right -= 2;
            NtGdiPatBlt(a2, v61.right, v61.top, 2, v61.bottom - v61.top, 15728673);
          }
          if ( (v12 & 0x1C) != 0 && (v12 & 0x20) == 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
          {
            v61.right -= 2;
            NtGdiPatBlt(a2, v61.right, v61.top, 2, v61.bottom - v61.top, 15728673);
            v61.right -= *(__int16 *)(GetOemBitmapInfoForDpi(11LL, v52) + 4);
            BitBltSysBmp(a2, 1);
          }
          v61.top -= 2;
          v61.bottom += 2;
          GrePolyPatBlt(a2, v51);
          if ( v60 )
            GreSelectBrush(a2, v60);
          goto LABEL_94;
        }
        v44 = DpiDependentMetric + 2;
      }
      else
      {
        v44 = 3 * DpiDependentMetric;
      }
      v53 = v44;
      v45 = PrepareHDCBITSBitmap(0LL, v40);
      if ( v45 )
      {
        OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((v57 ^ 1u) + 39, v52);
        v61.right -= v53;
        NtGdiBitBltInternal(
          a2,
          (unsigned int)v61.right,
          (unsigned int)v61.top,
          v53,
          OemBitmapInfoForDpi[3],
          v45,
          OemBitmapInfoForDpi[2] + *OemBitmapInfoForDpi - v53 - DpiDependentMetric,
          OemBitmapInfoForDpi[1],
          13369376,
          0,
          0);
        if ( v12 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
          {
            v61.right += 2 - DpiDependentMetric;
            NtGdiBitBltInternal(
              a2,
              (unsigned int)v61.right,
              (unsigned int)v61.top,
              DpiDependentMetric,
              OemBitmapInfoForDpi[3],
              v45,
              OemBitmapInfoForDpi[2] + *OemBitmapInfoForDpi - DpiDependentMetric,
              OemBitmapInfoForDpi[1],
              13369376,
              0,
              0);
            if ( ((unsigned int)IS_UI_LANGID() || *(_WORD *)(gpsi + 7012LL) == 1037)
              && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
            {
              NtGdiBitBltInternal(
                a2,
                (unsigned int)(v61.right - 2),
                (unsigned int)(v61.top + 2),
                DpiDependentMetric - 4,
                OemBitmapInfoForDpi[3] - 4,
                v45,
                *OemBitmapInfoForDpi - DpiDependentMetric + 2 + OemBitmapInfoForDpi[2],
                OemBitmapInfoForDpi[1] + 2,
                -2134114272,
                0,
                0);
            }
          }
        }
      }
      goto LABEL_94;
    }
    if ( !v12 || (v12 & 0xC) != 12 && (v12 & 0x20) == 0 )
    {
      right = v61.right;
      v33 = 3;
    }
    else
    {
      right = v61.right - 2;
      v61.right -= 2;
      if ( v12 == 12 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
          v33 = 2;
        goto LABEL_67;
      }
    }
    if ( (v12 & 0x20) != 0 )
    {
LABEL_68:
      v61.right = right - v33 * v39;
      goto LABEL_94;
    }
LABEL_67:
    v39 = DpiDependentMetric;
    goto LABEL_68;
  }
  if ( (v15 & 0x20) != 0 )
  {
    v12 |= 1u;
    goto LABEL_37;
  }
LABEL_19:
  if ( (a3 & 0x8000) != 0 )
  {
    v21 = GetDpiForSystem(v14, v11);
    LODWORD(ThreadWin32Thread) = GetWindowFrameMetricForDpi(v22, v21);
    v16 = *((_QWORD *)a1 + 5);
    v23 = ThreadWin32Thread;
    v56 = ThreadWin32Thread;
    if ( (*(_BYTE *)(v16 + 25) & 1) != 0 || (*(_BYTE *)(v16 + 26) & 2) != 0 )
    {
      LOBYTE(ThreadWin32Thread) = DrawEdge(a2);
      v23 = v56;
    }
    v24 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v24 + 30) & 4) != 0
      || v23 > 0
      && (v16 = *(unsigned int *)(v24 + 28),
          LOBYTE(ThreadWin32Thread) = (v16 & 0x40000) == 0,
          (((v16 & 0xC00000) != 12582912) & (unsigned __int8)ThreadWin32Thread) == 0)
      && ((ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread()),
           *(_DWORD *)(ThreadWin32Thread + 632) > 0x9900u)
       || (*(_DWORD *)(ThreadWin32Thread + 648) & 0x30000000) == 0) )
    {
      v25 = GetDpiForSystem(v24, v16);
      v26 = v56 + GetResizeBorderWidthForDpi(v25);
      LOBYTE(ThreadWin32Thread) = DrawFrame(a2);
      v27 = -v26;
      v61.left -= v27;
      v61.right += v27;
      v61.top -= v27;
      v61.bottom += v27;
    }
    v28 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v28 + 30) & 0xC0) != 0 || (*(_BYTE *)(v28 + 24) & 1) != 0 )
    {
      LOBYTE(ThreadWin32Thread) = DrawFrame(a2);
      ++v61.left;
      --v61.right;
      ++v61.top;
      --v61.bottom;
    }
  }
  else
  {
    LODWORD(ThreadWin32Thread) = -(int)GetWindowBorders(*(unsigned int *)(v14 + 28), *(unsigned int *)(v14 + 24));
    v61.left -= ThreadWin32Thread;
    v61.right += ThreadWin32Thread;
    v61.top -= ThreadWin32Thread;
    v61.bottom += ThreadWin32Thread;
  }
  v17 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v17 + 16) & 8) != 0 )
  {
    if ( *(char *)(v17 + 24) >= 0 )
    {
      v31 = GetDpiForSystem(v17, v16);
      v30 = GetDpiDependentMetric(13LL, v31);
    }
    else
    {
      v12 |= 0x20u;
      v29 = GetDpiForSystem(v17, v16);
      v30 = GetDpiDependentMetric(24LL, v29);
      v54 = 41;
    }
    v61.bottom = v61.top + v30;
    GrePolyPatBlt(a2, v49);
    GreSelectBrush(a2, v59);
    goto LABEL_57;
  }
  return ThreadWin32Thread;
}
