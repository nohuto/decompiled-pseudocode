/*
 * XREFs of xxxInitSendValidateMinMaxInfoEx @ 0x1C0064D40
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C002B73C (xxxMinMaximizeEx.c)
 *     xxxAdjustSize @ 0x1C004B2E8 (xxxAdjustSize.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C011C9CC (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C020EAAC (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 * Callees:
 *     GetMonitorMaxArea @ 0x1C0041474 (GetMonitorMaxArea.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0042200 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetMaxTrackSizeForWindow @ 0x1C00424BC (GetMaxTrackSizeForWindow.c)
 *     GetMonitorRectForWindow @ 0x1C0042874 (GetMonitorRectForWindow.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C004AEAC (GetWindowBordersWithDpiAwareness.c)
 *     GetWindowDpiLastNotify @ 0x1C004C6B8 (GetWindowDpiLastNotify.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     GetDpiDependentMetric @ 0x1C00614D0 (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C0061D98 (_HasCaptionIcon.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C00704C0 (_GetDesktopWindow.c)
 *     GetDPIServerInfo @ 0x1C00E0E18 (GetDPIServerInfo.c)
 *     _GetClientRect @ 0x1C00FFC48 (_GetClientRect.c)
 */

__int64 __fastcall xxxInitSendValidateMinMaxInfoEx(struct tagWND *a1, __int64 a2, struct tagMONITOR *a3, int a4)
{
  __int64 v7; // rcx
  __int64 v8; // r12
  __int128 v9; // xmm6
  __int64 DesktopWindow; // rax
  __int64 v11; // r8
  int v12; // r14d
  struct tagMONITOR *v13; // r13
  int WindowBordersWithDpiAwareness; // esi
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // eax
  __int64 Type; // rdx
  __int64 Prop; // rax
  __int64 v21; // rax
  int v22; // esi
  __int64 v23; // rcx
  int v24; // edx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v26; // rdx
  int v27; // ecx
  unsigned int v28; // eax
  int DpiDependentMetric; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // r14d
  int v34; // eax
  __int64 result; // rax
  int v36; // r15d
  signed int v37; // r12d
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // ecx
  unsigned int v41; // eax
  int v42; // r14d
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // ecx
  unsigned int v46; // eax
  int v47; // eax
  __int64 v48; // rcx
  char v49; // dl
  int v50; // edx
  unsigned int v51; // eax
  int v52; // eax
  __int64 v53; // rdx
  int v54; // ecx
  unsigned int v55; // eax
  int v56; // r8d
  int v57; // ecx
  __int64 v58; // rax
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // edx
  unsigned int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rax
  int v67; // edx
  unsigned int v68; // eax
  __int64 v69; // rax
  __int64 v70; // rax
  __int128 v71; // [rsp+38h] [rbp-39h] BYREF
  __int128 v72; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v73[3]; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v74[5]; // [rsp+70h] [rbp-1h] BYREF
  int v75; // [rsp+D8h] [rbp+67h]
  int v76; // [rsp+E0h] [rbp+6Fh]

  v73[2] = 0LL;
  v74[2] = 0LL;
  v71 = 0LL;
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2124LL);
  v7 = *(unsigned int *)(gpsi + 2128LL);
  *(_DWORD *)(a2 + 4) = v7;
  v8 = *(_QWORD *)(GetDispInfo(v7, a2) + 96);
  v9 = *GetMonitorRectForWindow(&v72, v8, a1);
  v72 = v9;
  DesktopWindow = GetDesktopWindow(a1);
  if ( v11 == DesktopWindow )
  {
    v12 = 1;
    v71 = v9;
    v13 = _MonitorFromWindowInternal(a1, 1, 1);
    if ( a3 )
      v13 = a3;
  }
  else
  {
    v12 = 0;
    v13 = 0LL;
    GetClientRect(v11, &v71);
  }
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness((__int64)a1);
  v75 = v71 - WindowBordersWithDpiAwareness;
  v15 = WindowBordersWithDpiAwareness - (v71 - WindowBordersWithDpiAwareness);
  LODWORD(v71) = v71 - WindowBordersWithDpiAwareness;
  v16 = v15 + DWORD2(v71);
  v76 = DWORD1(v71) - WindowBordersWithDpiAwareness;
  v17 = WindowBordersWithDpiAwareness - (DWORD1(v71) - WindowBordersWithDpiAwareness);
  DWORD1(v71) -= WindowBordersWithDpiAwareness;
  v18 = v17 + HIDWORD(v71);
  *(_DWORD *)(a2 + 8) = v16;
  Type = (unsigned __int16)WPP_MAIN_CB.DeviceQueue.Type;
  *(_DWORD *)(a2 + 12) = v18;
  Prop = GetProp(a1, Type, 1LL);
  if ( Prop && (*(_DWORD *)(Prop + 48) & 0x40) != 0 )
    v21 = *(_QWORD *)(Prop + 40);
  else
    v21 = v71;
  *(_QWORD *)(a2 + 16) = v21;
  v22 = 2 * WindowBordersWithDpiAwareness;
  v23 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v23 + 30) & 0xC0) != 0 && *(char *)(v23 + 24) >= 0 )
  {
    v24 = *(_DWORD *)(v23 + 288) & 0xF;
    if ( v24 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v23 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v23 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
    }
    else if ( !v24
           && (v58 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v58 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    }
    *(_DWORD *)(a2 + 24) = GetDpiDependentMetric(16LL, WindowDpiLastNotify);
    v26 = *((_QWORD *)a1 + 5);
    v27 = *(_DWORD *)(v26 + 288) & 0xF;
    if ( v27 == 3 )
    {
      v28 = (*(_DWORD *)(v26 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v26 + 232) & 0x8000000) != 0 )
    {
      v28 = GetWindowDpiLastNotify((__int64)a1);
    }
    else if ( !v27
           && (v59 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v59 + 8) + 64LL) & 1) != 0 )
    {
      v28 = 96;
    }
    else
    {
      v28 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(17LL, v28);
  }
  else
  {
    v60 = v22;
    if ( v22 < 2 )
      v60 = 2;
    *(_DWORD *)(a2 + 24) = v60;
    DpiDependentMetric = v22;
    if ( v22 < 2 )
      DpiDependentMetric = 2;
  }
  *(_DWORD *)(a2 + 28) = DpiDependentMetric;
  *(struct tagSIZE *)(a2 + 32) = GetMaxTrackSizeForWindow((__int64)a1);
  v73[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v73;
  v73[1] = v13;
  if ( v13 )
    HMLockObject(v13);
  v74[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v74;
  v74[1] = v8;
  HMLockObject(v8);
  if ( !a4 )
    xxxSendMessage((unsigned __int64)a1, 0x24u, 0LL, (struct _LARGE_STRING *)a2);
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2124LL);
  v30 = *(unsigned int *)(gpsi + 2128LL);
  *(_DWORD *)(a2 + 4) = v30;
  if ( v12 )
  {
    v71 = *GetMonitorMaxArea(&v71, a1, (__int64)v13);
    if ( *(_DWORD *)(a2 + 8) < DWORD2(v72) - (int)v72
      || (v36 = HIDWORD(v72), v37 = DWORD1(v72), *(_DWORD *)(a2 + 12) < HIDWORD(v72) - DWORD1(v72)) )
    {
      SetOrClrWF(0, (__int64)a1, 0x340u, 1);
      LODWORD(v43) = v71;
    }
    else
    {
      SetOrClrWF(1, (__int64)a1, 0x340u, 1);
      v38 = GetProp(a1, (unsigned __int16)WPP_MAIN_CB.DeviceQueue.Type, 1LL);
      if ( v38 )
      {
        v56 = *(_DWORD *)(v38 + 48);
        if ( (v56 & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) != 0 )
        {
          v57 = *(_DWORD *)(a2 + 16);
          if ( v57 != v75 && *(_DWORD *)(v38 + 40) == v57 )
          {
            *(_DWORD *)(v38 + 48) = v56 & 0xFFFFFFBF;
            *(_DWORD *)(a2 + 20) = v76;
            *(_DWORD *)(a2 + 16) = v75;
          }
        }
      }
      v39 = *((_QWORD *)a1 + 5);
      v40 = *(_DWORD *)(v39 + 288) & 0xF;
      if ( v40 == 3 )
      {
        v41 = (*(_DWORD *)(v39 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v39 + 232) & 0x8000000) != 0 )
      {
        v41 = GetWindowDpiLastNotify((__int64)a1);
      }
      else if ( !v40
             && (v61 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v61 + 8) + 64LL) & 1) != 0 )
      {
        v41 = 96;
      }
      else
      {
        v41 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      }
      v42 = *(_DWORD *)(a2 + 20);
      if ( (int)(v42 + GetDpiDependentMetric(2LL, v41)) <= v37 && v42 + *(_DWORD *)(a2 + 12) >= v36 )
        v71 = *GetMonitorRectForWindow(&v71, (__int64)v13, a1);
      v43 = v71;
      v44 = HIDWORD(*((_QWORD *)&v71 + 1));
      *(_DWORD *)(a2 + 8) += v72 + DWORD2(v71) - v71 - DWORD2(v72);
      v30 = (unsigned int)(v37 + v44 - HIDWORD(v43) - v36);
      *(_DWORD *)(a2 + 12) += v30;
    }
    *(_DWORD *)(a2 + 16) += v43;
    *(_DWORD *)(a2 + 20) += DWORD1(v71);
  }
  ThreadUnlock1(v30);
  ThreadUnlock1(v31);
  v32 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v32 + 16) & 8) != 0 )
  {
    v45 = *(_DWORD *)(v32 + 288) & 0xF;
    if ( v45 == 3 )
    {
      v46 = (*(_DWORD *)(v32 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v32 + 232) & 0x8000000) != 0 )
    {
      v46 = GetWindowDpiLastNotify((__int64)a1);
    }
    else if ( !v45
           && (v62 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v62 + 8) + 64LL) & 1) != 0 )
    {
      v46 = 96;
    }
    else
    {
      v46 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    }
    v47 = GetDpiDependentMetric(17LL, v46);
    v48 = *((_QWORD *)a1 + 5);
    v33 = v47;
    v49 = *(_BYTE *)(v48 + 30) & 8;
    if ( *(char *)(v48 + 24) < 0 )
    {
      if ( v49 )
      {
        v67 = *(_DWORD *)(v48 + 288) & 0xF;
        if ( v67 == 3 )
        {
          v68 = (*(_DWORD *)(v48 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v48 + 232) & 0x8000000) != 0 )
        {
          v68 = GetWindowDpiLastNotify((__int64)a1);
        }
        else if ( !v67
               && (v69 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v69 + 8) + 64LL) & 1) != 0 )
        {
          v68 = 96;
        }
        else
        {
          v68 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
        }
        v22 += GetDpiDependentMetric(23LL, v68);
      }
    }
    else
    {
      if ( v49 )
      {
        if ( (*(_BYTE *)(v48 + 30) & 3) != 0 )
        {
          v50 = *(_DWORD *)(v48 + 288) & 0xF;
          if ( v50 == 3 )
          {
            v51 = (*(_DWORD *)(v48 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v48 + 232) & 0x8000000) != 0 )
          {
            v51 = GetWindowDpiLastNotify((__int64)a1);
          }
          else if ( !v50
                 && (v65 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v65 + 8) + 64LL) & 1) != 0 )
          {
            v51 = 96;
          }
          else
          {
            v51 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
          }
          v52 = GetDpiDependentMetric(12LL, v51);
          v22 += v52 + 2 * v52;
        }
        else if ( (*(_BYTE *)(v48 + 25) & 4) != 0 )
        {
          v63 = *(_DWORD *)(v48 + 288) & 0xF;
          if ( v63 == 3 )
          {
            v64 = (*(_DWORD *)(v48 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v48 + 232) & 0x8000000) != 0 )
          {
            v64 = GetWindowDpiLastNotify((__int64)a1);
          }
          else if ( !v63
                 && (v70 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v70 + 8) + 64LL) & 1) != 0 )
          {
            v64 = 96;
          }
          else
          {
            v64 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
          }
          v22 += 2 * GetDpiDependentMetric(12LL, v64);
        }
        if ( (unsigned int)HasCaptionIcon((__int64)a1) )
        {
          v53 = *((_QWORD *)a1 + 5);
          v54 = *(_DWORD *)(v53 + 288) & 0xF;
          if ( v54 == 3 )
          {
            v55 = (*(_DWORD *)(v53 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v53 + 232) & 0x8000000) != 0 )
          {
            v55 = GetWindowDpiLastNotify((__int64)a1);
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
          v22 += GetDpiDependentMetric(13LL, v55);
        }
      }
      v22 += 4 * *(_DWORD *)(GetDPIServerInfo() + 16);
    }
    v22 += 4;
  }
  else
  {
    v33 = v22;
  }
  v34 = *(_DWORD *)(a2 + 24);
  if ( v34 <= v22 )
    v34 = v22;
  *(_DWORD *)(a2 + 24) = v34;
  result = *(unsigned int *)(a2 + 28);
  if ( (int)result <= v33 )
    result = (unsigned int)v33;
  *(_DWORD *)(a2 + 28) = result;
  return result;
}
