/*
 * XREFs of xxxInitSendValidateMinMaxInfoEx @ 0x1C00ED180
 * Callers:
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C004A870 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     xxxAdjustSize @ 0x1C013CBD4 (xxxAdjustSize.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z @ 0x1C01ED7EC (-xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F0D8C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     _HasCaptionIcon @ 0x1C00631C8 (_HasCaptionIcon.c)
 *     GetDPIServerInfo @ 0x1C00AB4C8 (GetDPIServerInfo.c)
 *     _GetClientRect @ 0x1C00C4608 (_GetClientRect.c)
 *     GetMonitorRectForWindow @ 0x1C00CF9A8 (GetMonitorRectForWindow.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C00CFAA0 (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     GetScreenRectForDpi @ 0x1C00CFD44 (GetScreenRectForDpi.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00D003C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00D0BA8 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C00D1E80 (ScaleDPIRect.c)
 *     GetDpiCacheSlot @ 0x1C00EDB50 (GetDpiCacheSlot.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C00EDC80 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C00EDCBC (GetWindowBordersForDpiWithCompatFlags2.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C00EF520 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     GetWindowDpiLastNotify @ 0x1C00F0740 (GetWindowDpiLastNotify.c)
 *     GetDpiDependentMetric @ 0x1C00F0DA0 (GetDpiDependentMetric.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122344 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01BF5AC (_EnsureDpiDepSysMetCacheForPlateau.c)
 */

__int64 __fastcall xxxInitSendValidateMinMaxInfoEx(struct tagWND *a1, __int64 a2, struct tagMONITOR *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int16 v11; // r14
  __int64 v12; // rax
  __m128i v13; // xmm6
  unsigned __int16 v14; // dx
  unsigned __int16 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  struct tagMONITOR *v20; // rbx
  int v21; // r14d
  _DWORD *v22; // r8
  int v23; // r15d
  int v24; // ecx
  int v25; // r14d
  int WindowDpiLastNotify; // eax
  __int64 v27; // rcx
  int v28; // r9d
  int WindowBordersForDpiWithCompatFlags2; // r13d
  LONG v30; // r8d
  __int64 v31; // r12
  int v32; // ecx
  LONG bottom; // eax
  __int64 v34; // rbx
  struct tagRECT v35; // xmm0
  __int64 v36; // xmm1_8
  __int64 Prop; // rbx
  __int64 v38; // rax
  int v39; // ebx
  __int64 v40; // rcx
  int v41; // edx
  unsigned int v42; // r10d
  unsigned int v43; // r10d
  __int64 v44; // r14
  int v45; // ecx
  __int64 v46; // rax
  int v47; // ecx
  unsigned int v48; // r10d
  _QWORD *v49; // r11
  unsigned int v50; // r10d
  __int64 v51; // r14
  int v52; // ecx
  unsigned __int16 WindowCompositedDpi; // r14
  const struct tagWND *v54; // rcx
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v56; // r12
  int v57; // r15d
  __int64 v58; // r12
  __int64 v59; // r10
  int v60; // eax
  int v61; // r12d
  __int64 v62; // r13
  __int64 v63; // r10
  int v64; // r15d
  __int64 v65; // r13
  __int64 v66; // r10
  int v67; // eax
  __int64 v68; // r14
  struct tagMONITOR *v69; // r13
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // rcx
  int v74; // r14d
  signed int v75; // r15d
  __int64 v76; // rax
  __int64 v77; // rdx
  int v78; // r12d
  int v79; // ecx
  __int64 v80; // rax
  unsigned int v81; // eax
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rdx
  int v87; // r14d
  int v88; // eax
  __int64 result; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  int v94; // ecx
  unsigned int v95; // eax
  int DpiDependentMetric; // eax
  __int64 v97; // rcx
  char v98; // dl
  int v99; // edx
  unsigned int v100; // eax
  int v101; // eax
  __int64 v102; // rdx
  int v103; // ecx
  unsigned int v104; // eax
  int v105; // r8d
  int v106; // ecx
  int v107; // edx
  __int64 v108; // rax
  tagObjLock **v109; // rbx
  int v110; // edx
  unsigned int v111; // eax
  __int64 v112; // rax
  __int64 v113; // rax
  int v114; // edx
  unsigned int v115; // eax
  __int64 v116; // rax
  __int64 v117; // rax
  struct tagRECT v118; // [rsp+38h] [rbp-D0h] BYREF
  int v119; // [rsp+48h] [rbp-C0h]
  __m128i v120; // [rsp+58h] [rbp-B0h] BYREF
  int v121; // [rsp+68h] [rbp-A0h]
  __int64 v122; // [rsp+78h] [rbp-90h]
  struct tagMONITOR *v123; // [rsp+80h] [rbp-88h]
  __int64 v124; // [rsp+88h] [rbp-80h]
  __int64 v125; // [rsp+90h] [rbp-78h]
  struct tagRECT v126; // [rsp+98h] [rbp-70h] BYREF
  __int64 v127; // [rsp+A8h] [rbp-60h]
  _QWORD v128[3]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v129[4]; // [rsp+D0h] [rbp-38h] BYREF
  char v130; // [rsp+F0h] [rbp-18h]
  __int128 v131; // [rsp+F8h] [rbp-10h] BYREF
  char v132; // [rsp+108h] [rbp+0h]
  char v133; // [rsp+110h] [rbp+8h]

  v128[2] = 0LL;
  v129[2] = 0LL;
  v124 = gptiCurrent;
  v118 = 0LL;
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2124LL);
  v6 = *(unsigned int *)(gpsi + 2128LL);
  *(_DWORD *)(a2 + 4) = v6;
  v7 = 18;
  v8 = *(_QWORD *)(GetDispInfo(v6) + 96);
  v9 = *((_QWORD *)a1 + 2);
  v125 = v8;
  v10 = *(_QWORD *)(v9 + 456);
  if ( v10 && (*(_DWORD *)(**(_QWORD **)(v10 + 8) + 64LL) & 1) != 0 )
    v7 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
  v11 = (v7 >> 8) & 0x1FF;
  v12 = *(_QWORD *)(v8 + 40);
  v13 = *(__m128i *)(v12 + 28);
  v14 = *(_WORD *)(v12 + 62);
  v15 = *(_WORD *)(v12 + 60);
  v120 = v13;
  if ( v11 )
  {
    v90 = ExpandMonitorSpaceVertex(v11, v14, v120.m128i_i64[0]);
    ScaleDPIRect(&v120, &v120, v11, v15, v90, v120.m128i_i64[0]);
    v13 = v120;
  }
  v16 = *((_QWORD *)a1 + 3);
  v17 = 0LL;
  v120 = v13;
  if ( v16 )
  {
    v18 = *(_QWORD *)(v16 + 8);
    if ( v18 )
      v17 = *(_QWORD *)(v18 + 24);
  }
  v19 = *((_QWORD *)a1 + 13);
  if ( v19 == v17 )
  {
    v118 = (struct tagRECT)v13;
    v20 = _MonitorFromWindowInternal(a1, 1u, 1);
    v21 = 1;
    if ( a3 )
      v20 = a3;
    v119 = 1;
    v123 = v20;
  }
  else
  {
    v119 = 0;
    v21 = 0;
    v123 = 0LL;
    GetClientRect(v19, (__int64)&v118);
  }
  v22 = (_DWORD *)*((_QWORD *)a1 + 5);
  v23 = v21;
  v24 = v22[72] & 0xF;
  if ( v24 == 3 )
  {
    WindowDpiLastNotify = (v22[72] >> 8) & 0x1FF;
    goto LABEL_75;
  }
  if ( (v22[58] & 0x400) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
LABEL_75:
    v25 = 0;
    goto LABEL_17;
  }
  v25 = 0;
  if ( !v24
    && (v91 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
    && (*(_DWORD *)(**(_QWORD **)(v91 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
  }
LABEL_17:
  v27 = *((_QWORD *)a1 + 2);
  v28 = 0;
  if ( *(_DWORD *)(v27 + 632) <= 0x9900u )
    v28 = *(_DWORD *)(v27 + 648);
  WindowBordersForDpiWithCompatFlags2 = GetWindowBordersForDpiWithCompatFlags2(
                                          v22[7],
                                          v22[6],
                                          (_DWORD)v22,
                                          0,
                                          WindowDpiLastNotify,
                                          v28);
  v30 = v118.top - WindowBordersForDpiWithCompatFlags2;
  v31 = *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1);
  v121 = v118.left - WindowBordersForDpiWithCompatFlags2;
  v32 = WindowBordersForDpiWithCompatFlags2 - (v118.left - WindowBordersForDpiWithCompatFlags2);
  v118.left -= WindowBordersForDpiWithCompatFlags2;
  bottom = v118.bottom;
  *(_DWORD *)(a2 + 8) = v32 + v118.right;
  v130 = 0;
  v132 = 0;
  *(_DWORD *)(a2 + 12) = WindowBordersForDpiWithCompatFlags2 - v30 + bottom;
  v34 = *((_QWORD *)a1 + 18);
  v129[3] = gDomainDummyLock;
  v131 = 0LL;
  LODWORD(v122) = v30;
  v35 = *(struct tagRECT *)v34;
  v118.top = v30;
  v36 = *(_QWORD *)(v34 + 16);
  v126 = v35;
  v133 = 0;
  v127 = v36;
  if ( !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL() )
  {
    v133 = 1;
    if ( v34 == gObjDummyLock )
      v34 = 0LL;
    v119 = v23;
    *(_QWORD *)&v131 = v34;
    if ( !v132 )
    {
      v109 = (tagObjLock **)&v131;
      v119 = v23;
      do
      {
        if ( *v109 )
          tagObjLock::LockExclusive(*v109);
        ++v25;
        ++v109;
      }
      while ( !v25 );
      v132 = 1;
    }
  }
  Prop = RealGetProp(*((_QWORD *)a1 + 18), v31, 1LL);
  if ( v133 && v132 )
  {
    if ( (_QWORD)v131 )
      tagObjLock::UnLockExclusive((tagObjLock *)v131);
    v132 = 0;
  }
  if ( Prop && (*(_DWORD *)(Prop + 48) & 0x40) != 0 )
    v38 = *(_QWORD *)(Prop + 40);
  else
    v38 = *(_QWORD *)&v118.left;
  *(_QWORD *)(a2 + 16) = v38;
  v39 = 2 * WindowBordersForDpiWithCompatFlags2;
  v40 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v40 + 30) & 0xC0) != 0 && *(char *)(v40 + 24) >= 0 )
  {
    v41 = *(_DWORD *)(v40 + 288) & 0xF;
    if ( v41 == 3 )
    {
      v42 = (*(_DWORD *)(v40 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v40 + 232) & 0x400) != 0 )
    {
      v42 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v41
           && (v92 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v92 + 8) + 64LL) & 1) != 0 )
    {
      v42 = 96;
    }
    else
    {
      v42 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    }
    v44 = 120LL * (int)GetDpiCacheSlot(v42);
    v45 = *(_DWORD *)(v44 + gpsi + 2348);
    if ( v45 == -1 )
    {
      EnsureDpiDepSysMetCacheForPlateau(v43);
      v45 = *(_DWORD *)(v44 + gpsi + 2348);
      if ( v45 == -1 )
        v45 = 0;
    }
    *(_DWORD *)(a2 + 24) = v45;
    v46 = *((_QWORD *)a1 + 5);
    v47 = *(_DWORD *)(v46 + 288) & 0xF;
    if ( v47 == 3 )
    {
      v48 = (*(_DWORD *)(v46 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v46 + 232) & 0x400) != 0 )
    {
      v48 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v47
           && (v93 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v93 + 8) + 64LL) & 1) != 0 )
    {
      v48 = 96;
    }
    else
    {
      v48 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    }
    v51 = 120LL * (int)GetDpiCacheSlot(v48);
    v52 = *(_DWORD *)(v51 + *v49 + 2352);
    if ( v52 == -1 )
    {
      EnsureDpiDepSysMetCacheForPlateau(v50);
      v52 = *(_DWORD *)(v51 + gpsi + 2352);
      if ( v52 == -1 )
        v52 = 0;
    }
  }
  else
  {
    v52 = 2;
    if ( v39 >= 2 )
      v52 = 2 * WindowBordersForDpiWithCompatFlags2;
    *(_DWORD *)(a2 + 24) = v52;
  }
  *(_DWORD *)(a2 + 28) = v52;
  WindowCompositedDpi = GetWindowCompositedDpi(a1);
  WindowCompositedDpiContext = GetWindowCompositedDpiContext(v54);
  GetScreenRectForDpi((__m128i *)&v126, (WindowCompositedDpiContext >> 8) & 0x1FF);
  if ( !WindowCompositedDpi )
    WindowCompositedDpi = *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
  v118 = v126;
  v56 = 120LL * (int)GetDpiCacheSlot(WindowCompositedDpi);
  v57 = *(_DWORD *)(v56 + gpsi + 2340);
  if ( v57 == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(WindowCompositedDpi);
    v57 = *(_DWORD *)(v56 + gpsi + 2340);
    if ( v57 == -1 )
      v57 = 0;
  }
  v58 = 120 * ((int)GetDpiCacheSlot(WindowCompositedDpi) + 20LL);
  v60 = *(_DWORD *)(v58 + v59);
  if ( v60 == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(WindowCompositedDpi);
    v60 = *(_DWORD *)(gpsi + v58);
    if ( v60 == -1 )
      v60 = 0;
  }
  v61 = v118.right + 2 * (v57 + v60) + 4 - v118.left;
  v62 = 120LL * (int)GetDpiCacheSlot(WindowCompositedDpi);
  v64 = *(_DWORD *)(v63 + v62 + 2344);
  if ( v64 == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(WindowCompositedDpi);
    v64 = *(_DWORD *)(gpsi + v62 + 2344);
    if ( v64 == -1 )
      v64 = 0;
  }
  v65 = 120 * ((int)GetDpiCacheSlot(WindowCompositedDpi) + 20LL);
  v67 = *(_DWORD *)(v66 + v65);
  if ( v67 == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(WindowCompositedDpi);
    v67 = *(_DWORD *)(gpsi + v65);
    if ( v67 == -1 )
      v67 = 0;
  }
  v68 = v124;
  v69 = v123;
  *(_DWORD *)(a2 + 32) = v61;
  *(_DWORD *)(a2 + 36) = v118.bottom + 2 * (v64 + v67) + 4 - v118.top;
  v128[0] = *(_QWORD *)(v68 + 416);
  *(_QWORD *)(v68 + 416) = v128;
  v128[1] = v69;
  if ( v69 )
    HMLockObject(v69);
  v70 = v125;
  v129[0] = *(_QWORD *)(v68 + 416);
  *(_QWORD *)(v68 + 416) = v129;
  v129[1] = v70;
  HMLockObject(v70);
  xxxSendMessage(a1, 36LL, 0LL, a2);
  v72 = gpsi;
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2124LL);
  v73 = *(unsigned int *)(gpsi + 2128LL);
  *(_DWORD *)(a2 + 4) = v73;
  if ( v119 )
  {
    v118 = *GetMonitorMaxArea(&v126, a1, v69);
    if ( *(_DWORD *)(a2 + 8) < v120.m128i_i32[2] - v120.m128i_i32[0]
      || (v74 = v120.m128i_i32[3], v75 = v120.m128i_i32[1], *(_DWORD *)(a2 + 12) < v120.m128i_i32[3] - v120.m128i_i32[1]) )
    {
      SetOrClrWF(0LL, a1, 832LL, 1LL);
      v72 = *(_QWORD *)&v118.left;
    }
    else
    {
      SetOrClrWF(1LL, a1, 832LL, 1LL);
      v76 = GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
      if ( v76 )
      {
        v105 = *(_DWORD *)(v76 + 48);
        if ( (v105 & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) != 0 )
        {
          v106 = *(_DWORD *)(a2 + 16);
          v107 = v121;
          if ( v106 != v121 && *(_DWORD *)(v76 + 40) == v106 )
          {
            *(_DWORD *)(v76 + 48) = v105 & 0xFFFFFFBF;
            *(_DWORD *)(a2 + 20) = v122;
            *(_DWORD *)(a2 + 16) = v107;
          }
        }
      }
      v77 = *((_QWORD *)a1 + 5);
      v78 = *(_DWORD *)(a2 + 20);
      v79 = *(_DWORD *)(v77 + 288) & 0xF;
      if ( v79 == 3 )
      {
        v81 = (*(_DWORD *)(v77 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v77 + 232) & 0x400) != 0 )
      {
        v81 = GetWindowDpiLastNotify(a1);
      }
      else if ( !v79
             && (v80 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v80 + 8) + 64LL) & 1) != 0 )
      {
        v81 = 96;
      }
      else
      {
        v81 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      }
      if ( (int)(v78 + GetDpiDependentMetric(2LL, v81)) <= v75 && *(_DWORD *)(a2 + 20) + *(_DWORD *)(a2 + 12) >= v74 )
        v118 = *(struct tagRECT *)GetMonitorRectForWindow((__int64)&v126, (__int64)v69, a1);
      v72 = *(_QWORD *)&v118.left;
      v82 = HIDWORD(*(_QWORD *)&v118.right);
      *(_DWORD *)(a2 + 8) += v120.m128i_i32[0] + v118.right - v118.left - v120.m128i_i32[2];
      v73 = (unsigned int)(v75 + v82 - HIDWORD(v72) - v74);
      *(_DWORD *)(a2 + 12) += v73;
    }
    *(_DWORD *)(a2 + 16) += v72;
    *(_DWORD *)(a2 + 20) += v118.top;
  }
  ThreadUnlock1(v73, v72, v71);
  ThreadUnlock1(v84, v83, v85);
  v86 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v86 + 16) & 8) != 0 )
  {
    v94 = *(_DWORD *)(v86 + 288) & 0xF;
    if ( v94 == 3 )
    {
      v95 = (*(_DWORD *)(v86 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v86 + 232) & 0x400) != 0 )
    {
      v95 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v94
           && (v108 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v108 + 8) + 64LL) & 1) != 0 )
    {
      v95 = 96;
    }
    else
    {
      v95 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(17LL, v95);
    v97 = *((_QWORD *)a1 + 5);
    v87 = DpiDependentMetric;
    v98 = *(_BYTE *)(v97 + 30) & 8;
    if ( *(char *)(v97 + 24) < 0 )
    {
      if ( v98 )
      {
        v110 = *(_DWORD *)(v97 + 288) & 0xF;
        if ( v110 == 3 )
        {
          v111 = (*(_DWORD *)(v97 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v97 + 232) & 0x400) != 0 )
        {
          v111 = GetWindowDpiLastNotify(a1);
        }
        else if ( !v110
               && (v112 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v112 + 8) + 64LL) & 1) != 0 )
        {
          v111 = 96;
        }
        else
        {
          v111 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
        }
        v39 += GetDpiDependentMetric(23LL, v111);
      }
    }
    else
    {
      if ( v98 )
      {
        if ( (*(_BYTE *)(v97 + 30) & 3) != 0 )
        {
          v99 = *(_DWORD *)(v97 + 288) & 0xF;
          if ( v99 == 3 )
          {
            v100 = (*(_DWORD *)(v97 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v97 + 232) & 0x400) != 0 )
          {
            v100 = GetWindowDpiLastNotify(a1);
          }
          else if ( !v99
                 && (v113 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v113 + 8) + 64LL) & 1) != 0 )
          {
            v100 = 96;
          }
          else
          {
            v100 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
          }
          v101 = GetDpiDependentMetric(12LL, v100);
          v39 += v101 + 2 * v101;
        }
        else if ( (*(_BYTE *)(v97 + 25) & 4) != 0 )
        {
          v114 = *(_DWORD *)(v97 + 288) & 0xF;
          if ( v114 == 3 )
          {
            v115 = (*(_DWORD *)(v97 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v97 + 232) & 0x400) != 0 )
          {
            v115 = GetWindowDpiLastNotify(a1);
          }
          else if ( !v114
                 && (v116 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v116 + 8) + 64LL) & 1) != 0 )
          {
            v115 = 96;
          }
          else
          {
            v115 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
          }
          v39 += 2 * GetDpiDependentMetric(12LL, v115);
        }
        if ( (unsigned int)HasCaptionIcon((__int64)a1) )
        {
          v102 = *((_QWORD *)a1 + 5);
          v103 = *(_DWORD *)(v102 + 288) & 0xF;
          if ( v103 == 3 )
          {
            v104 = (*(_DWORD *)(v102 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v102 + 232) & 0x400) != 0 )
          {
            v104 = GetWindowDpiLastNotify(a1);
          }
          else if ( !v103
                 && (v117 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v117 + 8) + 64LL) & 1) != 0 )
          {
            v104 = 96;
          }
          else
          {
            v104 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
          }
          v39 += GetDpiDependentMetric(13LL, v104);
        }
      }
      v39 += 4 * *(_DWORD *)(GetDPIServerInfo(v97) + 16);
    }
    v39 += 4;
  }
  else
  {
    v87 = v39;
  }
  v88 = *(_DWORD *)(a2 + 24);
  if ( v88 <= v39 )
    v88 = v39;
  *(_DWORD *)(a2 + 24) = v88;
  result = *(unsigned int *)(a2 + 28);
  if ( (int)result <= v87 )
    result = (unsigned int)v87;
  *(_DWORD *)(a2 + 28) = result;
  return result;
}
