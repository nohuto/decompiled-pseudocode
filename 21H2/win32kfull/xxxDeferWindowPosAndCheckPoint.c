/*
 * XREFs of xxxDeferWindowPosAndCheckPoint @ 0x1C003E97C
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0040A20 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D80BC (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     ?_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z @ 0x1C003E340 (-_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z @ 0x1C003E480 (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z.c)
 *     IsValidMonitor @ 0x1C003E94C (IsValidMonitor.c)
 *     FindOldMonitor @ 0x1C0041E3C (FindOldMonitor.c)
 *     GetMonitorRectForDpi @ 0x1C0041FE8 (GetMonitorRectForDpi.c)
 *     ?Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z @ 0x1C0042068 (-Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C00426C8 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1C004E570 (DirtyVisRgnTrackers.c)
 *     GetDpiDependentMetric @ 0x1C00614D0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0063CBC (GetDpiForSystem.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C006BA90 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     GetMonitorWorkRectForDpi @ 0x1C007C94C (GetMonitorWorkRectForDpi.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01D64B8 (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C020AE2C (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z @ 0x1C020B8CC (-MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z.c)
 *     ?xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAUtagMONITOR@@H@Z @ 0x1C020E5CC (-xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAU.c)
 *     xxxInitializeMoveSizeData @ 0x1C0211E0C (xxxInitializeMoveSizeData.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C025D904 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 */

__int64 __fastcall xxxDeferWindowPosAndCheckPoint(
        __int64 a1,
        struct tagWND *a2,
        struct tagMONITORRECTS *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        __int64 a6,
        char a7)
{
  char *v9; // rsi
  int v10; // r14d
  int v11; // r15d
  __int64 Prop; // rax
  struct tagRECT *v13; // rbx
  int v14; // eax
  int v15; // r9d
  int OldMonitor; // eax
  __int64 v18; // r8
  __int64 v19; // rcx
  int v20; // r10d
  int v21; // eax
  __int64 v22; // rdx
  unsigned int DpiForSystem; // eax
  __int64 v24; // rax
  struct tagMONITOR *NewMonitor; // r13
  struct tagMONITOR *v26; // r10
  struct tagMONITOR *v27; // rax
  int v28; // ecx
  int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // r15
  __int64 v32; // rax
  struct tagMONITOR *v33; // rbx
  _QWORD *v34; // rax
  __int64 v35; // r8
  __int128 v36; // xmm7
  __int64 v37; // rax
  __int64 v38; // r8
  __int128 v39; // xmm0
  __int64 v40; // rax
  __int64 v41; // r8
  __int128 v42; // xmm6
  __int64 v43; // rax
  __int64 v44; // r8
  char *v45; // rcx
  signed __int64 v46; // rax
  int v47; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v49; // rcx
  unsigned __int16 WindowCompositedDpi; // ax
  struct tagMONITOR *v51; // r9
  unsigned int v52; // [rsp+58h] [rbp-B0h]
  _QWORD v54[3]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v55[16]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v56[16]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v57[16]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v58[16]; // [rsp+B0h] [rbp-58h] BYREF
  struct tagRECT v59; // [rsp+C0h] [rbp-48h] BYREF
  struct tagMONITOR *v60[2]; // [rsp+D0h] [rbp-38h]
  struct tagRECT *v61[2]; // [rsp+E0h] [rbp-28h]
  struct tagRECT *v62[2]; // [rsp+F0h] [rbp-18h]
  struct tagRECT v63; // [rsp+100h] [rbp-8h] BYREF
  __int128 v64; // [rsp+110h] [rbp+8h]
  _QWORD v65[44]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v66[88]; // [rsp+288h] [rbp+180h] BYREF
  _QWORD v67[43]; // [rsp+2E0h] [rbp+1D8h] BYREF

  v61[0] = a5;
  v62[0] = a4;
  memset(v65, 0, 0x158uLL);
  v52 = 0;
  v63 = 0LL;
  v59 = 0LL;
  memset(v66, 0, sizeof(v66));
  memset(v67, 0, 0x150uLL);
  v67[5] = v66;
  v9 = (char *)a2 + 40;
  v10 = 1;
  if ( (dword_1C0330BFC & 1) != 0 && (*(_BYTE *)(*(_QWORD *)v9 + 233LL) & 3) != 0 )
  {
    v11 = 3;
    v52 = EvaluateArrangeState(a2);
    v65[2] = a2;
    v19 = *(unsigned int *)(v18 + 88);
    v22 = (unsigned int)((*(_DWORD *)(v18 + 96) - (int)v19) >> 31);
    LODWORD(v22) = (*(_DWORD *)(v18 + 96) - (int)v19) % v20;
    v21 = (*(_DWORD *)(v18 + 96) - (int)v19) / v20;
    LOWORD(v21) = v19 + v21;
    LODWORD(v60[0]) = v21;
    if ( v52 == 3 )
    {
      DpiForSystem = GetDpiForSystem(v19, v22);
      GetDpiDependentMetric(2LL, DpiForSystem);
    }
    HIDWORD(v65[24]) = HIDWORD(v65[24]) & 0xFFFC7FFF | 0x30000;
    xxxInitializeMoveSizeData(a2, (struct _MOVESIZEDATA *)v65, 11);
  }
  else if ( (*(_BYTE *)(*(_QWORD *)v9 + 20LL) & 0x40) != 0 )
  {
    v11 = 2;
  }
  else
  {
    v11 = 0;
  }
  Prop = GetProp(a2, (unsigned __int16)WPP_MAIN_CB.DeviceQueue.Type, 1LL);
  v13 = (struct tagRECT *)Prop;
  if ( !Prop )
    goto LABEL_6;
  if ( !a5 )
    goto LABEL_6;
  *(_DWORD *)(Prop + 48) &= ~0x20u;
  OldMonitor = FindOldMonitor(a2, a3, a5);
  if ( OldMonitor == -1 )
    goto LABEL_6;
  if ( v11 != 3 )
  {
    NormalizeRect(a2, a5, v13, a3, OldMonitor, v11);
    goto LABEL_6;
  }
  v60[0] = (struct tagMONITOR *)(48LL * OldMonitor);
  v24 = ValidateHmonitor(*(_QWORD *)((char *)v60[0] + (unsigned __int64)a3 + 48));
  NewMonitor = (struct tagMONITOR *)v24;
  if ( !v24 || !(unsigned int)IsValidMonitor(v24) )
  {
    NewMonitor = FindNewMonitor((struct tagRECT *)((char *)a3 + (unsigned __int64)v60[0] + 8));
    if ( NewMonitor )
      goto LABEL_28;
    NewMonitor = *(struct tagMONITOR **)(GetDispInfo() + 96);
  }
  v26 = v60[0];
LABEL_28:
  if ( (a7 & 1) != 0 )
  {
    v27 = (struct tagMONITOR *)v65[29];
  }
  else
  {
    PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v66, (struct tagMONITORPOS *)((char *)a3 + (_QWORD)v26 + 8));
    v27 = (struct tagMONITOR *)v67;
  }
  v60[0] = v27;
  if ( MigrateRectMonitors(a2, v61[0], v27, &v63, NewMonitor, 0LL, (struct _MOVESIZEDATA *)v65, 0) )
    *v13 = v63;
  if ( (*(_BYTE *)(*(_QWORD *)v9 + 31LL) & 0x20) != 0 )
  {
    v28 = v13[3].left & 8;
    if ( v28 || (v13[3].left & 0x10) != 0 )
    {
      v29 = ((unsigned int)v13[3].left >> 4) & 1;
      if ( v28 )
      {
        if ( v29 )
        {
          v30 = 9;
          goto LABEL_43;
        }
      }
      else if ( v29 )
      {
        v30 = 11;
LABEL_43:
        v61[0] = v13 + 1;
        if ( MigrateRectMonitors(a2, v13 + 1, v60[0], &v63, NewMonitor, 0LL, (struct _MOVESIZEDATA *)v65, v30) )
          *v61[0] = v63;
        else
          v13[3].left &= 0xFFFFFFE7;
        goto LABEL_6;
      }
      v30 = 9;
      if ( v28 )
        v30 = 13;
      goto LABEL_43;
    }
  }
LABEL_6:
  v14 = FindOldMonitor(a2, a3, v62[0]);
  if ( v14 != -1 )
  {
    if ( v11 == 3 )
    {
      v31 = 48LL * v14;
      v32 = ValidateHmonitor(*(_QWORD *)((char *)a3 + v31 + 48));
      v33 = (struct tagMONITOR *)v32;
      if ( !v32 || !(unsigned int)IsValidMonitor(v32) )
      {
        v33 = FindNewMonitor((struct tagRECT *)((char *)a3 + v31 + 8));
        if ( !v33 )
          v33 = *(struct tagMONITOR **)(GetDispInfo() + 96);
      }
      PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v66, (struct tagMONITORRECTS *)((char *)a3 + v31 + 8));
      v34 = v67;
      if ( (a7 & 1) != 0 )
        v34 = (_QWORD *)v65[29];
      v65[29] = v34;
      v35 = *(_DWORD *)(*(_QWORD *)v9 + 288LL) >> 8;
      LOWORD(v35) = v35 & 0x1FF;
      v36 = *(_OWORD *)GetMonitorRectForDpi(v55, v67, v35);
      v37 = *(_QWORD *)v9;
      *(_OWORD *)v60 = v36;
      v38 = *(_DWORD *)(v37 + 288) >> 8;
      LOWORD(v38) = v38 & 0x1FF;
      v39 = *(_OWORD *)GetMonitorWorkRectForDpi(v56, v67, v38);
      v40 = *(_QWORD *)v9;
      *(_OWORD *)v62 = v39;
      v41 = *(_DWORD *)(v40 + 288) >> 8;
      LOWORD(v41) = v41 & 0x1FF;
      v42 = *(_OWORD *)GetMonitorRectForDpi(v57, v33, v41);
      v43 = *(_QWORD *)v9;
      v64 = v42;
      v44 = *(_DWORD *)(v43 + 288) >> 8;
      LOWORD(v44) = v44 & 0x1FF;
      *(_OWORD *)v61 = *(_OWORD *)GetMonitorWorkRectForDpi(v58, v33, v44);
      v45 = (char *)(v36 - v42);
      if ( (_QWORD)v36 == (_QWORD)v42 )
        v45 = (char *)v60[1] - *((_QWORD *)&v64 + 1);
      if ( v45 )
        goto LABEL_59;
      v46 = (char *)v62[0] - (char *)v61[0];
      if ( v62[0] == v61[0] )
        v46 = (char *)v62[1] - (char *)v61[1];
      if ( v46 )
LABEL_59:
        v47 = 0;
      else
        v47 = 1;
      v54[2] = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v54[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v54;
      v54[1] = v33;
      if ( v33 )
        HMLockObject(v33);
      if ( (unsigned __int8)xxxEvaluateDestRectForMonitorMigration(v52, v65, a2, v33, v47) )
        v59 = *(struct tagRECT *)&v65[5];
      else
        v10 = 0;
      ThreadUnlock1(v49);
    }
    else
    {
      if ( (unsigned int)_ShouldMaximizeWindow(a2) )
      {
        v11 = 1;
      }
      else if ( (*(_DWORD *)(*(_QWORD *)v9 + 232LL) & 0x8000) != 0 )
      {
        v11 = 2;
      }
      NormalizeRect(a2, &v59, v62[0], a3, v15, v11);
      if ( (*(_BYTE *)(*(_QWORD *)v9 + 21LL) & 8) == 0 )
        return _DeferWindowPos(a1, a2, 0LL);
      WindowCompositedDpi = GetWindowCompositedDpi(a2);
      *(_QWORD *)(*(_QWORD *)v9 + 168LL) = GetMonitorRegionForDpi(v51, WindowCompositedDpi);
      DirtyVisRgnTrackers(a2);
    }
    if ( v10 )
      return _DeferWindowPos(a1, a2, 0LL);
  }
  return a1;
}
