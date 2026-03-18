/*
 * XREFs of xxxDrawCaptionBar @ 0x1C00BAE5C
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C00638D4 (xxxDrawWindowFrame.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     xxxRedrawTitle @ 0x1C00A6034 (xxxRedrawTitle.c)
 *     xxxDWP_DoNCActivate @ 0x1C00BABE4 (xxxDWP_DoNCActivate.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     NtGdiPatBlt @ 0x1C0042E10 (NtGdiPatBlt.c)
 *     ClearHungFlag @ 0x1C005F8F0 (ClearHungFlag.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     xxxMNCanClose @ 0x1C0068094 (xxxMNCanClose.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     GetRect @ 0x1C00688B4 (GetRect.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     IsVisible @ 0x1C006C350 (IsVisible.c)
 *     xxxDrawCaptionTemp @ 0x1C00B97AC (xxxDrawCaptionTemp.c)
 *     GetWindowBorders @ 0x1C00BB5A4 (GetWindowBorders.c)
 *     GetResizeBorderWidthForDpi @ 0x1C00BB5D8 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C00BB618 (GetWindowFrameMetricForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C00BBEF0 (GetWindowDpiLastNotify.c)
 *     DrawEdge @ 0x1C00C17C0 (DrawEdge.c)
 *     GrePolyPatBlt @ 0x1C00C1D4C (GrePolyPatBlt.c)
 *     BitBltSysBmp @ 0x1C00C2FD4 (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00C3124 (GetOemBitmapInfoForDpi.c)
 *     IS_UI_LANGID @ 0x1C00C3230 (IS_UI_LANGID.c)
 *     DrawFrame @ 0x1C00C35F4 (DrawFrame.c)
 *     PrepareHDCBITSBitmap @ 0x1C00C37D8 (PrepareHDCBITSBitmap.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

char __fastcall xxxDrawCaptionBar(struct tagWND *BugCheckParameter2, HDC a2, int a3)
{
  __int16 v3; // r15
  int WindowFrameMetricForDpi; // eax
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
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // eax
  int v24; // ebx
  int v25; // ebx
  __int64 v26; // rcx
  unsigned int v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // r15d
  unsigned int v32; // eax
  int DpiDependentMetric; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // eax
  int v37; // eax
  int v38; // eax
  HDC v39; // r13
  __int16 *OemBitmapInfoForDpi; // r15
  LONG v41; // edx
  BOOL v42; // ecx
  unsigned int v43; // eax
  bool v44; // cl
  unsigned int v45; // r15d
  int v46; // ecx
  int v47; // edx
  unsigned int DpiForSystem; // eax
  __int64 ThreadWin32Thread; // rax
  unsigned int v50; // eax
  int v52; // [rsp+20h] [rbp-A9h]
  unsigned int v53; // [rsp+60h] [rbp-69h]
  int v54; // [rsp+64h] [rbp-65h]
  int v55; // [rsp+64h] [rbp-65h]
  int v56; // [rsp+64h] [rbp-65h]
  bool v57; // [rsp+68h] [rbp-61h]
  int v58; // [rsp+6Ch] [rbp-5Dh]
  int v59; // [rsp+70h] [rbp-59h]
  __int64 v61; // [rsp+78h] [rbp-51h]
  __int64 v62; // [rsp+80h] [rbp-49h]
  __int64 v63; // [rsp+88h] [rbp-41h]
  _DWORD v64[4]; // [rsp+90h] [rbp-39h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-29h]
  _DWORD v66[4]; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-11h]
  LONG right; // [rsp+C0h] [rbp-9h]
  int v69; // [rsp+C4h] [rbp-5h]
  int v70; // [rsp+C8h] [rbp-1h]
  int v71; // [rsp+CCh] [rbp+3h]
  __int64 v72; // [rsp+D0h] [rbp+7h]
  struct tagRECT v73; // [rsp+D8h] [rbp+Fh] BYREF

  v58 = 0;
  v63 = 0LL;
  v3 = a3;
  v73 = 0LL;
  if ( (a3 & 0x800) == 0 )
  {
    WindowFrameMetricForDpi = IsVisible((__int64)BugCheckParameter2);
    if ( !WindowFrameMetricForDpi )
      return WindowFrameMetricForDpi;
  }
  ClearHungFlag(BugCheckParameter2, 0x310u);
  GetRect((__int64)BugCheckParameter2, (__int64)&v73, 34);
  if ( !gbDisableAlpha && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) == 0x80000010 )
  {
    if ( (v3 & 1) != 0 )
      v7 = *(_QWORD *)(gpsi + 4912LL);
    else
      v7 = *(_QWORD *)(gpsi + 4920LL);
    v59 = 32;
    goto LABEL_8;
  }
  v59 = 0;
  if ( (v3 & 1) == 0 )
  {
    v7 = *(_QWORD *)(gpsi + 4720LL);
LABEL_8:
    v61 = v7;
    goto LABEL_9;
  }
  v61 = *(_QWORD *)(gpsi + 4712LL);
LABEL_9:
  v8 = *((_QWORD *)BugCheckParameter2 + 5);
  v9 = *(_DWORD *)(v8 + 288) & 0xF;
  if ( v9 == 3 )
  {
    v53 = (*(_DWORD *)(v8 + 288) >> 8) & 0x1FF;
  }
  else
  {
    if ( (*(_DWORD *)(v8 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(BugCheckParameter2);
LABEL_12:
      v53 = WindowDpiLastNotify;
      goto LABEL_13;
    }
    if ( v9
      || (v22 = *(_QWORD *)(*((_QWORD *)BugCheckParameter2 + 2) + 456LL)) == 0
      || (*(_DWORD *)(**(_QWORD **)(v22 + 8) + 64LL) & 1) == 0 )
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)BugCheckParameter2 + 2) + 424LL) + 284LL);
      goto LABEL_12;
    }
    v53 = 96;
  }
LABEL_13:
  v12 = 0;
  v13 = 8;
  if ( !(unsigned int)xxxMNCanClose(BugCheckParameter2) )
    v12 = 16;
  v14 = *((_QWORD *)BugCheckParameter2 + 5);
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
  if ( (v11 & 2) != 0 )
  {
    if ( (v15 & 0x20) == 0 )
      goto LABEL_19;
    v12 |= 1u;
LABEL_87:
    if ( v3 < 0 )
    {
      DrawEdge(a2);
      DrawFrame(a2);
      ++v73.left;
      --v73.right;
      ++v73.top;
    }
    else
    {
      v73.left += 3;
      v73.right -= 3;
      v73.top += 3;
    }
    DpiForSystem = GetDpiForSystem(v14, v11);
    v73.bottom = v73.top + GetDpiDependentMetric(13LL, DpiForSystem);
    v63 = GreSelectBrush(a2, v61);
LABEL_49:
    v30 = *((_QWORD *)BugCheckParameter2 + 5);
    if ( (*(_BYTE *)(v30 + 30) & 8) == 0 && (*(_BYTE *)(v30 + 21) & 2) != 0 )
      goto LABEL_61;
    v31 = 1;
    v32 = GetDpiForSystem(v30, v29);
    DpiDependentMetric = GetDpiDependentMetric(12LL, v32);
    v36 = GetDpiForSystem(v35, v34);
    v37 = GetDpiDependentMetric(23LL, v36);
    v55 = v37;
    if ( (a3 & 0x1000) != 0 )
    {
      if ( v12 )
      {
        if ( v12 != 12 )
        {
          v73.bottom -= 2;
          v52 = v73.bottom - (v73.top + 2);
          v73.top += 2;
          v73.right -= 2;
          NtGdiPatBlt(a2, v73.right, v73.top, 2, v52, 15728673);
          v43 = v58;
          if ( (v12 & 0x10) != 0 )
            v43 = v58 + 3;
          v73.right -= *(__int16 *)(GetOemBitmapInfoForDpi(v43, v53) + 4);
          BitBltSysBmp(a2, 1);
          v44 = (v12 & 0x20) == 0;
          v57 = v44;
          if ( (v12 & 0xC) != 12 && v44 )
          {
            v73.right -= 2;
            NtGdiPatBlt(a2, v73.right, v73.top, 2, v73.bottom - v73.top, 15728673);
            if ( (v12 & 2) != 0 )
              v45 = 8;
            else
              v45 = (v12 & 8) != 0 ? 17 : 14;
            v73.right -= *(__int16 *)(GetOemBitmapInfoForDpi(v45, v53) + 4);
            BitBltSysBmp(a2, 1);
            if ( (v12 & 1) == 0 )
              v13 = (v12 & 4) != 0 ? 7 : 4;
            v73.right -= *(__int16 *)(GetOemBitmapInfoForDpi(v13, v53) + 4);
            BitBltSysBmp(a2, 1);
            v73.right -= 2;
            NtGdiPatBlt(a2, v73.right, v73.top, 2, v73.bottom - v73.top, 15728673);
            v44 = v57;
            v31 = 3;
          }
          if ( (v12 & 0x1C) != 0 && v44 && (*(_BYTE *)(*((_QWORD *)BugCheckParameter2 + 5) + 25LL) & 4) != 0 )
          {
            v73.right -= 2;
            NtGdiPatBlt(a2, v73.right, v73.top, 2, v73.bottom - v73.top, 15728673);
            v73.right -= *(__int16 *)(GetOemBitmapInfoForDpi(11LL, v53) + 4);
            BitBltSysBmp(a2, 1);
            ++v31;
          }
          v46 = v73.top - 2;
          v47 = v73.bottom + 2;
          v66[0] = v73.right;
          right = v73.right;
          v73.top -= 2;
          if ( (v12 & 0x20) != 0 )
            DpiDependentMetric = v55;
          v67 = 0LL;
          v72 = 0LL;
          v73.bottom += 2;
          v66[1] = v46;
          v66[3] = 2;
          v69 = v47 - 2;
          v66[2] = DpiDependentMetric * v31;
          v70 = DpiDependentMetric * v31;
          v71 = 2;
          GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)v66, 2u);
          if ( v63 )
            GreSelectBrush(a2, v63);
          goto LABEL_61;
        }
        v38 = DpiDependentMetric + 2;
      }
      else
      {
        v38 = 3 * DpiDependentMetric;
      }
      v56 = v38;
      v39 = (HDC)PrepareHDCBITSBitmap(0LL);
      if ( v39 )
      {
        OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)!(a3 & 1) + 39, v53);
        v73.right -= v56;
        NtGdiBitBltInternal(
          a2,
          v73.right,
          v73.top,
          v56,
          OemBitmapInfoForDpi[3],
          v39,
          OemBitmapInfoForDpi[2] + *OemBitmapInfoForDpi - v56 - DpiDependentMetric,
          OemBitmapInfoForDpi[1],
          13369376,
          0,
          0);
        if ( v12 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)BugCheckParameter2 + 5) + 25LL) & 4) != 0 )
          {
            v73.right += 2 - DpiDependentMetric;
            NtGdiBitBltInternal(
              a2,
              v73.right,
              v73.top,
              DpiDependentMetric,
              OemBitmapInfoForDpi[3],
              v39,
              OemBitmapInfoForDpi[2] + *OemBitmapInfoForDpi - DpiDependentMetric,
              OemBitmapInfoForDpi[1],
              13369376,
              0,
              0);
            if ( ((unsigned int)IS_UI_LANGID() || *(_WORD *)(gpsi + 7012LL) == 1037)
              && (*(_BYTE *)(*((_QWORD *)BugCheckParameter2 + 5) + 26LL) & 0x40) != 0 )
            {
              NtGdiBitBltInternal(
                a2,
                v73.right - 2,
                v73.top + 2,
                DpiDependentMetric - 4,
                OemBitmapInfoForDpi[3] - 4,
                v39,
                *OemBitmapInfoForDpi - DpiDependentMetric + 2 + OemBitmapInfoForDpi[2],
                OemBitmapInfoForDpi[1] + 2,
                -2134114272,
                0,
                0);
            }
          }
        }
      }
LABEL_61:
      LOBYTE(WindowFrameMetricForDpi) = a3;
      if ( (a3 & 0xC) != 0 )
      {
        v42 = xxxDrawCaptionTemp(
                (unsigned __int64 *)BugCheckParameter2,
                a2,
                &v73,
                0LL,
                0LL,
                0LL,
                a3 | v59 | (v12 >> 4) & 2) == 0;
        LOBYTE(WindowFrameMetricForDpi) = SetOrClrWF(v42, BugCheckParameter2, 0x708u, 1);
      }
      return WindowFrameMetricForDpi;
    }
    if ( !v12 || (v12 & 0xC) != 12 && (v12 & 0x20) == 0 )
    {
      v41 = v73.right;
      v31 = 3;
    }
    else
    {
      v41 = v73.right - 2;
      v73.right -= 2;
      if ( v12 == 12 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)BugCheckParameter2 + 5) + 25LL) & 4) != 0 )
          v31 = 2;
        goto LABEL_59;
      }
    }
    if ( (v12 & 0x20) != 0 )
    {
LABEL_60:
      v73.right = v41 - v31 * v37;
      goto LABEL_61;
    }
LABEL_59:
    v37 = DpiDependentMetric;
    goto LABEL_60;
  }
  v12 |= 4u;
  if ( (v15 & 0x20) != 0 )
    goto LABEL_87;
LABEL_19:
  if ( (*(_BYTE *)(v14 + 25) & 3) == 0 || (*(_BYTE *)(v14 + 20) & 8) != 0 )
    v62 = 4744LL;
  else
    v62 = 4816LL;
  if ( (a3 & 0x8000) != 0 )
  {
    v18 = GetDpiForSystem(v14, v11);
    WindowFrameMetricForDpi = GetWindowFrameMetricForDpi(v19, v18);
    v16 = *((_QWORD *)BugCheckParameter2 + 5);
    v20 = WindowFrameMetricForDpi;
    v54 = WindowFrameMetricForDpi;
    if ( (*(_BYTE *)(v16 + 25) & 1) != 0 || (*(_BYTE *)(v16 + 26) & 2) != 0 )
    {
      LOBYTE(WindowFrameMetricForDpi) = DrawEdge(a2);
      v20 = v54;
    }
    v21 = *((_QWORD *)BugCheckParameter2 + 5);
    if ( (*(_BYTE *)(v21 + 30) & 4) != 0
      || v20 > 0
      && (v16 = *(unsigned int *)(v21 + 28),
          LOBYTE(WindowFrameMetricForDpi) = (v16 & 0x40000) == 0,
          (((v16 & 0xC00000) != 12582912) & (unsigned __int8)WindowFrameMetricForDpi) == 0)
      && (ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread()),
          *(_DWORD *)(ThreadWin32Thread + 632) > 0x9900u
       || (WindowFrameMetricForDpi = *(_DWORD *)(ThreadWin32Thread + 648), (WindowFrameMetricForDpi & 0x30000000) == 0)) )
    {
      v23 = GetDpiForSystem(v21, v16);
      v24 = v54 + GetResizeBorderWidthForDpi(v23);
      LOBYTE(WindowFrameMetricForDpi) = DrawFrame(a2);
      v25 = -v24;
      v73.left -= v25;
      v73.right += v25;
      v73.top -= v25;
      v73.bottom += v25;
    }
    v26 = *((_QWORD *)BugCheckParameter2 + 5);
    if ( (*(_BYTE *)(v26 + 30) & 0xC0) != 0 || (*(_BYTE *)(v26 + 24) & 1) != 0 )
    {
      LOBYTE(WindowFrameMetricForDpi) = DrawFrame(a2);
      ++v73.left;
      --v73.right;
      ++v73.top;
      --v73.bottom;
    }
  }
  else
  {
    WindowFrameMetricForDpi = -(int)GetWindowBorders(*(unsigned int *)(v14 + 28), *(unsigned int *)(v14 + 24));
    v73.left -= WindowFrameMetricForDpi;
    v73.right += WindowFrameMetricForDpi;
    v73.top -= WindowFrameMetricForDpi;
    v73.bottom += WindowFrameMetricForDpi;
  }
  v17 = *((_QWORD *)BugCheckParameter2 + 5);
  if ( (*(_BYTE *)(v17 + 16) & 8) != 0 )
  {
    if ( *(char *)(v17 + 24) < 0 )
    {
      v12 |= 0x20u;
      v50 = GetDpiForSystem(v17, v16);
      v28 = GetDpiDependentMetric(24LL, v50);
      v58 = 41;
    }
    else
    {
      v27 = GetDpiForSystem(v17, v16);
      v28 = GetDpiDependentMetric(13LL, v27);
    }
    v73.bottom = v73.top + v28;
    v64[1] = v73.top + v28;
    v64[0] = v73.left;
    v64[2] = v73.right - v73.left;
    v64[3] = 1;
    v65 = *(_QWORD *)(v62 + gpsi);
    GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)v64, 1u);
    GreSelectBrush(a2, v61);
    goto LABEL_49;
  }
  return WindowFrameMetricForDpi;
}
