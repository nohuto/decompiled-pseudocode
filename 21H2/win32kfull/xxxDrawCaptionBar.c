/*
 * XREFs of xxxDrawCaptionBar @ 0x1C00DCE08
 * Callers:
 *     xxxRedrawTitle @ 0x1C00469E0 (xxxRedrawTitle.c)
 *     xxxRealDefWindowProc @ 0x1C0049EC8 (xxxRealDefWindowProc.c)
 *     xxxDrawWindowFrame @ 0x1C004BB1C (xxxDrawWindowFrame.c)
 *     xxxDWP_DoNCActivate @ 0x1C00DCB94 (xxxDWP_DoNCActivate.c)
 * Callees:
 *     DrawEdge @ 0x1C00451E8 (DrawEdge.c)
 *     GrePolyPatBlt @ 0x1C0045794 (GrePolyPatBlt.c)
 *     GetWindowDpiLastNotify @ 0x1C004C6B8 (GetWindowDpiLastNotify.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     GetDpiDependentMetric @ 0x1C00614D0 (GetDpiDependentMetric.c)
 *     xxxMNCanClose @ 0x1C0061560 (xxxMNCanClose.c)
 *     GetDpiForSystem @ 0x1C0063CBC (GetDpiForSystem.c)
 *     GetRect @ 0x1C0063F28 (GetRect.c)
 *     IsVisible @ 0x1C0068164 (IsVisible.c)
 *     ClearHungFlag @ 0x1C007BEC8 (ClearHungFlag.c)
 *     NtGdiBitBltInternal @ 0x1C0088690 (NtGdiBitBltInternal.c)
 *     NtGdiPatBlt @ 0x1C00B42B0 (NtGdiPatBlt.c)
 *     GetWindowBorders @ 0x1C00DD2EC (GetWindowBorders.c)
 *     GetResizeBorderWidthForDpi @ 0x1C00E0E90 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C00E0EB8 (GetWindowFrameMetricForDpi.c)
 *     GetAppCompatFlags2 @ 0x1C00E1310 (GetAppCompatFlags2.c)
 *     BitBltSysBmp @ 0x1C010723C (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C010748C (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C010759C (PrepareHDCBITSBitmap.c)
 *     IS_UI_LANGID @ 0x1C0107630 (IS_UI_LANGID.c)
 *     xxxDrawCaptionTemp @ 0x1C01590D4 (xxxDrawCaptionTemp.c)
 *     DrawFrame @ 0x1C015A968 (DrawFrame.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

char __fastcall xxxDrawCaptionBar(__int64 a1, HDC a2, int a3)
{
  char v3; // bl
  int WindowFrameMetricForDpi; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ecx
  unsigned int WindowDpiLastNotify; // eax
  unsigned int v11; // edi
  unsigned int v12; // r13d
  __int64 v13; // rcx
  char v14; // dl
  char v15; // al
  char v16; // al
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // r8d
  __int64 v22; // rcx
  int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // eax
  int DpiDependentMetric; // eax
  __int64 v28; // rcx
  int v29; // ebx
  unsigned int v30; // eax
  int v31; // r15d
  __int64 v32; // rcx
  unsigned int v33; // eax
  int v34; // r8d
  int v35; // edx
  BOOL v36; // ecx
  int v37; // ecx
  HDC v38; // r13
  __int16 *OemBitmapInfoForDpi; // rbx
  char v40; // r8
  unsigned int DpiForSystem; // eax
  unsigned int v42; // eax
  int v43; // ebx
  int v44; // ebx
  unsigned int v45; // eax
  unsigned int v46; // ebx
  bool v47; // cl
  unsigned int v48; // eax
  int v49; // ebx
  int v50; // ecx
  int v51; // edx
  int v53; // [rsp+20h] [rbp-99h]
  int v54; // [rsp+60h] [rbp-59h]
  int v55; // [rsp+60h] [rbp-59h]
  bool v56; // [rsp+64h] [rbp-55h]
  unsigned int v57; // [rsp+68h] [rbp-51h]
  int v58; // [rsp+6Ch] [rbp-4Dh]
  int v60; // [rsp+74h] [rbp-45h]
  int v61; // [rsp+78h] [rbp-41h]
  __int64 v62; // [rsp+80h] [rbp-39h]
  __int64 v63; // [rsp+88h] [rbp-31h]
  __int64 v64; // [rsp+90h] [rbp-29h]
  int v65; // [rsp+98h] [rbp-21h] BYREF
  int v66; // [rsp+9Ch] [rbp-1Dh]
  int v67; // [rsp+A0h] [rbp-19h]
  int v68; // [rsp+A4h] [rbp-15h]
  __int64 v69; // [rsp+A8h] [rbp-11h]
  int v70; // [rsp+B0h] [rbp-9h]
  int v71; // [rsp+B4h] [rbp-5h]
  int v72; // [rsp+B8h] [rbp-1h]
  int v73; // [rsp+BCh] [rbp+3h]
  __int64 v74; // [rsp+C0h] [rbp+7h]
  int v75[4]; // [rsp+C8h] [rbp+Fh] BYREF

  v3 = a3;
  v54 = 0;
  v64 = 0LL;
  *(_OWORD *)v75 = 0LL;
  if ( (a3 & 0x800) == 0 )
  {
    WindowFrameMetricForDpi = IsVisible(a1);
    if ( !WindowFrameMetricForDpi )
      return WindowFrameMetricForDpi;
  }
  ClearHungFlag((struct tagWND *)a1, 0x310u);
  GetRect(a1, (__int64)v75, 34);
  if ( !gbDisableAlpha && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) == 0x80000010 )
  {
    if ( (v3 & 1) != 0 )
      v7 = *(_QWORD *)(gpsi + 4912LL);
    else
      v7 = *(_QWORD *)(gpsi + 4920LL);
    v61 = 32;
    goto LABEL_8;
  }
  v61 = 0;
  if ( (v3 & 1) == 0 )
  {
    v7 = *(_QWORD *)(gpsi + 4720LL);
LABEL_8:
    v62 = v7;
    goto LABEL_9;
  }
  v62 = *(_QWORD *)(gpsi + 4712LL);
LABEL_9:
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_DWORD *)(v8 + 288) & 0xF;
  if ( v9 == 3 )
  {
    v57 = (*(_DWORD *)(v8 + 288) >> 8) & 0x1FF;
  }
  else
  {
    if ( (*(_DWORD *)(v8 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
LABEL_12:
      v57 = WindowDpiLastNotify;
      goto LABEL_13;
    }
    if ( v9
      || (v25 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) == 0
      || (*(_DWORD *)(**(_QWORD **)(v25 + 8) + 64LL) & 1) == 0 )
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
      goto LABEL_12;
    }
    v57 = 96;
  }
LABEL_13:
  v11 = 0;
  v12 = 8;
  if ( !(unsigned int)xxxMNCanClose(a1) )
    v11 = 16;
  v13 = *(_QWORD *)(a1 + 40);
  v14 = *(_BYTE *)(v13 + 30);
  v15 = *(_BYTE *)(v13 + 31);
  if ( (v14 & 1) != 0 )
  {
    if ( (v15 & 1) != 0 )
      v11 |= 2u;
  }
  else
  {
    v11 |= 8u;
  }
  v16 = v15 & 0x20;
  if ( (v14 & 2) != 0 )
  {
    if ( !v16 )
      goto LABEL_20;
    v11 |= 1u;
  }
  else
  {
    v11 |= 4u;
  }
  if ( v16 )
  {
    if ( (a3 & 0x8000) != 0 )
    {
      DrawEdge(a2, (RECT *)v75, 5, 8207);
      DrawFrame(a2);
      ++v75[0];
      --v75[2];
      ++v75[1];
      --v75[3];
    }
    else
    {
      v75[0] += 3;
      v75[2] -= 3;
      v75[1] += 3;
      v75[3] -= 3;
    }
    DpiForSystem = GetDpiForSystem(v13);
    v75[3] = v75[1] + GetDpiDependentMetric(13LL, DpiForSystem);
    v64 = GreSelectBrush(a2, v62);
    goto LABEL_48;
  }
LABEL_20:
  if ( (*(_BYTE *)(v13 + 25) & 3) == 0 || (*(_BYTE *)(v13 + 20) & 8) != 0 )
    v63 = 4744LL;
  else
    v63 = 4816LL;
  if ( (a3 & 0x8000) != 0 )
  {
    v18 = GetDpiForSystem(v13);
    WindowFrameMetricForDpi = GetWindowFrameMetricForDpi(v19, v18);
    v20 = *(_QWORD *)(a1 + 40);
    v21 = WindowFrameMetricForDpi;
    v60 = WindowFrameMetricForDpi;
    if ( (*(_BYTE *)(v20 + 25) & 1) != 0 )
    {
      v40 = 5;
    }
    else
    {
      if ( (*(_BYTE *)(v20 + 26) & 2) == 0 )
        goto LABEL_31;
      v40 = 2;
    }
    LOBYTE(WindowFrameMetricForDpi) = DrawEdge(a2, (RECT *)v75, v40, 8207);
    v21 = v60;
LABEL_31:
    v22 = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(v22 + 30) & 4) != 0
      || v21 > 0
      && (v23 = *(_DWORD *)(v22 + 28),
          LOBYTE(WindowFrameMetricForDpi) = (v23 & 0x40000) == 0,
          (((v23 & 0xC00000) != 12582912) & (unsigned __int8)WindowFrameMetricForDpi) == 0)
      && (WindowFrameMetricForDpi = GetAppCompatFlags2(39168LL), (WindowFrameMetricForDpi & 0x30000000) == 0) )
    {
      v42 = GetDpiForSystem(v22);
      v43 = v60 + GetResizeBorderWidthForDpi(v42);
      LOBYTE(WindowFrameMetricForDpi) = DrawFrame(a2);
      v44 = -v43;
      v75[0] -= v44;
      v75[2] += v44;
      v75[1] -= v44;
      v75[3] += v44;
    }
    v24 = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(v24 + 30) & 0xC0) != 0 || (*(_BYTE *)(v24 + 24) & 1) != 0 )
    {
      LOBYTE(WindowFrameMetricForDpi) = DrawFrame(a2);
      ++v75[0];
      --v75[2];
      ++v75[1];
      --v75[3];
    }
    goto LABEL_24;
  }
  WindowFrameMetricForDpi = -(int)GetWindowBorders(*(unsigned int *)(v13 + 28), *(unsigned int *)(v13 + 24));
  v75[0] -= WindowFrameMetricForDpi;
  v75[2] += WindowFrameMetricForDpi;
  v75[1] -= WindowFrameMetricForDpi;
  v75[3] += WindowFrameMetricForDpi;
LABEL_24:
  v17 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v17 + 16) & 8) == 0 )
    return WindowFrameMetricForDpi;
  if ( *(char *)(v17 + 24) < 0 )
  {
    v11 |= 0x20u;
    v45 = GetDpiForSystem(v17);
    DpiDependentMetric = GetDpiDependentMetric(24LL, v45);
    v54 = 41;
  }
  else
  {
    v26 = GetDpiForSystem(v17);
    DpiDependentMetric = GetDpiDependentMetric(13LL, v26);
  }
  v75[3] = v75[1] + DpiDependentMetric;
  v66 = v75[1] + DpiDependentMetric;
  v65 = v75[0];
  v67 = v75[2] - v75[0];
  v68 = 1;
  v69 = *(_QWORD *)(v63 + gpsi);
  GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)&v65, 1u);
  GreSelectBrush(a2, v62);
LABEL_48:
  v28 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v28 + 30) & 8) != 0 || (*(_BYTE *)(v28 + 21) & 2) == 0 )
  {
    v29 = 1;
    v30 = GetDpiForSystem(v28);
    v31 = GetDpiDependentMetric(12LL, v30);
    v33 = GetDpiForSystem(v32);
    v34 = GetDpiDependentMetric(23LL, v33);
    v58 = v34;
    if ( (a3 & 0x1000) != 0 )
    {
      if ( v11 )
      {
        if ( v11 != 12 )
        {
          v75[3] -= 2;
          v53 = v75[3] - (v75[1] + 2);
          v75[1] += 2;
          v75[2] -= 2;
          NtGdiPatBlt(a2, v75[2], v75[1], 2, v53, 15728673);
          v46 = v54 + 3;
          if ( (v11 & 0x10) == 0 )
            v46 = v54;
          v75[2] -= *(__int16 *)(GetOemBitmapInfoForDpi(v46, v57) + 4);
          BitBltSysBmp(a2, v75[2], v75[1], 1);
          v47 = (v11 & 0x20) == 0;
          v56 = v47;
          if ( (v11 & 0xC) != 12 && v47 )
          {
            v75[2] -= 2;
            NtGdiPatBlt(a2, v75[2], v75[1], 2, v75[3] - v75[1], 15728673);
            if ( (v11 & 2) != 0 )
              v48 = 8;
            else
              v48 = (v11 & 8) != 0 ? 17 : 14;
            v75[2] -= *(__int16 *)(GetOemBitmapInfoForDpi(v48, v57) + 4);
            BitBltSysBmp(a2, v75[2], v75[1], 1);
            if ( (v11 & 1) == 0 )
              v12 = (v11 & 4) != 0 ? 7 : 4;
            v75[2] -= *(__int16 *)(GetOemBitmapInfoForDpi(v12, v57) + 4);
            BitBltSysBmp(a2, v75[2], v75[1], 1);
            v75[2] -= 2;
            NtGdiPatBlt(a2, v75[2], v75[1], 2, v75[3] - v75[1], 15728673);
            v47 = v56;
            v49 = 3;
          }
          else
          {
            v49 = 1;
          }
          if ( (v11 & 0x1C) != 0 && v47 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 4) != 0 )
          {
            v75[2] -= 2;
            NtGdiPatBlt(a2, v75[2], v75[1], 2, v75[3] - v75[1], 15728673);
            v75[2] -= *(__int16 *)(GetOemBitmapInfoForDpi(11LL, v57) + 4);
            BitBltSysBmp(a2, v75[2], v75[1], 1);
            ++v49;
          }
          v50 = v75[1] - 2;
          v51 = v75[3] + 2;
          v65 = v75[2];
          v70 = v75[2];
          v75[1] -= 2;
          if ( (v11 & 0x20) != 0 )
            v31 = v58;
          v69 = 0LL;
          v74 = 0LL;
          v75[3] += 2;
          v66 = v50;
          v68 = 2;
          v71 = v51 - 2;
          v67 = v31 * v49;
          v72 = v31 * v49;
          v73 = 2;
          GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)&v65, 2u);
          if ( v64 )
            GreSelectBrush(a2, v64);
          goto LABEL_55;
        }
        v37 = v31 + 2;
      }
      else
      {
        v37 = 3 * v31;
      }
      v55 = v37;
      v38 = (HDC)PrepareHDCBITSBitmap(0LL);
      if ( v38 )
      {
        OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)!(a3 & 1) + 39, v57);
        v75[2] -= v55;
        NtGdiBitBltInternal(
          a2,
          v75[2],
          v75[1],
          v55,
          OemBitmapInfoForDpi[3],
          v38,
          OemBitmapInfoForDpi[2] + *OemBitmapInfoForDpi - v55 - v31,
          OemBitmapInfoForDpi[1],
          13369376,
          0,
          0);
        if ( v11 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 4) != 0 )
          {
            v75[2] += 2 - v31;
            NtGdiBitBltInternal(
              a2,
              v75[2],
              v75[1],
              v31,
              OemBitmapInfoForDpi[3],
              v38,
              OemBitmapInfoForDpi[2] + *OemBitmapInfoForDpi - v31,
              OemBitmapInfoForDpi[1],
              13369376,
              0,
              0);
            if ( ((unsigned int)IS_UI_LANGID() || *(_WORD *)(gpsi + 7012LL) == 1037)
              && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 26LL) & 0x40) != 0 )
            {
              NtGdiBitBltInternal(
                a2,
                v75[2] - 2,
                v75[1] + 2,
                v31 - 4,
                OemBitmapInfoForDpi[3] - 4,
                v38,
                OemBitmapInfoForDpi[2] + *OemBitmapInfoForDpi - v31 + 2,
                OemBitmapInfoForDpi[1] + 2,
                -2134114272,
                0,
                0);
            }
          }
        }
      }
    }
    else
    {
      if ( !v11 || (v11 & 0xC) != 12 && (v11 & 0x20) == 0 )
      {
        v35 = v75[2];
        v29 = 3;
      }
      else
      {
        v35 = v75[2] - 2;
        v75[2] -= 2;
        if ( v11 == 12 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 4) != 0 )
          v29 = 2;
      }
      if ( (v11 & 0x20) != 0 )
        v31 = v34;
      v75[2] = v35 - v29 * v31;
    }
  }
LABEL_55:
  LOBYTE(WindowFrameMetricForDpi) = a3;
  if ( (a3 & 0xC) != 0 )
  {
    v36 = xxxDrawCaptionTemp(a1, a2, v75, 0LL, 0LL, 0LL, a3 | v61 | (v11 >> 4) & 2) == 0;
    LOBYTE(WindowFrameMetricForDpi) = SetOrClrWF(v36, a1, 0x708u, 1);
  }
  return WindowFrameMetricForDpi;
}
