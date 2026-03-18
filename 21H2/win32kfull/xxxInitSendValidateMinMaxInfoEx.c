/*
 * XREFs of xxxInitSendValidateMinMaxInfoEx @ 0x1C0063E00
 * Callers:
 *     xxxAdjustSize @ 0x1C00686A8 (xxxAdjustSize.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C00BA884 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C015B0AC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z @ 0x1C020D2C8 (-xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z.c)
 * Callees:
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1C004CE04 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C0062280 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     GetMonitorRectForWindow @ 0x1C0063604 (GetMonitorRectForWindow.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C00684C0 (_HasCaptionIcon.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C007B464 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetScreenRectForDpi @ 0x1C00B06C4 (GetScreenRectForDpi.c)
 *     GetDPIServerInfo @ 0x1C00BA3D4 (GetDPIServerInfo.c)
 *     GetWindowDpiLastNotify @ 0x1C00BBEF0 (GetWindowDpiLastNotify.c)
 *     _GetClientRect @ 0x1C00F2600 (_GetClientRect.c)
 *     ?ComputeMaxTrackSize@@YA?AUtagSIZE@@UtagRECT@@G@Z @ 0x1C00F9288 (-ComputeMaxTrackSize@@YA-AUtagSIZE@@UtagRECT@@G@Z.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C00F9318 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C010435C (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall xxxInitSendValidateMinMaxInfoEx(struct tagWND *a1, __int64 a2, struct tagMONITOR *a3)
{
  struct tagRECT v6; // xmm6
  __int64 DesktopWindow; // rax
  __int64 v8; // r8
  int v9; // r15d
  __int64 v10; // rdx
  struct tagMONITOR *v11; // r12
  int WindowBordersWithDpiAwareness; // esi
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  __int64 TargetInfoAsUlong_low; // rdx
  __int64 Prop; // rax
  __int64 v19; // rax
  int v20; // esi
  __int64 v21; // rcx
  int v22; // edx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v24; // rdx
  int v25; // ecx
  unsigned int v26; // eax
  int DpiDependentMetric; // eax
  unsigned __int16 WindowCompositedDpi; // r14
  const struct tagWND *v29; // rcx
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  int bottom; // r15d
  signed int top; // r13d
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // r14d
  int v39; // ecx
  unsigned int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  int v46; // r14d
  int v47; // eax
  __int64 result; // rax
  int v49; // ecx
  unsigned int v50; // eax
  int v51; // eax
  __int64 v52; // rdx
  char v53; // al
  int v54; // ecx
  unsigned int v55; // eax
  int v56; // eax
  __int64 v57; // rdx
  int v58; // ecx
  unsigned int v59; // eax
  int v60; // r8d
  int v61; // ecx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  int v68; // ecx
  unsigned int v69; // eax
  __int64 v70; // rax
  int v71; // ecx
  unsigned int v72; // eax
  __int64 v73; // rax
  __int64 v74; // [rsp+28h] [rbp-59h]
  struct tagRECT v75; // [rsp+38h] [rbp-49h] BYREF
  struct tagRECT v76; // [rsp+48h] [rbp-39h]
  struct tagRECT v77; // [rsp+58h] [rbp-29h] BYREF
  _QWORD v78[3]; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v79[5]; // [rsp+80h] [rbp-1h] BYREF
  int v80; // [rsp+E8h] [rbp+67h]
  int v81; // [rsp+100h] [rbp+7Fh]

  v78[2] = 0LL;
  v79[2] = 0LL;
  v75 = 0LL;
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2124LL);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(gpsi + 2128LL);
  v74 = *(_QWORD *)(GetDispInfo() + 96);
  v6 = *(struct tagRECT *)GetMonitorRectForWindow((__int64)&v77, v74, a1);
  v76 = v6;
  DesktopWindow = GetDesktopWindow(a1);
  if ( v8 == DesktopWindow )
  {
    v9 = 1;
    v75 = v6;
    v11 = _MonitorFromWindowInternal(a1, 1u, 1);
    if ( a3 )
      v11 = a3;
  }
  else
  {
    v9 = 0;
    v11 = 0LL;
    GetClientRect(v8, &v75);
  }
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, v10, 0, 0);
  v80 = v75.left - WindowBordersWithDpiAwareness;
  v13 = WindowBordersWithDpiAwareness - (v75.left - WindowBordersWithDpiAwareness);
  v75.left -= WindowBordersWithDpiAwareness;
  v14 = v13 + v75.right;
  v81 = v75.top - WindowBordersWithDpiAwareness;
  v15 = WindowBordersWithDpiAwareness - (v75.top - WindowBordersWithDpiAwareness);
  v75.top -= WindowBordersWithDpiAwareness;
  v16 = v15 + v75.bottom;
  *(_DWORD *)(a2 + 8) = v14;
  TargetInfoAsUlong_low = LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong);
  *(_DWORD *)(a2 + 12) = v16;
  Prop = GetProp(a1, TargetInfoAsUlong_low, 1LL);
  if ( Prop && (*(_DWORD *)(Prop + 48) & 0x40) != 0 )
    v19 = *(_QWORD *)(Prop + 40);
  else
    v19 = *(_QWORD *)&v75.left;
  *(_QWORD *)(a2 + 16) = v19;
  v20 = 2 * WindowBordersWithDpiAwareness;
  v21 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v21 + 30) & 0xC0) != 0 && *(char *)(v21 + 24) >= 0 )
  {
    v22 = *(_DWORD *)(v21 + 288) & 0xF;
    if ( v22 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v21 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v21 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( !v22
           && (v62 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v62 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    }
    *(_DWORD *)(a2 + 24) = GetDpiDependentMetric(16LL, WindowDpiLastNotify);
    v24 = *((_QWORD *)a1 + 5);
    v25 = *(_DWORD *)(v24 + 288) & 0xF;
    if ( v25 == 3 )
    {
      v26 = (*(_DWORD *)(v24 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v24 + 232) & 0x400) != 0 )
    {
      v26 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v25
           && (v63 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v63 + 8) + 64LL) & 1) != 0 )
    {
      v26 = 96;
    }
    else
    {
      v26 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(17LL, v26);
  }
  else
  {
    DpiDependentMetric = 2;
    if ( v20 >= 2 )
      DpiDependentMetric = v20;
    *(_DWORD *)(a2 + 24) = DpiDependentMetric;
  }
  *(_DWORD *)(a2 + 28) = DpiDependentMetric;
  WindowCompositedDpi = GetWindowCompositedDpi(a1);
  WindowCompositedDpiContext = GetWindowCompositedDpiContext(v29);
  GetScreenRectForDpi(&v75, (WindowCompositedDpiContext >> 8) & 0x1FF);
  if ( !WindowCompositedDpi )
    WindowCompositedDpi = *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
  v77 = v75;
  *(struct tagSIZE *)(a2 + 32) = ComputeMaxTrackSize(&v77, WindowCompositedDpi);
  v78[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v78;
  v78[1] = v11;
  if ( v11 )
    HMLockObject(v11);
  v79[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v79;
  v79[1] = v74;
  HMLockObject(v74);
  xxxSendMessage((ULONG_PTR)a1);
  v32 = gpsi;
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2124LL);
  v33 = *(unsigned int *)(gpsi + 2128LL);
  *(_DWORD *)(a2 + 4) = v33;
  if ( v9 )
  {
    v75 = *GetMonitorMaxArea(&v77, a1, v11);
    if ( *(_DWORD *)(a2 + 8) < v76.right - v76.left
      || (bottom = v76.bottom, top = v76.top, *(_DWORD *)(a2 + 12) < v76.bottom - v76.top) )
    {
      SetOrClrWF(0LL, a1, 832LL, 1LL);
      v32 = *(_QWORD *)&v75.left;
    }
    else
    {
      SetOrClrWF(1LL, a1, 832LL, 1LL);
      v36 = GetProp(a1, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1LL);
      if ( v36 )
      {
        v60 = *(_DWORD *)(v36 + 48);
        if ( (v60 & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) != 0 )
        {
          v61 = *(_DWORD *)(a2 + 16);
          if ( v61 != v80 && *(_DWORD *)(v36 + 40) == v61 )
          {
            *(_DWORD *)(v36 + 48) = v60 & 0xFFFFFFBF;
            *(_DWORD *)(a2 + 20) = v81;
            *(_DWORD *)(a2 + 16) = v80;
          }
        }
      }
      v37 = *((_QWORD *)a1 + 5);
      v38 = *(_DWORD *)(a2 + 20);
      v39 = *(_DWORD *)(v37 + 288) & 0xF;
      if ( v39 == 3 )
      {
        v40 = (*(_DWORD *)(v37 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v37 + 232) & 0x400) != 0 )
      {
        v40 = GetWindowDpiLastNotify(a1);
      }
      else if ( !v39
             && (v64 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v64 + 8) + 64LL) & 1) != 0 )
      {
        v40 = 96;
      }
      else
      {
        v40 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      }
      if ( (int)(v38 + GetDpiDependentMetric(2LL, v40)) <= top && *(_DWORD *)(a2 + 12) + *(_DWORD *)(a2 + 20) >= bottom )
        v75 = *(struct tagRECT *)GetMonitorRectForWindow((__int64)&v77, (__int64)v11, a1);
      v32 = *(_QWORD *)&v75.left;
      v41 = HIDWORD(*(_QWORD *)&v75.right);
      *(_DWORD *)(a2 + 8) += v76.left + v75.right - v75.left - v76.right;
      v33 = (unsigned int)(top + v41 - HIDWORD(v32) - bottom);
      *(_DWORD *)(a2 + 12) += v33;
    }
    *(_DWORD *)(a2 + 20) += v75.top;
    *(_DWORD *)(a2 + 16) += v32;
  }
  ThreadUnlock1(v33, v32, v31);
  ThreadUnlock1(v43, v42, v44);
  v45 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v45 + 16) & 8) != 0 )
  {
    v49 = *(_DWORD *)(v45 + 288) & 0xF;
    if ( v49 == 3 )
    {
      v50 = (*(_DWORD *)(v45 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v45 + 232) & 0x400) != 0 )
    {
      v50 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v49
           && (v65 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v65 + 8) + 64LL) & 1) != 0 )
    {
      v50 = 96;
    }
    else
    {
      v50 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    }
    v51 = GetDpiDependentMetric(17LL, v50);
    v52 = *((_QWORD *)a1 + 5);
    v46 = v51;
    if ( *(char *)(v52 + 24) < 0 )
    {
      if ( (*(_BYTE *)(v52 + 30) & 8) != 0 )
      {
        v68 = *(_DWORD *)(v52 + 288) & 0xF;
        if ( v68 == 3 )
        {
          v69 = (*(_DWORD *)(v52 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v52 + 232) & 0x400) != 0 )
        {
          v69 = GetWindowDpiLastNotify(a1);
        }
        else if ( !v68
               && (v70 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v70 + 8) + 64LL) & 1) != 0 )
        {
          v69 = 96;
        }
        else
        {
          v69 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
        }
        v20 += GetDpiDependentMetric(23LL, v69);
      }
    }
    else
    {
      v53 = *(_BYTE *)(v52 + 30);
      if ( (v53 & 8) != 0 )
      {
        if ( (v53 & 3) != 0 )
        {
          v54 = *(_DWORD *)(v52 + 288) & 0xF;
          if ( v54 == 3 )
          {
            v55 = (*(_DWORD *)(v52 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v52 + 232) & 0x400) != 0 )
          {
            v55 = GetWindowDpiLastNotify(a1);
          }
          else if ( !v54
                 && (v66 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v66 + 8) + 64LL) & 1) != 0 )
          {
            v55 = 96;
          }
          else
          {
            v55 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
          }
          v56 = GetDpiDependentMetric(12LL, v55);
          v20 += v56 + 2 * v56;
        }
        else if ( (*(_BYTE *)(v52 + 25) & 4) != 0 )
        {
          v71 = *(_DWORD *)(v52 + 288) & 0xF;
          if ( v71 == 3 )
          {
            v72 = (*(_DWORD *)(v52 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v52 + 232) & 0x400) != 0 )
          {
            v72 = GetWindowDpiLastNotify(a1);
          }
          else if ( !v71
                 && (v73 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v73 + 8) + 64LL) & 1) != 0 )
          {
            v72 = 96;
          }
          else
          {
            v72 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
          }
          v20 += 2 * GetDpiDependentMetric(12LL, v72);
        }
        if ( (unsigned int)HasCaptionIcon(a1) )
        {
          v57 = *((_QWORD *)a1 + 5);
          v58 = *(_DWORD *)(v57 + 288) & 0xF;
          if ( v58 == 3 )
          {
            v59 = (*(_DWORD *)(v57 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v57 + 232) & 0x400) != 0 )
          {
            v59 = GetWindowDpiLastNotify(a1);
          }
          else if ( !v58
                 && (v67 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v67 + 8) + 64LL) & 1) != 0 )
          {
            v59 = 96;
          }
          else
          {
            v59 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
          }
          v20 += GetDpiDependentMetric(13LL, v59);
        }
      }
      v20 += 4 * *(_DWORD *)(GetDPIServerInfo() + 16);
    }
    v20 += 4;
  }
  else
  {
    v46 = v20;
  }
  v47 = *(_DWORD *)(a2 + 24);
  if ( v47 <= v20 )
    v47 = v20;
  *(_DWORD *)(a2 + 24) = v47;
  result = *(unsigned int *)(a2 + 28);
  if ( (int)result <= v46 )
    result = (unsigned int)v46;
  *(_DWORD *)(a2 + 28) = result;
  return result;
}
