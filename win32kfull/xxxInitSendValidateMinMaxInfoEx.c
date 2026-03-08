/*
 * XREFs of xxxInitSendValidateMinMaxInfoEx @ 0x1C004524C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C00EB7B0 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z @ 0x1C01EE9B0 (-xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F1F6C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C004489C (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C00448E4 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C0044A68 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     ?ComputeMaxTrackSize@@YA?AUtagSIZE@@UtagRECT@@G@Z @ 0x1C0045D3C (-ComputeMaxTrackSize@@YA-AUtagSIZE@@UtagRECT@@G@Z.c)
 *     GetDpiCacheSlot @ 0x1C0045E2C (GetDpiCacheSlot.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004A174 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C00A1EF8 (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     GetScreenRectForDpi @ 0x1C00A2874 (GetScreenRectForDpi.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00A3584 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C00A3890 (ScaleDPIRect.c)
 *     GetWindowDpiLastNotify @ 0x1C00A3A34 (GetWindowDpiLastNotify.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C00A47EC (_HasCaptionIcon.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00D2B90 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetMonitorRectForWindow @ 0x1C00FF4DC (GetMonitorRectForWindow.c)
 *     _GetClientRect @ 0x1C01016A4 (_GetClientRect.c)
 *     GetDPIServerInfo @ 0x1C010C460 (GetDPIServerInfo.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C074C (_EnsureDpiDepSysMetCacheForPlateau.c)
 */

__int64 __fastcall xxxInitSendValidateMinMaxInfoEx(struct tagWND *a1, __int64 a2, struct tagMONITOR *a3)
{
  unsigned int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int16 v10; // r14
  __int64 v11; // rax
  struct tagRECT v12; // xmm6
  __int64 v13; // rdx
  unsigned __int16 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  struct tagMONITOR *v19; // rbx
  int v20; // r14d
  int *v21; // r8
  int v22; // r15d
  int v23; // ecx
  int v24; // r14d
  unsigned int WindowDpiLastNotify; // eax
  __int64 v26; // rcx
  int v27; // r9d
  int WindowBordersForDpiWithCompatFlags2; // r13d
  LONG v29; // r8d
  __int64 v30; // r12
  int v31; // ecx
  LONG bottom; // eax
  __int64 v33; // rbx
  struct tagRECT v34; // xmm0
  __int64 v35; // xmm1_8
  __int64 v36; // rcx
  __int64 Prop; // rbx
  __int64 v38; // rax
  int v39; // ebx
  __int64 v40; // rcx
  int v41; // r12d
  int v42; // edx
  unsigned int v43; // r10d
  unsigned int v44; // r10d
  __int64 v45; // r14
  int v46; // ecx
  __int64 v47; // rax
  int v48; // ecx
  unsigned int v49; // r10d
  _QWORD *v50; // r11
  unsigned int v51; // r10d
  __int64 v52; // r14
  int v53; // ecx
  unsigned __int16 WindowCompositedDpi; // r14
  const struct tagWND *v55; // rcx
  unsigned int WindowCompositedDpiContext; // eax
  struct tagSIZE v57; // rax
  __int64 v58; // r14
  struct tagMONITOR *v59; // r13
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rcx
  int v64; // r14d
  signed int top; // r15d
  __int64 v66; // rax
  __int64 v67; // rdx
  int v68; // r12d
  int v69; // ecx
  __int64 v70; // rax
  unsigned int v71; // eax
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rdx
  int v77; // eax
  __int64 result; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  int v83; // ecx
  unsigned int v84; // eax
  int DpiDependentMetric; // eax
  __int64 v86; // rcx
  char v87; // dl
  int v88; // edx
  unsigned int v89; // eax
  int v90; // eax
  __int64 v91; // rdx
  int v92; // ecx
  unsigned int v93; // eax
  int v94; // r8d
  int v95; // ecx
  int v96; // edx
  __int64 v97; // rax
  tagObjLock **v98; // rbx
  int v99; // edx
  unsigned int v100; // eax
  __int64 v101; // rax
  __int64 v102; // rax
  int v103; // edx
  unsigned int v104; // eax
  __int64 v105; // rax
  __int64 v106; // rax
  int v107; // [rsp+38h] [rbp-D0h]
  struct tagRECT v108; // [rsp+48h] [rbp-C0h] BYREF
  struct tagRECT v109; // [rsp+58h] [rbp-B0h] BYREF
  int v110; // [rsp+68h] [rbp-A0h]
  __int64 v111; // [rsp+78h] [rbp-90h]
  struct tagMONITOR *v112; // [rsp+80h] [rbp-88h]
  __int64 v113; // [rsp+88h] [rbp-80h]
  __int64 v114; // [rsp+90h] [rbp-78h]
  struct tagRECT v115; // [rsp+98h] [rbp-70h] BYREF
  __int64 v116; // [rsp+A8h] [rbp-60h]
  _QWORD v117[3]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v118[4]; // [rsp+D0h] [rbp-38h] BYREF
  char v119; // [rsp+F0h] [rbp-18h]
  __int128 v120; // [rsp+F8h] [rbp-10h] BYREF
  char v121; // [rsp+108h] [rbp+0h]
  char v122; // [rsp+110h] [rbp+8h]

  v117[2] = 0LL;
  v118[2] = 0LL;
  v113 = gptiCurrent;
  v108 = 0LL;
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2124LL);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(gpsi + 2128LL);
  v6 = 18;
  v7 = *(_QWORD *)(GetDispInfo() + 96);
  v8 = *((_QWORD *)a1 + 2);
  v114 = v7;
  v9 = *(_QWORD *)(v8 + 456);
  if ( v9 && (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 64LL) & 1) != 0 )
    v6 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
  v10 = (v6 >> 8) & 0x1FF;
  v11 = *(_QWORD *)(v7 + 40);
  v12 = *(struct tagRECT *)(v11 + 28);
  v13 = *(unsigned __int16 *)(v11 + 62);
  v14 = *(_WORD *)(v11 + 60);
  v109 = v12;
  if ( v10 )
  {
    v79 = ExpandMonitorSpaceVertex(v10, v13, *(_QWORD *)&v109.left);
    ScaleDPIRect((unsigned int)&v109, (unsigned int)&v109, v10, v14, v79, *(__int64 *)&v109.left);
    v12 = v109;
  }
  v15 = *((_QWORD *)a1 + 3);
  v16 = 0LL;
  v109 = v12;
  if ( v15 )
  {
    v17 = *(_QWORD *)(v15 + 8);
    if ( v17 )
      v16 = *(_QWORD *)(v17 + 24);
  }
  v18 = *((_QWORD *)a1 + 13);
  if ( v18 == v16 )
  {
    v108 = v12;
    v19 = _MonitorFromWindowInternal(a1, 1u, 1);
    v20 = 1;
    if ( a3 )
      v19 = a3;
    v107 = 1;
    v112 = v19;
  }
  else
  {
    v107 = 0;
    v20 = 0;
    v112 = 0LL;
    GetClientRect(v18, &v108);
  }
  v21 = (int *)*((_QWORD *)a1 + 5);
  v22 = v20;
  v23 = v21[72] & 0xF;
  if ( v23 == 3 )
  {
    WindowDpiLastNotify = ((unsigned int)v21[72] >> 8) & 0x1FF;
    goto LABEL_71;
  }
  if ( (v21[58] & 0x400) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
LABEL_71:
    v24 = 0;
    goto LABEL_17;
  }
  v24 = 0;
  if ( !v23
    && (v80 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
    && (*(_DWORD *)(**(_QWORD **)(v80 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
  }
LABEL_17:
  v26 = *((_QWORD *)a1 + 2);
  v27 = 0;
  if ( *(_DWORD *)(v26 + 632) <= 0x9900u )
    v27 = *(_DWORD *)(v26 + 648);
  WindowBordersForDpiWithCompatFlags2 = GetWindowBordersForDpiWithCompatFlags2(
                                          v21[7],
                                          v21[6],
                                          (__int64)v21,
                                          0,
                                          WindowDpiLastNotify,
                                          v27);
  v29 = v108.top - WindowBordersForDpiWithCompatFlags2;
  v30 = *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1);
  v110 = v108.left - WindowBordersForDpiWithCompatFlags2;
  v31 = WindowBordersForDpiWithCompatFlags2 - (v108.left - WindowBordersForDpiWithCompatFlags2);
  v108.left -= WindowBordersForDpiWithCompatFlags2;
  bottom = v108.bottom;
  *(_DWORD *)(a2 + 8) = v31 + v108.right;
  v119 = 0;
  v121 = 0;
  *(_DWORD *)(a2 + 12) = WindowBordersForDpiWithCompatFlags2 - v29 + bottom;
  v33 = *((_QWORD *)a1 + 18);
  v118[3] = gDomainDummyLock;
  v120 = 0LL;
  LODWORD(v111) = v29;
  v34 = *(struct tagRECT *)v33;
  v108.top = v29;
  v35 = *(_QWORD *)(v33 + 16);
  v115 = v34;
  v122 = 0;
  v116 = v35;
  if ( IS_USERCRIT_OWNED_EXCLUSIVE() || !IS_USERCRIT_OWNED_AT_ALL(v36) )
  {
    v22 = v107;
  }
  else
  {
    v122 = 1;
    if ( v33 == gObjDummyLock )
      v33 = 0LL;
    *(_QWORD *)&v120 = v33;
    if ( !v121 )
    {
      v98 = (tagObjLock **)&v120;
      do
      {
        if ( *v98 )
          tagObjLock::LockExclusive(*v98);
        ++v24;
        ++v98;
      }
      while ( !v24 );
      v121 = 1;
    }
  }
  Prop = RealGetProp(*((_QWORD *)a1 + 18), v30, 1LL);
  if ( v122 && v121 )
  {
    if ( (_QWORD)v120 )
      tagObjLock::UnLockExclusive((tagObjLock *)v120);
    v121 = 0;
  }
  if ( Prop && (*(_DWORD *)(Prop + 48) & 0x40) != 0 )
    v38 = *(_QWORD *)(Prop + 40);
  else
    v38 = *(_QWORD *)&v108.left;
  *(_QWORD *)(a2 + 16) = v38;
  v39 = 2 * WindowBordersForDpiWithCompatFlags2;
  v40 = *((_QWORD *)a1 + 5);
  v41 = 2 * WindowBordersForDpiWithCompatFlags2;
  if ( (*(_BYTE *)(v40 + 30) & 0xC0) != 0 && *(char *)(v40 + 24) >= 0 )
  {
    v42 = *(_DWORD *)(v40 + 288) & 0xF;
    if ( v42 == 3 )
    {
      v43 = (*(_DWORD *)(v40 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v40 + 232) & 0x400) != 0 )
    {
      v43 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v42
           && (v81 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v81 + 8) + 64LL) & 1) != 0 )
    {
      v43 = 96;
    }
    else
    {
      v43 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    }
    v45 = 120LL * (int)GetDpiCacheSlot(v43);
    v46 = *(_DWORD *)(v45 + gpsi + 2348);
    if ( v46 == -1 )
    {
      EnsureDpiDepSysMetCacheForPlateau(v44);
      v46 = *(_DWORD *)(v45 + gpsi + 2348);
      if ( v46 == -1 )
        v46 = 0;
    }
    *(_DWORD *)(a2 + 24) = v46;
    v47 = *((_QWORD *)a1 + 5);
    v48 = *(_DWORD *)(v47 + 288) & 0xF;
    if ( v48 == 3 )
    {
      v49 = (*(_DWORD *)(v47 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v47 + 232) & 0x400) != 0 )
    {
      v49 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v48
           && (v82 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v82 + 8) + 64LL) & 1) != 0 )
    {
      v49 = 96;
    }
    else
    {
      v49 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    }
    v52 = 120LL * (int)GetDpiCacheSlot(v49);
    v53 = *(_DWORD *)(v52 + *v50 + 2352);
    if ( v53 == -1 )
    {
      EnsureDpiDepSysMetCacheForPlateau(v51);
      v53 = *(_DWORD *)(v52 + gpsi + 2352);
      if ( v53 == -1 )
        v53 = 0;
    }
  }
  else
  {
    v53 = 2;
    if ( v39 >= 2 )
      v53 = 2 * WindowBordersForDpiWithCompatFlags2;
    *(_DWORD *)(a2 + 24) = v53;
  }
  *(_DWORD *)(a2 + 28) = v53;
  WindowCompositedDpi = GetWindowCompositedDpi(a1);
  WindowCompositedDpiContext = GetWindowCompositedDpiContext(v55);
  GetScreenRectForDpi(&v108, (WindowCompositedDpiContext >> 8) & 0x1FF);
  if ( !WindowCompositedDpi )
    WindowCompositedDpi = *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
  v115 = v108;
  v57 = ComputeMaxTrackSize(&v115, WindowCompositedDpi);
  v58 = v113;
  v59 = v112;
  *(struct tagSIZE *)(a2 + 32) = v57;
  v117[0] = *(_QWORD *)(v58 + 416);
  *(_QWORD *)(v58 + 416) = v117;
  v117[1] = v59;
  if ( v59 )
    HMLockObject(v59);
  v60 = v114;
  v118[0] = *(_QWORD *)(v58 + 416);
  *(_QWORD *)(v58 + 416) = v118;
  v118[1] = v60;
  HMLockObject(v60);
  xxxSendMessage(a1, 36LL, 0LL, a2);
  v62 = gpsi;
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2124LL);
  v63 = *(unsigned int *)(gpsi + 2128LL);
  *(_DWORD *)(a2 + 4) = v63;
  if ( v22 )
  {
    v108 = *GetMonitorMaxArea(&v115, a1, v59);
    if ( *(_DWORD *)(a2 + 8) < v109.right - v109.left
      || (v64 = v109.bottom, top = v109.top, *(_DWORD *)(a2 + 12) < v109.bottom - v109.top) )
    {
      SetOrClrWF(0LL, a1, 832LL, 1LL);
      v62 = *(_QWORD *)&v108.left;
    }
    else
    {
      SetOrClrWF(1LL, a1, 832LL, 1LL);
      v66 = GetProp((__int64)a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
      if ( v66 )
      {
        v94 = *(_DWORD *)(v66 + 48);
        if ( (v94 & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) != 0 )
        {
          v95 = *(_DWORD *)(a2 + 16);
          v96 = v110;
          if ( v95 != v110 && *(_DWORD *)(v66 + 40) == v95 )
          {
            *(_DWORD *)(v66 + 48) = v94 & 0xFFFFFFBF;
            *(_DWORD *)(a2 + 20) = v111;
            *(_DWORD *)(a2 + 16) = v96;
          }
        }
      }
      v67 = *((_QWORD *)a1 + 5);
      v68 = *(_DWORD *)(a2 + 20);
      v69 = *(_DWORD *)(v67 + 288) & 0xF;
      if ( v69 == 3 )
      {
        v71 = (*(_DWORD *)(v67 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v67 + 232) & 0x400) != 0 )
      {
        v71 = GetWindowDpiLastNotify(a1);
      }
      else if ( !v69
             && (v70 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v70 + 8) + 64LL) & 1) != 0 )
      {
        v71 = 96;
      }
      else
      {
        v71 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      }
      if ( (int)(v68 + GetDpiDependentMetric(2LL, v71)) <= top && *(_DWORD *)(a2 + 12) + *(_DWORD *)(a2 + 20) >= v64 )
        v108 = *(struct tagRECT *)GetMonitorRectForWindow(&v115, v59, a1);
      v41 = v39;
      v62 = *(_QWORD *)&v108.left;
      v72 = HIDWORD(*(_QWORD *)&v108.right);
      *(_DWORD *)(a2 + 8) += v109.left + v108.right - v108.left - v109.right;
      v63 = (unsigned int)(top + v72 - HIDWORD(v62) - v64);
      *(_DWORD *)(a2 + 12) += v63;
    }
    *(_DWORD *)(a2 + 20) += v108.top;
    *(_DWORD *)(a2 + 16) += v62;
  }
  ThreadUnlock1(v63, v62, v61);
  ThreadUnlock1(v74, v73, v75);
  v76 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v76 + 16) & 8) != 0 )
  {
    v83 = *(_DWORD *)(v76 + 288) & 0xF;
    if ( v83 == 3 )
    {
      v84 = (*(_DWORD *)(v76 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v76 + 232) & 0x400) != 0 )
    {
      v84 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v83
           && (v97 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v97 + 8) + 64LL) & 1) != 0 )
    {
      v84 = 96;
    }
    else
    {
      v84 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(17LL, v84);
    v86 = *((_QWORD *)a1 + 5);
    v41 = DpiDependentMetric;
    v87 = *(_BYTE *)(v86 + 30) & 8;
    if ( *(char *)(v86 + 24) < 0 )
    {
      if ( v87 )
      {
        v99 = *(_DWORD *)(v86 + 288) & 0xF;
        if ( v99 == 3 )
        {
          v100 = (*(_DWORD *)(v86 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v86 + 232) & 0x400) != 0 )
        {
          v100 = GetWindowDpiLastNotify(a1);
        }
        else if ( !v99
               && (v101 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v101 + 8) + 64LL) & 1) != 0 )
        {
          v100 = 96;
        }
        else
        {
          v100 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
        }
        v39 += GetDpiDependentMetric(23LL, v100);
      }
    }
    else
    {
      if ( v87 )
      {
        if ( (*(_BYTE *)(v86 + 30) & 3) != 0 )
        {
          v88 = *(_DWORD *)(v86 + 288) & 0xF;
          if ( v88 == 3 )
          {
            v89 = (*(_DWORD *)(v86 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v86 + 232) & 0x400) != 0 )
          {
            v89 = GetWindowDpiLastNotify(a1);
          }
          else if ( !v88
                 && (v102 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v102 + 8) + 64LL) & 1) != 0 )
          {
            v89 = 96;
          }
          else
          {
            v89 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
          }
          v90 = GetDpiDependentMetric(12LL, v89);
          v39 += v90 + 2 * v90;
        }
        else if ( (*(_BYTE *)(v86 + 25) & 4) != 0 )
        {
          v103 = *(_DWORD *)(v86 + 288) & 0xF;
          if ( v103 == 3 )
          {
            v104 = (*(_DWORD *)(v86 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v86 + 232) & 0x400) != 0 )
          {
            v104 = GetWindowDpiLastNotify(a1);
          }
          else if ( !v103
                 && (v105 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v105 + 8) + 64LL) & 1) != 0 )
          {
            v104 = 96;
          }
          else
          {
            v104 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
          }
          v39 += 2 * GetDpiDependentMetric(12LL, v104);
        }
        if ( (unsigned int)HasCaptionIcon(a1) )
        {
          v91 = *((_QWORD *)a1 + 5);
          v92 = *(_DWORD *)(v91 + 288) & 0xF;
          if ( v92 == 3 )
          {
            v93 = (*(_DWORD *)(v91 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v91 + 232) & 0x400) != 0 )
          {
            v93 = GetWindowDpiLastNotify(a1);
          }
          else if ( !v92
                 && (v106 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v106 + 8) + 64LL) & 1) != 0 )
          {
            v93 = 96;
          }
          else
          {
            v93 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
          }
          v39 += GetDpiDependentMetric(13LL, v93);
        }
      }
      v39 += 4 * *(_DWORD *)(GetDPIServerInfo() + 16);
    }
    v39 += 4;
  }
  v77 = *(_DWORD *)(a2 + 24);
  if ( v77 <= v39 )
    v77 = v39;
  *(_DWORD *)(a2 + 24) = v77;
  result = *(unsigned int *)(a2 + 28);
  if ( (int)result <= v41 )
    result = (unsigned int)v41;
  *(_DWORD *)(a2 + 28) = result;
  return result;
}
